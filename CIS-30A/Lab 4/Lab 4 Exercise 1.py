age = int(input("Enter your age: "))

try: 
  assert age <= 1 or age >= 120
  print("Age out of range, assert condition is true.")
except AssertionError:
  print("Assert condition is false. Age in range 1 - 120. Assertion error occurs.")

print("Your age is", age)
  