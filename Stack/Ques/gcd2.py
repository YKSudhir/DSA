def gcd_iterative(a, b):
    # Ensure a >= b
    if a < b:
        a, b = b, a
    
    # Iterate until b becomes zero
    while b != 0:
        # Calculate the remainder
        rem = a % b
        # Update a to be b and b to be the remainder
        a, b = b, rem
    
    # The GCD is the value of a
    return a

# Example usage:
a = 60
b = 18
gcd = gcd_iterative(a, b)
print("GCD of", a, "and", b, "is:", gcd)
