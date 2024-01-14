foodPrc = [9.99, 5.25, 2.75, 2.99, 5.25, 3.75]
i = 0
total = 0.0
while i < len(foodPrc):
  total += foodPrc[i]
  i += 1

print("Katie's Subtotal: $", round(total,2))