#include <bits/stdc++.h>
using namespace std;

using State = int;
using Symbol = int;
using StateSet = set<State>;

int main()
{
  // ios::sync_with_stdio(false);
  // cin.tie(nullptr);

  int n, m;
  cout << "\nNFA to DFA Conversion\n\n";
  cout << "Enter number of NFA states: ";
  cin >> n;
  cout << "Enter number of input symbols: ";
  cin >> m;

  int start;
  cout << "Enter start state: ";
  cin >> start;

  int k;
  cout << "Enter number of final states: ";
  cin >> k;

  vector<bool> isFinal(n, false);
  cout << "Enter final states: ";
  for (int i = 0; i < k; ++i)
  {
    int f;
    cin >> f;
    if (f >= 0 && f < n)
      isFinal[f] = true;
  }

  int t;
  cout << "Enter number of transitions: ";
  cin >> t;

  cout << "\nEnter transitions in format:\n";
  cout << "  from  symbol  to\n";
  cout << "  (use symbol = -1 for epsilon)\n\n";

  vector<vector<vector<State>>> transitions(n, vector<vector<State>>(m));
  vector<vector<State>> eps(n);

  for (int i = 0; i < t; ++i)
  {
    int u, a, v;
    cin >> u >> a >> v;

    if (a == -1)
      eps[u].push_back(v);
    else
      transitions[u][a].push_back(v);
  }

  /*=======NFA TABLE=======*/

  cout << "\nNFA Transition Table\n";
  cout << "State\t";
  for (int a = 0; a < m; ++a)
    cout << "a" << a << "\t";
  cout << "ε\n";

  for (int i = 0; i < n; ++i)
  {
    cout << i;
    if (i == start)
      cout << "(S)";
    if (isFinal[i])
      cout << "(F)";
    cout << "\t";

    for (int a = 0; a < m; ++a)
    {
      if (transitions[i][a].empty())
        cout << "-\t";
      else
      {
        cout << "{";
        for (size_t j = 0; j < transitions[i][a].size(); ++j)
        {
          if (j)
            cout << ",";
          cout << transitions[i][a][j];
        }
        cout << "}\t";
      }
    }

    if (eps[i].empty())
      cout << "-";
    else
    {
      cout << "{";
      for (size_t j = 0; j < eps[i].size(); ++j)
      {
        if (j)
          cout << ",";
        cout << eps[i][j];
      }
      cout << "}";
    }
    cout << "\n";
  }
  /*=======NFA → DFA=======*/

  auto epsilon_closure = [&](const StateSet &input)
  {
    StateSet closure = input;
    stack<State> st;
    for (State s : input)
      st.push(s);

    while (!st.empty())
    {
      State v = st.top();
      st.pop();
      for (State u : eps[v])
        if (closure.insert(u).second)
          st.push(u);
    }
    return closure;
  };

  auto move = [&](const StateSet &S, Symbol a)
  {
    StateSet result;
    for (State s : S)
      for (State v : transitions[s][a])
        result.insert(v);
    return result;
  };

  map<StateSet, int> dfaId;
  vector<StateSet> dfaStates;
  vector<vector<int>> dfaTrans;
  vector<bool> dfaFinal;

  StateSet startSet = epsilon_closure({start});
  dfaId[startSet] = 0;
  dfaStates.push_back(startSet);
  dfaTrans.push_back(vector<int>(m, -1));

  bool startFinal = false;
  for (State s : startSet)
    if (isFinal[s])
      startFinal = true;
  dfaFinal.push_back(startFinal);

  queue<int> q;
  q.push(0);

  while (!q.empty())
  {
    int cur = q.front();
    q.pop();
    for (int a = 0; a < m; ++a)
    {
      StateSet moved = move(dfaStates[cur], a);
      if (moved.empty())
        continue;

      StateSet target = epsilon_closure(moved);

      if (!dfaId.count(target))
      {
        int id = dfaStates.size();
        dfaId[target] = id;
        dfaStates.push_back(target);
        dfaTrans.push_back(vector<int>(m, -1));

        bool fin = false;
        for (State s : target)
          if (isFinal[s])
            fin = true;
        dfaFinal.push_back(fin);

        q.push(id);
      }
      dfaTrans[cur][a] = dfaId[target];
    }
  }
  /*=======DFA TABLE=======*/

  cout << "\nDFA States\n";
  for (size_t i = 0; i < dfaStates.size(); ++i)
  {
    cout << "D" << i << " = {";
    bool first = true;
    for (State s : dfaStates[i])
    {
      if (!first)
        cout << ",";
      cout << s;
      first = false;
    }
    cout << "}";
    if (dfaFinal[i])
      cout << " (F)";
    cout << "\n";
  }

  cout << "\nDFA Transition Table\n";
  cout << "State\t";
  for (int a = 0; a < m; ++a)
    cout << "a" << a << "\t";
  cout << "\n";

  for (size_t i = 0; i < dfaTrans.size(); ++i)
  {
    cout << "D" << i;
    if (i == 0)
      cout << "(S)";
    if (dfaFinal[i])
      cout << "(F)";
    cout << "\t";

    for (int a = 0; a < m; ++a)
    {
      if (dfaTrans[i][a] == -1)
        cout << "-\t";
      else
        cout << "D" << dfaTrans[i][a] << "\t";
    }
    cout << "\n";
  }

  cout << "\nConversion Complete...\n";

  cout << endl;
  return 0;
}
// xamarth