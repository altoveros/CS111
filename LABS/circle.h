#ifndef CIRCLE_H
#define CIRCLE_H

class circle
{
 private:

  double radius;

 public:
  void setRadius(double passedR);
  double calcArea();
  double getRadius();
  circle();

  circle(double passedR);

};
#endif

