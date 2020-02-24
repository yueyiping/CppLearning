/*
//1. calling.cpp -- defining, prototyping, and calling a function
#include <iostream>
void simple();		// function prototype
int main()
{
	using namespace std;
	cout << "main() will call the simple() function:\n";
	simple();		// function call
	cout << "main() is finished with the simple() function.\n";
	// cin.get();

	system("pause");
	return 0;
}
// function definition
void simple()
{
	using namespace std;
	cout << "I'm but a simple function.\n";
}
*/

/*
//2. protps.cpp -- using prototypes and function calls
#include <iostream>
void cheers(int);		// prototype: no return value
double cube(double x);	// prototype: returns a double
int main()
{
	using namespace std;
	cheers(5);			// function call
	cout << "Give me a number: ";
	double side;
	cin >> side;
	double volume = cube(side);		// function call
	cout << "A " << side << "-foot cube has a volume of ";
	cout << volume << " cubic feet.\n";
	cheers(cube(2));	// protptype protection at work

	system("pause");
	return 0;
}
void cheers(int n)
{
	using namespace std;
	for (int i = 0; i < n; i++)
		cout << "Cheers! ";
	cout << endl;
}
double cube(double x)
{
	return x * x * x;
}
*/

/*
//3. twoarg.cpp -- a function with 2 arguments
#include <iostream>
using namespace std;
void n_chars(char, int);
int main()
{
	int times;
	char ch;

	cout << "Enter a character: ";
	cin >> ch;
	while (ch != 'q')		// q to quit
	{
		cout << "Enter an integer: ";
		cin >> times;
		n_chars(ch, times);	// function with two arguments
		cout << "\nEnter another character or press the"
			" q-key to quit: ";
		cin >> ch;
	}
	cout << "The value of times is " << times << ".\n";
	cout << "Bye\n";

	system("pause");
	return 0;
}
void n_chars(char c, int n)		// displays c n times
{
	while (n-- > 0)
		cout << c;
}
*/

/*
//4. lotto.cpp -- probability of winning
#include <iostream>
// Note: some implementations require double instead of long double
long double probability(unsigned numbers, unsigned picks);
int main()
{
	using namespace std;	
	double total, choices;
	cout << "Enter the total number of choices on the game card and\n"
		"the number of picks allowed:\n";
	while ((cin >> total >> choices) && choices <= total)
	{
		cout << "You have one chance in ";
		cout << probability(total, choices);	// compute the odds
		cout << " of winning.\n";
		cout << "Next two numbers (q to quit): ";
	}
	cout << "bye\n";

	system("pause");
	return 0;
}
// the following function calculates the probability of picking picks
// numbers correctly from numbers choices
long double probability(unsigned numbers, unsigned picks)
{
	long double result = 1.0;		// here come some local vatiables
	long double n;
	unsigned p;
	for (n = numbers, p = picks; p > 0; n--, p--)
		result = result * n / p;
	return result;
}
*/

/*
//5. arrfun1.cpp -- functions with an array argument
#include <iostream>
const int ArSize = 8;
int sum_arr(int arr[], int n);		// prototype
int main()
{
	using namespace std;
	int cookies[ArSize] = { 1,2,4,8,16,32,64,128 };
// some systems require preceding int with static to
// enable array initialization
	int sum = sum_arr(cookies, ArSize);
	cout << "Total cookies eaten: " << sum << "\n";

	system("pause");
	return 0;
}
// return the sum of an integer array
int sum_arr(int arr[], int n)
{
	int total = 0;
	for (int i = 0; i < n; i++)
		total = total + arr[i];
	return total;
}
*/

/*
//6. arrfun2.cpp -- functions with an array argument
#include <iostream>
const int ArSize = 8;
int sum_arr(int arr[], int n);		
// use std:: instead of using directive
int main()
{
	int cookies[ArSize] = { 1,2,4,8,16,32,64,128 };
// some systems require preceding int with static to
// enable array initialization
	std::cout << cookies << " = array address, ";
// some systems require a type cast: unsigend (cookies)

	std::cout << sizeof cookies << " = sizeof cookies\n";
	int sum = sum_arr(cookies, ArSize);
	std::cout << "Total cookies eaten: " << sum <<std::endl;
	sum = sum_arr(cookies, 3);			// a lie
	std::cout << "First three eaters ate " << sum << " cookies.\n";
	sum = sum_arr(cookies + 4, 4);		// another ile
	std::cout << "Last four eaters ate " << sum << " cookies.\n";

	system("pause");
	return 0;
}
// return the sum of an integer array
int sum_arr(int arr[], int n)
{
	int total = 0;
	std::cout << arr << " = arr, ";
// some systems require a type cast: unsigend (arr)
	std::cout << sizeof arr << " = sizeof arr\n";
	for (int i = 0; i < n; i++)
		total = total + arr[i];
	return total;
}
*/

/*
//7. arrfun3.cpp -- array functions and const
#include <iostream>
const int Max = 5;
// function prototype
int fill_array(double ar[], int limit);
void show_array(const double ar[], int n);		// don't change data
void revalue(double r, double ar[], int n);
int main()
{
	using namespace std;
	double properties[Max];
	int size = fill_array(properties, Max);
	show_array(properties, size);
	if (size > 0)
	{
		cout << "Enter revaluation factor: ";
		double factor;
		while (!(cin >> factor))		// bad input
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; Please enter a number: ";
		}
		revalue(factor, properties, size);
		show_array(properties, size);
	}
	cout << "Done.\n";

	system("pause");
	return 0;
}
int fill_array(double ar[], int limit)
{
	using namespace std;
	double temp;
	int i;
	for (i = 0; i < limit; i++)
	{
		cout << "Enter value # " << (i + 1) << ": ";
		cin >> temp;
		if (!cin)		// bad input
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; input process terminated.\n";
			break;
		}
		else if (temp < 0)	// signal to terminate
			break;
		ar[i] = temp;
	}
	return i;
}
// the following function can use, but not alter,
// the array whose address is ar
void show_array(const double ar[], int n)
{
	using namespace std;
	for (int i = 0; i < n; i++)
	{
		cout << "Property #" << (i + 1) << ": $";
		cout << ar[i] << endl;
	}
}
//multiplies each elements of ar[] by r
void revalue(double r, double ar[], int n)
{
	for (int i = 0; i < n; i++)
		ar[i] *= r;
}
*/

/*
//8. arrfun4.cpp -- functions with an array argument
#include <iostream>
const int ArSize = 8;
int sum_arr(const int * begin, const int * end);
int main()
{
	using namespace std;
	int cookies[ArSize] = { 1,2,4,8,16,32,64,128 };
// some systems require preceding int with static to
// enable array initialization

	int sum = sum_arr(cookies, cookies + ArSize);
	cout << "Total cookies eaten: " << sum << endl;
	sum = sum_arr(cookies, cookies + 3);		// first 3 elements
	cout << "First three eaters ate " << sum << " cookies.\n";
	sum = sum_arr(cookies + 4, cookies + 8);	// last 4 elements
	cout << "Last four eaters ate " << sum << " cookies.\n";

	system("pause");
	return 0;
}
// return the sum of an integer array
int sum_arr(const int * begin, const int * end)
{
	const int * pt;
	int total = 0;
	for (pt = begin; pt != end; pt++)
		total = total + *pt;
	return total;
}
*/

/*
//9. strgfun.cpp -- functions with a string argument
#include <iostream>
unsigned int c_in_str(const char * str, char ch);
int main()
{
	using namespace std;
	char mmm[15] = "minimum";		//string in an array
// some systems require preceding char with static to
// enable array initialization
	char * wail = (char *)"ululate";			// wail points to string
	unsigned int ms = c_in_str(mmm, 'm');
	unsigned int us = c_in_str(wail, 'u');
	cout << ms << " m characters in " << mmm << endl;
	cout << us << " u characters in " << wail << endl;

	system("pause");
	return 0;
}
// this function counts the number of ch characters
// in the string str
unsigned int c_in_str(const char * str, char ch)
{
	unsigned int count = 0;
	while (*str)			// quit when *str is '\0'
	{
		if (*str == ch)
			count++;
		str++;				// move pointer to next char
	}
	return count;
}
*/

/*
//10. strgback.cpp -- a function that returns a pointer to char   
#include <iostream>
char * buildstr(char c, int n);	// porotype
int main()
{
	using namespace std;
	int times;
	char ch;
	cout << "Enter a character: ";
	cin >> ch;
	cout << "Enter an integer: ";
	cin >> times;
	char * ps = buildstr(ch, times);
	cout << ps << endl;
	delete[]ps;			// free memory
	ps = buildstr('+', 20);		// reuse pointer
	cout << ps << "-DONE-" << ps << endl;
	delete[]ps;			// free memory

	system("pause");
	return 0;
}
// builds string made of n c characters
char * buildstr(char c, int n)
{
	char * pstr = new char[n + 1];
	pstr[n] = '\0';			// terminate string
	while (n-- > 0)
		pstr[n] = c;			// fill rest of string
	return pstr;
}
*/

/*
//11. travel.cpp -- using structures with functions   
#include <iostream>
struct travel_time
{
	int hours;
	int mins;
};
const int Mins_per_hr = 60;
travel_time sum(travel_time t1, travel_time t2);
void show_time(travel_time t);
int main()
{
	using namespace std;
	travel_time day1 = { 5,45 };		// 5 hrs, 45 min
	travel_time day2 = { 4,55 };		// 4 hrs, 55 min
	travel_time trip = sum(day1, day2);
	cout << "Two-day total: ";
	show_time(trip);

	travel_time day3 = { 4,32 };
	cout << "Three-day total: ";
	show_time(sum(trip, day3));

	system("pause");
	return 0;
}
travel_time sum(travel_time t1, travel_time t2)
{
	travel_time total;
	total.mins = (t1.mins + t2.mins) % Mins_per_hr;
	total.hours = t1.hours + t2.hours + (t1.mins + t2.mins) / Mins_per_hr;
	return total;
}
void show_time(travel_time t)
{
	using namespace std;
	cout << t.hours << " hours, "
		<< t.mins << " mins\n";
}
*/

/*
//12. strctfun.cpp -- functions with a structure argument   
#include <iostream>
#include <cmath>
// structure declaration
struct polar
{
	double distance;		// distance from origin
	double angle;			// direction from origin
};
struct rect
{
	double x;				// horizontal distance from origin
	double y;				// vertical distance from origin
};
// prototypes
polar rect_to_polar(rect xypos);
void show_polar(polar dapos);
int main()
{
	using namespace std;
	rect rplace;
	polar pplace;
	cout << "Enter the x and y values: ";
	while (cin >> rplace.x >> rplace.y)	// slick use of cin
	{
		pplace = rect_to_polar(rplace);
		show_polar(pplace);
		cout << "Next two numbers (q to quit): ";
	}
	cout << "Done.\n";

	system("pause");
	return 0;
}
// convert rectangular to polar coordinates
polar rect_to_polar(rect xypos)
{
	using namespace std;
	polar answer;
	answer.distance = sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
	answer.angle = atan2(xypos.y, xypos.x);
	return answer;		// returns a polar structure
}
// show polar coordinates, converting angle to degrees
void show_polar(polar dapos)
{
	using namespace std;
	const double Rad_to_deg = 27.29577951;
	cout << "ditance = " << dapos.distance;
	cout << ", angle = " << dapos.angle * Rad_to_deg;
	cout << " degrees\n";
}
*/

/*
//13. strctptr.cpp -- functions with poingter to structure arguments   
#include <iostream>
#include <cmath>
// structure declaration
struct polar
{
	double distance;		// distance from origin
	double angle;			// direction from origin
};
struct rect
{
	double x;				// horizontal distance from origin
	double y;				// vertical distance from origin
};
// prototypes
void show_polar(const polar * pda);
void rect_to_polar(const rect * pxy, polar * pda);
int main()
{
	using namespace std;
	rect rplace;
	polar pplace;
	cout << "Enter the x and y values: ";
	while (cin >> rplace.x >> rplace.y)
	{
		rect_to_polar(&rplace, &pplace);	// pass addresses
		show_polar(&pplace);				// pass address
		cout << "Next two numbers (q to quit): ";
	}
	cout << "Done.\n";
	system("pause");
	return 0;
}
// show polar coordinates, converting angle to degrees
void show_polar(const polar * pda)
{
	using namespace std;
	const double Rad_to_deg = 57.29577951;
	cout << "distance = " << pda->distance;
	cout << ", angle = " << pda->angle * Rad_to_deg;
	cout << " degrees\n";
}
// convert rectangular to polar coordinates
void rect_to_polar(const rect * pxy, polar * pda)
{
	using namespace std;
	pda->distance = sqrt(pxy->x * pxy->x, pxy->y * pxy->y);
	pda->angle = atan2(pxy->y, pxy->x);
}
*/

/*
//14. topfive.cpp -- handling an array of string objects   
#include <iostream>
#include <string>
using namespace std;
const int SIZE = 5;
// prototypes
void display(const string sa[], int n);
int main()
{
	string list[SIZE];		// an array holding s string object
	cout << "Enter your " << SIZE << " favorite astronomical sights:\n";
	for (int i = 0; i < SIZE; i++)
	{
		cout << i + 1 << ": ";
		getline(cin, list[i]);
	}
	cout << "Your list:\n";
	display(list, SIZE);
	system("pause");
	return 0;
}
void display(const string sa[], int n)
{
	for (int i = 0; i < n; i++)
		cout << i + 1 << ": " << sa[i] << endl;
}
*/

/*
//15. arrobj.cpp -- functions with array objects (C++11)   
#include <iostream>
#include <array>
#include <string>
using namespace std;
// constant data
const int Seasons = 4;
const array<string, Seasons> Snames = { "Spring", "Summer", "Fall" , "Winter" };
// function to modify array object
void fill(array<double, Seasons> * pa);
// function that uses array object without modifying it
void show(array<double, Seasons> da);
int main()
{
	array<double, Seasons> expenses;
	fill(&expenses);
	show(expenses);
	system("pause");
	return 0;
}
void fill(array<double, Seasons> * pa)
{
	for (int i = 0; i < Seasons; i++)
	{
		cout << "Enter " << Snames[i] << " expenses: ";
		cin >> (*pa)[i];
	}
}
void show(array<double, Seasons> da)
{
	double total = 0.0;
	cout << "\nEXPENSES\n";
	for (int i = 0; i < Seasons; i++)
	{
		cout << Snames[i] << ": $" << da[i] << endl;
		total += da[i];
	}
	cout << "Total Expenses: $" << total << endl;
}
*/

/*
//16. recur.cpp -- using recursion   
#include <iostream>
using namespace std;
void countdown(int n);
int main()
{
	countdown(4);				// call the recursive function
	system("pause");
	return 0;
}
void countdown(int n)
{
	cout << "Counting down ... " << n << endl;
	if (n > 0)
		countdown(n - 1);		// function calls itself
	cout << n << ": Kaboom!\n";
}
*/

/*
//17. ruler.cpp -- using recursion to subdivide a ruler 
#include <iostream>
const int Len = 66;
const int Divs = 6;
void subdivide(char ar[], int low, int high, int level);
int main()
{
	using namespace std;
	char ruler[Len];
	int i;
	for (i = 1; i < Len - 2; i++)
		ruler[i] = ' ';
	ruler[Len - 1] = '\0';
	int max = Len - 2;
	int min = 0;
	ruler[min] = ruler[max] = '|';
	cout << ruler << endl;
	for (i = 1; i <= Divs; i++)
	{
		subdivide(ruler, min, max, i);
		cout << ruler << endl;
		for (int j = 1; j < Len - 2; j++)
			ruler[j] = ' ';		// reset to blank ruler
	}
	system("pause");
	return 0;
}
void subdivide(char ar[], int low, int high, int level)
{
	if (level == 0)
		return;
	int mid = (high + low) / 2;
	ar[mid] = '|';
	subdivide(ar, low, mid, level - 1);
	subdivide(ar, mid, high, level - 1);
}
*/

/*
//18. fun_ptr.cpp -- pointers to functions 
#include <iostream>
double betsy(int lns);
double pam(int lns);
void estimate(int lines, double(*pf)(int));
int main()
{
	using namespace std;
	int code;
	cout << "How many lines of code do you need? ";
	cin >> code;
	cout << "Here's Betsy's estimate:\n";
	estimate(code, betsy);
	cout << "Here's Pam's estimate:\n";
	estimate(code, pam);
	system("pause");
	return 0;
}
double betsy(int lns)
{
	return 0.05 * lns;
}
double pam(int lns)
{
	return 0.03 * lns + 0.0004 * lns * lns;
}
void estimate(int lines, double(*pf)(int))
{
	using namespace std;
	cout << lines << " lines will take ";
	cout << (*pf)(lines) << " hour(s)\n";
}
*/

/*
//19. arfupt.cpp -- an array of function pointers
#include <iostream>
//
const double * f1(const double * ar, int n);
const double * f2(const double ar[], int n);
const double * f3(const double ar[], int n);
int main()
{
	using namespace std;
	double av[3] = { 1112.3, 1542.6, 2227.9 };
	// pinter to a function
	const double * (*p1)(const double *, int) = f1;
	auto p2 = f2;		// C++11 automatic type deduction
	// const double *(*p2)(cosnt double *, int) = f2;
	cout << "Using pointers to functions:\n";
	cout << " Address   Value\n";
	cout << (*p1)(av, 3) << ": " << *(*p1)(av, 3) << endl;
	cout << p2(av, 3) << ": " << *p2(av, 3) << endl;
	
	// pa an array of pointers
	// auto doesn't work with list initialization
	const double * (*pa[3])(const double *, int) = { f1,f2,f3 };
	// but it pointer to first element pf pa
	auto pb = pa;
	// pre-C++11 can use the following code instead
	// const double *(*pb)(const double *, int) = pa;
	cout << "\nUsing an array of pointers to functions:\n";
	cout << " Address Value\n";
	for (int i = 0; i < 3; i++)
		cout << pa[i](av, 3) << ": " << *pa[i](av, 3) << endl;
	cout << "\nUsing a pointer to a pointer to a function:\n";
	cout << " Address   Value\n";
	for (int i = 0; i < 3; i++)
		cout << pb[i](av, 3) << ": " << *pb[i](av, 3) << endl;

	//what about a pointer to an array of function pointers
	cout << "\nUsing pointers to an array of pointers:\n";
	cout << " Address   Value\n";
	// esay way to declare pc
	auto pc = &pa;
	// pre-C++ can use the following code instead
	// const double *(*(*pc)[0])(const double *, int) = &pa;
	cout << (*pc)[0](av, 3) << ": " << *(*pc)[0](av, 3) << endl;
	// hard way wo declare pd
	const double *(*(*pd)[3])(const double *, int) = &pa;
	// store return value in pdb
	const double* pdb = (*pd)[1](av, 3);
	cout << pdb << ": " << *pdb << endl;
	// alternative notation
	cout << (*(*pd)[2])(av, 3) << ": " << *(*(*pd)[2])(av, 3) << endl;

	system("pause");
	return 0;
}
// some rather dull functions
const double * f1(const double * ar, int n)
{
	return ar;
}
const double * f2(const double ar[], int n)
{
	return ar + 1;
}
const double * f3(const double ar[], int n)
{
	return ar + 2;
}
*/


/*-----------practise-------------*/
/*
#include <iostream>		// 1
double aver(double x, double y);
int main()
{
	using namespace std;
	double m[2];
	double a;
	cout << "Enter two numbers: ";
	while (cin >> m[0] >> m[1])
	{
		if (m[0] * m[1] == 0)
			break;
		a = aver(m[0], m[1]);
		cout << "Harmonic mean: " << a << endl;
		cout << "Enter two numbers: ";
	}
	cout << "Done!\n";
	system("pause");
	return 0;

}
double aver(double x, double y)
{
	return 2.0*x*y / (x + y);
}
*/

/*
#include <iostream>		// 2
const int SIZE = 3;
int input(int sc[], int size);
double calculate(int *sc, int size);
void display(int sc[], int size, double aver);
int main()
{

	int score[SIZE];
	int ps = input(score, SIZE);
	double average = calculate(score, ps);
	display(score, ps, average);
	std::cout << "Done!\n";
	system("pause");
	return 0;

}
int input(int sc[], int size)
{
	using namespace std;
	int i = 0;
	cout << "Enter ten scores: ";
	while (i < size && cin >> sc[i])
	{
		i++;
	}
	return i;
}
double calculate(int *sc, int size)
{
	double sum = 0;
	int i;
	for (i = 0; i < size; i++)
	{
		sum += *(sc + i);
	}
	return sum / i;
}
void display(int sc[], int size, double aver)
{	
	using namespace std;
	cout << "Score entered: ";
	for (int i = 0; i < size; i++)
	{
		cout << *(sc + i) << " ";
	}
	cout << "\nAverage: " << aver << endl;
}
*/

/*
#include <iostream>		// 3
struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};
void display(box b1);
void multiply(box * b2);
int main()
{
	box by = { "yueyiping",10,10,10,0, };
	multiply(&by);
	display(by);
	system("pause");
	return 0;
}
void display(box b1)
{
	using namespace std;
	cout << "height: " << b1.height << endl;
	cout << "width:  " << b1.width << endl;
	cout << "length:  " << b1.length << endl;
	cout << "volume:  " << b1.volume << endl;	
}
void multiply(box * b2)
{
	b2->volume = b2->height * b2->width * b2->length;
}
*/

/*
#include <iostream>		//4
long double probability(unsigned numbers, unsigned picks);
int main()
{
	using namespace std;
	double total, choices;
	cout << "47 picks 5 and 27 picks 1: ";
	cout << probability(47, 5);	
	cout << " of winning.\n";

	cout << "bye\n";

	system("pause");
	return 0;
}
long double probability(unsigned numbers, unsigned picks)
{
	long double result = 1.0;		
	long double n;
	unsigned p;
	for (n = numbers, p = picks; p > 0; n--, p--)
		result = result * n / p;
	return  1 / (result * 27);
}
*/

/*
#include <iostream>		//5
long  multiply(long con);
int main()
{
	using namespace std;
	cout << "Enter an integer: ";
	int a;
	while(cin >> a)
	{ 
		cout << "Factorial " << a << ":  " << multiply(a) << endl;
		cout << "Enter another integer: ";
	}
	system("pause");
	return 0;
}
long multiply(long con)
{
	long j;
	if (con == 0)
		j = 1;
	else
		j = con * multiply(con - 1);
	return j;
}
*/

/*
#include <iostream>		//6
const int Size = 10;
int Fill_array(double arr[], int size);
void Show_array(double arr[], int size);
void Reverse_array(double arr[], int size);
int main()
{
	using namespace std;
	double dearai[Size];
	int cnt = Fill_array(dearai, Size);
	Show_array(dearai, cnt);
	Reverse_array(dearai, cnt);
	Show_array(dearai, cnt);

	system("pause");
	return 0;
}
int Fill_array(double arr[], int size)
{
	std::cout << "Enter " << size << " double number(s)(enter q to quit): ";
	int i = 0;
	while (i < size && std::cin >> arr[i])
	{
		i++;
	}
	return i;
}
void Show_array(double arr[], int size)
{
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
}
void Reverse_array(double arr[], int size)
{
	double temp = 0;
	for (int i = 1; i < size / 2; i++)
	{
		temp = arr[i];
		arr[i] = arr[size - i - 1];
		arr[size - i - 1] = temp;
	}
}
*/

/*
#include <iostream>		//7
const int Max = 5;
// function prototype
double * fill_array(double ar[], int limit);
void show_array(double * ar, double * pt);
void revalue(double r, double * ar, double * pt);
int main()
{
	using namespace std;
	double properties[Max];
	double * endptr = fill_array(properties, Max);
	show_array(properties, endptr);
	if (properties != endptr)
	{
		cout << "Enter revaluation factor: ";
		double factor;
		while (!(cin >> factor))		
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; Please enter a number: ";
		}
		revalue(factor, properties, endptr);
		show_array(properties, endptr);
	}
	cout << "Done.\n";

	system("pause");
	return 0;
}
double * fill_array(double ar[], int limit)
{
	using namespace std;
	double temp;
	int i;
	for (i = 0; i < limit; i++)
	{
		cout << "Enter value # " << (i + 1) << ": ";
		cin >> temp;
		if (!cin)		
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; input process terminated.\n";
			break;
		}
		else if (temp < 0)	
			break;
		ar[i] = temp;
	}
	return ar + i;
}
void show_array(double * ar, double * pt)
{
	using namespace std;
	double * str;
	int i = 0;
	for (str = ar; str != pt; str++)
	{
		cout << "Property #" << (i + 1) << ": $";
		cout << *str << endl;
		i++;
	}
}
void revalue(double r, double * ar, double * pt)
{
	double * str;
	for (str = ar; str != pt; str++)
		*str *= r;
}
*/

/*
#include <iostream>	//18.a
using namespace std;
// constant data
const int Seasons = 4;
const char * Snames[Seasons] = { "Spring", "Summer", "Fall" , "Winter" };
void fill(double * pa);
void show(double * da);
int main()
{
	double expenses[Seasons];
	fill(expenses);
	show(expenses);
	system("pause");
	return 0;
}
void fill(double * pa)
{
	for (int i = 0; i < Seasons; i++)
	{
		cout << "Enter " << Snames[i] << " expenses: ";
		cin >> *(pa + i);
	}
}
void show(double * da)
{
	double total = 0.0;
	cout << "\nEXPENSES\n";
	for (int i = 0; i < Seasons; i++)
	{
		cout << Snames[i] << ": $" << da[i] << endl;
		total += da[i];
	}
	cout << "Total Expenses: $" << total << endl;
}
*/
/*
#include <iostream>	//18.b
const int Seasons = 4;
const char * Snames[Seasons] = { "Spring", "Summer", "Fall" , "Winter" };
struct expen
{
	double price[Seasons];
};
void fill(expen * pa);
void show(expen * da);
int main()
{
	using namespace std;
	expen expenses = {0};
	fill(&expenses);
	show(&expenses);
	system("pause");
	return 0;
}
void fill(expen * pa)
{
	using namespace std;
	for (int i = 0; i < Seasons; i++)
	{
		cout << "Enter " << Snames[i] << " expenses: ";
		cin >> pa->price[i];
	}
}
void show(expen * da)
{
	using namespace std;
	double total = 0.0;
	cout << "\nEXPENSES\n";
	for (int i = 0; i < Seasons; i++)
	{
		cout << Snames[i] << ": $" << da->price[i] << endl;
		total += da->price[i];
	}
	cout << "Total Expenses: $" << total << endl;
}
*/

/*
#include <iostream>
using namespace std;
const int SLEN = 30;
struct student {
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};
int getinfo(student pa[], int n);
void display1(student st);
void display2(student * st);
void display3(const student pa[], int n);
int main()
{
	cout << "Enter class size: ";
	int class_size;
	cin >> class_size;
	while (cin.get() != '\n')
		continue;

	student * ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);
	for (int i = 0; i < entered; i++)
	{
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu, entered);
	delete[] ptr_stu;
	cout << "Done\n";
	system("pause");
	return 0;
}
int getinfo(student pa[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		cout << "Enter student's name: ";
		cin.getline(pa[i].fullname, SLEN);
		if (pa[i].fullname[0] == '\0')
			break;
		cout << "hobby: ";
		cin.getline(pa[i].hobby, SLEN);
		cout << "ooplevel: ";
		(cin >> pa[i].ooplevel).get();
	}
	cout << endl;
	return i;
}
void display1(student st)
{
	cout << "fullname: " << st.fullname << endl;
	cout << "hobby: " << st.hobby << endl;
	cout << "ooplevel: " << st.ooplevel << endl;
}
void display2(student * st)
{
	cout << "fullname: " << st->fullname << endl;
	cout << "hobby: " << st->hobby << endl;
	cout << "ooplevel: " << st->ooplevel << endl;
}
void display3(const student pa[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Student" << i + 1 << ": ";
		cout << pa[i].fullname << endl;
		cout << "hobby: " << pa[i].hobby << endl;
		cout << "oopleve: " << pa[i].ooplevel << endl;
	}
}
*/


#include <iostream>
using namespace std;
double add1(double x, double y);
double add2(double x, double y); 
double add3(double x, double y);
double calculate(double x, double y, double(*pf)(double, double));

int main()
{
	double(*pf[3])(double, double) = { add1 ,add2 ,add3 };
	cout << "Enter two numbers: ";
	double a, b, sum = 0;
	while (cin >> a >> b)
	{
		for (int i = 0; i < 3; i++)
		{
			sum = calculate(a, b, pf[i]);
			cout << "sum: " << sum << endl;
		}
		cout << "Enter another two numbers: ";
	}
	cout << "Done!\n";
	system("pause");
	return 0;
}
double add1(double x, double y)
{
	return x + y;
}
double add2(double x, double y)
{
	return x + y;
}
double add3(double x, double y)
{
	return x + y;
}
double calculate(double x, double y, double(*pf)(double, double))
{
	double sum = 0;
	sum = (*pf)(x,y);
	return sum;
}


