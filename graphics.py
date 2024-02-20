import numpy as np
import pandas as pd
import matplotlib.pyplot as plt

df=pd.read_csv("equations.csv")
df.equation=df.equation.astype('int')
a,b,c,d,e,f,g,h,i,j,k,l=df['equation'][0],df['equation'][1],df['equation'][2],df['equation'][3],df['equation'][4],df['equation'][5],df['equation'][6],df['equation'][7],df['equation'][8],df['equation'][9],df['equation'][10],df['equation'][11]
slope = [-a/b, -d/e, -g/h, -j/k]
intercepts = [-c/b, -f/e, -i/h, -l/k]
x_values = np.linspace(-50, 50, 400)
y_value1=slope[0]*x_values +intercepts[0]
y_value2=slope[1]*x_values +intercepts[1]
y_value3=slope[2]*x_values +intercepts[2]
y_value4=slope[3]*x_values +intercepts[3]


plt.figure(figsize=(10, 6))
plt.plot(x_values,y_value1,label='Line 1')
plt.plot(x_values,y_value2,label='Line 2')
plt.plot(x_values,y_value3,label='Line 3')
plt.plot(x_values,y_value4,label='Line 4')



plt.grid(True)
plt.legend()
plt.axhline(0, color='black', linewidth=0.5)
plt.axvline(0, color='black', linewidth=0.5)
plt.show()
