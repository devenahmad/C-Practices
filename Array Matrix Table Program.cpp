#include <iostream>
using namespace std;
main()
{
	int row;
	int col;
	const int maxrows=3;
	const int maxcols=3;
	int a[maxrows][maxcols];
	for (row=0; row<maxrows; row++)
	{
		for (col=0; col<maxcols; col++)
		{
			cout<<"Enter a value of element number "<<row<<","<<col<<" = ";
			cin>>a[row][col];
		}
	}
	cout << "\nThe matrix is:\n";
    for (row = 0; row < maxrows; row++)
	{
        for (col = 0; col < maxcols; col++)
		{
            cout << a[row][col] << "\t";
        }
    cout << endl;
    }
}

