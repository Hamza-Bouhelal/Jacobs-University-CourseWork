def print_rectangle(n, m, c):
    for i in range(n):
        for j in range(m):
             print(c, end="")
        print(end="\n")


def main():
    n = int(input())
    m = int(input())
    c = input("enter the character: ")
    print_rectangle(n, m, c)


main()
