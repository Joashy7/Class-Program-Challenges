import customerinfo

print("Please answer the following questions")

name = input("Enter your name: ")
age = input("Enter your age: ")
phone = input("Enter your phone number: ")
status = input("Enter your marital status: ")

customerinfo.verName(name)
customerinfo.verAge(age)
customerinfo.verPhne(phone)
customerinfo.verMari(status)

customerinfo.strInfo(name, age, phone, status)
customerinfo.prntInf()

print("Thank you!")