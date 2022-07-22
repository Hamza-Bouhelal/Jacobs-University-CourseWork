import random


def main():
    random.seed()
    minval = 1
    maxval = 50
    r = random.randint(minval, maxval)
    n = 0
    while True:
        guess = int(input("Enter your guess : "))
        n += 1
        if r == guess:
            print("You got it!(number of tries:", n, ")")
            break
        elif guess < r:
            print("Your guess is too small !(number of tries:", n, ")")
        else:
            print(" Your guess is too high !(number of tries:", n, ")")
    f = open("high_score.txt", "r")
    i = 0
    l0 = f.readline()
    l1 = f.readline()
    l2 = f.readline()
    s0 = l0.split()
    s1 = l1.split()
    s2 = l2.split()
    if (n < int(s2[1])) and (n > int(s1[1])):  # rank 3
        name = input("You got a High score! Enter your name: ")
        l2 = name + " " + str(n)
    elif ((n < int(s1[1])) and (n > int(s0[1]))) or n == int(s0[1]):  # rank 2
        l2 = l1
        name = input("You got a High score! Enter your name: ")
        l1 = name + " " + str(n)
    elif n < int(s0[1]):  # rank 1
        l2 = l1
        l1 = l0
        name = input("You got the Highest score! Enter your name: ")
        l0 = name + " " + str(n)
    else:
        print("You are not in the podium :(")
    f.close()
    f = open("high_score.txt", "w")
    l0 = l0.replace("\n", "")
    l1 = l1.replace("\n", "")
    l2 = l2.replace("\n", "")
    f.write(l0 + "\n" + l1 + "\n" + l2)
    f.close()
    f = open("high_score.txt", "r")
    print("High scores:")
    while True:
        line = f.readline()
        if line == "":
            break
        print(line, end="")
    print("\nBye")


main()
