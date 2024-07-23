import random

for i in range(9, 11):
    A = random.randint(-pow(10, 30), -pow(10, 25))
    B = random.randint(pow(10, 25), pow(10, 30))
    C = A+B
    with open(f"./{i}.in", 'w') as f:
        f.write(f"{A}\n")
        f.write(f"{B}\n")
    with open(f"./{i}.out", 'w') as f:
        f.write(f"{C}\n")

        