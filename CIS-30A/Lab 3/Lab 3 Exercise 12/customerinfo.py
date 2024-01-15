def verName(name):
  if name.isalpha():
    print(name)
  else:
    input("Enter a valid name: ")

def verAge(age):
  if age.isdigit():
    print(age)
  else:
    input("Enter a valid age: ")

def verPhne(phone):
  if phone.isdigit():
    print(phone)
  else:
    input("Enter a valid phone number: ")

def verMari(status):
  if status.isalpha():
    print(status)
  else:
    input("Enter a valid marital status: ")

def strInfo(name, age, phone, status):
  file = open("customerinfo.txt", 'w')
  file.write(name + '\n')
  file.write(age + '\n')
  file.write(phone + '\n')
  file.write(status + '\n')
  file.close()
  print("Information Stored\n")

def prntInf():
  file = open("customerinfo.txt", 'r')
  print(file.read())
  file.close