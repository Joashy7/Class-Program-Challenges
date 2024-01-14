name = input("What is your name?")
try:
  assert name.isalpha()
  print("Name is alphabetic")
except:
  raise ValueError("You did not enter a valid name.")
else:
  print("Your name", name)
finally:
  print("Thank You")

