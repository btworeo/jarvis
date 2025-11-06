# def computeGCD(a, b):
#     while b != 0:
#         a, b = b, a % b
#     return a


def computeGCD(a, b):
    if a > b:
        smaller = b
    else:
        smaller = a
    for i in range(1, smaller + 1):
        if (a % i == 0) and (b % i == 0):
            gcd = i
    return gcd


num1 = int(input("Enter the first number: "))
num2 = int(input("Enter the second number: "))
gcd = computeGCD(num1, num2)
print(f"The GCD of {num1} and {num2} is {gcd}.")
