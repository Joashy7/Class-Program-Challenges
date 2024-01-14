class Student():
  courses = []

  def __init__(user):
    print("Welcome to the RCCD Student Portal")
    user.name = input("What is your name? ")
    user.ID = input("Enter your 4-digit ID: ")
    user.gender = input("What is your gender? ")

  def regis(user):
    num = int(input("\nHow many classes do you want to register for? (1-5): "))
    user.addCour(num)

  def addCour(user, num):
    for i in range(num):
      course = input("\nName of the class you want to add: ")
      user.courses.append(course)

  def printC(user):
    print("\nYou are enrolled in: ")
    for i in user.courses:
      print(i, "class")

  def greet(user):
    print("\nHello", user.name)

student1 = Student()
student1.regis()
student1.greet()
student1.printC()

student2 = Student()
student2.regis()
student2.greet()
student2.printC()

student3 = Student()
student3.regis()
student3.greet()
student3.printC()
