mylist = []
i = 1
mini = maxi = 0
while True:
    ele = int(input())
    if i == 1 and ele !=0:
        mini = maxi = ele
    i += 1
    if ele == 0:
        break
    mylist.append(ele)

for i in mylist:
    if i < mini:
        mini = i
for i in mylist:
    if i > maxi:
        maxi = i
print("the smallest element in the list:", mini)
print("the biggest element in the list:", maxi)
