# City to Country Program
australia = ["Sydney", "Melbourne", "Brisbane", "Perth"]
uae = ["Dubai", "Abu Dhabi", "Sharjah", "Ajman"]
india = ["Mumbai", "Bangalore", "Chennai", "Delhi"]

# Get user input for two cities
city1 = input("Enter the first city: ")
city2 = input("Enter the second city: ")

# Determine the countries for each city
def get_country(city):
    if city in australia:
        return "Australia"
    elif city in uae:
        return "UAE"
    elif city in india:
        return "India"
    else:
        return None

country1 = get_country(city1)
country2 = get_country(city2)

# Check if they belong to the same country
if country1 and country2:
    if country1 == country2:
        print(f"Both cities are in {country1}")
    else:
        print("They don't belong to the same country")
else:
    print("One or both of the cities are not found in the given list.")
