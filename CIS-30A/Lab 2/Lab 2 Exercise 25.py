year1 = [200, 320, 180, 210, 175, 305]
year2 = [550, 285, 195, 410]

totalY1 = 0
totalY2 = 0

for i in year1:
  totalY1 += i
for i in year2:
  totalY2 += i

if totalY1 > totalY2:
  print("Maria saved more Year 1")
else:
  print("Maria saved more Year 2")