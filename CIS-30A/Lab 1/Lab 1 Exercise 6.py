data = int(input("Enter the amount of data needed in gigabytes: "))
if data > 750:
  extra = data - 750
else:
  extra = 0
total = 100 + (extra * 5)
print("Total cost for month for your data storage is $" + str(total))