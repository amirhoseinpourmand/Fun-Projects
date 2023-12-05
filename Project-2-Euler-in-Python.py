def even(n):
    if n % 2 == 0:
        return True
    else:
        return False


first = 1
second = 2

sum = 0

while first < 4000000:
    # print("my first number is :", first)
    if even(first):
        # print("oh it is even!")
        sum = sum + first
        # print("---> now the sum is ", sum)
    new = first + second
    first = second
    second = new

print(sum)