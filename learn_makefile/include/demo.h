#ifndef DEMO 
#define DEMO

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>

using namespace std;


namespace demo
{

  class Point
  {
    /**
     * Point coordinate information
     */
    public:
      Point(const double x = 0, const double y = 0):_x(x), _y(y) {}
      Point(const Point& p) : _x( p.getX() ), _y( p.getY() ) {;}
      ~Point() {}
      const double getX() const {return _x;}
      const double getY() const {return _y;}
      void setX(const double x) {_x = x;}
      void setY(const double y) {_y = y;}
      bool operator < (const Point& p) const;

    protected:
      double _x, _y;
  };


};

#endif
