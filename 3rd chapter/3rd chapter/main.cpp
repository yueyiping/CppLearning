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

/*//2.exceed.cpp -- exceeding some integer limits
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
}													*/

/*//3.hexoct1.cpp -- shows hex and octal literals
#include <iostream>
int main()
{
	using namespace std;
	int chest = 42;		// decimal integer literal
	int waist = 0x42;	// hexadecimal integer literal
	int inseam = 042;	// octal integer literal

	cout << "Monsieur cuts a striking figure!\n";
	cout << "chest = " << chest << " (42 in decimal)\n";
	cout << "waist = " << waist << " (0x42 in hex)\n"
		 << "inseam = " << inseam << " (042 in octal)\n";
	cin.get();
	return 0;
}													*/

/*//4.hexoct2.cpp -- display values in hex and octal
#include <iostream>
int main()
{
	using namespace std;
	int chest = 42;		
	int waist = 42;	
	int inseam = 42;	

	cout << "Monsieur cuts a striking figure!\n";
	cout << "chest = " << chest << " (42 in decimal)\n";
	cout << hex;	// manipulator for changing number base
	cout << "waist = " << waist << " (0x42 in hex)\n";
	cout << oct;	// manipulator for changing number base
	cout << "inseam = " << inseam << " (042 in octal)\n";
	cin.get();
	return 0;
}													*/

/*//5.chartype.cpp
#include <iostream>
int main()
{
	using namespace std;
	char ch;	// declare a char variable

	cout << "Enter a character: " << endl;
	cin >> ch;
	cout << "Hola! ";
	cout << "Thank you for the " << ch << " character." << endl;
	cin.get();
	cin.get();
	return 0;
}													*/

//6. morechar.cpp -- the char type and int type contrasted
#include <iostream>
int main()
{
	using namespace std;
	char ch = 'M';		// assign ASCII code for M to ch
	int i = ch;			// store same code in an int
	cout << "The ASCII code for " << ch << " is " << i << endl;

	cout << "Add one to the character code:" << endl;
	ch = ch + 1;		// change character code in ch
	i = ch;			// save new character code in i
	cout << "The ASCII code for " << ch << " is " << i << endl;

	// using the cout.put() member function to display a charh
	cout << "Displaying char ch using cout.put(ch): ";
	cout.put(ch);
	
	// using cout.put() to display a char constant
	cout.put('!');
	cout << endl << "Done" << endl;

	char alarm = '\a';
	cout << alarm << "Don't do that again!\a\n";
	cout << "Ben \"Buggsie\" Hacker\nwas here!\n";

	cin.get();
	return 0;
}

