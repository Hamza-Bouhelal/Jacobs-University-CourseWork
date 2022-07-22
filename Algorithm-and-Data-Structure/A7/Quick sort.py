import math
from random import randrange
import time
from matplotlib import pyplot as plt

def Lomuto_Partition(A, low, high):
    pivot = A[low]
    leftwall = low
    for i in range(low+1, high):
        if A[i] < pivot:
            leftwall += 1
            A[i], A[leftwall] = A[leftwall], A[i]
    A[low], A[leftwall] = A[leftwall], pivot
    return leftwall


def Hoare_Partition(A, low, high):
    pivot = A[low]
    i = low-1
    j = high+1
    while 1:
        i += 1
        while A[i] < pivot:
            i += 1
        j -= 1
        while A[j] > pivot:
            j -= 1
        if i>= j:
            return j
        A[i], A[j] = A[j], A[i]


def Median_of_three_Partition(A, low, high):
    med = math.floor((high -1 -low)/2)
    med = med + low
    left = low + 1
    if (A[med]-A[high-1])*(A[low]-A[med]) >= 0:
        A[low], A[med] = A[med], A[low]
    elif (A[high-1]-A[med])*(A[low]-A[high-1]) >= 0:
        A[low], A[high-1] = A[high-1], A[low]
    pivot = A[low]
    for right in range(low, high):
        if pivot > A[right]:
            A[left], A[right] = A[right], A[left]
            left += 1
    A[low], A[left-1] = A[left-1], A[low]
    return left-1



def Quicksort(A, low, high, Partition):
    if low < high:
        pivot = Partition(A, low, high)
        Quicksort(A, low, pivot, Partition)
        Quicksort(A, pivot+1, high, Partition)

def test_partition(length, partition):
    lst = Average_case(length)
    print(lst)
    Quicksort(lst, 0, len(lst)-1, partition)
    print(lst)


def Partition(A, low, high):
    A[low+1], A[high] = A[high], A[low+1]
    if A[low] > A[high]:
        A[low], A[high] = A[high], A[low]
    j = k = low + 1
    g = high - 1
    p, q = A[low], A[high]
    while k <= g:
        if A[k]<p:
            A[k], A[j] = A[j], A[k]
            j +=1
        elif A[k] >= q:
            while A[g] > p and k < g:
                g -= 1
            A[k], A[g] = A[g], A[k]
            g -= 1
            if A[k] < p:
                A[k], A[j] = A[j], A[k]
                j += 1
        k += 1
    j -= 1
    g += 1
    A[low], A[j] = A[j], A[low]
    A[high], A[g] = A[g], A[high]
    return j, g

def Quicksort_2_pivots(A, low, high):
    if low < high:
        left_pivot, right_pivot = Partition(A, low, high)
        Quicksort_2_pivots(A, low, left_pivot-1)
        Quicksort_2_pivots(A, left_pivot, right_pivot-1)
        Quicksort_2_pivots(A, right_pivot, high)

def test_Quick_sort_2_pivots():
    lst = Average_case(10)
    print(lst)
    Quicksort_2_pivots(lst, 0, len(lst)-1)
    print(lst)


def rand_pivots_Partition(A, low, high):
    r1 = randrange(low, high-1, 1)
    r2 = randrange(low, high - 1, 1)
    A[r1], A[high] = A[high], A[r1]
    A[r2], A[low] = A[low], A[r2]
    if A[low] > A[high]:
        A[low], A[high] = A[high], A[low]
    j = k = low + 1
    g = high - 1
    p, q = A[low], A[high]
    while k <= g:
        if A[k]<p:
            A[k], A[j] = A[j], A[k]
            j +=1
        elif A[k] >= q:
            while A[g] > p and k < g:
                g -= 1
            A[k], A[g] = A[g], A[k]
            g -= 1
            if A[k] < p:
                A[k], A[j] = A[j], A[k]
                j += 1
        k += 1
    j -= 1
    g += 1
    A[low], A[j] = A[j], A[low]
    A[high], A[g] = A[g], A[high]
    return j, g

def Quicksort_rand_2_pivots(A, low, high):
    if low < high:
        left_pivot, right_pivot = rand_pivots_Partition(A, low, high)
        Quicksort_2_pivots(A, low, left_pivot-1)
        Quicksort_2_pivots(A, left_pivot, right_pivot-1)
        Quicksort_2_pivots(A, right_pivot, high)

def test_Quick_sort_rand_2_pivots():
    lst = Average_case(10)
    print(lst)
    Quicksort_rand_2_pivots(lst, 0, len(lst)-1)
    print(lst)

def case1(n):
    lst = []
    for _ in range(n):
        lst.append(randrange(50))
    return sorted(lst)

def Average_case(n):
    lst = []
    for _ in range(n):
        lst.append(randrange(50))
    return lst

def case2(n):
    lst = []
    for _ in range(n):
        lst.append(randrange(50))
    return sorted(lst, reverse=True)




def Average_time_per_partition():
    lst, lst1, lst2 = [], [], []
    times0, times1, times2 = 0, 0, 0
    #for _ in range(100):
    #Running it for 100000 time takes too long
    for _ in range(1000):
        lst, lst1, lst2 = Average_case(1000), Average_case(1000), Average_case(1000)
        beg = time.perf_counter()
        Quicksort(lst, 0, len(lst) - 1, Lomuto_Partition)
        times0 += (time.perf_counter() - beg)
        beg = time.perf_counter()
        Quicksort(lst1, 0, len(lst1) - 1, Hoare_Partition)
        times1 += (time.perf_counter() - beg)
        beg = time.perf_counter()
        Quicksort(lst2, 0, len(lst2) - 1, Median_of_three_Partition)
        times2 += (time.perf_counter() - beg)
    print("Lomuto's partition average time: "+"{:2f}".format(times0/1000)+" second")
    print("Hoare's partition average time: "+"{:2f}".format(times1/1000)+" second")
    print("Median of three's partition average time: "+"{:2f}".format(times2/1000)+" second")



def cases():
    ns = [0, 1, 2, 3, 4, 5, 6, 8, 10, 13, 16, 20, 25, 30, 38, 48, 60, 75, 80, 100]
    lst = []
    times0, times1 = 0, 0
    for i in ns:
        lst = case1(25)
        beg = time.perf_counter()
        Quicksort_2_pivots(lst, 0, len(lst)-1)
        times0 += (time.perf_counter() - beg)
    print(f"best case: {times0/(len(ns)-1)}")
    for i in ns:
        lst = case2(25)
        beg = time.perf_counter()
        Quicksort_2_pivots(lst, 0, len(lst)-1)
        times0 += (time.perf_counter() - beg)
    print(f" worst_case: {times0/(len(ns)-1)}")
    for i in ns:
        lst = Average_case(25)
        beg = time.perf_counter()
        Quicksort_2_pivots(lst, 0, len(lst)-1)
        times0 += (time.perf_counter() - beg)
    print(f"Average_case : {times0/(len(ns)-1)}")


def plot_cases():
    plt.style.use('seaborn')
    ns = [0, 1, 2, 3, 4, 5, 6, 8, 10, 13, 16, 20, 25, 30, 38]
    plt.figure()
    lst, x, y = [], [], []
    for i in ns:
        lst = Average_case(i)
        beg = time.perf_counter()
        Quicksort_2_pivots(lst, 0, len(lst)-1)
        time1 = (time.perf_counter() - beg)
        x.append(i)
        y.append(time1)
    plt.plot(x, y, linestyle='solid', label="Randomly generated list")
    lst, x, y = [], [], []
    for i in ns:
        lst = case1(i)
        beg = time.perf_counter()
        Quicksort_2_pivots(lst, 0, len(lst)-1)
        time1 = (time.perf_counter() - beg)
        x.append(i)
        y.append(time1)
    plt.plot(x, y, linestyle='solid', label="list Sorted")
    lst, x, y = [], [], []
    for i in ns:
        lst = case2(i)
        beg = time.perf_counter()
        Quicksort_2_pivots(lst, 0, len(lst)-1)
        time1 = (time.perf_counter() - beg)
        x.append(i)
        y.append(time1)
    plt.plot(x, y, linestyle='solid', label="List sorted decreasingly")
    plt.title("Quick sort with double pivot running time for different value of n")
    plt.xlabel('Length of the List')
    plt.legend()
    plt.ylabel('Second')
    plt.show()

print("Lomuto Partition:")
test_partition(50, Lomuto_Partition)
print("------------------------------------------------------------------------------------------", end="\n\n")
print("Hoare Partition:")
test_partition(50, Hoare_Partition)
print("------------------------------------------------------------------------------------------", end="\n\n")
print("Median of three Partition:")
test_partition(50, Median_of_three_Partition)
print("------------------------------------------------------------------------------------------", end="\n\n")
Average_time_per_partition()
print("------------------------------------------------------------------------------------------", end="\n\n")
print("Quick sort with the first two elements as pivots:")
test_Quick_sort_2_pivots()
print("------------------------------------------------------------------------------------------", end="\n\n")
plot_cases()
print("------------------------------------------------------------------------------------------", end="\n\n")
print("Quick sort with two random elements as pivots:")
test_Quick_sort_rand_2_pivots()
