// 1 - 100 output identify even numbers
// and 
// 1 - 100 output identify odd numbers

#include <iostream>
using namespace std;

//Printing even numbers
void evenNumbers(int p)
{
    int i;
    for (i = 1; i <= p; i++) {
        //if condition to chech even numbers
        if (i % 2 == 0)
            cout << i << " ";
    }
    cout << endl;
}

//Printing odd numbers.
void oddNumbers(int p)
{
    int i;
    for (i = 1; i <= p; i++) {
        //if statement to check for odd numbers
        if (i % 2 != 0)
            cout << i << " ";
    }
    cout << endl;
}

//Main function
int main()
{
    int P;
    
    cout << "Enter the max: ";
    cin >> P;

    cout << "Even numbers\n";
    evenNumbers(P);

    cout << "Odd numbers\n";
    oddNumbers(P);

    return 0;
}
