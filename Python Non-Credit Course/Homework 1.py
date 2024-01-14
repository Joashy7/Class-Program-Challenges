#Q1 
# a)
print ("Hello Kitty")

# b)
print (10 + 5)

# c)
a = 13
b = 7
c = a**b
print (c)

# d)
# the ** is the exponential operator while 
# the ^ is the XOR comparison operator
d = a^b
print (d)

# e)
print (-7//2)

# f)
print (20 - 10 * 36 + 3 * 52)

# g)
e = float (3.1415)
f = int(e)
print (f)

# h)
if 30 >= 30:
  print ("True")
else:
  print( "False")

# i) 
g = "DonaldDaisyDuck"
# 1)
print (g)
# 2)
print (g[5])
# 3)
print (g[4:9])
# 4)
print (g.upper())
# 5)
print (g * 3)

# j)
mickey = 124
minnie = 369
print ((mickey + minnie) * 13)

# k)
# and is a logical operator returning true if both variables 
# are true while & is a bitwise operator returning 1 or 0
a = 8
b = 10
print (a & b)
print (a and b)
  
# l)
h = int(input("Input the first number to add: "))
i = int(input("Input the second number to add: "))
print ("The sum is: ", h + i)

# m)
myscore = 85
print (f'I scored {myscore} points')

# n)
j = int(input("Input the first number to add: "))
k = int(input("Input the second number to add: "))
print ("The sum is: ", j + k)

# o)
import statistics
l = float(input("Input the first number: "))
m = float(input("Input the second number: "))
n = float(input("Input the third number: "))
print (statistics.mean([l,m,n]))
print (statistics.median([l,m,n]))

# p)
o = 14
if o > 12 and o < 20:
  print ("The person is a teenager")

# q)
# The result is 6 because a set only contains unique numbers
# so the lenght of a is 10 while the lenght of the set b is 4
a = [1, 2, 2, 3, 3, 3, 4, 4, 4, 4]
b = set(a)
print(len(a) - len(b))

# r)
dict = {
  "Shanghai" : 17.8,
  "Istanbul" : 13.3,
  "Karachi" : 13.0,
  "Mumbai" : 12.5
}
print (dict)


#Q2
a = int(input("Input the first number to add: "))
b = int(input("Input the second number to add: "))
c = int(input("Input the third number to add: "))
print ("The sum is: ", a + b + c)


#Q3
import turtle
t = turtle.Turtle()

t.color(0, 0, 1)
t.begin_fill()
for i in range(8):
    t.forward(50)
    t.left(45)
t.end_fill()