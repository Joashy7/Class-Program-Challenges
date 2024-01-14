file = open("myfile.txt", 'w')
file.write("I am a student\n")
file.write("I am learning Python\n")

file = open("myfile.txt", 'r')
print(file.read())
file.seek(0)
print(len(file.readlines()))
file.seek(0)
word = 0
for line in file:
  word += len(line.split())

print(word)
file.close()

