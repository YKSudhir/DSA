def sqrt_newton(number):
    guess = number
    while True:
        new_guess = 0.5 * (guess + number / guess)
        if abs(new_guess - guess) < 1e-6:
            return new_guess
        guess = new_guess

number = 16
square_root = sqrt_newton(number)
print("Square root using Newton's method:", square_root)

