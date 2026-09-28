#include <iostream>
using namespace std;

main()
{
    int upperlimit;
    int evensum = 0, oddsum = 0;
    cout << "Enter the upper limit: ";
    cin >> upperlimit;
    for (int i = 1; i <= upperlimit; ++i)
	{
        if (i % 2 == 0)
		{
            evensum += i;
        }
		else
		{
            oddsum += i;
        }
    }
    cout << "Sum of even numbers up to " << upperlimit << ": " << evensum << endl;
    cout << "Sum of odd numbers up to " << upperlimit << ": " << oddsum << endl;
}
