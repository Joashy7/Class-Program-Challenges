tvA = 400
tvB = 530
weight = 65
shpCost = 1.25

storeA = tvA + (weight * shpCost)
storeB = tvB

if storeA < storeB:
  print("Store A charges less")
elif storeA > storeB:
  print("Store B charges less")