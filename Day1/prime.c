

num = int(input("Enter a number: "))

# prime number is always greater than 1
if num <= 1:
    print(num, "is NOT a prime number")

else:
    is_prime = True   # assume prime

    i = 2
    while i * i <= num:   # only check till square root
        if num % i == 0:
            is_prime = False
            break
        i += 1

    if is_prime:
        print(num, "is a PRIME number")
    else:
        print(num, "is NOT a prime number")