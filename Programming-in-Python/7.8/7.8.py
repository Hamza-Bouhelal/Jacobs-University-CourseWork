stack = []
i = 0
while 1:
    char = input()
    if char == 's':
        n = int(input())
        print("Pushing", n)
        stack.append(n)
        i += 1
    elif char == 'p':
        if i != 0:
            n = stack.pop()
            print("Popping element", n)
            i -= 1
        else:
            print("Stack underflow")
    elif char == 'e':
        print("Emptying stack")
        for j in range(i):
            print("popping element", stack.pop())
        i = 0
    elif char == 'q':
        print("Good Bye!")
        break
    else:
        print("You entered a wrong key!")
