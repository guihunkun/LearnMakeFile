#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <fstream>
#include <algorithm>

#include "demo.h"

using namespace std;

namespace demo
{
  bool Point::operator < (const Point& p) const
  {
  	double eps = 1e-10;
    double px = p.getX();
    double py = p.getY();
    if(fabs(px-_x) < eps)
    {
      return py < _y;
    } else {
      return px < _x;
    }
  }


};
