#!/usr/bin/env python3
# xamarth


# Creating a set
Days = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"}
print(Days)
print(type(Days))

print("Looping through the set elements...")
for i in Days:
    print(i)

# Another set
num = {1, 2, 3, 4, 5, 6}

print("Length of set:", len(num))
print("Max of set:", max(num))
print("Min of set:", min(num))
print("Sum of set items:", sum(num))
print("Sorted set (descending):", sorted(num, reverse=True))

# Adding elements
num.add(7)
num.add(8)
print("\nPrinting the modified set...")
print(num)

num.update([9, 10, 11])
print("\nPrinting the modified set...")
print(num)

# Removing element
num.discard(11)
print("\nPrinting the modified set...")
print(num)

# Set operations
Days1 = {"Mon", "Tue", "Wed", "Sat"}
Days2 = {"Thr", "Fri", "Sat", "Sun", "Mon"}

print("Union:", Days1.union(Days2))
print("Intersection:", Days1.intersection(Days2))
print("Difference:", Days1.difference(Days2))
# xamarth
