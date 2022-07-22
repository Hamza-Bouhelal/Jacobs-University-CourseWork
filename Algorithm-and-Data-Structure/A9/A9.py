import time
from random import *
import math


class node:
    def __init__(self, data):
        self.data = data
        self.next = None
def show_head(head):
    temp = head
    while not temp is None:
        print(temp.data, end=" ")
        temp = temp.next

class my_stack:
    def __init__(self, size=-1, show_time=False):
        self.show_time = show_time
        if self.show_time:
            beg = time.perf_counter()
        self.head = None
        self.size = size
        self.current_size = 0
        if self.show_time:
            time1 = (time.perf_counter() - beg)
            print(f"Constructor in {time1 * 100} * 10^(-3) sec.")

    def push(self, x):
        if self.show_time:
            beg = time.perf_counter()
        if self.current_size != self.size:
            if self.head is None:
                self.head = node(x)
            else:
                temp_node = node(x)
                temp_node.next = self.head
                self.head = temp_node
            self.current_size += 1
            if self.show_time:
                time1 = (time.perf_counter() - beg)
                print(f"Pushed in {time1 * 100} * 10^(-3) sec.")
        else:
            print("Stack Overflow")

    def pop(self):
        if self.head is None:
            s = "Stack Underflow"
            return s
        else:
            if self.show_time:
                beg = time.perf_counter()
            popped = self.head
            self.head = self.head.next
            popped.next = None
            self.current_size -= 1
            if self.show_time:
                time1 = (time.perf_counter() - beg)
                print(f"Popped in {time1 * 100} * 10^(-3) sec.")
            print(popped.data)
            return popped.data

    def is_empty(self):
        if self.head is None:
            return True
        return False

    def show(self):
        tempnode = self.head
        if not self.is_empty():
            if self.show_time:
                beg = time.perf_counter()
            while tempnode != None:
                print(tempnode.data, end=" ")
                tempnode = tempnode.next
            print()
            if self.show_time:
                time1 = (time.perf_counter() - beg)
                print(f"Showed data in {time1 * 100} * 10^(-3) sec.")
            return

    def top(self):
        if not self.is_empty():
            return self.head.data


class my_Queue:
    def __init__(self):
        self.stack_in = my_stack()
        self.stack_out = my_stack()

    def enqueue(self, x):
        self.stack_in.push(x)

    def dequeue(self):
        if self.stack_out.is_empty():
            while self.stack_in.current_size != 0:
                self.stack_out.push(self.stack_in.pop())
        return self.stack_out.pop()

    def is_empty(self):
        if self.stack_out.is_empty() and self.stack_in.is_empty():
            return True
        return False

    def show_stacks(self):
        self.stack_in.show()
        self.stack_out.show()


class tree:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None


def sort_list_from_tree(head, root):
    if root is None:
        return head
    head = sort_list_from_tree(head, root.left)
    temp_node = node(root.data)
    temp = head
    prev = None
    if temp is None:
        head = temp_node
    else:
        while temp != None:
            if temp.data > root.data:
                break
            else:
                prev = temp
                temp = temp.next
        if temp is None:
            prev.next = temp_node
        else:
            temp_node.next = temp
            prev.next = temp_node
    head = sort_list_from_tree(head, root.right)
    return head

def Sorted_to_tree(lst):
    n = len(lst)
    if n == 0:
        return None
    if n == 1:
        return tree(lst[0])
    root = tree(lst[math.floor(n/2)])
    root.left = Sorted_to_tree(lst[:math.floor(n/2)])
    root.right = Sorted_to_tree(lst[math.floor(n/2)+1:])
    return root

def step_sort(head):
    lst = []
    temp_node = head
    while temp_node is not None:
        lst.append(temp_node.data)
        temp_node = temp_node.next
    return sort_list_from_tree(lst)

def printTree(node, level=0):
    if node != None:
        printTree(node.left, level + 1)
        print(' ' * 6 * level + '->', node.data)
        printTree(node.right, level + 1)

lst = [i for i in range(20)]
root = Sorted_to_tree(lst)
printTree(root)


