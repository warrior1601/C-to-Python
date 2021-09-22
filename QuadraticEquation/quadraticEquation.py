
import math  # this is for sqrt function


def getUserInput():
    number = float(input("Enter a number:"))
    return number


def checkInputValue(aNumber):
    question = 'y'
    while question[0] != 'n':
        print('The value input was: {}'.format(aNumber))
        print("Do you want to change this value?   [y/n] ")
        question = input()
        if question[0] == 'y':
            aNumber = getUserInput()
    return (aNumber)


a = getUserInput()
a = checkInputValue(a)
b = getUserInput()
b = checkInputValue(b)
c = getUserInput()
c = checkInputValue(c)

print('a ={0}  b = {1} c = {2}'.format(a, b, c))

# calculate the discriminant
# b*b -4*a*c
discriminant = b*b - 4*a*c

if discriminant < 0.0:
    print("Imaginary roots")
    exit()
if a == 0.0:
    print("a is 0 can't divide by zero")
    exit()
# do math now

firstZero = (-b - (math.sqrt(discriminant))) / (2*a)
secondZero = (-b + (math.sqrt(discriminant))) / (2*a)

print('The Zeros are {0} and {1}'.format(firstZero, secondZero))
