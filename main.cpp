#include <iostream>
using namespace std;

bool leapYear(int x){
  bool leap= false;
  if(x%4==0){
    if(x%100==0){
      if(x%400==0){
        leap= true;
      }
      leap= false;
    }
    leap= true;
  }
  return leap;
}
int main(){
  int year;
  cout<<"Enter the year you want to check: ";
  cin>>year;
  cout<<"Is the given year a leap year? ";
  if(leapYear(year))
    cout <<"True";
  else
    cout<<"False";
  return 0;
}