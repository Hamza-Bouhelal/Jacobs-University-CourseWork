d = {'Physics': 82, 'Math': 85, 'History': 75,
     'Management': 70, 'Chemistry': 72}
s = 0
for (key, value) in d.items():
    if key != 0:
        if s == 0:
            s = d[key]
    if d[key] < s:
        s = d[key]
        string = key
print(string, s)
