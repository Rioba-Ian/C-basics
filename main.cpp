#include <iostream>

using namespace std;

int main() {
  float num1, num2, num3, num4,sum,average;

  cout << "Enter the 1st Number:";
  cin >> num1;

  cout <<"enter the 2nd Number:";
  cin >> num2;

  cout <<"Enter the 3rd Number:";
  cin >> num3;

  cout << " Enter the 4th number:";
  cin >> num4;
  
  sum=num1+num2+num3+num4;
  cout <<"Your sum is:"<<sum<<endl;
  //average is the sum of variables divided by the number of variables
  average = sum/4;
  cout<<"Your Average is:"<<average;


}