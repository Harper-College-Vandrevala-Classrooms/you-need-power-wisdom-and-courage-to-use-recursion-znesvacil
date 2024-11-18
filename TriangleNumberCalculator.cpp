//
//  TriangleNumberCalculator.cpp
//  Zelda Reference Recursion
//
//  Created by Zachary Nesvacil on 11/11/24.
//

#include "TriangleNumberCalculator.hpp"

int TriangleNumberCalculator::value(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n > 0)
    {
        return n + value(n-1);
    }
    else
    {
        return n + value(n+1);
    }
}

int TriangleNumberCalculator::add(int n, int m)
{
    if (n == 0) {
        m = value(m);
        return m;
    }
    
    if (m == 0) {
        n = value(n);
        return n;
    }
    else {
        n = value(n);
        
        m = value(m);
        
        return n + m;
    }
}

int TriangleNumberCalculator::subtract(int n, int m)
{
    if (n == 0) {
        m = value(m);
        return -m;
    }
    
    if (m == 0) {
        n = value(n);
        return n;
    }
    else {
        n = value(n);
        
        m = value(m);
        
        return n - m;
    }
}
