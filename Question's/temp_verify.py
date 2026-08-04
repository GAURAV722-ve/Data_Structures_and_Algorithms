from itertools import combinations
from collections import deque

def can_sort(arr, blue):
    seq=[(v, idx in blue) for idx, v in enumerate(arr)]
    q=deque([tuple(seq)])
    seen={tuple(seq)}
    while q:
        state=q.popleft()
        vals=[x[0] for x in state]
        if vals==sorted(vals):
            return True
        n=len(state)
        for i in range(n):
            for j in range(i+1,n):
                if state[i][1] and state[j][1]:
                    new=list(state)
                    box=new.pop(j)
                    new.insert(i, box)
                    st=tuple(new)
                    if st not in seen:
                        seen.add(st)
                        q.append(st)
    return False

for arr in [(2,1,3),(3,1,4,2),(4,1,6,2,7,3,5)]:
    m=len(arr)
    for k in range(m+1):
        found=False
        for blue in combinations(range(m), k):
            if can_sort(arr, blue):
                print(arr, 'ans', k, 'blue', blue)
                found=True
                break
        if found:
            break
