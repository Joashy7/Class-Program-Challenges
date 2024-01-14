livLen = int(18)
livWid = int(20)
masLen = int(15)
masWid = int(12)
kitLen = int(14)
kitWid = int(12)
costSqr = float(4.57)

livArea = livLen * livWid
masArea = masLen * masWid
kitArea = kitLen * kitWid

print("The Livingroom will cost $" + str(livArea * costSqr) + " for the whole floor")
print("The Master Bedroom, will cost $" + str(masArea * costSqr) + " for the whole floor")
print("The Kitchen will cost $" + str(kitArea * costSqr) + " for the whole floor")