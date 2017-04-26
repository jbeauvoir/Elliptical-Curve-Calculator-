// Author : Jacques L. Beauvoir
// Title  : Elliptic Curve Calculator
// File   : ellipticalCurves.cpp
// Descr. : Elliptic Curve is a plane algebraic curve defined by
// an equation in the form of :    y^2 = x^3 + ax + b. In this application,
// the equation being used is -> y^2 = x^3 + 225
// Copyright (c) 2017 Jacques L. Beauvoir  

#include<iostream>
#include<math.h>


float fCurve( float x )
{
  //  std::cout << "x " << x << std::endl;
  x = x*x*x;
  //std::cout << "x " << x << std::endl;
  x += 225;
  //std::cout << "x " << x << std::endl;
  x = sqrt(x);
  //std::cout << "x " << x << std::endl;
  return x;
}

int main()
{
  //  Curve *curve = new Curve(
  for( int i = 0; i < 500; i++ ) {
    int y = fCurve(i);
    if( (fCurve(i) - y) == 0 )
      std::cout << "( " << i << ", " << fCurve(i) << " )" << std::endl;
  }


  return 0;
  
}
