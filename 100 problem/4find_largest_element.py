# // Write a program to find the largest element in an array.

# method 1
def find_largest_element(arr):
    return max(arr)

# method 2
def find_largest_element1(arr):
    maxi = arr[0]
    i = 1
    arr_size = len(arr)
    while i < arr_size:
        if maxi < arr[i]:
            maxi = arr[i]
        i += 1
    return maxi

arr = [10, 20, 40, 1, 2, 0, 500, 24, 100]
print(find_largest_element1(arr))