#include <iostream>

using namespace std;
//Let have a more useful function
// What is going n here is that the function will be passed an "int"
// and return an "int"
int usefulFunction(int x);

int main()
{

    int aNumber = 0; // create a number
    aNumber = usefulFunction(0);  // call the function
    cout << "aNumber is now: "<< aNumber << endl; // dispaly the results
    return 0;
}

int usefulFunction(int x)  // function definition
{
    x = x +5;  // add 5 to the number
    return x;  // return the number

    // important note you can only return 1 item from a function
    // this item can be a pointer to a data stucture or an object 
}