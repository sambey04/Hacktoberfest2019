import numpy as np
#Check Version
print(np.__version__)
#integer array
np.array([1, 4, 2, 5, 3])
#float array
np.array([1, 2, 3, 4], dtype='float32')
#nested lists result in multidimensional arrays
np.array([range(i, i + 3) for i in [2, 4, 6]])
#Create a 3×3 numpy array of all True’s
np.ones((3,3),dtype=bool)
#Extract all odd numbers from arr
arr = np.array([0, 1, 2, 3, 4, 5, 6, 7, 8, 9])
arr[arr % 2 == 1]
#Replace all odd numbers in arr with -1
arr = np.array([0, 1, 2, 3, 4, 5, 6, 7, 8, 9])
arr[arr % 2 == 1] = -1
arr