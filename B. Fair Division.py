t = int(input())
arr = []
a = 0
b = 0

for i in range(t):
    n = int(input())
    arr = list(map(int, input().split()))
    arr.sort()
    for i in range(n):
      a += arr[i]
      if(b < a):
          b += arr[i]
          print(b)
      else:
          a += arr[i]
          print(a)
         
    if(a == b):
        print("Yes")
    else:
        print("No")
    
    a = 0
    b = 0
          
   
          
    
        
        
    
        