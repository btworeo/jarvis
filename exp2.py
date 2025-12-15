#!/usr/bin/env python3
# xamarth


def power(base, exp):
    if exp == 1:
        return base
    if exp != 1:
        res = base * power(base, exp - 1)
        return res


base = int(input("\nEnter base number: "))
exponent = int(input("Enter exponent (integer): "))
result = power(base, exponent)
print(f"Result : {result}\n")
# xamarth
