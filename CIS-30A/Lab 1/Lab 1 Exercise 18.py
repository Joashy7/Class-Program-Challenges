price = 10
bought = 23
discount = 10

price *= bought
disPrce = price * (discount / 100.0)
price -= disPrce
print("Total Price: " + str(price))