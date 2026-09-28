#include <iostream>
using namespace std;
main()
{
		int age1, age2, age3, age4, age5, age6, age7, age8, age9, age10;
		int TotalAge;
		int AverageAge;
		cout<<"Please enter the age of Student 1 = ";
		cin>>age1;
		cout<<"\n\nPlease enter the age of Student 2 = ";
		cin>>age2;
		cout<<"\n\nPlease enter the age of Student 3 = ";
		cin>>age3;
		cout<<"\n\nPlease enter the age of Student 4 = ";
		cin>>age4;
		cout<<"\n\nPlease enter the age of Student 5 = ";
		cin>>age5;
		cout<<"\n\nPlease enter the age of Student 6 = ";
		cin>>age6;
		cout<<"\n\nPlease enter the age of Student 7 = ";
		cin>>age7;
		cout<<"\n\nPlease enter the age of Student 8 = ";
		cin>>age8;
		cout<<"\n\nPlease enter the age of Student 9 = ";
		cin>>age9;
		cout<<"\n\nPlease enter the age of Student 10 = ";
		cin>>age10;
		TotalAge=age1+age2+age3+age4+age5+age6+age7+age8+age9+age10;
		cout<<"\n\nThe Total Age of the Class is: "<<TotalAge<<endl;
		AverageAge=TotalAge/10;
		cout<<"\n\nThe Average Age of the Class is: "<<AverageAge;
}

