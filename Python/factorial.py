

def fact(n):
   
   if n == 1:
       return n
   else:
       return n*fact(n-1)



num = int(input("Enter a number: "))


if num < 0:
   print("Factorial for negative number does not exist")
elif num == 0:
   print("Factorial of zero is 1")
else:
   print("The factorial of",num,"is",fact(num))