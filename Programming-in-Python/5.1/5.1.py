def to_liter(gallon, cup):
    return 3.7854*gallon+0.2366*cup


gallon = float(input("enter number of gallons: "))
cup = float(input("enter number of cups:"))
print("conversion to liter: ", to_liter(gallon, cup))
