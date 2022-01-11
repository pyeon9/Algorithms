import sys

T = int(sys.stdin.readline())
As, Bs = [], []
for i in range(T):
    A, B = map(int, sys.stdin.readline().split())
    As.append(A)
    Bs.append(B)
for i in range(T):
    print(As[i] + Bs[i])
