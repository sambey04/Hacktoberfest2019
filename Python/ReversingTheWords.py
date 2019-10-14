
#python_code
#Given a string of words delimited by spaces, reverse the words in string. 
#For example, given "hello world here", return "here world hello".
b = []
c = []

a = raw_input("Enter any string : ")
b = a.split(" ")

n = len(b)
for i in range (n-1, -1, -1):
	c.append(b[i])

d=c[0]

for i in range(1,n,1):
	d = d + " " + c[i]

print(d)
