def power_recursive(a, n):
    if n == 0:
        return 1
    elif n < 0:
        return 1 / a*power_recursive(a, n+1)
    else:
        return a * power_recursive(a, n - 1)

a = 3  # Example value for a
n = -1  # Example value for n

result = power_recursive(a, n)
print("Result:", result)
