# xamarth

dict1 = {"StdNo": "532", "StuName": "Naveen", "StuAge": 21, "StuCity": "Hyderabad"}

print("\nDictionary is:", dict1)

# Accessing specific values
print("Student Name is:", dict1["StuName"])
print("Student City is:", dict1["StuCity"])

# Display all keys
print("\nAll Keys in Dictionary")
for x in dict1:
    print(x)

# Display all values
print("\nAll Values in Dictionary")
for x in dict1:
    print(dict1[x])

# Adding items
dict1["Phno"] = 85457854
print("\nUpdated Dictionary is:", dict1)

# Change values
dict1["StuName"] = "Madhu"
print("Updated Dictionary is:", dict1)

# Removing items
dict1.pop("StuAge")
print("Updated Dictionary is:", dict1)

# Length of dictionary
print("\nLength of Dictionary is:", len(dict1))

# Copy a dictionary
dict2 = dict1.copy()
print("\nNew Dictionary is:", dict2)

# Empty the dictionary
dict1.clear()
print("\nUpdated Dictionary is:", dict1, "\n")
# xamarth
