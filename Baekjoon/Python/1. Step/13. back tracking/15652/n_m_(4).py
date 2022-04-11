import sys

n, m = map(int, sys.stdin.readline().rstrip().split())

s = []
def dfs():
    if len(s) == m:
        print(" ".join(map(str, s)))
        return
    for i in range(1, n+1):
        if len(s) > 0 and s[-1] > i:       # 비내림차순, s[-1] >= i 하면 오름차순
            continue
        s.append(i)
        dfs()
        s.pop()

dfs()