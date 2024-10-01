#1
# BMI Category Program
height = float(input("Enter height in meters: "))
weight = float(input("Enter weight in kilograms: "))

# Calculate BMI
bmi = weight / (height ** 2)

# Determine BMI category
if bmi >= 30:
    category = "Obesity"
elif 25 <= bmi < 30:
    category = "Overweight"
elif 18.5 <= bmi < 25:
    category = "Normal"
else:
    category = "Underweight"

print(f"Output: \"{category}\"")
#2
# City to Country Program
australia = ["Sydney", "Melbourne", "Brisbane", "Perth"]
uae = ["Dubai", "Abu Dhabi", "Sharjah", "Ajman"]
india = ["Mumbai", "Bangalore", "Chennai", "Delhi"]

city = input("Enter a city name: ")

# Determine the country
if city in australia:
    country = "Australia"
elif city in uae:
    country = "UAE"
elif city in india:
    country = "India"
else:
    country = "unknown"

print(f"{city} is in {country}" if country != "unknown" else "City not found in the given list.")
