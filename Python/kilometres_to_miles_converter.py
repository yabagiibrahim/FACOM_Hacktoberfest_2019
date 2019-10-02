def convert_km_to_miles(metres):
    return metres * 0.6213


def main():
    print(f"Kilometres to Miles Converter")
    user_input = int(input(f"Enter a number (km): "))
    print(f"You have entered {user_input} kilometres and it is equal to {convert_km_to_miles(user_input):.2f} miles.")


main()
