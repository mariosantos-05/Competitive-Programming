def solve():
    a = input()
    b = input()

    counter = 0
    dic = {}
    for i in range(len(a)):
        if a[i] == b[i] and a[i] not in dic:
            dic[a[i]] = b[i]
        elif a[i] != b[i] and a[i] not in dic:
            dic[a[i]] = b[i]
            counter+= 1
        elif a[i] == b[i] and a[i] in dic:
            if b[i] != dic[a[i]]:
                return -1
        elif a[i] != b[i] and a[i] in dic:
            return -1

    return counter

n = int(input())

print(solve())