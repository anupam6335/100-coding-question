##  How do you calculate the number of vowels and consonants in a string?


def isVowel(ch):
    if(ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u' or ch == 'A' or ch == 'E' or ch == 'I' or ch == 'O' or ch == 'U'):
        return True
    return False

def count_vowel_and_consonants(str, vowels, consonants):
    i = 0
    str_len = len(str)
    while i < str_len:
        if isVowel(str[i]):
            vowels += 1
        else:
            consonants += 1
        i += 1
    return vowels, consonants

# The code has been refactored to reduce repetition, but it has not been optimized

def isVowel(ch):
    return ch.lower() in 'aeiou'

def count_vowel_and_consonants(str):
    vowels = 0
    consonants = 0
    for ch in str:
        if ch.isalpha():
            if isVowel(ch):
                vowels += 1
            else:
                consonants += 1
    return vowels, consonants

# optimzied

def count_vowel_and_consonants(s):
    s = s.lower()
    vowels = set("aeiou")
    consonants = set("bcdfghjklmnpqrstvwxyz")

    count_vowels = sum(1 for char in s if char in vowels)
    count_consonants = sum(1 for char in s if char in consonants)

    return count_vowels, count_consonants


str = input()

vowels, consonants = count_vowel_and_consonants(str, 0, 0)

print(vowels, " ", consonants)

