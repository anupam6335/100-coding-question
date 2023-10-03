

def sum_of_all_number(arr):
    sum = 0
    
    for i in arr:
        sum += i
    return sum

def sum_of_all_number_2(arr):
    sum = 0
    
    i = 0
    j = len(arr) -1
    
    while i < j:
        sum += arr[i] + arr[j]
        i += 1
        j -= 1
    
    if len(arr) % 2 != 0:
        sum += arr[len(arr)//2]
    return sum


arr = [10, 20, 30, 40, 50, -1, 20, 1, -1]


print(sum_of_all_number_2(arr))