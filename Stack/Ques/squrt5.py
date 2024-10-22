from decimal import Decimal, getcontext

def sqrt_decimal(number):
    getcontext().prec = 100  # Set precision
    x = Decimal(number)
    sqrt_x = x.sqrt()
    return sqrt_x

number = 23
square_root = sqrt_decimal(number)
num = str(square_root)
print(len(num))
print("Square root using decimal module:", square_root)
