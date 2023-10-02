# // Write a program to find the second largest element in an array.

# def find_second_largest(arr, n):
#     arr.sort()
#     return arr[n - 2]


def find_second_largest(arr, n):
    first = second = float('-inf')
    
    for i in arr:
        if i > first:
            second = first
            first = i
        elif first > i > second:
            second = i
    return second if second != float('-inf') else None



arr = [10, 2, 40, 21, -1, 24, 100, 1, -3, 0]

print(find_second_largest(arr, len(arr)))
