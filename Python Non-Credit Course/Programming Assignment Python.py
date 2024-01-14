#Q1
# a)
cities = ["San Francisco", "Los Angeles", "Portland", "Seattle", "New York", "Boston", "Chicago", "St.Louis", "Dallas"]
# b)
cities.sort()
print (cities)
# c)
print (cities[4])
# d)
print (cities[2:4])
# e)
cities.append("Cincinatti")
# f)
if "Miami" in cities:
    print ("Miami is in the list of cities")
else:
  print ("Miami is not in the list of cities")
# g)
cities.sort(reverse=True)
print (cities)
# h)
print(len(cities))
# i)
cities.insert(0, "Denver")
print (cities)

#Q2
first = "Joash"
last = "Marcos"
print (last[0] + first[1:], " ", first[0] + last[1:])

#Q3
lenght = int(input("What is the leght of the rectangle?"))
width = int(input("What is the width of the rectangle?"))
print ("Area of the rectangle is", lenght * width)

#Q4
feet = int(12)
inches= int(input("How many inches is your object"))
finch = inches - (inches//feet*feet)
print ("The object is", inches//feet, "ft", finch, "in")

#Q5
name = input("Please tell me your name:")
age = int(input("How old are you, " + name + "?"))
print ("Then", age + 2020, "will be your year!")

#Q6
import math
degrees = int(input("What is the degree of the angle?"))
print ("The angle in radians is", degrees * (math.pi / 180))
print ("The angle is equivalent to", degrees / 180,"*",math.pi)

#Q7
mystring = "Honey"
mid = int(len(mystring)) // 2
print (mystring[mid])

#Q8
countries = {"USA": "Washington D.C", "United Kingdom": "London", "China": "Beijing", "Japan": "Tokyo", "France": "Paris"}
# a)
countries.pop("China")
print (countries)
# b)
countries["Germany"] = "Berlin"
print (countries)

#Q9
print ('''
Date:
December 25, 2022 
Time: 
11:50 PM 
Venue: 
Convention Center 
Number of guests: 
200 
''')

#Q10
laptop = "Apple"
price = 1299
rate = "the exchange rate is 1 USD to 1.320 Canadian dollar."
print  ("The price of this {} laptop is {} USD and {}".format(laptop, price, rate))