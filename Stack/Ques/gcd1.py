def gcd_recursive(a, b):
    # Base case: if b is zero, a is the GCD
    if b == 0:
        return a
    # Recursive case: find the GCD of b and the remainder of a divided by b
    return gcd_recursive(b, a % b)

# Example usage:
a = 60
b = 18
gcd = gcd_recursive(a, b)
print("GCD of", a, "and", b, "is:", gcd)
