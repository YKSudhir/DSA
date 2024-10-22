def bisection(f, a, b, epsilon):
    while abs(b - a) > epsilon:
        c = (a + b) / 2
        if f(c) == 0:
            return c
        elif f(a) * f(c) < 0:
            b = c
        else:
            a = c
    return (a + b) / 2

# Example usage:
def f(x):
    return x**2 - 4  # Example function f(x) = x^2 - 4

a = 0  # Lower bound of the interval
b = 3  # Upper bound of the interval
epsilon = 0.0001  # Desired level of accuracy
zero = bisection(f, a, b, epsilon)
print("Zero of the function:", zero)
