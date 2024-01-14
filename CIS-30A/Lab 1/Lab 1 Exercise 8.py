tablet = 1
laptop = 7
flatTV = 37
shpRate = 2.66

lbsTot = tablet + laptop + flatTV
print("Shipping Cost for Tablet: $" + str(tablet * shpRate))
print("Shipping Cost for Laptop: $" + str(laptop * shpRate))
print("Shipping Cost for 55\" TV: $" + str(flatTV * shpRate))
print("Shipping Cost for all electronics: $" + str(lbsTot * shpRate))