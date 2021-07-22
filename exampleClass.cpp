// exampleClass.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//Defining class
class Animal {
//access specifier - public can be accessed outside the class

private:
//data members
    string animalType;
    string category;
public:
//member function 
    void inputDetails() {
        cout << "Enter the animal type : ";
        cin >> animalType;
        cout << endl;
        cout << "Enter the animal category: ";
        cin >> category;
    }
    void displayDetails() {
        cout << "The animal type is : " << animalType << endl;
        cout << "The category is : " << category << endl;
    }
};


int main()
{
    Animal animObj, dogObj; //animObj is the instance of class Animal
    //animObj.animalType = "Wild"; //assigning value to data member of class Animal
    //animObj.category = "Carnivores";
    animObj.inputDetails();
    animObj.displayDetails();//calling member function of class Animal
    
    //dog object details
    dogObj.inputDetails();
    dogObj.displayDetails();

}

