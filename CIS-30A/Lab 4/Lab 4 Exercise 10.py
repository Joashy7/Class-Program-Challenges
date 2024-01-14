class Person():
  def __init__(self, name):
    self.name = name
class Employee(Person):
  def __init__(self, i, j):
    super().__init__(i)
    self.ID = j

emp1 = Employee("Joash", 1028)
print ("Employee 1 Name: {}\nEmployee 1 ID: {}".format(emp1.name,emp1.ID))


