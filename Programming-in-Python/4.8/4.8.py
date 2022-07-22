def convert(miles):
    return 1.609344 * miles


def main():
    n = float(input("enter number of miles to convert: "))
    km = convert(n)
    print("converted number to kilometers: ", km)


main()
