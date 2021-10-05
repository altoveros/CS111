#include box.h

int main()
{
  box arrayOfBoxes[3];
  int shippingPrices[3];
  int userLength, userWidth, userHeight, userWeight;
  string userAddress, userCity, userState, userZipCode;
  double totalCost;
  double costBoxOne;
  double costBoxTwo;
  double costBoxThree;
  
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
      getline(cin, userAddress); 

      cout << "Please enter the city of box '" << i+1 << "': ";
      getline(cin, userCity);     

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
