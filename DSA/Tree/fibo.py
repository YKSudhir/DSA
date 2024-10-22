# def fibo(n , List):
#     if(n<=1):
#          List.append(n)
#     List.append(fibo(n-1)+fibo(n-2))

# List = []
# n=6
# fibo(n , List)
# print(List)
def generate_fibonacci(n):
    fib_list = [0, 1]  # Initialize the list with the first two Fibonacci numbers
    for i in range(2, n):
        fib_list.append(fib_list[i-1] + fib_list[i-2])  # Calculate and append the next Fibonacci number
    return fib_list

n = 6
fib_sequence = generate_fibonacci(n)
print(fib_sequence)
