#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void sortDescending(int&,int&,int&); //this function sorts in descending order
void swap(int&,int&); //this function will swap the numbers

int main()
{
  int numA, numB, numC;
  cout<<"Enter any three numbers: ";
  cin>>numA>>numB>>numC;

  sortDescending(numA, numB, numC);
  
  cout<<"From greatest to least, they are: ";
  cout<<numA<<","<<numB<<","<<numC<<endl;
  return 0;
}

void sortDescending(int &first, int &second, int &third)
{
  if( first < third)
  {
    swap(first,third);
  }
   if( first < second )
  {
    swap(first,second);
  }
  if ( second < third )
  {
    swap(second,third);
  }
}
//function use to swap
void swap(int &first, int &second)
{
  int temp = first;
  first = second;
  second = temp;
}
