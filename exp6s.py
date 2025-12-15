#!/usr/bin/env python3
# xamarth

n = int(input("\nEnter a number of rows: "))
print()
for i in range(1, n + 1):
    for j in range(1, i + 1):
        print("*", end=" ")
    print()
print()

# xamarth

n = int(input("\nEnter a number of rows: "))
print()
for i in range(1, n + 1):
    for j in range(1, n + 2 - i):
        print("*", end=" ")
    print()
print()

# xamarth
