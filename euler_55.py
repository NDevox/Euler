total = 0

for num in range(1,10001):  # loop to 10k (python doesn't include the last number)
    current_num = num + int(str(num)[::-1])  # skip the first iteration.
    for i in range(50):  # iterate 50 times!
        if str(current_num) == str(current_num)[::-1]:  # is it a palindrome?
            break  # yes, break the loop
        else:  
            current_num += int(str(current_num)[::-1])  # otherwise, add the reversed number.
    else:  # we reached the final iteration and no luck
        total += 1  # so add to the total of lychrels.
print(total)
