def print_rectangle(n, m, c):
    for i in range(n):
        for j in range(m):
            if i == 0 or i == n - 1 or j == 0 or j == m - 1:
                print(c, end="")
            else:
                print(" ", end="")
        print(end="\n")


def main():
    n = int(input())
    m = int(input())
    c = input("enter the character: ")
    print_rectangle(n, m, c)


main()
