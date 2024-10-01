//1.
import random

# Variables to track the counts
count_6 = 0
count_1 = 0
count_two_6s_in_a_row = 0

previous_roll = None

# Simulate rolling a six-sided die 20 times
for i in range(20):
    roll = random.randint(1, 6)
    print(f"Roll {i+1}: {roll}")

    # Count the occurrences of 6 and 1
    if roll == 6:
        count_6 += 1
        if previous_roll == 6:
            count_two_6s_in_a_row += 1
    elif roll == 1:
        count_1 += 1

    # Update the previous roll
    previous_roll = roll

# Print statistics
print(f"\nNumber of times rolled a 6: {count_6}")
print(f"Number of times rolled a 1: {count_1}")
print(f"Number of times rolled two 6s in a row: {count_two_6s_in_a_row}")
//2
total_jumping_jacks = 100
jumping_jacks_per_set = 10
completed_jumping_jacks = 0

while completed_jumping_jacks < total_jumping_jacks:
    # Complete a set of jumping jacks
    completed_jumping_jacks += jumping_jacks_per_set
    print(f"You have completed {completed_jumping_jacks} jumping jacks.")

    # Check if the user is tired
    tired = input("Are you tired? (yes/y or no/n): ").strip().lower()

    if tired in ["yes", "y"]:
        skip = input("Do you want to skip the remaining sets? (yes/y or no/n): ").strip().lower()
        if skip in ["yes", "y"]:
            print(f"You completed a total of {completed_jumping_jacks} jumping jacks.")
            break
    elif completed_jumping_jacks >= total_jumping_jacks:
        print("Congratulations! You completed the workout.")
