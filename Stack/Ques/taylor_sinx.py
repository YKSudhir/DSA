def sin(x, n):
    sum = x
    x_to_the_i = x
    factorial_i = 1
    for i in range(3, n, 2):
        x_to_the_i = x_to_the_i * x * x
        factorial_i = factorial_i * i * (i - 1)
        if ((i - 1) % 4) == 3:
            sum -= x_to_the_i / factorial_i
        else:
            sum += x_to_the_i / factorial_i
    return sum
val = sin(4 , 9)
print(val)