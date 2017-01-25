//
//  ControllerFile.cpp
//  SampleFirstStupidNotHelloWorldProject
//
//  Created by Farr, Aaron on 1/23/17.
//  Copyright © 2017 Farr, Aaron. All rights reserved.
//

#include <iostream>
#include "ControllerFile.h"


using namespace std;

void ControllerFile :: start()
{
    cout << "Words go here" << endl;
    int myAge = 17;
    cout << "I am " << myAge << " years old." << endl;
    cout << "\n";
    
    specialOutput();
    
}

void ControllerFile :: specialOutput()
{
    cout << "How old are you? " << endl;
    int yourAge;
    cin >> yourAge;
    cout << "oh, so you are " << yourAge << " years old!" << endl;
    string myName;
    cin.ignore();
    cout << "Type in your name" << endl;
    getline(cin, myName);
    cout << "You typed: " << myName << endl;
    
    cin >> myName >> yourAge;
    cout << "you typed: " << myName << " and " << yourAge << endl;
}
