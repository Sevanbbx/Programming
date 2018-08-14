result = 0
n = int(input())
k = int(input())
result = (n - (k % n)) % n
print(result)
