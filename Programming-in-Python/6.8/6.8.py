def overlapping(list1, list2):
    for ele1 in list1:
        for ele2 in list2:
            if ele1 == ele2:
                return True
    return False


print("First list: ")
my_list = []
while True:
    ele = int(input())
    if ele < 0:
        break
    my_list.append(ele)
print("second list: ")
my_list1 = []
while True:
    ele = int(input())
    if ele < 0:
        break
    my_list1.append(ele)
if overlapping(my_list, my_list1):
    print("The two lists are overlapping.")
else:
    print("The two lists are not overlapping.")
