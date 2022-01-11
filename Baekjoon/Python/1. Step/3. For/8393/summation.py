import sys

n = int(sys.stdin.readline())
S = 0
for i in range(1, n+1):
    S += i
print(S)