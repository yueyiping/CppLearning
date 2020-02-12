/*
//1. forloop.cpp -- introducing the for loop
#include <iostream>
int main()
{
	using namespace std;
	int i;		// create a counter
// initialize; test ; update
	for (i = 0; i < 5; i++)
		cout << "C++ knows loops.\n";
	cout << "C++ knows when to stop.\n";

	system("pause");
	return 0;
}
*/

/*
//2. num_test.cpp -- use numeric test in for loop
#include <iostream>
int main()
{
	using namespace std;
	cout << "Enter the starting countdown value: ";
	int limit;
	cin >> limit;
	int i;		
	for (i = limit; i ; i--)	// quits when i is 0
		cout << "i = " << i << endl;
	cout << "Done now that i = " << i << endl;

	system("pause");
	return 0;
}
*/

/*
//3. expree.cpp -- values of expressions
#include <iostream>
int main()
{
	using namespace std;
	int x;

	cout << "The expression x = 100 has the value ";
	cout << (x = 100) << endl;
	cout << "Now x = " << x << endl;
	cout << "The expression x < 3 has the value ";
	cout << (x < 3) << endl;
	cout << "The expression x > 3 has the value ";
	cout << (x > 3) << endl;
	cout.setf(ios_base::boolalpha);		// a newer C++ feature
	cout << "The expression x < 3 has the value ";
	cout << (x < 3) << endl;
	cout << "The expression x > 3 has the value ";
	cout << (x > 3) << endl;

	system("pause");
	return 0;
}
*/

/*
//4. formore.cpp -- more looping with for
#include <iostream>
const int ArSize = 16;	//example of external declaration
int main()
{
	long long factorials[ArSize];
	factorials[1] = factorials[0] = 1LL;
	for (int i = 2; i < ArSize; i++)
		factorials[i] = i * factorials[i - 1];
	for (int i = 0; i < ArSize; i++)
		std::cout << i << "! = " << factorials[i] << std::endl;

	system("pause");
	return 0;
}
*/

/*
//5. bigstep.cpp -- count as directed
#include <iostream>
int main()
{
	using std::cout;	// a using declaration
	using std::cin;
	using std::endl;
	cout << "Enter an integar: ";
	int by;
	cin >> by;
	cout << "Counting by " << by << "s:\n";
	for (int i = 0; i < 100; i = i + by)
		cout << i << endl;

	system("pause");
	return 0;
}
*/

/*
//6. forstr1.cpp -- using for with a string
#include <iostream>
#include <string>
int main()
{
	using namespace std;
	cout << "Enter a word: ";
	string word;
	cin >> word;
	
	// display letters in reverse order
	for (int i = word.size() - 1; i >= 0; i--)
		cout << word[i];
	cout << "\nBye.\n";

	system("pause");
	return 0;
}
*/

/*
//7. plus_one.cpp -- the increment operator
#include <iostream>
int main()
{
	using std::cout;
	int a = 20;
	int b = 20;
	cout << "a   = " << a << ":   b = " << b << "\n";
	cout << "a++ = " << a++ << ": ++b = " << ++b << "\n";
	cout << "a   = " << a << ":   b = " << b << "\n";

	system("pause");
	return 0;
}
*/

/*
//8. block.cpp -- use a block statement
#include <iostream>
int main()
{
	using namespace std;
	cout << " The Amazing Accounto will sum and average ";
	cout << "five numbers for you.\n";
	cout << "Please enter five values:\n";
	double number;
	double sum = 0.0;
	for (int i = 1; i <= 5; i++)
	{								// block starts here
		cout << "Value " << i << ": ";
		cin >> number;
		sum += number;
	}								// block ends here
	cout << "Five exquistits choices indeed! ";
	cout << "They sum to " << sum << endl;
	cout << "and average to " << sum / 5 << ".\n";
	cout << "The Amazing Accounto bids you adieu!\n";

	system("pause");
	return 0;
}
*/

/*
//9. forstr2.cpp -- reversing an array
#include <iostream>
#include <string>
int main()
{
	using namespace std;
	cout << "Enter a word: ";
	string word;
	cin >> word;

	// physically modify string object
	char temp;
	int i, j;
	for (j = 0, i = word.size() - 1; j < i; --i, ++j)
	{			
		temp = word[i];
		word[i] = word[j];
		word[j] = temp;
	}
	cout << word << "\nDone\n";

	system("pause");
	return 0;
}
*/

/*
//10. equal.cpp -- equality vs assignment
#include <iostream>
int main()
{
	using namespace std;
	int quizscores[10] =
		{ 20,20,20,20,20,19,20,18,20,20 };
	cout << "Doing it right:\n";
	int i;
	for (i = 0; quizscores[i] == 20; i++)
		cout << "quiz " << i << " is a 20\n";
// Warning: you may prefer reading about this program
// to actually running it.
	cout << "Doing it dangerously wrong:\n";
//	for (i = 0; quizscores[i] = 20; i++)
//		cout << "quiz " << i << " is a 20\n";

	system("pause");
	return 0;
}
*/

/*
//11. compstr1.cpp -- comparing strings using arrays
#include <iostream>
#include <string>
int main()	
{
	using namespace std;
	char word[5] = "?ate";
	for (char ch = 'a'; strcmp(word, "mate"); ch++)
	{
		cout << word << endl;
		word[0] = ch;
	}
	cout << "After loop ends, word is " << word << endl;

	system("pause");
	return 0;
}
*/

/*
//12. compstr2.cpp -- comparing strings using arrays
#include <iostream>
#include <string>
int main()
{
	using namespace std;
	string word = "?ate";
	for (char ch = 'a'; word != "mate"; ch++)
	{
		cout << word << endl;
		word[0] = ch;
	}
	cout << "After loop ends, word is " << word << endl;

	system("pause");
	return 0;
}
*/

/*
//13. while.cpp -- introducing the while loop
#include <iostream>
const int ArSize = 20;
int main()
{
	using namespace std;
	char name[ArSize];
	cout << "Your first name, please: ";
	cin >> name;
	cout << "Here is your name, verticalized and ASCIIized:\n";
	int i = 0;					// start at beginning of string
	while (name[i] != '\0')		// process to end of string   name[i]
	{
		cout << name[i] << ": " << int(name[i]) << endl;
		i++;					// don't forget this step
	}

	system("pause");
	return 0;
}
*/

/*
//14. waiting.cpp -- using clock() in a time-delay loop
#include <iostream>
#include <ctime>		// describes clock() function, clock_t type	
int main()
{
	using namespace std;
	cout << "Enter the delay time, in seconds: ";
	float secs;
	cin >> secs;
	clock_t delay = secs * CLOCKS_PER_SEC;  // convert to clock ticks
	cout << "starting\a\n";
	clock_t start = clock();
	while (clock() - start < delay)				// wait until time elapses
		;										// note the semicolon
	cout << "done \a\n";

	system("pause");
	return 0;
}
*/

/*
//15. dowhile.cpp -- exit-condition loop
#include <iostream>
int main()
{
	using namespace std;
	int n;
	
	cout << "Enter numbers in the range 1-10 to find ";
	cout << "my favorite number\n";

	do
	{
		cin >> n;		// execute body
	} while (n != 7);	// then test
	cout << "Yes, 7 is my favorite.\n";

	system("pause");
	return 0;
}
*/

/*
//16. textin1.cpp -- reading with a while loop
#include <iostream>
int main()
{
	using namespace std;
	char ch;
	int count = 0;			// use basic input
	cout << "Enter characters; enter # to quit:\n";
	cin >> ch;				// get a character
	while (ch != '#')		// test the character
	{
		cout << ch;			// echo the character
		++count;			// count the character
		cin >> ch;			// get the next character
	}
	cout << endl << count << " characters read\n";

	system("pause");
	return 0;
}
*/

/*
//17. textin2.cpp -- using cin.get(char)
#include <iostream>
int main()
{
	using namespace std;
	char ch;
	int count = 0;			

	cout << "Enter characters; enter # to quit:\n";
	cin.get(ch);			// use the cin.ger(ch) function
	while (ch != '#')		
	{
		cout << ch;			
		++count;			
		cin.get(ch);		// use it again
	}
	cout << endl << count << " characters read\n";

	system("pause");
	return 0;
}
*/

/*
//18. textin3.cpp -- reading chars to end of file
#include <iostream>
int main()
{
	using namespace std;
	char ch;
	int count = 0;
//	cin.get(ch);			// attempt to read a char
//	while (cin.fail() == false)	// test for EOF
	while (cin.get(ch))
	{
		cout << ch;			// echo character
		++count;
//		cin.get(ch);		// attempt to read anoter char
	}
	cout << endl << count << " characters read\n";

	system("pause");
	return 0;
}
*/

/*
//19. textin4.cpp -- reading with cin.get()
#include <iostream>
int main()
{
	using namespace std;
	int ch;				// should be int, not char
	int count = 0;

	while ((ch = cin.get()) != EOF)	// test for end-of-file
	{
		cout.put(char(ch));
		++count;
	}
	cout << endl << count << " characters read\n";

	system("pause");
	return 0;
}
*/

/*
//20. nested.cpp -- nested loops and 2-D array
#include <iostream>
const int Cities = 5;
const int Years = 4;
int main()
{
	using namespace std;
	const char * cities[Cities] =	// array of pointers
	{								// to 5 strings
		"Gribble City",
		"Gribbletown",
		"New Gribble",
		"San Gribble",
		"Gribble Vista"
	};

	int maxtemps[Years][Cities] =	// 2-D array
	{
		{96, 100, 87, 101, 105},	// values for maxtenps[0]
		{96, 98, 91, 107, 104},		// values for maxtenps[1]
		{97, 101, 93, 108, 107},	// values for maxtenps[2]
		{98, 103, 95, 109, 108}		// values for maxtenps[3]
	};

	cout << "Maximum temperatures for 2008 - 2011\n\n";
	for (int city = 0; city < Cities; ++city)
	{
		cout << cities[city] << ":\t";
		for (int year = 0; year < Years; ++year)
			cout << maxtemps[year][city] << "\t";
		cout << endl;
	}

	system("pause");
	return 0;
}
*/


/*--------practise-------*/
/*
#include <iostream>		//1
int main()
{
	using namespace std;
	int s, l;
	cout << "Enter a integer: ";
	(cin >> s).get();
	cout << "Enter another integer: ";
	(cin >> l).get();
	int sum = 0;
	for (; s <= l; s++)
		sum += s;
	cout << "sum = " << sum << endl;

	system("pause");
	return 0;
}
*/

/*
#include <iostream>		//2
#include <array>
const int ArSize = 16;	
int main()
{	
	using namespace std;
	array <long double, ArSize> factorials;
	factorials[1] = factorials[0] = 1;
	for (int i = 2; i < ArSize; i++)
		factorials[i] = i * factorials[i - 1];

	for (int i = 0; i < ArSize; i++)
		cout << i << "! = " << factorials[i] << endl;

	system("pause");
	return 0;
}
*/

/*
#include <iostream>		//3
int main()
{
	using namespace std;
	cout << "Enter number: ";
	int sum = 0;
	int number = 0;
	do
	{
		(cin >> number).get();
		cout << "sum = " << (sum += number) << endl;
	} while (number);
	cout << "Done!" << endl;

	system("pause");
	return 0;
}
*/

/*
#include <iostream>		//4
int main()
{
	using namespace std;
	float valueD = 100;
	float valueC = 100;
	int year = 0;
	while (valueC <= valueD)
	{
		valueD += 10;
		valueC = 1.05f * valueC;
		year++;
	}
	cout << "Daphne: " << valueD << ",and Cleo: " << valueC << endl;
	cout << "year: " << year << endl;
	
	system("pause");
	return 0;
}
*/

/*
#include <iostream>		//5
#include <string>
const int Size = 12;
int main()
{
	using namespace std;
//	const char * month[Size] =
//	{
//		"Jan: ", "Feb: ","Mar: ","Apr: ","May: ","Jun: ",
//		"Jul: ","Aug: ","Sept: ","Oct: ","Nov: ","Dec: "
//	};
	string month[Size] =
	{
		"Jan: ", "Feb: ","Mar: ","Apr: ","May: ","Jun: ",
		"Jul: ","Aug: ","Sept: ","Oct: ","Nov: ","Dec: "
	};
	int sale[Size];
	int sum = 0;
	cout << "Enter monthly sales: \n";
	for (int i = 0; i < Size; i++)
	{
		cout << month[i];
		cin >> sale[i];
		sum += sale[i];
	}
	cout << "sum: " << sum << endl;

	system("pause");
	return 0;
}
*/

/*
#include <iostream>		//6
#include <string>
const int Size = 12;
const int Year = 3;
int main()
{
	using namespace std;
	string month[Size] =
	{
		"Jan: ", "Feb: ","Mar: ","Apr: ","May: ","Jun: ",
		"Jul: ","Aug: ","Sept: ","Oct: ","Nov: ","Dec: "
	};
	int sale[Year][Size];
	int sum[3]{0};

	for (int i = 0; i < Year; i++)
	{
		cout << "Enter annual sales volume: \n";
		for (int j = 0; j < Size; j++)
		{
			cout << month[j];
			cin >> sale[i][j];
			sum[i] += sale[i][j];
		}
	}
	cout << "First year sales volume: " << sum[0] << endl;
	cout << "Second year sales volume: " << sum[1] << endl;
	cout << "Third year sales volume: " << sum[2] << endl;
	cout << "Total sales volume: " << (sum[0] + sum[1] + sum[2]) << endl;

	system("pause");
	return 0;
}
*/

/*
#include <iostream>		//7
#include <string>
using namespace std;
struct car 
{
	string producer;
	int year;
};
int main()
{
	using namespace std;
	int amount;
	cout << "How many cars do you wish to catalog? ";
	(cin >> amount).get();
	car * carinfo = new car[amount];
	for (int i = 0; i < amount; i++)
	{
		cout << "Car #" << (i + 1) << endl;
		cout << "Please enter the make: ";
//		cin >> (carinfo + i)->producer;  // need .get()
		getline(cin, (carinfo + i)->producer);
		cout << "Please enter the year made: ";
		(cin >> (carinfo + i)->year).get();
	}
	cout << "Here is your collection: " << endl;
	for (int i = 0; i < amount; i++)
	{
//		cout << (*(carinfo+i)).year << " " << (*(carinfo + i)).producer << endl;
		cout << (carinfo + i)->year << " " << (carinfo + i)->producer << endl;
	}

	system("pause");
	return 0;
}
*/

/*
#include <iostream>		//8
#include <cstring>
int main()
{
	using namespace std;
	char word[15];
	int cnt = 0;
	cout << "Enter words (to stop, type the word done): \n";
	cin >> word;
	while (strcmp(word, "done"))
	{
		cin >> word;
		cnt++;
	}
	cout << "sum: " << cnt << endl;

	system("pause");
	return 0;
}
*/

/*
#include <iostream>		//9
#include <string>
int main()
{
	using namespace std;
	string word;
	int cnt = 0;
	cout << "Enter words (to stop, type the word done): \n";
	cin >> word;
	while (word != "done")
	{
		cin >> word;
		cnt++;
	}
	cout << "sum: " << cnt << endl;

	system("pause");
	return 0;
}
*/


#include <iostream>		//10
int main()
{
	using namespace std;
	int size;
	cout << "Enter number of rows: ";
	cin >> size;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			for (; j < 4-i; j++)
				cout << ".";
			cout << "*";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}

