n = int(input("Enter"))
def fact(n):
    if(n==0):
        return 1
    elif(n<0):
        return 
    else:
        return n*fact(n-1)

x = fact(n)
print(x)