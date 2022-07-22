dict = {"merry": 0, "christmas": 1,
            "and": 2, "happy": 3,
            "new": 4, "year": 5}
string = input("enter a string: ")
i = 0
for (key, inte) in dict.items():
    if string == key:
        print("the key you entered is in the dictionary:", string, dict[string])
        i = 1
        break
if i == 0:
    print("the key you entered isn't in the dictionary")
