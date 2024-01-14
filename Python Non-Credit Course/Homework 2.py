# Q1
# a)
mylist = ["BMW", "Chrysler", "Ford", "GM", "Honda", "Hyundai", "Kia", "Mercedes", "Nissan", "VW"]
print (mylist)

# b)
print (mylist[1])

# c)
print (mylist[3])
print (mylist[7])

# d)
print (mylist[:3])

# e)
# The -1 index in python states the last index of the list/array
print (mylist[-1])

# f)
mylist.append ("Tesla")
print (mylist)

# g)
mylist.insert (3,"Porche")
print (mylist)

# h)
mylist.pop(9)
print (mylist)

# i)
mylist.sort()
print (mylist)

# j)
print (mylist * 3)

# k)
print (len(mylist))

# l)
print (sorted(mylist))
mylist.sort()
print (mylist)

# m)
mylist.sort(reverse = True)
print (mylist)

# n)
perfectNumber = (6, 28, 496, 8128)

# o)
#there is no method for tuples to add to them, they are innately unchangable 
#you need to convert it to a list first before converting back to a tuple
x = list(perfectNumber)
x.append(2)
x.sort()
perfectNumber = tuple(x)
print (perfectNumber)


# Q2
# a)
countries = ['Canada', 'USA', 'Mexico', 'France', 'Germany', 'UK', 
'Russia', 'China', 'Japan', 'Korea', 'South Africa', 'UAE', 'India', 
'Australia', 'India', 'Brazil']
print (countries)

# b)
x = set(countries)
print (len(x))

# c)
print (countries[:4])

# d)
y = list(countries)
y.sort()
countries = set(y)
print (countries)

# e)
countries_set = countries

# f)
countries_set.add("Ghana")

# g)
if "Argentina" in countries_set:
  print ("Argentina is in the set")
else:
  print ("Argentina is not in the set")

# h)
print (countries_set)

# i)
#Brazil was removed from the set because it is the first item of the stack
countries_set.pop()
print (countries_set)


# Q3
# a)
totalMedalOlympic2016 = {"USA": 121,
                         "China": 70,
                         "GBR": 67,
                         "Russia": 57,
                         "Germany": 42,
                         "France": 42,
                         "Japan": 41,
                         "Australia": 29,
                         "Italy": 28,
                         "Canada": 22,
                         "Korea": 21,}
x = totalMedalOlympic2016.keys()
print (x)

# b)
y = totalMedalOlympic2016.values()
print (y)

# c)
totalMedalOlympic2016["Brazil"] = 19

# d)
print (totalMedalOlympic2016)

# e)
if "Poland" in totalMedalOlympic2016:
  print ("Poland is in the dictionary")
else:
  print ("Poland is not in the dictionary")

# f)
z = totalMedalOlympic2016.get("Poland")
print (z)

# g)
y = False;
for x in totalMedalOlympic2016:
  if x == "Poland":
    y = True;
if y:
  print ("Poland is in the dictionary")
else:
  print ("Poland is not in the dictionary")


# Q4
# a)
import array as arr
import numpy as np
array = np.array([6, 28, 496, 8128])
array = array/3
print (array)

# b)
print (array + 7)

# c)
print (array * 13)

# d)
array = np.append (array, [144])
print (array)

# e)
array = np.delete(array, 4)

# f)
#yes there is an error due to the list not having a specified variable type
listPerfectNum = list(array)
print (listPerfectNum/3)