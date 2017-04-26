// Author      : Jacques L. Beauvoir
// Title       : Elliptical Curve Point Calculator
// File        : pointCalc.cpp
// Description : This program will calculate points on an elliptical curve
// given two pre-existing points.
// Copyright (c) 2017 Jacques L. Beauvoir



#include <iostream>

// P3 = P2 + P1 -> inserting all the points means both sides will be equal


int lambda( int x1, int y1, int x2, int y2)
{ // lamda = y2-y1/x2-x1;

  int y = y2-y1;
  int x = x2-x1;
  std::cout << "( " << y << "/" << x << " )" << std::endl;
  return y/x;
  
}

int xThree( int lammda, int x1, int x2 )
{// x^3 = lammda^2 - x1 - x2;
  int x3 = (lammda*lammda) - x1 - x2;
  return x3;
}

int yThree( int lammda, int x1, int x3, int y1 )
{// y^3 = lammda * (x1-x3) - y1;
  int y3 = lammda * (x1-x3) - y1;
  return y3;
}

  
int main()
{
  //  std::cout << "Input 2 points: (x1,y1) and (x2,y2) respectively. " << std::endl;
  //  int x1, y1, x2, y2;
  //  std::cin >> x1, y1, x2, y2;
  
  //  int lamb = lambda( x1, y1, x2, y2 );
  int lamb = lambda( 0, 4, 2, -5);
  
  //  int x3 = xThree( lamb, x1, x2 );
  int x3 = xThree( lamb, 0, 2 );
  std::cout << " x3 = " << x3 << std::endl;

  // int y3 = yThree( lamb, x1, x3, y1 );
  int y3 = yThree( lamb, 0, x3, 4 );
  std::cout << " y3 = " << y3 << std::endl;
  
  std::cout << "New point is " << "( " << x3 << ", " << y3 << " )" << std::endl;
  return 0;


}
