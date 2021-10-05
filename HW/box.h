#include <string>

using namespace std;

//---------------------------------------------------------------------------------
// .H File:

class box
{
 private:
  int length;
  int width;
  int height;
  int weight;
  string address;
  string city;
  string state;
  string zipCode;

 public:
  box();

  box(int Length, int Width, int Height, int Weight,
      string Address, string City, string State, string ZipCode);

  int getLength();
  void setLength(int uLength);

  int getWidth();
  void setWidth(int uWidth);

  int getHeight();
  void setHeight(int uHeight);

  int getWeight();
  void setWeight(int uWeight);

  string getAddress();
  void setAddress(int uAddress);

  string getCity();
  void setCity(int uCity);

  string getState();
  void setState(int uState);

  string getZipCode();
  void setZipCode(int uZipCode);

  double calcShippingPrice();
  void displayInfo(int shippingPrice);

};
