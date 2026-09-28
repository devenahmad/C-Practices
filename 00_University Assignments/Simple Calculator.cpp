#include <iostream>
using namespace std;
main()
{
    cout << "Hello Ahmad Ali, Student Id=BC230407520\n\nWelcome to the Main Menu\n";
    char continuechoice;
    do
	{
    	float result = 0.0;
	    int num = 0;
	    int count, choice;
        cout << "1: Addition" << endl;
        cout << "2: Subtraction" << endl;
        cout << "3: Division" << endl;
        cout << "4: Multiplication" << endl;
        cout << "5: Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
		switch (choice)
		{
            case 1:
                cout << "How many numbers do you want to add? ";
                cin >> count;
                for (int i = 0; i < count; i++)
				{
                    cout << "Enter number " << i+1 << ":";
                    cin >> num;
                    result += num;
                }
                cout << "Result of addition: " << result << endl;
                break;
            case 2:
                cout << "How many numbers do you want to subtract? ";
                cin >> count;
                if(count> 0)
                {
                cout << "Enter number 1: ";
	            cin >> result;
                for (int i = 1; i < count; i++)
				{
                    cout << "Enter number " << i + 1 << ": ";
                    cin >> num;
                    result -= num;
                }
                cout << "Result of subtraction: " << result << endl;
				}
				else
				{
				cout << "Result of subtraction: " << result << endl;	
				}
                break;
            case 3:
                cout << "How many numbers do you want to divide? ";
                cin >> count;
                if(count> 0)
				{	
                	cout << "Enter number 1: ";
	                cin >> result;
	                for (int i = 1; i < count; i++)
					{
	                    cout << "Enter number " << i + 1 << ": ";
	                    cin >> num;
	                    if (num != 0)
						{
	                        result /= num;
	                    }
						else
						{
	                        cout << "Cannot divide by zero!" << endl;
	                    }
	                }
	            	if(num!=0)
	            	{
	            		cout << "Result of division: " << result << endl;
					}
				}
				else
				{
					cout << "Result of division: " << result << endl;
				}
                break;
            case 4:
            	result=1.0;
                cout << "How many numbers do you want to multiply? ";
                cin >> count;
                for (int i = 0; i < count; i++)
				{
                    cout << "Enter number " << i + 1 << ": ";
                    cin >> num;
                    result *= num;
                }
                cout << "Result of multiplication: " << result << endl;
                break;
            case 5:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 5." << endl;
        }
        if (choice != 5)
		{
            cout << "Do you want to continue (y/n)? ";
            cin >> continuechoice;
    	}
        else
        {
            continuechoice = 'n';
        }
    }
	while (continuechoice == 'y');
}
