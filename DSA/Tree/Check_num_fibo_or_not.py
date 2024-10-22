

def fibo(num):
    z=0
    x=0
    y=1
    while(z<=num):
            z=x+y
            if(z==num):
                return True
            x=y
            y=z
    return False   
    
num = int(input("Enter your elemnt: "))
print(fibo(num))
    
    