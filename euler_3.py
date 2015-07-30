import math

target = 600851475143

max = round(math.sqrt(600851475143)) + 1

everything = list(range(2, max))

for num in range(len(everything)):
    actual_num = everything[num]
    if actual_num:
        for test in range(num + actual_num, len(everything), actual_num):
            if everything[test] and everything[test] % actual_num == 0:
                everything[test] = 0

primes = [x for x in everything if x != 0]

while target not in primes:
    for prime in primes:
        if target % prime == 0:
            target //= prime
            break

print(target)