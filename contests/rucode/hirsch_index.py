N = int(input())
a = input().split()
a = [int(a[i]) for i in range(len(a))]
a.sort(reverse=True)

start = 0
end = N-1
mid = 0
if len(a) == 1 and a[0] == 0:
    print(0)
else:
    while end - start > 1:
        mid = (start + end) // 2
        if mid+1 <= a[mid]:
            start = mid
        else:
            end = mid

    if end+1 <= a[end]:
        print(end+1) 
    else:
        print(start+1)