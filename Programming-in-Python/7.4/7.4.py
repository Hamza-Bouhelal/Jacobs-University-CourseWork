def remov(lst):
    y = 0
    for i in range(7):
        if lst[6-i] == ():
            lst.pop(6-i)

lst = []
for i in range(7):
    tup = ()
    ele = input()
    elems = ele.split()
    for j in range(len(elems)):
        tup = tup + (elems[j], )
    lst.append(tup)
print("list before removal:", lst)
remov(lst)
print("list after removal:", lst)