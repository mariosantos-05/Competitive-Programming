N, T, C = map(int, input().split())
gravidades = list(map(int, input().split()))

contagem = 0
contagem_temp = 0

for i in range(N):
    if gravidades[i] <= T:
        contagem_temp += 1
        if contagem_temp == C:
            contagem += 1
    else:
        contagem_temp = 0

print(contagem)
