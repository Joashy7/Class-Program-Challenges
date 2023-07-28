import Finance
user = Finance.User()
bank = Finance.TimeDat()

print("Welcome to your Personal Financing App")
loop = input("Continue by Inputting 1 (Exit with 0)")
while (loop != 0):
  new = input("Are you a new User(Y or N)?")
  if new == 'Y' or new == 'y':
    user.fileInt()
  else:
    user.fileAsk()

  try:
    assert user.checkF(user.userN, user.passW) == 0
  except AssertionError:
    print("You do not have an account registered, rerun program.")
    
  lasNnex = input("Input 0 to enter previous 3 months of information or\nInupt 1 to enter next 3 months of information")
  if lasNnex == 0:
    bank.bnkALas()
    print('\n')
    bank.bnkSlas()
  else:
    bank.bnkANex()
    print('\n')
    bank.bnkSNex()
  loop = input("Continue by Inputting 1 (Exit with 0)")

