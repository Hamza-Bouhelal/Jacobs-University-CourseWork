from random import randrange
import time

def bubble_sort(lst):
    n = len(lst)
    for j in range(n-1):
        for i in range(n-j-1):
            if lst[i] > lst[i+1]:
                lst[i], lst[i+1] = lst[i+1], lst[i]

def best_case(n):
    #   O(n)
    lst = []
    for _ in range(n):
        lst.append(randrange(50))
    return sorted(lst)

def Average_case(n):
    #   O(n^2)
    lst = []
    for _ in range(n):
        lst.append(randrange(50))
    return lst

def worst_case(n):
    #   O(n^2)
    lst = []
    for _ in range(n):
        lst.append(randrange(50))
    return sorted(lst, reverse=True)


ns = [0, 1, 2, 3, 4, 5, 6, 8, 10, 13, 16, 20, 25, 30, 38, 48, 60, 75, 80, 100]
worst, average, best, lst = [], [], [], []
print("\nBest Case:\t\t\t\t\t\t\t\tAverage Case:\t\t\t\t\t\t\tWorst Case:")
for i in ns:
    lst = best_case(i)
    beg = time.perf_counter()
    bubble_sort(lst)
    final_time = time.perf_counter() - beg
    if i < 10:
        print("n = "+str(i)+" in "+"{:2f}".format(final_time*1000)+" *10^-3 second\t\t\t", end="")
    else:
        print("n = "+str(i)+" in "+"{:2f}".format(final_time*1000)+" *10^-3 second\t\t", end="")
    lst = Average_case(i)
    beg = time.perf_counter()
    bubble_sort(lst)
    final_time = time.perf_counter() - beg
    if i <10:
        print("n = "+str(i)+" in "+"{:2f}".format(final_time*1000)+" *10^-3 second\t\t\t", end="")
    else:
        print("n = "+str(i)+" in "+"{:2f}".format(final_time*1000)+" *10^-3 second\t\t", end="")
    lst = worst_case(i)
    beg = time.perf_counter()
    bubble_sort(lst)
    final_time = time.perf_counter() - beg
    print("n = "+str(i)+" in "+"{:2f}".format(final_time*1000)+" *10^-3 second")







