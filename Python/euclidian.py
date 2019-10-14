from math import sqrt

def euclidienne(x,y):
    return sqrt((x[0]-y[0])**2+(x[1]-y[1])**2)

print(euclidienne((1,3),(2,2)))

