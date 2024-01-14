phone = input("Enter your 10-digit phone number: ")
try: 
  assert phone.isdigit()
  print("Good Phone Number")
except:
  raise ValueError ("You did not enter a valid phone number")
  