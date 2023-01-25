#include <iostream>

using namespace std;

int main()
{
    double weight, height, BMI;

    // Person 1
    cout << "Enter weight (in kg) for Person 1: ";
    cin >> weight;
    cout << "Enter height (in meters) for Person 1: ";
    cin >> height;
    BMI = weight / (height * height);
    cout << "BMI for Person 1 is: " << BMI << endl;

    if(BMI<18.5) 
    { 
         cout << ("underweight") << endl; 
    } 
else if(BMI>=18.5 && BMI<=24.9) 
    { 
        cout << ("normal weight") << endl; 
    } 
else if(BMI>=25 && BMI<=29.9) 
    { 
        cout << ("overweight") << endl; 
    } 
else if(BMI>=30 && BMI<=34.9) 
    { 
        cout << ("obese grade 1") << endl; 
    }     
else if(BMI>=35 && BMI<=39.9) 
    { 
        cout << ("obese grade 2") << endl; 
    } 
else if(BMI>40) 
    { 
        cout << ("obese grade 3") << endl; 
    } 
else 
{ 
    cout << ("invalid") << endl; 
     
} 

    // Person 2
    cout << "Enter weight (in kg) for Person 2: ";
    cin >> weight;
    cout << "Enter height (in meters) for Person 2: ";
    cin >> height;
    BMI = weight / (height * height);
    cout << "BMI for Person 2 is: " << BMI << endl;

    if(BMI<18.5) 
    { 
         cout << ("underweight") << endl; 
    } 
else if(BMI>=18.5 && BMI<=24.9) 
    { 
        cout << ("normal weight") << endl; 
    } 
else if(BMI>=25 && BMI<=29.9) 
    { 
        cout << ("overweight") << endl; 
    } 
else if(BMI>=30 && BMI<=34.9) 
    { 
        cout << ("obese grade 1") << endl; 
    }     
else if(BMI>=35 && BMI<=39.9) 
    { 
        cout << ("obese grade 2") << endl; 
    } 
else if(BMI>40) 
    { 
        cout << ("obese grade 3") << endl; 
    } 
else 
{ 
    cout << ("invalid") << endl; 
     
} 

    // Person 3
    cout << "Enter weight (in kg) for Person 3: ";
    cin >> weight;
    cout << "Enter height (in meters) for Person 3: ";
    cin >> height;
    BMI = weight / (height * height);
    cout << "BMI for Person 3 is: " << BMI << endl;
    
if(BMI<18.5) 
    { 
         cout << ("underweight") << endl; 
    } 
else if(BMI>=18.5 && BMI<=24.9) 
    { 
        cout << ("normal weight") << endl; 
    } 
else if(BMI>=25 && BMI<=29.9) 
    { 
        cout << ("overweight") << endl; 
    } 
else if(BMI>=30 && BMI<=34.9) 
    { 
        cout << ("obese grade 1") << endl; 
    }     
else if(BMI>=35 && BMI<=39.9) 
    { 
        cout << ("obese grade 2") << endl; 
    } 
else if(BMI>40) 
    { 
        cout << ("obese grade 3") << endl; 
    } 
else 
{ 
    cout << ("invalid") << endl; 
     
} 
    return 0;
}