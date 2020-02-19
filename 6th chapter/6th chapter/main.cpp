/*
//1. if.cpp -- using the if statement
#include <iostream>
int main()
{
	using namespace std;
	char ch;
	int spaces = 0;
	int total = 0;
	cin.get(ch);
	while (ch != '.')
	{
		if (ch == ' ')
			++spaces;
		++total;
		cin.get(ch);
	}
	cout << spaces << " spaces, " << total;
	cout << " characters total in sentence\n";
	system("pause");
	return 0;
}
*/

/*
//2. ifelse.cpp -- using the if else statement
#include <iostream>
int main()
{
	char ch;

	std::cout << "Type, and I shall repeat.\n";
	std::cin.get(ch);
	while (ch != '.')
	{
		if (ch == '\n')
			std::cout << ch;	// done if newline
		else
			std::cout << ++ch;	// done otherwise
		std::cin.get(ch);
	}
// try ch + 1 instead of ++ch for interesting effect
	std::cout << "\nPlease excuse the slight confusion.\n";

	system("pause");
	return 0;
}
*/

/*
//3. ifelseif.cpp -- using if else if else
#include <iostream>
const int Fave = 27;
int main()
{
	using namespace std;
	int n;

	cout << "Enter a number in the range 1-100 to find ";
	cout << "my favorite number: ";
	do
	{
		cin >> n;
		if (n < Fave)
			cout << "Too low -- guess again: ";
		else if (n > Fave)
			cout << "Too high -- guess again: ";
		else
			cout << Fave << " is right!\n";
	} while (n != Fave);

	system("pause");
	return 0;
}
*/

/*
//4. or.cpp -- using the logical OR operator
#include <iostream>
int main()
{
	using namespace std;
	cout << "This program may reformat your hard disk\n"
		"and destory all your data.\n"
		"Do you wish to continue? <y/n> ";
	char ch;
	cin >> ch;
	if (ch == 'y' || ch == 'Y')		// y or Y
		cout << "You were warned\a\a\n";
	else if (ch == 'n' || ch == 'N')		// n or N
		cout << "A wise choice ... bye\n";
	else
		cout << "That wasn't a Y or n! Apparently you "
		"can't follow\ninstructions, so"
		"I'll trash your disk anyway.\a\a\a\n";

	system("pause");
	return 0;
}
*/

/*
//5. and.cpp -- using the logical AND operator
#include <iostream>
const int ArSize = 6;
int main()
{
	using namespace std;
	float naaq[ArSize];
	cout << "Enter the NAAQd (New Age Awareness Quotients) "
		<< "of\nyour neighbors. Program terminates "
		<< "when you make\n" << ArSize << " entries "
		<< "or enter a negative value.\n";

	int i = 0;
	float temp;
	cout << "First value: ";
	cin >> temp;
	while (i < ArSize && temp >= 0)		// 2 quitting criteria
	{
		naaq[i] = temp;
		++i;
		if (i < ArSize)					// room left in the array
		{
			cout << "Next value: ";
			cin >> temp;				// so get next value
		}
	}
	if (i == 0)
		cout << "No data--bye\n";
	else
	{
		cout << "Enter your NAAQ: ";
		float you;
		cin >> you;
		int count = 0;
		for (int j = 0; j < i; j++)
			if (naaq[j] > you)
				++count;
		cout << count;
		cout << " of your neighbors have greater awareness of\n"
			<< "the New Age than you do.\n";
	}

	system("pause");
	return 0;
}
*/

/*
//6. more_and.cpp -- using the logical AND operator
#include <iostream>
const char * qualify[4] =		// an array of pointers
{								// to strings
	"10,000-meter race.\n",
	"mud tug_of_war.\n",
	"masters canoe jousting.\n",
	"pie_throwing festival.\n"
};
int main()
{
	using namespace std;
	int age;
	cout << "Enter your age in years: ";
	cin >> age;
	int index;

	if (age > 17 && age < 35)
		index = 0;
	else if (age >= 35 && age < 50)
		index = 1;
	else if (age >= 50 && age < 65)
		index = 2;
	else
		index = 3;

	cout << "You qualify for the " << qualify[index];

	system("pause");
	return 0;
}
*/

/*
//7. not.cpp -- using the not operator
#include <iostream>
#include <climits>
bool is_int(double);
int main()
{
	using namespace std;
	double num;

	cout << "Yo, dude! Enter an integer value: ";
	cin >> num;
	while (not is_int(num))		// continue while num is int int_able
	{
		cout << "Out of range -- please try again: ";
		cin >> num;
	}
	int val = int(num);			// type cast
	cout << "You're entered the integer " << val << "\nBye\n";

	system("pause");
	return 0;
}

bool is_int(double x)
{
	if (x <= INT_MAX && x >= INT_MIN)	// use climits values
		return true;
	else
		return false;
}
*/

/*
//8. cctypes.cpp -- using the ctype.h library
#include <iostream>
#include <cctype>		// prototypes for character functions
int main()
{
	using namespace std;
	cout << "Enter text for analysis, and type @"
		" to terminate input.\n";
	char ch;
	int whitespace = 0;
	int digits = 0;
	int chars = 0;
	int punct = 0;
	int others = 0;

	cin.get(ch);		// get first character
	while (ch != '@')		// test for sentinel
	{
		if (isalpha(ch))		// is it an alphabetic character?
			chars++;
		else if (isspace(ch))	// is it a whitespace character?
			whitespace++;
		else if (isdigit(ch))	// is it a digit?
			digits++;
		else if (ispunct(ch))	// is it a punctuation?
			punct++;
		else
			others++;
		cin.get(ch);			// get next character
	}
	cout << chars << " letters, "
		<< whitespace << " whitespace, "
		<< digits << " digits, "
		<< punct << " punctuations, "
		<< others << " others.\n";

	system("pause");
	return 0;
}
*/

/*
//9. condit.cpp -- using the conditional operator
#include <iostream>
int main()
{
	using namespace std;
	int a, b;
	cout << "Enter two integers: ";
	cin >> a >> b;
	cout << "The larger of " << a << " and " << b;
	int c = a > b ? a : b;		// c = a if a > b, else c = b
	cout << " is " << c << endl;

	system("pause");
	return 0;
}
*/

/*
//10. switch.cpp -- using the switch statement
#include <iostream>
using namespace std;
void showmenu();		// function prototypes
void report();
void comfort();
int main()
{
	showmenu();
	int choice;
	cin >> choice;
	while (choice != 5)
	{
		switch (choice)
		{
			case 1: cout << "\a\n";
					break;
			case 2: report();
					break;
			case 3: cout << "The boss was in all day.\n";
					break;
			case 4: comfort();
					break;
			default : cout << "That's not a choice.\n";
		}
		showmenu();
		cin >> choice;
	}

	system("pause");
	return 0;
}
void showmenu()
{
	cout << "Please enter 1, 2, 3, 4, or 5:\n"
			"1) alarm				2) report\n"
			"3) alibi				4) comfort\n"
			"5) quit\n";
}
void report()
{
	cout << "It's been an excellent week for business.\n"
		"Sales are up 120%. Expenses are down 35%.\n";
}
void comfort()
{
	cout << "Your employees think you are the finest CEO\n"
		"in the industry. The board of direction think\n"
		"you are the finest CEO in the industry.\n";
}
*/

/*
//11. enum.cpp -- using enum
#include <iostream>
// create named constants for 0 - 6
enum {red, orange, yellow, green, blue, violet, indogo};
int main()
{
	using namespace std;
	cout << "Enter color code (0-6): ";
	int code;
	cin >> code;
	while (code >= red && code <= indogo)
	{

		switch (code)
		{
			case red   : cout << "Her lips were red.\n"; break;
			case orange: cout << "Her hair was orange.\n"; break;
			case yellow: cout << "Her shoes were yellow.\n"; break;
			case green : cout << "Her nails were green.\n"; break;
			case blue  : cout << "Her sweatsuit was blue.\n"; break;
			case violet: cout << "Her eyes were violet.\n"; break;
			case indogo: cout << "Her mood was indigo.\n"; break;
		}
		cout << "Enter color code (0-6): ";
		cin >> code;
	}
	cout << "Bye\n";

	system("pause");
	return 0;
}
*/

/*
//12. jump.cpp -- using continue and break
#include <iostream>
const int ArSize = 80;
int main()
{
	using namespace std;
	char line[ArSize];
	int spaces = 0;

	cout << "Enter a line of text:\n";
	cin.get(line, ArSize);
	cout << "Complete line:\n" << line << endl;
	cout << "Line through first period:\n";
	for (int i = 0; line[i] != '\0'; i++)
	{
		cout << line[i];	// display character
		if (line[i] == '.')	// quit if it's a period
			break;
		if (line[i] != ' ')	// skip rest of loop
			continue;
		spaces++;
	}
	cout << "\n" << spaces << " spaces\n";
	cout << "Done.\n";

	system("pause");
	return 0;
}
*/

/*
//13. cinfish.cpp -- non-numeric input terminates loop
#include <iostream>
const int Max = 5;
int main()
{
	using namespace std;
// get data
	double fish[Max];
	cout << "Please enter the weights of your fish.\n";
	cout << "You may enter up to " << Max
		<< " fish <q to terminate>.\n";
	cout << "fish #1: ";
	int i = 0;
	while (i< Max && cin >> fish[i])
	{
		if (++i < Max)
			cout << "fish #" << i + 1 << ": ";
	}
// calculate average
	double total = 0.0;
	for (int j = 0; j < i; j++)
		total += fish[j];
// report results
	if (i == 0)
		cout << "No, fish\n";
	else
		cout << total / i << " = average weight of "
			<< i << " fish\n";
	cout << "Done.\n";

	system("pause");
	return 0;
}
*/

/*
//14. cingolf.cpp -- non-numeric input skipped
#include <iostream>
const int Max = 5;
int main()
{
	using namespace std;
// get data
	double golf[Max];
	cout << "Please enter your golf scores.\n";
	cout << "You must enter " << Max<< " rounds.\n";
	int i;
	for (i = 0; i < Max; i++)
	{
		cout << "round #" << i + 1 << " :";
		while (!(cin >> golf[i]))
		{
			cin.clear();		// reset input
			while (cin.get() != '\n')  // ' ' whitespace
				continue;		// get rid of bad input
			cout << "Please enter a number: ";
		}
	}
	// calculate average
	double total = 0.0;
	for (int j = 0; j < Max; j++)
		total += golf[j];
	// report results
	cout << total / Max << " = average score "
			<< Max << " rounds\n";

	system("pause");
	return 0;
}
*/

/*
//15. outfile.cpp -- writing to a file
#include <iostream>
#include <fstream>		// for file I/O
int main()
{
	using namespace std;
	char automobile[50];
	int year;
	double a_price;
	double d_price;

	ofstream outFile;		// create object for output
	outFile.open("carinfo.txt");	// associate with a file

	cout << "Enter the make and model of automobile: ";
	cin.getline(automobile, 50);
	cout << "Enter the model year: ";
	cin >> year;
	cout << "Enter original asking price: ";
	cin >> a_price;
	d_price = 0.913 *a_price;
// display information on screen with cout
	cout << fixed; 
	cout.precision(2);
	cout.setf(ios_base::showpoint);
	cout << "Make an model: " << automobile << endl;
	cout << "Year: " << year << endl;
	cout << "Was asking $" << a_price << endl;
	cout << "Now asking $" << d_price << endl;
// now do exact same things using outFile instead of cout
	outFile << fixed;
	outFile.precision(2);
	outFile.setf(ios_base::showpoint);
	outFile << "Make an model: " << automobile << endl;
	outFile << "Year: " << year << endl;
	outFile << "Was asking $" << a_price << endl;
	outFile << "Now asking $" << d_price << endl;

	outFile.close();			// done with file
	system("pause");
	return 0;
}
*/

/*
//16. sumafile.cpp -- functions with an array argument
#include <iostream>
#include <fstream>		// file I/O support
#include <cstdlib>		// support for exit()
const int SIZE = 60;
int main()
{
	using namespace std;
	char filename[SIZE];
	ifstream inFile;		// object for handing file input
	cout << "Enter name of data file: ";
	cin.getline(filename, SIZE);
	inFile.open(filename);	// associate inFile with a file
	if (!inFile.is_open())	// fails to open file
	{
		cout << "Could not open the file " << filename << endl;
		cout << "Program terminating.\n";
		exit(EXIT_FAILURE);
	}
	double value; 
	double sum = 0.0;
	int count = 0;			// number of items read
	inFile >> value;		// get first value
	while (inFile.good())	// while input good and not at EOF
	{
		++count;			// one more item read
		sum += value;		// calculate running total
		inFile >> value;	// get next value
	}
	if (inFile.eof())
		cout << "End of file reached.\n";
	else if (inFile.fail())
		cout << "Input terminated by data mismatch.\n";
	else
		cout << "Input terminated for unknown reason.\n";
	if (count == 0)
		cout << "No data processed.\n";
	else
	{
		cout << "Items read: " << count << endl;
		cout << "Sum: " << sum << endl;
		cout << "Average: " << sum / count << endl;
	}
	inFile.close();			// finished with the file

	system("pause");
	return 0;
}
*/


/*-------------practise--------------*/
/*
#include <iostream>		//1
int main()
{
	using namespace std;
	char ch;
	while ((ch = cin.get()) != '@')
	{
		if (!isdigit(ch))
		{
			if (isupper(ch))
				cout << (char)(ch + 32);
			else
				cout << ch;
		}
	}
	system("pause");
	return 0;
}
*/

/*
#include <iostream>		//2
#include <array>
int main()
{
	using namespace std;
	array<double, 10> dounation;

	double sum = 0;
	int i = 0;
	while (cin >> dounation[i] && i < 10)
	{
		sum += dounation[i];
		i++;
	}
	if (i == 0)
		cout << "Error!\n";
	else
	{ 
		double average = sum / i;
		int num = 0;
		for (int j = 0; j < i; j++)
		{
			if (average > dounation[j])
				num++;
		}
		cout << "Average of " << i << " number(s) is " << average << endl;
		cout << num << " numbers greater than the average.\n";
	}

	system("pause");
	return 0;
}
*/

/*
#include <iostream>		//3
int main()
{
	using namespace std;
	char ch;
lable:
	cout << "Please enter one of the following choices:\n";
	cout << "c) carnivore			p) pianist\n";
	cout << "t) tree				g)game\n";
	cin >> ch;
	switch (ch)
	{
		case 'c': cout << "CC\n"; break;
		case 'p': cout << "PP\n"; break;
		case 't': cout << "A maple is a tree.\n"; break;
		case 'g': cout << "GG\n"; break;
		default:  goto lable;
	}

	system("pause");
	return 0;
}
*/

/*
#include <iostream>		//5
int main()
{
	using namespace std;
	int tvarps;
	float tax = 0;
	while (cin >> tvarps && tvarps >= 0)
	{
		if (tvarps <= 5000)
		{
			tax = 0;
			cout << "tax = " << tax << endl;
		}
		else if (tvarps > 5000 && tvarps <= 15000)
		{
			tax = (tvarps - 5000)*0.1;
			cout << "tax = " << tax << endl;
		}
		else if (tvarps > 15000 && tvarps <= 35000)
		{
			tax = 10000 * 0.1 + (tvarps - 15000)*0.15;
			cout << "tax = " << tax << endl;
		}
		else if (tvarps > 35000)
		{
			tax = 10000 * 0.1 + 20000 * 0.15 + (tvarps - 35000)*0.2;
			cout << "tax = " << tax << endl;
		}
	}

	system("pause");
	return 0;
}
*/

/*
#include <iostream>		//6
struct contribution
{
	char name[20];
	double money;
};
int main()
{
	using namespace std;
	cout << "Number of donors: ";
	int ArSize;
	(cin >> ArSize).get();
	contribution * item = new contribution[ArSize];
	int * grand = new int [ArSize];

	for (int i = 0; i < ArSize; i++)
	{
		cout << "#" << i+1 << " : \n";
		cout << "Enter name of donor: \n";
		cin.getline((item + i)->name, 20);
		cout << "Enter donation: \n";
		(cin >> (item + i)->money).get();
		if ((item + i)->money > 10000)
			*(grand + i) = 1;
		else
			*(grand + i) = 0;
	}
	cout << "Grand Patrons: \n";
	int j = 0;
	for (int i = 0; i < ArSize; i++)
	{
		if (*(grand + i) == 1)
		{ 
			cout << (item + i)->name << endl;
			j++;
		}
	}
	if(j==0)
		cout << "none\n";
	j = 0;
	cout << "Patrons: \n";
	for (int i = 0; i < ArSize; i++)
	{
		if (*(grand + i) == 0)
		{ 
			cout << (item + i)->name << endl;
			j++;
		}
	}
	if (j == 0)
		cout << "none\n";
	delete []item;
	delete []grand;
	system("pause");
	return 0;
}
*/

/*
#include <iostream>		//7
#include <string>
#include <cctype>
int main()
{
	using namespace std;
	int vowel = 0, consonants = 0, others = 0;
	cout << "Enter words (q to quit):\n";
	string word;
	cin >> word;
	while(word[0] != 'q')
	{
		if (isalpha(word[0]))
		{
			switch (word[0])
			{
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':  vowel++; break;
			default:  consonants++; break;
			}
		}
		else
			others++;
		cin >> word;
	}
	cout << vowel << " words beginning with vowels\n";
	cout << consonants << " words beginning with consonants\n";
	cout << others << " others\n";

	system("pause");
	return 0;
}
*/

/*
#include <iostream>		//8
#include <fstream>
#include <cstdlib>
int main()
{
	using namespace std;
	ifstream inFile;
	inFile.open("practise8.txt");
	if (!inFile.is_open())
	{
		cout << "Could not open the file!\n";
		exit(EXIT_FAILURE);
	}
	char ch;
	int count = 0;
	inFile >> ch;
	while (inFile.good())
	{
		count++;
		inFile >> ch;
	}
	if (inFile.eof())
		cout << "End of file reached.\n";
	else if (inFile.fail())
		cout << "Input terminated by data mismatch.\n";
	else
		cout << "Input terminated for unknow reason.\n";

	cout << "Sum: " << count << endl;
	inFile.close();

	system("pause");
	return 0;
}
*/


#include <iostream>		//9
#include <fstream>
#include <cstdlib>
struct contribution
{
	char name[20];
	double money;
};
int main()
{
	using namespace std;
	ifstream inFile;
	inFile.open("practise9.txt");
	if (!inFile.is_open())
	{
		cout << "Could not open the file!\n";
		exit(EXIT_FAILURE);
	}
	int ArSize;
	(inFile >> ArSize).get();
	contribution * item = new contribution[ArSize];
	int * grand = new int[ArSize];

	for (int i = 0; i < ArSize; i++)
	{
		inFile.getline((item + i)->name, 20);
		(inFile >> (item + i)->money).get();
		if ((item + i)->money > 10000)
			*(grand + i) = 1;
		else
			*(grand + i) = 0;
	}
	cout << "Grand Patrons: \n";
	int j = 0;
	for (int i = 0; i < ArSize; i++)
	{
		if (*(grand + i) == 1)
		{
			cout << (item + i)->name << endl;
			j++;
		}
	}
	if (j == 0)
		cout << "none\n";
	j = 0;
	cout << "Patrons: \n";
	for (int i = 0; i < ArSize; i++)
	{
		if (*(grand + i) == 0)
		{
			cout << (item + i)->name << endl;
			j++;
		}
	}
	if (j == 0)
		cout << "none\n";
	delete[]item;
	delete[]grand;
	inFile.close();

	system("pause");
	return 0;
}


