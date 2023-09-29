def distance(x,y):
    dist = (abs(x-xc)**2 + abs(y-yc)**2)
    return dist

n,xc,yc = map(int,input().split())

min_price = 10000000000
index = 0
for i in range(0,n):
    xi,yi,pi = map(int,input().split())
    price = distance(xi,yi)*2 + pi    
    if price < min_price:
        min_price = price
        index = i+1

print(min_price, index)        