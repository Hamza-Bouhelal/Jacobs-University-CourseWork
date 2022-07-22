from random import randrange
import math

class number_maze:
    def __init__(self, n):
        self.lst = [[randrange(1, n) for _ in range(n)] for _ in range(n)]
        self.n = n
        self.current_position = [0, 0]
        self.count = 0


    def __str__(self):
        stri = ""
        for i in range(len(self.lst)):
            if i == 0:
                stri += "\t\t->"
            else:
                stri += "\t\t  "
            if i != self.current_position[0]:
                stri += " "
            if i == self.current_position[0] and i!=0:
                stri += " "
            for j in range(len(self.lst[i])):
                if i == len(self.lst)-1 and j == len(self.lst[i])-1:
                    if i == self.current_position[0] and j == self.current_position[1]:
                        stri += "("+str(self.lst[i][j])+")"+"->"
                    else:
                        stri += str(self.lst[i][j]) + " ->"
                else:
                    if i == self.current_position[0] and j == self.current_position[1]:
                        stri += "("+str(self.lst[i][j])+")"
                    else:
                        if i == self.current_position[0] and j == self.current_position[1]-1:
                            stri += str(self.lst[i][j])
                        else:
                            stri += str(self.lst[i][j]) + " "
            stri += "\n"
        return stri


    def makemove(self, cmd, show=True):
        if cmd == "3":
            if self.current_position[1] - self.lst[self.current_position[0]][self.current_position[1]] >= 0:
                self.current_position[1] -= self.lst[self.current_position[0]][self.current_position[1]]
                self.count += 1
                return True
            elif show:
                print("You cannot go left")
        elif cmd == "1":
            if self.current_position[1] + self.lst[self.current_position[0]][self.current_position[1]] < self.n:
                self.current_position[1] += self.lst[self.current_position[0]][self.current_position[1]]
                self.count += 1
                return True
            elif show:
                print("You cannot got right")
        elif cmd == "0":
            if self.current_position[0] - self.lst[self.current_position[0]][self.current_position[1]] >= 0:
                self.current_position[0] -= self.lst[self.current_position[0]][self.current_position[1]]
                self.count += 1
                return True
            elif show:
                print("You cannot go up")
        elif cmd == "2":
            if self.current_position[0] + self.lst[self.current_position[0]][self.current_position[1]] < self.n:
                self.current_position[0] += self.lst[self.current_position[0]][self.current_position[1]]
                self.count += 1
                return True
            elif show:
                print("You cannot go down")
        elif show:
            print("wrong input")
        return False

    def getResult(self):
        if self.current_position[0] == self.n - 1 and self.current_position[1] == self.n - 1:
            return True
        return False

    def solve(self):
        temp = [self.current_position]
        i = 0
        while len(temp) != 0 and i < self.n**3:
            pos = temp[0]
            self.current_position = pos
            for i in range(4):
                if self.makemove(str(i), False):
                    if self.current_position == [self.n-1, self.n-1]:
                        self.current_position, self.count = [0, 0], 0
                        return 1
                    temp.append(self.current_position)
                    self.current_position = pos
            temp.pop(0)
        self.current_position, self.count = [0, 0], 0
        if self.count == math.inf:
            return -1
        return 1



    def playgame(self):
        print("Enter: \"3\" for left - \"1\" for right - \"0\" for up - \"2\" for down- \"quit\" to quit")
        print()
        print(self.__str__())
        cmd = input()
        while cmd != "quit":
            c = self.makemove(cmd)
            if c:
                print(self.__str__())
            if self.getResult():
                break
            cmd = input()

        if cmd != "quit":
            print(f"You arrived in {self.count} steps.")

nm = number_maze(14)
nm.playgame()
