# Import `datasets` from `sklearn`
from sklearn import datasets

# Load in the `digits` data
digits = datasets.load_digits()

# Print the `digits` data 
print(digits)

# Print out `digits`
print(digits)

# Get the keys of the `digits` data
print(digits.keys)

# Print out the data
print(digits.target)

# Print out the description of the `digits` data
print(digits.DESCR)

