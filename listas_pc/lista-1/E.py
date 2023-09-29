n = int(input())

a = list(map(int, input().split()))

a.sort()

days = 0
for elem in a:
    if elem >= days+1:
        days+= 1
print(days)
