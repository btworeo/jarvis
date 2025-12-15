#!/usr/bin/env python3
# xamarth


num = int(input("\nEnter a number: "))
if num == 1:
    print(num, "is not a prime number.\n")
elif num > 1:
    for i in range(2, num):
        if (num % i) == 0:
            print(num, "is not a prime number.\n")
            break
    else:
        print(num, "is a prime number.\n")
else:
    print(num, "is not a prime number.\n")
# xamarth
