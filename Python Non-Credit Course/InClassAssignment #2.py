# Q1
# a)
numbersRepeat = [789, 2, 2, 4, 4, 4, 3, 3, 3, 1]
numbersRepeat.sort()
print (numbersRepeat)

# b)
print (len(numbersRepeat))

# c)
numbersRepeat_set = set(numbersRepeat)
print (numbersRepeat_set)

# d)
#sets cannot be changed or indexed so since the set originated 
#from a sorted list, it is already a sorted set by definition
print (numbersRepeat_set)

# e)
numbersRepeat_set.add (8128)
numbersRepeat_set.add (33550336)
print (numbersRepeat_set)

# f)
#the set here is actually not sorted, but during the printing process
#it will print in a sorted order due to the sorted() method
print (sorted(numbersRepeat_set))

# g)
if 747 in numbersRepeat_set:
  print ("747 is in the set")
else:
  print ("747 is not in the set")

# h)
numbersRepeat_set.pop()
print (numbersRepeat_set)

# i)
print (sorted(numbersRepeat_set))


# Q2
# a)
#US presidents
presidents ={'Washington': 1, 
             'Lincoln': 16,
             'Kennedy': 35,
             'Obama': 44} 
presidents['Reagan'] = 40

# b)
print (presidents)

# c)
if "Nixon" in presidents:
  print ("Nixon is in the dictionary")
else:
  print ("Nixon is not in the dictionary")

# d)
x = presidents.get("Lincoln")
print (x)
  
# e)
del presidents["Washington"]
print (sorted(presidents))

# f)
y = presidents.get("Obama")
if y:
  print ("Obama is in the dictionary")
else:
  print ("Obama is not in the dictionary")