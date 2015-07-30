everything = list(range(2,150000))

for num in range(len(everything)):
    actual_num = everything[num]
    if actual_num:
        for test in range(num + actual_num, len(everything), actual_num):
            if everything[test] and everything[test] % actual_num == 0:
                everything[test] = 0

print([x for x in everything if x != 0][10000])