letters_1 = {'D', 'E', 'F', 'G'}
letters_2 = {'H', 'I'}
letters_3 = letters_1.copy()

print(letters_1)
print(letters_3)

letters_1.add('H')
letters_1.add('I')
print(letters_1)

print(letters_1.difference(letters_2))

letters_1.remove('I')
print(letters_1)

print(len(letters_1))

letters_1.discard('E')
letters_1.discard('I')
print(letters_1)