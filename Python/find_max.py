#Find max value from a list of positive integers

def find_max (L):
    max = 0
    for x in L:
        if x > max:
            max = x
    return max

print(find_max([1, 2, 3]))
