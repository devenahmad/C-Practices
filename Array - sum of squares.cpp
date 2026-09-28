#include <iostream>
using namespace std;
main()
{
 int a[10];
 int sumOfSquares = 0 ;
 int i =0;
 cout << "Please enter the ten numbers one by one " << endl; 
 for (i = 0 ; i < 10 ; i++ ) 
 {
 	cin >> a [i]; 
  } 
for ( i = 0 ; i < 10 ; i ++ ) 
{
	sumOfSquares = sumOfSquares + a[ i ] * a[ i ] ; 
}
cout << "The sum of squares is" << sumOfSquares << endl; 
}
