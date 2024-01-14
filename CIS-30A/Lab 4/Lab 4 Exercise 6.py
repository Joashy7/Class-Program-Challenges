class Vehicle():
  def __init__(self, make, model, color, year, price):
    self.make = make
    self.model = model
    self.color = color
    self.year = year
    self.price = price

  def output(self):
    print("Car Descriptions")
    print("Make:", self.make)
    print("Model:",  self.model)
    print("Color:", self.color)
    print("Year Release:", self.year)
    print("Price:", self.price)

toyota = Vehicle("Toyota", "Corrola", "Blue", 2020, 20000)
honda = Vehicle("Honda", "Civic", "Red", 2022, 25000)

toyota.output()
honda.output()