def enqueue(que, ele):
    que.append(ele)

def dequeue(que):
    que.pop(0)

def printq(que):
    print(que)

que = []
enqueue(que, "amine")
enqueue(que, "omar")
enqueue(que, "chhed")
printq(que)
dequeue(que)
printq(que)
dequeue(que)
printq(que)