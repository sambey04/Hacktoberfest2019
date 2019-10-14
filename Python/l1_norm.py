# define l1 norm
def l1(x,y):
    return abs(x[0]-y[0])+abs(x[1]-y[1])

print(l1((1,3), (2,2)))