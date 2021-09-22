#include <iostream>

using namespace std;

// Downdload extension c++ compile and run
// Should allow you to press "F6" to compile and see results in VScode termial

// I am going to start this little series with c++ and then move into python for you
// I am doing it this way becuse python is all about the indention layers
// With c++ intdention does not matter. what matters is the scope
// What scope means is things inside of the squiggle brckets { stuff here } 
// Things are not available outside of the scope they are made in. 
// Things can be passed into a scope or returned from a scope but this is special and often used



// In C++ everything is on a function the first function is the "main" function
// "int"  usually returns a 0 as the final line
// This is usefull when we talk about error codes but let not worry about this now
int main()
{
    /* 
    *  There are several data types list is on wikipedia but commom types are:
    *  int, float, double, char, and string 
    */
    int x = 0;  // int are interagers and have no decimal value. ie. 1,2,3,4....
    // here we create a variable x and set it equal to 0
    
    x = x+1; // now lets add 1 to the value of x
    cout << x << endl; // this will displa the value on the screen
    
    return 0;
}

// Congrats this is your first function