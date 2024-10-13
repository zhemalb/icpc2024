from itertools import *


def change(x, y):
    a = build(x, y)
    if a[0] != 0:
        return a

    if x + 1 != y and x + 1 < 10:
        a = build(x + 1, y)
        if a[0] != 0:
            return a

    if x - 1 != y and x - 1 > 0:
        a = build(x - 1, y)
        if a[0] != 0:
            return a

    if y + 1 != x and y + 1 < 10:
        a = build(x, y + 1)
        if a[0] != 0:
            return a

    if y - 1 != x and y - 1 > 0:
        a = build(x, y - 1)
        if a[0] != 0:
            return a


def checker(arr):
    flag = 0

    if arr[0] + arr[3] + arr[6] == 15:
        flag += 1

    if arr[1] + arr[4] + arr[7] == 15:
        flag += 1

    if arr[2] + arr[5] + arr[8] == 15:
        flag += 1

    if arr[3] + arr[4] + arr[5] == 15:
        flag += 1

    if arr[6] + arr[7] + arr[8] == 15:
        flag += 1

    if arr[2] + arr[4] + arr[6] == 15:
        flag += 1

    if arr[0] + arr[4] + arr[8] == 15:
        flag += 1

    # print(flag, arr)

    if flag == 7:
        return True

    return False


def build(x, y):
    a = []

    for i in range(1, 10):
        if i != x and i != y:
            a.append(i)

    for i in permutations(a):
        #b = [list(i)[0]] + [x] + list(i)[1:5] + [y] + list(i)[5:]
        b = [list(i)[0]] + [x] + list(i)[1:4] + [y] + list(i)[4:]

        if checker(b):
            return b

    return [0]


print("1 2 \n2 3")

x = int(input())
y = int(input())

arr = change(x, y)

s = ""

for i in range(0, 9):
    s += str(arr[i])

print(s)
