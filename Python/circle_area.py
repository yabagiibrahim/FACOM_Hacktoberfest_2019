print("Type the circle radius :")

x = float(input())

print("Area : ",round(3.1415926*(x*x),4))


This can also be done easily using a function(areacalc)
>>>def area_calc(r):
     import math
     return math.pi* pow(r,2)

radius=int(input('enter radius:'))
area_calc(2)
print area_calc(2)
