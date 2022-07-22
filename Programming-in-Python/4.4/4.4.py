s = 1
j = 0
i = 0
while s > 0:
    s = int(input())
    if s > 0:
        j = j + s
        i += 1
print("The average is ", end="")
print('%d'%(j/i))

