#tentar implementar a mesma função em c++
def dif_num(x):
    dic = {}
    for i in range(len(x)):
        if x[i] not in dic:
            dic[x[i]] = 1
        else:
            return False
    return True                   

n = int(input())

n = n+1

n = str(n)

while (dif_num(n) != True):
    n = int(n)
    n+= 1
    n = str(n)

print(n)