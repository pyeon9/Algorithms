import sys

n, m = map(int, sys.stdin.readline().rstrip().split())

s = []
def dfs():
    if len(s) == m:
        print(" ".join(map(str, s)))
        return
    for i in range(1, n+1):     # 1부터 n까지
        s.append(i)
        dfs()
        s.pop()

dfs()