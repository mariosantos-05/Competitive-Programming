n = int(input())

name = []
sub_name = []
peso = []
altura = []

for i in range(0,n):
    pretendentes = input().split()
    name.append(pretendentes[0])
    sub_name.append(pretendentes[1])
    peso.append(pretendentes[3])
    altura.append(pretendentes[2])
    pretendentes.clear()

#altura mais proxima é calculada a partir da diferença entre a altura ideal e a altura do pretendente. O modulo dessa operação     



