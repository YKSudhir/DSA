# x = int(input("Enter your number x:"))
n = int(input("Enter the power n :"))

def power(n):
    if(n==0):
        return 1
    elif(n==1):
        return 2
    else:
        return 2*((power(n-1))*2)/(n-1)    
ans = power( n)
print(ans)