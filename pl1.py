import pandas as pd

data = {
    "Name": ["Jai", "Princi", "Gaurav", "Anuj", "Ravi", "Natasha", "Riya"],
    "Age": [27, 24, 22, 32, 33, 26, 28],
    "Gender": ["Male", "Female", "Male", "Male", "Male", "Female", "Female"],
    "Marks": [85, 95, 80, 70, 60, 75, 90],
}

df = pd.DataFrame(data)
print(df)
