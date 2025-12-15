#!/usr/bin/env python3
# xamarth

Days = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"}
print(Days, type(Days))
print("Looping through the set elements...")
for d in Days:
    print(d)

num = {1, 2, 3, 4, 5, 6}
print(
    "Length:",
    len(num),
    "Max:",
    max(num),
    "Min:",
    min(num),
    "Sum:",
    sum(num),
    "Sorted(desc):",
    sorted(num, reverse=True),
)

num.update([7, 8, 9, 10, 11])
num.discard(11)
print("Modified set:", num)

Days1 = {"Mon", "Tue", "Wed", "Sat"}
Days2 = {"Thr", "Fri", "Sat", "Sun", "Mon"}
print("Union:", Days1 | Days2)
print("Intersection:", Days1 & Days2)
print("Difference:", Days1 - Days2)
# xamarth
