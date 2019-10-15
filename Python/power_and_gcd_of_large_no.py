
#power in time:O(log(n))
def power(p,n,mod):

    if n==0:
        return 1
    temp=power(p,n//2,mod)%mod
    if n%2==0:
        return (temp*temp)%mod
    else:
        return (((temp*temp)%mod)*p)%mod



#gcd in time:o(log(min(a,b)))
def gcd(a,b):
    if b==0:
        return a
    else:
        return gcd(b,a%b)

        
        

