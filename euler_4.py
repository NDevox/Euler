largest = 0

for x in range(100,1000):
    for y in range(x, 1000):
        num = x * y
        if num > largest and str(num) == str(num)[::-1]:
            largest = num

print(largest)