def letters(word):
    output = {}

    for letter in word:
        if letter not in output.keys():
            output[letter] = 1
        else:
            output[letter] += 1
    return output

a= input ("enter word: ")
print (letters(a))
