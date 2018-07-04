//
//  main.cpp
//  genericFunctions2
//
//  Created by Terezie Schaller on 7/4/18.
//  Copyright © 2018 Terezie Schaller. All rights reserved.
//
//  Udemy.com, Advanced C++
//  Class Templates with multiple data types
//  Section 3, Lecture 21
//  also demonstrates conditional operator ?:
//  Additional refence: https://www.tutorialspoint.com/cplusplus/cpp_conditional_operator.htm

#include <iostream>
#include <string>
using namespace std;

// max function for 2 generic types
template<typename T, typename U>
T max (T arg1, U arg2){
    return (arg1 > arg2) ? arg1 : arg2;
}

int main(int argc, const char * argv[]) {
    
    double n1 = 33.77;
    int n2 = 7;
    
    cout << max( n1, n2) << endl;
    
    string n3 = "neato";
    string n4 = "torpedo";

    cout << max(n3, n4) << endl;
    
    return 0;
}
