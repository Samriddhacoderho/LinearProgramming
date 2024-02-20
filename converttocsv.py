import csv

all_values = []

with open('lppoutput.txt', 'r') as f:
    lines = f.readlines()  
    for line in lines:
        values = line.strip().split(",")  
        all_values.extend(values)

with open('equations.csv', 'w') as csvfile:
    writer = csv.writer(csvfile)
    writer.writerow(['equation'])
    for x in all_values:
        writer.writerow([x])  
