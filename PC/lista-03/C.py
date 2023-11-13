def contar_prisioneiros_transferidos(N, T, C, gravidade_crime):
    count = 0  # Inicialize o contador de maneiras de escolher os prisioneiros

    # Inicialize a variável que mantém o número de prisioneiros com gravidade menor ou igual a T
    prisioneiros_com_gravidade_atual = 0

    # Percorra a lista de gravidades de crimes dos prisioneiros
    for i in range(N):
        if gravidade_crime[i] <= T:
            prisioneiros_com_gravidade_atual += 1  # Atualize a contagem de prisioneiros com gravidade menor ou igual a T
            if prisioneiros_com_gravidade_atual == C:
                count += 1  # Encontrou uma maneira de escolher C prisioneiros, atualize o contador

        # Se o tamanho da janela (C) for alcançado, remova o prisioneiro mais à esquerda da janela
        if i >= C and gravidade_crime[i - C] <= T:
            prisioneiros_com_gravidade_atual -= 1

    return count

# Entrada
N, T, C = map(int, input().split())
gravidade_crime = list(map(int, input().split()))

# Chame a função para contar o número de maneiras de escolher os prisioneiros
resultado = contar_prisioneiros_transferidos(N, T, C, gravidade_crime)

# Saída
print(resultado)
