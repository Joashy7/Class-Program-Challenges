animals = ['dogs', 'cats', 'birds']
animals.append('rabbits')
print(animals)
print('\n')

newanimals = ['hamster','tutles','fishes']
animals.extend(newanimals)
print(animals)
print('\n')

allanimals = (animals + ['birds' , 'snakes'])
print(allanimals)
print('\n')

for i in range(3):
  print(allanimals)
