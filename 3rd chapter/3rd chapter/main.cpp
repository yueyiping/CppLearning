/*//1.limits.cpp -- some integer limits
#include <iostream>
#include <climits>		//use limits.h for older ststems
int main()
{
	using namespace std;
	int n_int = INT_MAX;		//initialize n_int to max int value
	short n_short = SHRT_MAX;	//symbols defined in climits file
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	//sizeof operator yields size of type or of variable
	cout << "int is " << sizeof(int) << " bytes." << endl;
	cout << "short is " << sizeof n_short << " bytes." << endl;
	cout << "long is " << sizeof n_long << " bytes."<< endl;
	cout << "long long is " << sizeof n_llong << " bytes." << endl;

	cout << "Maximum values:" << endl;
	cout << "int: " << n_int << endl;
	cout << "short: " << n_short << endl;
	cout << "long: " << n_long << endl;
	cout << "long long: " << n_llong << endl << endl;
	
	cout << "Minimum int value = " << INT_MIN << endl;
	cout << "Bits per byte = " << CHAR_BIT << endl;
	cin.get();
	return 0;
}													*/

//exceed.cpp -- exceeding some integer limits
#include <iostream>
#define ZERO 0			// makes ZERO symbol for 0 value
#include <climits>		// defines INT_MAX as largest int value
int main()
{
	using namespace std;
	short sam = SHRT_MAX;	// initialize a variable to max value
	unsigned short sue = sam;	//okay if sam already defined

	cout << "Sam has " << sam << "dollars and Sue has " << sue;
	cout << " dollars deposited." << endl
		 << "Add $1 to each accout." << endl << "Now ";
	sam = sam + 1;
	sue = sue + 1;
	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited.\nPoor Sam!" << endl;
	sam = ZERO;
	sue = ZERO;
	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited." << endl;
	cout << "Take $1 from each account." << endl << "Now ";
	sam = sam - 1;
	sue = sue - 1;
	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited." << endl << "Lucky Sue!" << endl;

	cin.get();
	return 0;
}


