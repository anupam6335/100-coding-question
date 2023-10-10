# Write a program to find the median of all elements in an array.

""" 

    The logic to find the median of an array:

    1. Sort the array in ascending order.
    2. If the number of elements (n) in the array is odd, then the median is the value at index n/2 (considering 0-based indexing).
    3. If n is even, then the median is the average of the values at indices n/2 - 1 and n/2. 

"""

def find_median_of_all_elements(arr):
    n = len(arr)
    arr.sort()
    if n % 2 == 0:
        median = (arr[n//2] + arr[n//2 - 1]) / 2
    else:
        median = arr[n//2]
    return median

arr = [10, 20, 30, 40, 50]

print(find_median_of_all_elements(arr))