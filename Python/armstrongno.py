print ("This program is to check if the number is Armstrong Number or Not")
n=0
ans=0
count=0
num = int(input("Enter The Number?"))
new_num=num
a=num
while(num > 0):
    num = num //10
    count = count+1
num=0 
while(new_num > 0):
    ans = ans + (new_num%10)**count
    new_num = new_num //10

if(ans==a):
    print("No is armstrong")
