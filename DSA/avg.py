def average(arr):
    L = len(arr)
    sum = 0
    
    for i in range(L):
        sum +=arr[i]
        
    return sum/L;

arr = [25,25,25,24]
print(average(arr))

