def translate(list_en):
    dict = {"merry": "god", "christmas": "jul",
            "and": "och", "happy": "gott",
            "new": "nytt", "year": '\u00E5'+'r'}
    list_sw = []
    for word in list_en:
        for key in dict:
            if word == key:
                list_sw.append(dict[key])
    return list_sw


sentence = input("enter a sentence to translate: ")
for word in translate(sentence.split()):
    print(word, end=" ")
