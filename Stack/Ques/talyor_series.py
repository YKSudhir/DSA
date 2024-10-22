def taylor_series(f, f_derivative, a, terms, x):
    result = 0
    for n in range(terms):
        derivative = f_derivative(a, n)
        term = derivative * (x - a) ** n / factorial(n)
        result += term
    return result

def factorial(n):
    if n == 0:
        return 1
    else:
        return n * factorial(n - 1)

# Example usage:
def my_function(x):
    return x ** 3 - 2 * x ** 2 + 3 * x - 4  # Example function, f(x) = x^3 - 2x^2 + 3x - 4

def derivative_of_my_function(a, n):
    if n == 0:
        return my_function(a)
    elif n == 1:
        return 3 * a ** 2 - 4 * a + 3  # First derivative of the function
    elif n == 2:
        return 6 * a - 4  # Second derivative of the function
    elif n == 3:
        return 6  # Third derivative of the function

a = 1  # Value at which to evaluate the function
x = 1.5  # Value at which to evaluate the function
num_terms = 10  # Number of terms to use in the Taylor series expansion

approximation = taylor_series(my_function, derivative_of_my_function, a, num_terms, x)
print("Approximation of f({}) using {} terms of the Taylor series: {}".format(x, num_terms, approximation))
