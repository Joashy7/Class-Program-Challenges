carScre = {92, 87, 93, 88}
raqScre = {88, 92, 81, 97}
print("Carolina's Scores:", carScre)
print("Raquel's Scores:", raqScre)

print("\nDifference of Each Set")
print(carScre.difference(raqScre))
print(raqScre.difference(carScre))
print(carScre.symmetric_difference(raqScre))
print(raqScre.symmetric_difference(carScre))

print("\nIntersection of Sets")
print(carScre.intersection(raqScre))

print("\nScores without Smallest Value")
carScre.remove(min(carScre))
print(carScre)
raqScre.remove(min(raqScre))
print(raqScre)