prod = {'tomato': 'red', 'squash': 'yellow', 'potato': 'brown', 'avocado': 'green'}

def shwProd(prod):
  for i, j in prod.items():
    print("{}: {}".format(i,j))
    
shwProd(prod)

print(locals())
print(globals())