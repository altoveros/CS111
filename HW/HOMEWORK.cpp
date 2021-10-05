#include <iostream>
#include <iomanip>

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

//-------------------------------------------------------------------------------
// Class File:
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
//-------------------------------------------------------------------------------
// Client File:

int main()
{
  box arrayOfBoxes[3];
  int shippingPrices[3];
  int userLength, userWidth, userHeight, userWeight;
  string userAddress, userCity, userState, userZipCode;
  
  for(int i = 0; i < 3; i++)
    {
      cout << "\n";
      
      cout << "Please enter the length of box '" << i+1 << "': ";
      cin >> userLength;
      if(userLength <= 0)
	userLength = 0;
      
      cout << "Please enter the width of box '" << i+1 << "': ";
      cin >> userWidth;
      if(userWidth <= 0)
	userWidth = 0;
      
      cout << "Please enter the height of box '" << i+1 << "': ";
      cin >> userHeight;
      if(userHeight <= 0)
	userHeight = 0;
      
      cout << "Please enter the weight of box '" << i+1 << "': ";
      cin >> userWeight;
      if(userWeight <= 0)
	userWeight = 0;
      
      cout << "Please enter the address of box '" << i+1 << "': ";
      cin >> userAddress;    // FIX FOR GETLINE
      
      cout << "Please enter the city of box '" << i+1 << "': ";
      cin >> userCity;       // FIX FOR GETLINE
      
      cout << "Please enter the state of box '" << i+1 << "': ";
      cin >> userState;      // CHECK FOR MAX OF 2 CHARS
      
      cout << "Please enter the zip code of box '" << i+1 << "': ";
      cin >> userZipCode;    // CHECK FOR MAX OF 5 CHARS
      
      box[i].setLength(userLength);
      box[i].setWidth(userWidth);
      box[i].setHeight(userHeight);
      box[i].setWeight(userWeight);
      box[i].setAddress(userAddress);
      box[i].setCity(userCity);
      box[i].setState(userState);
      box[i].setZipCode(userZipCode);
    }
  
  return 0;
}

//----------------------------------------------------------------------------
