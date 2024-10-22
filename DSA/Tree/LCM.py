
def GCD(a,b):
    if(a<b):
        a,b=b,a
    if(b==0):
        return a
    return GCD(b , a%b)
a= int(input("Enter your first number a: "))
b= int(input("Enter your first number b: "))

HCF = GCD(a,b)
LCM = (a*b)/HCF
print(LCM)