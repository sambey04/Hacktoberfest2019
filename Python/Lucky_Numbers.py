Codeforces: solution of problem 630C
https://codeforces.com/contest/630/problem/C

n=int(input())
sum=0
for i in range(1,n+1):
    sum+=(1<<i)
print(sum)
