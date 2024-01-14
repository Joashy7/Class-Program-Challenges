grades = [82, 91, 79, 63, 97]
sum = sum(grades)
len = int(len(grades))
grdeAvg = sum / len

if grdeAvg >= 90:
  print("Grade Average A: " + str(grdeAvg))
elif grdeAvg >= 80 and grdeAvg < 90:
  print("Grade Average B: " + str(grdeAvg))
elif grdeAvg >= 70 and grdeAvg < 80:
  print("Grade Average C: " + str(grdeAvg))
elif grdeAvg >= 60 and grdeAvg < 70:
  print("Grade Average D: " + str(grdeAvg))
else:
  print("Grade Average F: " + str(grdeAvg))