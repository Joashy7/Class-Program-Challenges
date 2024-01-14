import pandas as pd
import matplotlib.pyplot as plt

df = pd.read_csv('marvel.csv')
print(df)

print("Lowest US Gross Revenue: ", df.Gross_us.min())
print("Lowest US Gross Revenue: ", df[df.Gross_us == df.Gross_us.min()])

print("Highest US Gross Revenue: ", df.Gross_us.max())
print("Highesr US Gross Revenue: ", df[df.Gross_us == df.Gross_us.max()])

df.plot(x = 'Movie', y = 'Gross_us', kind = 'bar')
plt.show()