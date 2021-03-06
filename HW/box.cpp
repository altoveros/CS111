#include box.h

box::box()
{
  length = 0;
  width = 0;
  height = 0;
  weight = 0;
  address = " ";
  city = " ";
  state = " ";
  zipCode = " ";
}

box::box(int Length, int Width, int Height, int Weight,
         string Address, string City, string State, string ZipCode)
{
  length = Length;
  width = Width;
  height = Height;
  weight = Weight;
  address = Address;
  city = City;
  state = State;
  zipCode = ZipCode;
}

int box::getLength(){}
void box::setLength(int uLength)
{
  length = uLength;
}
int box::getWidth(){}
void box::setWidth(int uWidth)
{
  width = uWidth;
}

int box::getHeight(){}
void box::setHeight(int uHeight)
{
  height = uHeight;
}

int box::getWeight(){}
void box::setWeight(int uWeight)
{
  weight = uWeight;
}

string box::getAddress(){}
void box::setAddress(int uAddress)
{
  address = uAddress;
}

string box::getCity(){}
void box::setCity(int uCity)
{
  city = uCity;
}
string box::getState(){}
void box::setState(int uState)
{
  state = uState;
}

string box::getZipCode(){}
void box::setZipCode(int uZipCode)
{
  zipCode = uZipCode;
}

double box::calcShippingPrice()
{
  double shippingPrice;
  shippingPrice = (((length + width + height) * .50) + (weight * 1.00));
  return shippingPrice;
}

void box::displayInfo(int shippingPrice)
{
  cout << setw(20) << left << "Length: " << length;
  cout << setw(20) << left << "Width: " << width;
  cout << setw(20) << left << "Height: " << height;
  cout << setw(20) << left << "Address: " << address;
  cout << setw(20) << left << "City: " << city;
  cout << setw(20) << left << "State: " << state;
  cout << setw(20) << left << "Zip Code: " << zipCode;
  cout << setw(20) << left << "Shipping Cost: " << shippingPrice;
}
