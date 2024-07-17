
def CountEvenOdd(arr):
    even_count = 0
    odd_count = 0
    L = len(arr)
    
    for i in range(L):
        if i & 1 == 1:
            odd_count +=1
        else:
            even_count +=1
    print(even_count)
    print(odd_count)
    
arr = [2,3,4,5,6]
CountEvenOdd(arr)
