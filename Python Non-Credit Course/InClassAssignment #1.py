# Q1
# a)
planets = ["Earth", "Moon", "Venus", "Mars", "Mercury", "Saturn"]
print (planets)

# b)
print (planets[4])

# c) 
print (planets[2:4])

# d)
print (planets[:3])

# e)
planets.append ("Jupiter")
planets.pop (6)
planets.insert (4, "Jupiter")
print (planets)

# f)
planets.sort()
print (planets)

# g)
if "pluto" in planets:
  print ("Yes, pluto is in the list")
else:
  print ("No, pluto is not in the list")

# h)
planets.sort(reverse = True)
print (planets)

# i)
planets.pop (1)
planets.insert (1, "Moon")
del planets[1]
print (planets)

# j)
print (len(planets))
