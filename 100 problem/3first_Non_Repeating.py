# // How do you print the first non-repeated character in a string?

# Brute Force Method
def first_Non_Repeating_BF(str):
    for i in range(len(str)):
        repeated = False
        for j in range(len(str)):
            if i != j and str[i] == str[j]:
                repeated = True
                break
        if not repeated:
            return str[i]
    return None

# Optimized Method using Count Dictionary
def first_Non_Repeating(str):
    count = {}
    for i in range(len(str)):
        if str[i] in count:
            count[str[i]] += 1
        else:
            count[str[i]] = 1
    for i in range(len(str)):
        if count[str[i]] == 1:
            return str[i]
    return None

str = input() # abcdabcefabc 
print(first_Non_Repeating(str)) # d because d is the first non-repeat char
