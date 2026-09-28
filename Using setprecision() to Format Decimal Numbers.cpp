//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int max1dIndex = 4;
//    int max2dIndex = 3;
//    int arr[20][20];
//
//    for(int oneDRow = 0; oneDRow < max1dIndex; oneDRow++)
//    {
//    	cout << "arr[" << oneDRow << "] = [";
//        for(int twoDRow = 0; twoDRow < max2dIndex; twoDRow++)
//        {
//            arr[oneDRow][twoDRow] = twoDRow;
//            
//                      cout << arr[oneDRow][twoDRow];
//            if(twoDRow < max2dIndex - 1)
//            {
//                cout << ",";
//            }
//        }
//        cout << "]" << endl;
//    }	
//    return 0;
//}

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double x1 = 12345624.72345;
    double x2 = 987654.12345;
    double x3 = 1985.23456;

    // Print x1 with 3 digits after the decimal point
    cout << fixed << setprecision(3) << x1 << endl;

    // Print x2 with 4 digits after the decimal point
    cout << fixed << setprecision(4) << x2 << endl;

    // Print x3 with 5 digits after the decimal point
    cout << fixed << setprecision(5) << x3 << endl;

    return 0;
}


