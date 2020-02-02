/*
//1.limits.cpp -- some integer limits
#include <iostream>
#include <climits>		//use limits.h for older ststems
int main()
{
	using namespace std;
	int n_int(INT_MAX);		//initialize n_int to max int value
	short n_short = { SHRT_MAX };	//symbols defined in climits file
	long n_long{ LONG_MAX };
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
}
*/

/*
//2.exceed.cpp -- exceeding some integer limits
#include <iostream>
#define ZERO 0			// makes ZERO symbol for 0 value
#include <climits>		// defines INT_MAX as largest int value
int main()
{
	using namespace std;
	short sam = SHRT_MAX;	// initialize a variable to max value
	unsigned short sue = sam;	//okay if sam already defined

	cout << "Sam has " << sam << " dollars and Sue has " << sue;
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
*/


/*
// 4.hexoct2.cpp -- display values in hex and octal
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
}
*/

/*
//hexoct2.cpp -- display values in hex and octal
#include <iostream>
using namespace std;
int main()
{
	using namespace std;
	int chest = 42;
	int waist = 42;
	int inseam = 42;

	cout << "Monsieur cuts a striking figure!" << endl;
	cout << "chest = " << chest << " (decimal for 42)" << endl;
	cout << hex;			// manipulator for changing number base
	cout << "waist = " << waist << " (hexadecimal for 42)" << endl;
	cout << oct;			// manipulator for changing number base
	cout << "inseam = " << inseam << " (octal for 42)" << endl;
	system("pause");
	return 0;
}
*/

/*
//5.chartype.cpp
#include <iostream>
int main()
{
	using namespace std;
	char ch;	// declare a char variable

	cout << "Enter a character: " << endl;
	cin >> ch;
	cout << "Hola! ";
	cout << "Thank you for the " << ch << " character." << endl;
	system("pause");
	return 0;
}
*/

/*
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

	// using the cout.put() member function to display a char
	cout << "Displaying char ch using cout.put(ch): ";
	cout.put(ch);

	// using cout.put() to display a char constant
	cout.put('!');
	cout << endl << "Done" << endl;

	//char alarm = '\a';
	//cout << alarm << "Don't do that again!\a\n";
	//cout << "Ben \"Buggsie\" Hacker\nwas here!\n";

	cin.get();
	return 0;
}
*/

/*
//7. bondini.cpp -- using excape sequences
#include <iostream>
int main()
{
	using namespace std;
	cout << "\aOperation \"HyperHype\" is now activated!\n";
	cout << "Enter your agent code:________\b\b\b\b\b\b\b\b";
	long code;
	cin >> code;
	cout << "\aYou entered " << code << "...\n";
	cout << "\aCode verified! Proceed with Plan Z3!\n";

	system("pause");
	return 0;
}
*/

/*
//8. floatnum.cpp -- floating-point types
#include <iostream>
int main()
{
	using namespace std;
	cout.setf(ios_base::fixed, ios_base::floatfield); // fixed-point
	float tub = 10.0 / 3.0;		// good to about 6 places
	double mint = 10.0 / 3.0;   // good to about 15 places
	const float million = 1.0e6;

	cout << "tub = " << tub;
	cout << ", a million tubs = " << million * tub;
	cout << ",\nand ten million tubs = ";
	cout << 10 * million *tub << endl;

	cout << "mint = " << mint << " and a million mints = ";
	cout << million * mint << endl;

	system("pause");
	return 0;
}
*/

/*
//9. fltadd.cpp -- precision problems with float
#include <iostream>
int main()
{
	using namespace std;
	float a = 2.34E+22f;
	float b = a + 1.0f;

	cout << "a = " << a << endl;
	cout << "b - a = " << b - a << endl;

	system("pause");
	return 0;
}
*/


/*
//10. arith.cpp
#include <iostream>
int main()
{
	using namespace std;
	float hats, heads;
	cout.setf(ios_base::fixed, ios_base::floatfield); // fixed-point
	cout << "Enter a number: ";
	cin >> hats;
	cout << "Enter another number: ";
	cin >> heads;

	cout << "hats = " << hats << "; heads = " << heads << endl;
	cout << "hats + heads = " << hats + heads << endl;
	cout << "hats - heads = " << hats - heads << endl;
	cout << "hats * heads = " << hats * heads << endl;
	cout << "hats / heads = " << hats / heads << endl;

	system("pause");
	return 0;
}
*/

/*
//11. divide.cpp
#include <iostream>
int main()
{
	using namespace std;
	cout.setf(ios_base::fixed, ios_base::floatfield); // fixed-point
	cout << "Integer division: 9/5 = " << 9 / 5 << endl;
	cout << "Floating-point division: 9.0/5.0 = ";
	cout << 9.0 / 5.0 << endl;
	cout << "Mixed division: 9.0/5 = " << 9.0 / 5 << endl;
	cout << "double constants: 1e7/9.0 = ";
	cout << 1.e7 / 9.0 << endl;
	cout << "float constants: 1e7f/9.0f = ";
	cout << 1.e7f / 9.0f << endl;

	system("pause");
	return 0;
}
*/

/*
//12. modulus.cpp
#include <iostream>
int main()
{
	using namespace std;
	const int Lbs_per_stn = 14;
	int lbs;

	cout << "Enter your weight in pounds: ";
	cin >> lbs;
	int stone = lbs / Lbs_per_stn;		// whole stone
	int pounds = lbs % Lbs_per_stn;		// remainder in pounds
	cout << lbs << " pounds are " << stone
		 << " stone, " << pounds << " pound(s).\n";

	system("pause");
	return 0;
}
*/

/*
//13. assign.cpp
#include <iostream>
int main()
{
	using namespace std;
	cout.setf(ios_base::fixed, ios_base::floatfield); // fixed-point
	float tree = 3;		// int converted to float
	int guess(3.9832);	// double converted to int
	int debt = 7.2E12;	// result not defined in C++
	cout << "tree = " << tree << endl;
	cout << "guess = " << guess << endl;
	cout << "debt = " << debt << endl;

	system("pause");
	return 0;
}
*/

/*
//13. typecast.cpp
#include <iostream>
int main()
{
	using namespace std;
	int auks, bats, coots;

	// the following statement adds the values as double,
	// then converts the result to int
	auks = 19.99 + 11.99;

	// these statements add values as int
	bats = (int)19.99 + (int)11.99;		// old C syntax
	coots = int(19.99) + int(11.99);	// new C++ syntax
	cout << "auks = " << auks << ", bats = " << bats;
	cout << ", coots = " << coots << endl;

	char ch = 'Z';
	cout << "The code for " << ch << " is ";	// print as char
	cout << int(ch) << endl;					// print as int
	cout << "Yes, the code is ";
	cout << static_cast<int>(ch) << endl;		// using static_cast

	system("pause");
	return 0;
}
*/

/*----practise----*/
/*
//1. height
#include <iostream>
int main()
{
	using namespace std;
	const int CONVERT(12);
	int inc;
	cout << "Please input your height(in): ____\b\b\b\b";
	cin >> inc;
	cout << "Your height is " << inc / CONVERT << " feet " << inc % CONVERT << " inche(s)"<< endl;
	system("pause");
	return 0;
}
*/

//2. Body Mass Index
#include <iostream>
int main()
{
	using namespace std;

	const int FE_IN = 12;
	const float IN_M = 0.0254;
	const float KG_PO = 2.2;

	int feet = 0, inc = 0;
	int	pound = 0;
	cout << "Please input your height(feet and in):\n____(feet)\b\b\b\b\b\b\b\b\b\b\b";
	cin >> feet;
	cout << "____(inch)\b\b\b\b\b\b\b\b\b\b";
	cin >> inc;
	cout << "Please input your weight(pound): ____\b\b\b\b";
	cin >> pound;
	int bodyinc = feet * FE_IN + inc;
	double bodymet = bodyinc * IN_M;
	double bodyweikg = pound / KG_PO;
	double bmi = bodyweikg / (bodymet * bodymet);
	cout << "Your body mass index is " << bmi << endl;
	system("pause");
	return 0;
}


