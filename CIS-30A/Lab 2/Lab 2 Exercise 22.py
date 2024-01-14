dictionary = {"Name": "John Doe", "ID": 999999, "Course": "CIS30A"}
print(dictionary)
print('\n')

dictionary.update({'Semester': 'Fall 2020'})
print(dictionary)
print('\n')

dictionary["Course"] = "Python"
print(dictionary)
print('\n')

dictionary.pop("ID")
print(dictionary)
print('\n')

dictionary.popitem()
print(dictionary)
print('\n')

dictionary.clear()
print(dictionary)
