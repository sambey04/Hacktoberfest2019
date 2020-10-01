#Counting Fractal
def fractal(n):
    if n==0:
        return 1
    else:
        return n*fractal(n-1)

for i in range(0, 10):
        print("Fractal(",i, ") = ", fractal(i))




