# WRITE A PROGRAM TO FIND THE SMALLEST ELEMENT IN AN ARRAY

def find_smallest_element(arr):
    arr.sort()
    return arr[0]

def find_smallest_element_2(arr):
    smallest = arr[0]
    
    for i in arr:
        if i < smallest:
            smallest = i
    return smallest


def find_smallest_element_3(arr):
    return min(arr)

arr = [10, 20, 30, 0, -100, 2, 4, -45, 100]

print(find_smallest_element_3(arr))