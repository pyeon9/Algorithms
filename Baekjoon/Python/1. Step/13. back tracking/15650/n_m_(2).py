import sys

n, m = map(int, sys.stdin.readline().rstrip().split())

s = []
def dfs():
    if len(s) == m:
        print(" ".join(map(str, s)))
        return
    for i in range(1, n+1):
        if len(s) > 0 and i <= s[-1]:       # 오름차순 위해 i가 s의 마지막 원소보다 작으면 넘어감
            continue
        s.append(i)
        dfs()
        s.pop()

dfs()
