ch = input("enter the character: ")
n = int(input("enter n: "))
i = 0
while i<n+1:
    print(chr(ord(ch)+i), " ", end = "")
    i+=1

