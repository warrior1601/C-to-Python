#include <iostream> // needed for cout and cin
#include <math.h> // needed for square root function

using namespace std; // needed for std 

/*
    Lets do something fun...
    Here we are going to solve quadratic equations
    This is a useful exercise as we explore userinput and can do more functions
*/

/*
    What is a quadratic equation
    It is a lie that models a simple and single curve often in he form of:
    f(x) = ax^2 + bx + c

    When I say solve the quardatic equation what do I mean?
    Well we are going to find the points when the line crosses the x-axis on a Cartesian plane
    .... what if the curve never crosses the x-axis? -- We will find that out as well
*/

float getUserInput(); // This function will return the user input
float checkInputValue(float anInput); // This function will allow the user to change an input value

int main()
{
    // 1. Let the user input a value for the variable a, b, & c
    //    In this example I am going to introduce a new type of number
    //    float - a float allows for a decimal value to be added to the integer ie 1.32
    
    float a = getUserInput();
    a = checkInputValue(a);

    // Now we do the same for b and c 
    // Lets think though.... if we are doing the same process would it be better to put it in a function
    // Putting repeating sections of code in functions reduces the size of the executable and makes debugging or updating code easier

    float b = getUserInput();
    b = checkInputValue(b);

    float c = getUserInput();
    c = checkInputValue(c);

    // cout << "a: " << a << "\t" << "b: " << b << "\t" << "c: " << c << endl; // If we want to display all three selected values do this

    // Lets do math now
    // To find the 0's of the simple curve we do the formula
    // x = -b (+/-) squareroot(b^2 - 4*a*c) all divided by 2*a
    // before we do maths lets remember a few things
    // We can not divide by 0, so if a is a the simple curve does not cross the x-axis
    // the second thing we must remember is that the square root of a negitive number is imaginary
    // we wont cover imaginary numbers today

    if(a == 0)
    {
        cout << "Equations is linear solve a different way" << endl;
        return 0; //This will exit the program  
    }

    float discriminant = ((b*b) - (4*a*c));
    if( discriminant< 0.0  )
    {
        cout << "Roots are imaginary" <<endl;
        return 0;
    }

    float firstZero = 0;
    float secondZero = 0;

    firstZero = (b*(-1) - sqrt(discriminant))/ 2*a;
    secondZero = (b*(-1) + sqrt(discriminant))/ 2*a;

    cout << "First Zero: " << firstZero << "\t" << "Second Zero: " << secondZero << endl;
    // check with desmos... https://www.desmos.com/calculator
    // I chose numbers a = 1 b = 2 c = -5
    // firstZero = -3.449 secondZero = 1.449
    // Now lets do the same thing in python and see how it looks I wont use as many comments though
    return 0;
}

float getUserInput()
{
    float aNumber(0);
    cout << "Input a number: ";
    cin >> aNumber; // This takes a series of keypresses and stores them in a buffer before storing them in the desired variable
    return (aNumber);
}

float checkInputValue(float input)
{   
    char reEnterStatus = 'y';
    while(reEnterStatus != 'n')
    {
        cout << "The value input was: " << input << endl;
        cout << "Do you want to change this value?   [y/n] ";
        cin >> reEnterStatus;
        if( reEnterStatus == 'y')
        {
            input = getUserInput();
        }
    } 
return (input);
}