# Write a program to find the average of all elements in an array.


def average_of_all_elements(arr):
    sum = 0
    for i in arr:
        sum += i
    return sum

arr = [ 10, 20, 30, 40, 50]

avg = average_of_all_elements(arr) / len(arr)

print(avg)