#include <iostream>

using namespace std;
// Here I define a function for my program
// Notice the function has no squiggle brackets like the main function does
void myFirstFunctionCall();

int main()
{
    myFirstFunctionCall();  // to call a function just type its name with the open/close brakets
    return 0;
}

// What does this function do though.....
// We must define it
void myFirstFunctionCall() // notice there is no ";" semicolon here
{
    cout << "My First Function Call" << endl;
}