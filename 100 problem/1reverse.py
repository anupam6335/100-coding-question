# How do you reverse a string in Python?

# method 1
def reverse_str(str):
    new_str = ""
    for i in str:
        new_str = i  + new_str
        print(new_str + " ")
    return new_str

# Method 2
def reverse_str(str):
    return str[::-1]

str = input()
rev_str = reverse_str(str)
print(rev_str)