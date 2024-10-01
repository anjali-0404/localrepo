#1
def format_char(name,char):
    result="{}{}".format(num,char)
    return result
formatted_result=format(145,'o')
print(formatted_result)

#2
pi = 3.14
R = 84
water_per_square_meter = 1.4
area_of_pond = pi * (R**2)
total_water = area_of_pond * water_per_square_meter
print("Area of pond:", int(area_of_pond))
print("Total Water:", int(total_water))

#3
distance=490#in meter
time_minutes=7
time_seconds=time_minutes*60
Speed=distance/time_seconds
print("Speed(in meters per second:",int(Speed))



