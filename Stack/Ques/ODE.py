def ode_iterative(xl, xh, f0, g, x, delta):
    xi = xl  # Start at the lower bound
    fi = f0  # Initial value of the function
    while xi < x:
        fi += delta * g(xi, fi)  # Update the function using Euler's method
        xi += delta  # Move to the next point

    # Adjust for the remaining step if xi overshoots x
    delta = x - xi
    fi += delta * g(xi, fi)

    return fi

# Example usage:
def g(x, y):
    # Define the derivative function g(x, y) for your specific ODE
    return x ** 2 + y ** 2

xl = 0  # Lower bound of the interval
xh = 2  # Upper bound of the interval
f0 = 0  # Initial value of the function
x = 1  # Point at which to evaluate the function
delta = 0.1  # Step size

result = ode_iterative(xl, xh, f0, g, x, delta)
print("Approximation of y({}) using Euler's method: {}".format(x, result))
