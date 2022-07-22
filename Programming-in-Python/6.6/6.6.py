def histogram(my_list):
    for i in range(len(my_list)):
        for j in range(0, my_list[i]):
            print("*", end="")
        print(end="\n")


n = int(input("enter the number of elements in the list: "))
mylist = []
for i in range(0, n):
    ele = int(input())
    mylist.append(ele)
histogram(mylist)
