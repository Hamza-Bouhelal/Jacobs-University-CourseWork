import math

def build_matric(n):
    lst = [[i, []] for i in range(n)]
    for ele in lst:
        for _ in range(n-1):
            ele[1].append(math.inf)
    print("enter \"city_1 city_2 weight\" or \"quit\" to stop")
    c = input()
    while c != "quit":
        c = c.split(" ")
        if int(c[0])<n and int(c[1])<n:
            if int(c[0]) < int(c[1]):
                lst[int(c[0])][1][int(c[1])-1] = int(c[2])
            else:
                lst[int(c[0])][1][int(c[1])] = int(c[2])
        c = input()
    print(lst)
    return lst


