"""
@author: Swapnanil DUtta
"""
stack,post=[],[i for i in input("Enter the post fix expression: ").split()]     #initialize and accept the postfix expression
for i in post:
    if((i=='*')or(i=='/')or(i=='+')or(i=='-')or(i=='%')):       #check if the element is an operator, if yes
        a=stack.pop()                                           #extract the two elements in the expression before the operator
        b=stack.pop()
        if(i=='*'):                                             #if the operator is "*" then perform the multiplication and then append 
            stack.append(a*b)
        elif(i=='/'):                                           #if the operator is "/" then perform the multiplication and then append 
            stack.append(a/b)
        elif(i=='+'):                                           #if the operator is "+" then perform the multiplication and then append 
            stack.append(a+b)
        elif(i=='-'):                                           #if the operator is "-" then perform the multiplication and then append 
            stack.append(b-a)
        else:                                                   #if the operator is "%" then perform the multiplication and then append 
            stack.append(a%b)
    else:
        stack.append(int(i))                     #if the element is not an operator the it will be a number, then append it
print("The value is : {}".format(stack.pop()))    #prints the final evaluated value
