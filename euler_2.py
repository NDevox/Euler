before = during = after = 1

total = 0

while after < 4000000:
    if after % 2 == 0:
        total += after

    during = after
    after += before
    before = during

print(total)