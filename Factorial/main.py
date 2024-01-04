
def main(number):
    if number <=1:
        return 1
    else:
        return number*main(number-1)


if __name__ == '__main__':
    number = 10
    result = main(number)
    print(f"Factorial of {number} is {result} ")