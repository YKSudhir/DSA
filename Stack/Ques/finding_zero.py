def newton_raphson(f, dfdx, x0, epsilon):
    x = x0
    while abs(f(x)) > epsilon:
        x = x - f(x) / dfdx(x)
    return x

# Example usage:
def f(x):
    return x**2 - 4  # Example function f(x) = x^2 - 4

def dfdx(x):
    return 2 * x  # Derivative of f(x)

x0 = 2  # Initial guess
epsilon = 0.0001  # Desired level of accuracy
zero = newton_raphson(f, dfdx, x0, epsilon)
print("Zero of the function:", zero)
