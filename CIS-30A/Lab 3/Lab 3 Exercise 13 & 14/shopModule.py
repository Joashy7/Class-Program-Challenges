fileOut = open("reciept.txt", 'w')

tax = 0.0775


def total(cstomer):
  total = 0

  for i in cstomer:
    total += (i[1])

  print(cstomer)
  print("Subtotal: $ {:.2f}".format(total))

  ship = total * 0.05
  print("Shipping: $ {:.2f}".format(ship))

  taxCost = total * tax
  print("Shipping: $ {:.2f}".format(taxCost))

  ttlCost = total + taxCost + ship
  print("Shipping: $ {:.2f}".format(ttlCost))

  receipt(cstomer, total, ttlCost, ship)


def receipt(cust, sub, total, ship):
  fileOut.write("**** RECEIPT ****\n")
  fileOut.write("Item        Price\n")
  fileOut.write("----         -----\n")

  for i in cust:
    fileOut.write('{}  $ {}\n'.format(i[0], i[1]))

  fileOut.write('''
  -------------------------------
  Subtotal:    $ {}
  Shipping:    $ {:.2f}
  Tax:         $ {}
  Total:       $ {:.2f}
  -------------------------------
  Thank you for shopping with us...
  '''.format(sub, ship, tax * 100, total))

  fileOut.close()
  print("Your receipt has been printed in the receipt.txt file")
