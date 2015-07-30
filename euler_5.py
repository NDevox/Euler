start = 2520

divisors = [11,12,13,14,15,16,17,18,19]
divisible = False
while not divisible:
    for divisor in divisors:
        if start % divisor != 0:
            start += 20
            break
    else:
        divisible = True
        print(start)
