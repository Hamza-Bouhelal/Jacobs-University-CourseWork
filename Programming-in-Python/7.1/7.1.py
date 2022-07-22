def longest_word(lst):
    i = 0
    for word in lst:
        if i < len(word):
            i = len(word)
            longest = word
    return longest


sentence = input("enter a sentence: ")
lst = []
words = sentence.split()
for i in range(0, len(words)):
    lst.append(words[i])
print("The longest word in the sentence is:", longest_word(lst))
