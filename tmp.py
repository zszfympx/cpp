MOD = 998244353

def factorial(n):
    result = 1
    for i in range(1, n + 1):
        result = (result * i) % MOD
    return result

def mod_inverse(a, m):
    m0, x0, x1 = m, 0, 1
    if m == 1:
        return 0
    while a > 1:
        q = a // m
        m, a = a % m, m
        x0, x1 = x1 - q * x0, x0
    if x1 < 0:
        x1 += m0
    return x1

def combination(n, k):
    if k > n:
        return 0
    num = factorial(n)
    den = (factorial(k) * factorial(n - k)) % MOD
    return (num * mod_inverse(den, MOD)) % MOD

def arrange_guests(n, m):
    if m > n:
        return 0
    valid_seats = n - (m - 1)
    return combination(valid_seats, m)

# 读取输入
n, m = map(int, input().split())

# 计算并输出结果
result = arrange_guests(n, m)
print(result)