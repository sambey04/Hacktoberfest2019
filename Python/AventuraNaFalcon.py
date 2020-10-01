def triangularSuperior(matrix):
    if(matrix[2][0] == 0) and (matrix[2][1] ==0) and (matrix[1][0]==0):
        return True
    else:
        return False


def triangularInferior(matrix):
    if(matrix[0][1] == 0) and (matrix[0][2] ==0) and (matrix[1][2]==0):
        return True
    else:
        return False



mat = [[int(k) for k in str(input()).split()]for i in range(3)]
while(True):
    try:
        print("Por cima" if triangularInferior(mat) else "Por baixo" if triangularSuperior(mat) else "Nao pode atravessar")
        l = input()
        mat = [[int(k) for k in str(input()).split()]for i in range(3)]
    except EOFError:
        break
