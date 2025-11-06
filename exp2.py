def power(base, exp):
    if exp == 1:
        return base
    if exp != 1:
        res = base * power(base, exp - 1)
        return res


base = int(input("Enter the base number: "))
exponent = int(input("Enter the exponent (integer): "))
result = power(base, exponent)
print(f"{base} raised to the power of {exponent} is {result}.")
