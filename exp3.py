def myMax(list1):
    max = list1[0]
    for x in list1:
        if x > max:
            max = x
    return max


list1 = []

n = int(input("Enter number of elements : "))
for i in range(0, n):
    ele = int(input("Enter element: "))
    list1.append(ele)

print("Maximum element in the list is:", myMax(list1))
