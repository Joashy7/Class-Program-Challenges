nums = (10, 20, 30, 40)
print(nums, '\n')

newNums = list(nums)
for i in range(len(nums)):
  newNums[i] += 10
print(newNums)