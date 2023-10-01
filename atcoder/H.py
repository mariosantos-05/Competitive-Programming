n, m = map(int,input().split())

a = [int (x) for x in input().split()]

for i in range(0,n):
    if i in a:
        print(i, a[i])

    if i not in a:
        print((abs(a[i]-i)))
    else:
        print(0)