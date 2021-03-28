even = 0
odd = 0
n = int(input())

arr = list(map(int, input().split()))
for i in range(len(arr)):
    if(arr[i]%2 == 0):
        even = even + 1
    else:
        odd = odd + 1
    if(even + 1 == odd or odd + 1 == even or even == odd):
        answer = even + odd
    else:
        if(even == 0 and odd != 0):
            if odd%2 == 0:
                answer = (odd/2)+1
            else:
                answer = (odd/2) - 0.5
        else:
            times = (odd - even)/2
            if(times % 2 != 0):
                times - 0.5
            else:
                pass
            for i in range(int(times)):
                odd = odd -2
                even = even + 1
            answer = even + odd
                
print(int(answer))
                
