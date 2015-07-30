square_sum = sum_square = 0

for i in range(1, 101):
    square_sum += i
    sum_square += i**2

square_sum *= square_sum

print(square_sum - sum_square)