import math

y, w = map(int, input().split())

m = max(y, w)
num = 6 - m + 1   # favorable outcomes
den = 6           # total outcomes

g = math.gcd(num, den)
print(f"{num//g}/{den//g}")
