import csv
from pathlib import Path

BASE_DIR = Path(__file__).resolve().parent
INPUT_FILE = BASE_DIR / "data" / "raw" / "lppoutput.txt"
OUTPUT_FILE = BASE_DIR / "data" / "processed" / "equations.csv"

OUTPUT_FILE.parent.mkdir(parents=True, exist_ok=True)

all_values = []

with INPUT_FILE.open('r') as f:
    lines = f.readlines()  
    for line in lines:
        values = line.strip().split(",")  
        all_values.extend(values)

with OUTPUT_FILE.open('w', newline='') as csvfile:
    writer = csv.writer(csvfile)
    writer.writerow(['equation'])
    for x in all_values:
        writer.writerow([x])  
