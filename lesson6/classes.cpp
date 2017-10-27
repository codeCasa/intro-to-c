#include <iostream>

//avoid naming collision within libraries
using namespace std;

// macro used to define PI
# define PI 3.14159265358979323846  /* pi */


class Shape{
public:
  Shape(){/*Default Constructor*/}
  Shape(int numberOfSides, int sideLength){
    /*Overloaded Constructor*/
    this->numberOfSides = numberOfSides;
    this->sideLength = sideLength;
  }
  ~Shape(){/*Deconstructor*/}
  /*virtual methods setup a template for child classes to implement*/
  virtual double getArea() = 0;
  virtual double getParameter() = 0;
  virtual void toString() = 0;
  void setSideLength(int length){
    sideLength = length;
  }
  void setNumberOfSides(int numberOfSides){
    this->numberOfSides = numberOfSides;
  }
protected:
  /*Visible to child classes; hidden to callers*/
  int numberOfSides;
  int sideLength;
private:
  /*Only Visible tp declared class*/
};

class Circle: public Shape{
public:
  Circle(int radius){
    sideLength =radius;
  }

  virtual double getArea(){
    return sideLength*sideLength*PI;
  }

  double getCircumference(){
    return 2*sideLength*PI;
  }

  virtual double getParameter(){
    return getCircumference();
  }

  virtual void toString(){
    cout << "This Circle has a radius of "<<sideLength<<", an area of "<<getArea()<<", and a circumference of "<<getCircumference()<< '\n';
  }
};

class Square: public Shape{
public:
  Square(int sideLength){
    this->numberOfSides=4;
    this->sideLength = sideLength;
  }

  virtual double getArea(){
    return sideLength*sideLength;
  }

  virtual double getParameter(){
    return 4*sideLength;
  }

  virtual void toString(){
    cout << "This Square has a radius of "<<sideLength<<", an area of "<<getArea()<<", and a parameter of "<<getParameter()<< '\n';
  }
};

int main(int argc, char const *argv[]) {
  /* code */
  Square sq(5);
  Square *sq1 = new Square(8);
  Circle c(4);
  Shape *cir = new Circle(16);
  Shape** arrayOfShape = new Shape*[4];
  arrayOfShape[0] = &sq;
  arrayOfShape[1] = sq1;
  arrayOfShape[2] = &c;
  arrayOfShape[3] = cir;
  for (int i = 0; i < 4; i++) {
    arrayOfShape[i]->toString();//arrow notation deferences reference type variables
  }
  cout<<"----------------------------------------\n";
  // dot notation is only used for non-referenced variables
  c.toString();
  //same as above
  (*sq1).toString();
  (&sq)->toString();
  return 0;
}
