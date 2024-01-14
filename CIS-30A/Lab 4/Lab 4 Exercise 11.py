class School():
  def __init__(self, name):
    self.nameS = name
  def showS(self):
    print(self.nameS)

class Course(School):
  def __init__(self, x, name):
    super().__init__(x)
    self.nameC = name

  def showC(self):
    print(self.nameC)

class Room(Course):
  def __init__(self, x, y, num):
    super().__init__(x, y)
    self.numR = num

  def showR(self):
    print(self.numR)

s1 = Room("MVC", "Intro to Python", 16)

s1.showS()
s1.showC()
s1.showR()