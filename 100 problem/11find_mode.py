# Write a program to find the mode of all elements in an array.


""" 

    The mode of a set of values is the value that appears most often. If no number in the list is repeated, then there is no mode for the list.


    1. Create a dictionary to store each element of the array as keys and their counts as values.
    2. Find the maximum count (max_count) among all dictionary values.
    3. Iterate through the dictionary and print all keys which have their value equal to max_count.

"""

def find_mode(arr):
    from collections import Counter
    count_dict = Counter(arr)
    # max_count = max(count_dict.values())
    modes = [k for k, v in count_dict.items() if v == max(count_dict.values())]
    return modes

arr = [2, 2,2, 3, 3, 3]
print(find_mode(arr))




""" 
     
    modes = [k for k, v in count_dict.items() if v == max(count_dict.values())]
    expandable version of this line
    
    modes = []
    # Get the maximum value from the dictionary
    max_value = max(list(data.values()))

    # Iterate over the items in the dictionary
    for k, v in count_dict.items():
        # If the current value is equal to the maximum value
        if v == max_value:
            # Append the current key to the mode list
            mode.append(k)

"""