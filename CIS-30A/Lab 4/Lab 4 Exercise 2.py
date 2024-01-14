num = int(input("Enter any number: "))

if num > 0 and num < 11:
  print("Number", num)
else:
  raise Exception("Invalid Number!")