my_str=input("Enter a String:")
my_str=my_str.casefold()
rev_string=reversed(my_str)
if list(my_str)==list(rev_string):
   print("The string is a palindrome")
else:
   print("The String is not Palindrome")
