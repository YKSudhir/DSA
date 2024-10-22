def a_to_power_i_with_comments(a, i):
    if i == 0:
        return 1  # Base case: Any number raised to the power of 0 is 1
    else:
        # Divide the exponent by 2 and compute recursively
        result_half = a_to_power_i_with_comments(a, i // 2)
        # If the exponent is even, square the result
        if i % 2 == 0:
            return result_half * result_half
        # If the exponent is odd, square the result and multiply by the base
        else:
            return a * result_half * result_half

print(a_to_power_i_with_comments(2,3))
