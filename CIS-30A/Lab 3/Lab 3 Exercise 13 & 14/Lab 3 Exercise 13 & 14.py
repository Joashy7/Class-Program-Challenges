import shopModule

list = {1:('Laptop', 299.99), 2:('Gaming PC', 1029.99), 3:('TV', 249.99), 4:('XBOX One', 219.99), 5:('Nintendo Switch', 279.99)}

print("Here is the list of products:")

for i, j in list.items():
  print('{}) {}: $ {}'.format(i, j[0], j[1]))

usrList = []

choose = 'Y'
while choose == 'Y':
  choice = int(input("\nWhat is your choice: "))

  if choice in list.keys():
    usrList.append((list[choice][0], list[choice][1]))
  else: 
    print("Invalid Choice")

  choose = input("Keep choosing? (Y for yes, N for no): ").upper()

shopModule.total(usrList)