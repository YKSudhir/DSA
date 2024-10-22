def root(f, lo, hi, epsilon=1e-9):
    mid = (lo + hi) / 2
    if abs(f(mid)) < epsilon:
        return mid
    elif f(mid) < 0:
        return root(f, mid, hi)
    else:
        return root(f, lo, mid)

def sqrtf(x):
    return x * x - 40

# Assuming a <= b
a = 0
b = 40
r = root(sqrtf, a, b)
print("Root:", r)
