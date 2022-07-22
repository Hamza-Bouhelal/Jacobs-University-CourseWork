n = int(input("enter an integer greater or equal to 1: "))
i = 2
print("1 minute = 60 seconds")
while i < (n+1):
    print(i, "minutes =", 60*i, "seconds")
    i += 1
print("that's it")