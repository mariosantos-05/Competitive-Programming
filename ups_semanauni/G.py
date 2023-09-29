def solve():
    a = input()
    b = input()
    #if len(set(a)) < len(set(b)):
        #return -1
    #if len(set(a)) == len(set(b)):
        #return len(set(a))
    
    
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
            
    
    print(dic)             
    return counter
        #elif a[i] != b[i] and a[i] in dic:    




        


n = int(input())

print(solve())