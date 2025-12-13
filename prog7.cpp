// xamarth
#include <bits/stdc++.h>
using namespace std;
using State = int;
using Symbol = int;
using StateSet = set<State>;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;

  if (!(cin >> n >> m))
  {
    return 0;
  }

  int start;
  cin >> start;
  int k;
  cin >> k;
  vector<bool> isFinal(n, false);

  for (int i = 0; i < k; ++i)
  {
    int f;
    cin >> f;

    if (f >= 0 && f < n)
    {
      isFinal[f] = true;
    }
  }

  int t;
  cin >> t;
  vector<vector<vector<State>>> transitions(n, vector<vector<State>>(m));
  vector<vector<State>> eps(n);

  for (int i = 0; i < t; ++i)
  {
    int u, a, v;
    cin >> u >> a >> v;

    if (a == -1)
    {
      if (u >= 0 && u < n)
      {
        eps[u].push_back(v);
      }
    }
    else
    {
      if (u >= 0 && u < n && a >= 0 && a < m)
      {
        transitions[u][a].push_back(v);
      }
    }
  }

  auto epsilon_closure = [&](const StateSet &inputSet)
  {
    StateSet closure = inputSet;
    vector<State> work;
    work.reserve(closure.size());

    for (State s : closure)
    {
      work.push_back(s);
    }

    while (!work.empty())
    {
      State v = work.back();
      work.pop_back();

      for (State u : eps[v])
      {
        if (closure.insert(u).second)
        {
          work.push_back(u);
        }
      }
    }
    return closure;
  };

  auto move = [&](const StateSet &S, Symbol a)
  {
    StateSet dest;

    for (State s : S)
    {
      for (State v : transitions[s][a])
      {
        dest.insert(v);
      }
    }
    return dest;
  };

  map<StateSet, int> dfaStateId;
  vector<StateSet> dfaStates;
  vector<vector<int>> dfaTrans;
  vector<bool> dfaIsFinal;
  StateSet startSet;
  startSet.insert(start);
  StateSet startClosure = epsilon_closure(startSet);
  dfaStateId[startClosure] = 0;
  dfaStates.push_back(startClosure);
  dfaTrans.push_back(vector<int>(m, -1));
  dfaIsFinal.push_back(false);

  for (State s : startClosure)
  {
    if (isFinal[s])
    {
      dfaIsFinal[0] = true;
      break;
    }
  }
  queue<int> q;
  q.push(0);

  while (!q.empty())
  {
    int d = q.front();
    q.pop();
    StateSet currentSet = dfaStates[d];

    for (int a = 0; a < m; ++a)
    {
      StateSet moved = move(currentSet, a);

      if (moved.empty())
      {
        continue;
      }
      StateSet target = epsilon_closure(moved);
      auto it = dfaStateId.find(target);
      int tid;

      if (it == dfaStateId.end())
      {
        tid = (int)dfaStates.size();
        dfaStateId[target] = tid;
        dfaStates.push_back(target);
        dfaTrans.push_back(vector<int>(m, -1));
        bool fin = false;

        for (State s : target)
        {
          if (isFinal[s])
          {
            fin = true;
            break;
          }
        }
        dfaIsFinal.push_back(fin);
        q.push(tid);
      }
      else
      {
        tid = it->second;
      }
      dfaTrans[d][a] = tid;
    }
  }

  cout << "DFA states (id : set of NFA states):\n";
  for (size_t i = 0; i < dfaStates.size(); ++i)
  {
    cout << i << " : {";
    bool first = true;

    for (State s : dfaStates[i])
    {
      if (!first)
      {
        cout << ", ";
      }
      cout << s;
      first = false;
    }
    cout << "}";

    if (dfaIsFinal[i])
    {
      cout << "  [final]";
    }
    cout << "\n";
  }

  cout << "DFA start state: 0\n";
  cout << "DFA final states: ";
  bool any = false;

  for (size_t i = 0; i < dfaIsFinal.size(); ++i)
  {
    if (dfaIsFinal[i])
    {
      if (any)
      {
        cout << " ";
      }
      cout << i;
      any = true;
    }
  }
  if (!any)
  {
    cout << "none";
  }
  cout << "\n";
  cout << "DFA transition table (rows = state id, columns = symbol 0.." << (m - 1) << "):\n";

  for (size_t i = 0; i < dfaTrans.size(); ++i)
  {
    cout << i << " :";

    for (int a = 0; a < m; ++a)
    {
      cout << " " << dfaTrans[i][a];
    }
    cout << "\n";
  }
  return 0;
}

// xamarth
// example input:
// 3 2
// 0
// 1
// 1 2
// 3
// 0 0 1
// 0 1 2
// 1 0 2
// 1 1 2
// 2 0 1
// -1 0 2
// 2 1 0

// example output:
// DFA states (id : set of NFA states):
// 0 : {0, 1}  [final]
// 1 : {2}
// DFA start state: 0
// DFA final states: 0
// DFA transition table (rows = state id, columns = symbol 0..1):
// 0 : 1 1
// 1 : -1 -1

// xamarth
