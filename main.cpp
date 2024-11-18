//
//  main.cpp
//  Zelda Reference Recursion
//
//  Created by Zachary Nesvacil on 11/11/24.
//

#include <iostream>
#include "TriangleNumberCalculator.hpp"

TriangleNumberCalculator Calc;
using namespace std;
int main() {
    TriangleNumberCalculator calculator;

    cout << "Values:" << endl;
    
    cout << calculator.value(1) <<endl; // 1
    cout << calculator.value(2) <<endl; // 3
    cout << calculator.value(20) <<endl; // 210
    cout << calculator.value(0) <<endl; // 0
    cout << calculator.value(-2) <<endl; // -3
    cout << calculator.value(-20) <<endl; // -210
    
    cout << "Addition:" << endl;
    cout << calculator.add(1, 1) <<endl; // 2
    cout << calculator.add(2, 3) <<endl; // 9
    cout << calculator.add(3, 2) <<endl; // 9
    cout << calculator.add(-5, 2) <<endl; // -12
    cout << calculator.add(-2, 5) <<endl; // 12
    cout << calculator.add(0, 2) <<endl; // 3
    cout << calculator.add(2, 0) <<endl; // 3
    cout << calculator.add(0, 0) <<endl; // 0

    cout << "Subtraction:" << endl;
    cout << calculator.subtract(1, 1) <<endl; // 0
    cout << calculator.subtract(2, 3) <<endl; // -3
    cout << calculator.subtract(3, 2) <<endl; // 3
    cout << calculator.subtract(-5, 2) <<endl; // -18
    cout << calculator.subtract(2, -5) <<endl; // 18
    cout << calculator.subtract(0, 2) <<endl; // -3
    cout << calculator.subtract(2, 0) <<endl; // 3
    cout << calculator.subtract(0, 0) <<endl; // 0
    return 0;
}
