def dec_to_bin(n):
    bin = ""
    while n > 0:
        bin = str(n % 2) + bin
        n //= 2
    return bin

number = int(input("Enter a positive integer: "))
bin_number = dec_to_bin(number)
print("The binary representation of", number, "is", bin_number)