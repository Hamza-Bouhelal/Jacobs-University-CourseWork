character = input("enter the character: ")
while (ord(character) < 64) or (ord(character) > 91):
    character = input("You entered a wrong character, try again: ")
n = int(input("enter n: "))
while n < 0 or n > 32:
    n = int(input("enter valid input: "))
i = 0
while i<n+1:
    print(chr(ord(character)+i), " ", end="")
    i += 1
