def atopoweri(a, i):
    if i == 0:
        return 1
    elif i == 1:
        return a
    else:
        return atopoweri(a, i // 2) * atopoweri(a, i - i // 2)
print(atopoweri(2,5))