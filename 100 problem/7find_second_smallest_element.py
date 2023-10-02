# Write a program to find the second smallest element in an array.


def find_second_smallest_element(arr):
    arr.sort()
    return arr[1]

def find_second_smallest_element_2(arr):
    smallest = second_smallest = float('inf')
    
    for i in arr:
        if i < smallest:
            second_smallest = smallest
            smallest = i
        elif smallest < i < second_smallest:
            second_smallest = i
    return second_smallest if second_smallest != float('inf') else None



arr = [10, 20, 30, 0, -100, 2, 4, -45, 100]

print(find_second_smallest_element_2(arr))