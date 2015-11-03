total = 0

for num in range(10001):
    current_num = num + int(str(num)[::-1])  # So I find this weird, we don't count the number itself,
    for i in range(50):
        if str(current_num) == str(current_num)[::-1]:
            break
        elif i == 49:
            total += 1;
        else:
            current_num += int(str(current_num)[::-1])
print(total)