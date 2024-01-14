#Finished Bank Info
class BankInf():
  def __init__(self):
    self.bankName = None
    self.budget = []
    self.income = []
    self.savings = []
    self.expense = []

  #Checks if the user input is a number
  def chckInt(self, num):
    try:
      assert(num.isdigit()) 
    except AssertionError:
      print("Invalid Input, Requires Number")
      return 0

  #Prompts User for the Last 3 Months of Information
  def bnkALas(self):
    for i in reversed(range(0, 3)):
      temp = input('\n' + str(i + 1) + " Month Previous Budget:")
      while self.chckInt(temp) == 0:
        temp = input(str(i + 1) + " Month Previous Budget:")
      self.budget.insert(0,temp)

      temp = input('\n' + str(i + 1) + " Month Previous Income:")
      while self.chckInt(temp) == 0:
        temp = input(str(i + 1) + " Month Previous Income:")
      self.income.insert(0,temp)

      temp = input('\n' + str(i + 1) + " Month Previous Savings:")
      while self.chckInt(temp) == 0:
        temp = input(str(i + 1) + " Month Previous Savings:")
      self.savings.insert(0,temp)
      
      temp = input('\n' + str(i + 1) + " Month Previous Expenses:")
      while self.chckInt(temp) == 0:
        temp = input(str(i) + " Month Previous Expenses:")
      self.expense.insert(0,temp)

  #Prints Last 3 Months of Information
  def bnkSLas(self):
    print("Last 3 Months of Information")
    print("Budget(Last 3 Months):", self.budget)
    print("Income(Last 3 Months):", self.income)
    print("Savings(Last 3 Months):", self.savings)
    print("Exepenses(Last 3 Months):", self.expense)
    '''
    for i in reversed(range(0,3)):
      print(str(i + 1), "Month Previous Budget:",  self.budget[i])
      print(str(i + 1), "Month Previous Income:",  self.income[i])
      print(str(i + 1), "Month Previous Savings:",  self.savings[i])
      print(str(i + 1), "Month Previous Expenses:",  self.expense[i])
    '''

  #Prompts User for the Next 3 Months of Information
  def bnkANex(self):
    for i in range (3, 7):
      temp = input('\n' + str(3 - i + 1) + " Month Ahead Budget:")
      while self.chckInt(temp) == 0:
        temp = input(str(3 - i + 1) + " Month Ahead Budget:")
      self.budget.insert(3, temp)

      temp = input('\n' + str(3 - i + 1) + " Month Ahead Income:")
      while self.chckInt(temp) == 0:
        temp = input(str(3 - i + 1) + " Month Ahead Income")
      self.income.insert(3, temp)

      temp = input('\n' + str(3 - i + 1) + " Month Ahead Savings:")
      while self.chckInt(temp) == 0:
        temp = input(str(3 - i + 1) + " Month Ahead Savings:")
      self.savings.insert(3, temp)
      
      temp = input('\n' + str(3 - i + 1) + " Month Ahead Expenses:")
      while self.chckInt(temp) == 0:
        temp = input(str(3 - i + 1) + " Month Ahead Expenses:")
      self.expense.insert(3, temp)

  #Prints Next 3 Months of Information
  def bnkSNex(self):
    print("Next 3 Months of Information")
    print("Budget(Next 3 Months):", self.budget)
    print("Income(Next 3 Months):", self.income)
    print("Savings(Next 3 Months):", self.savings)
    print("Exepenses(Next 3 Months):", self.expense)
    '''
    for i in range(3, 7):
      print("Month", 3 - i + 1, "Budget:",  self.budget[i])
      print("Month", 3 - i + 1, "Income:",  self.income[i])
      print("Month", 3 - i + 1, "Savings:",  self.savings[i])
      print("Month", 3 - i + 1, "Expenses:",  self.expense[i])
    '''

class TimeDat(BankInf):
  def __init__(self):
    super().__init__()

  def modLast(self, num):
    print("Modifying Info for Previous Month", num)
    temp = input('\n' + "New Budget for Previous Month " + str(num))
    while self.chckInt(temp) == 0:
      temp = input("New Budget for Previous Month " + str(num))
    self.budget[num] = temp

    temp = input('\n' + "New Income for Previous Month " + str(num))
    while self.chckInt(temp) == 0:
      temp = input("New Income for Previous Month " + str(num))
    self.income[num] = temp

    temp = input('\n' + "New Savings for Previous Month " + str(num))
    while self.chckInt(temp) == 0:
      temp = input('\n' + "New Savings for Previous Month " + str(num))
    self.savings[num] = temp
    
    temp = input('\n' + "New Expenses for Previous Month " + str(num))
    while self.chckInt(temp) == 0:
      temp = input('\n' + "New Expenses for Previous Month " + str(num))
    self.expense[num] = temp

  def modNext(self, num):
    print("Modifying Info for Next Month", num)
    temp = input('\n' + "New Budget for Next Month " + str(num))
    while self.chckInt(temp) == 0:
      temp = input("New Budget for Next Month " + str(num))
    self.budget[num + 3] = temp

    temp = input('\n' + "New Income for Next Month " + str(num))
    while self.chckInt(temp) == 0:
      temp = input("New Income for Next Month " + str(num))
    self.income[num + 3] = temp

    temp = input('\n' + "New Savings for Next Month " + str(num))
    while self.chckInt(temp) == 0:
      temp = input('\n' + "New Savings for Next Month " + str(num))
    self.savings[num + 3] = temp
    
    temp = input('\n' + "New Expenses for Next Month " + str(num))
    while self.chckInt(temp) == 0:
      temp = input('\n' + "New Expenses for Next Month " + str(num))
    self.expense[num + 3] = temp


#Finished Class User
class User():
  def __init__(self):
    self.name = None
    self.userN = None
    self.passW = None

  #Initializes the username and password for one user
  def fileInt(self):
    userN = input("New Username: ")
    passW = input("New Password: ")
    fileLog = open("login.txt", 'w')
    fileLog.write(userN + ' ')
    fileLog.write(passW)
    fileLog.close()

  #Asks user to input login
  def fileAsk(self):
    self.userN = input("Username: ")
    self.passW = input("Password: ")

  #Checks if login matches whats entered on file
  def checkF(self, userN, passW):
    fileLog = open("login.txt", 'r')
    temp = fileLog.readline()
    list = temp.split(' ', 1)
    
    if(self.userN == list[0] and self.passW == list[1]):
      check = 1
    else:
      check = 0
    fileLog.close()
    return check

  #Removes the contents of the file
  def removeF(self):
    fileDel = open("login.txt", 'w')
    fileDel.close()