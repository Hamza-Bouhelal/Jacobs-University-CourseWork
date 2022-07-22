m = int(input("number of minutes: "))
if m>=0:
    print("time:", m//60, "hours", m%60, "minutes")
else:
    print("conversion impossible")