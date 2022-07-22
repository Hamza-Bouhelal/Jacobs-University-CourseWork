character = input("enter a character: ")
if (ord(character)>64) and (ord(character)<91):
    print("the character is an uppercase character")
elif (ord(character)>96) and (ord(character)<123):
    print("the character is a lowercase character")
else:
    print("the character isn't a letter")