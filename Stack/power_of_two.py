x = int(input("Enter your number x:"))
n = int(input("Enter the power n :"))

def power(x,n):
    if(n==1):
        return x
    else:
        return x*power(x,n-1)
    
ans = power(x , n)
print(ans)