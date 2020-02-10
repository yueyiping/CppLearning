/*
//1. arrayone.cpp -- small arrays of integers
#include <iostream>
int main()
{
	using namespace std;
	int yams[3];		// creates array with three elements
	yams[0] = 7;			// assign value to first element
	yams[1] = 8;
	yams[2] = 6;

	int yamcosts[3] = { 20,30,5 };		// creat, initialize array
// NOTE: If your C++ compiler or translator can't initialize
// this array, use static int yamcosts[3] instead of
// int yamcosts[3]

	cout << "Total yams = ";
	cout << yams[0] + yams[1] + yams[2] << endl;
	cout << "The package with " << yams[1] << " yams costs ";
	cout << yamcosts[1] << " cents per yam.\n";
	int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];
	total = total + yams[2] * yamcosts[2];
	cout << "The total yam expense is " << total << " cents.\n";

	cout << "\nSize of yams array = " << sizeof yams;
	cout << " bytes.\n";
	cout << "Size of one element = " << sizeof yams[0];
	cout << " bytes.\n";

	system("pause");
	return 0;
}
*/

/*
//2. string.cpp -- storing string in an array
#include <iostream>
int main()
{
	using namespace std;
	const int Size = 15;
	char name1[Size];					// empty array
	char name2[Size] = "C++owboy";		// initialized array
	// NOTE: some implementations may require the static keyword
	// to initialize the array name2

	cout << "Howdy! I'm " << name2;
	cout << "! What's your name?\n";
	cin >> name1;
	cout << "Well, " << name1 << ", your name has ";
	cout << strlen(name1) << " letters and is stored\n";
	cout << "in an array of " << sizeof(name1) << " bytes.\n";
	cout << "Your initial is " << name1[0] << ".\n";
	name2[3] = '\0';					// set to null character
	cout << "Here are the first 3 characters of my name: ";
	cout << name2 << endl;

	system("pause");
	return 0;
}
*/

/*
//3. instr1.cpp -- reading more than one string
#include <iostream>
int main()
{
	using namespace std;
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];

	cout << "Enter your name:\n";
	cin >> name;
	cout << "Enter your favorite dessert:\n";
	cin >> dessert;
	cout << "I have more delicious " << dessert;
	cout << " for you, " << name << ".\n";

	system("pause");
	return 0;
}
*/

/*
//4. instr2.cpp -- reading more than one word with getline
#include <iostream>
int main()
{
	using namespace std;
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];

	cout << "Enter your name:\n";
	cin.getline(name, ArSize);			// reads through newline
	cout << "Enter your favorite dessert:\n";
	cin.getline(dessert, ArSize);
	cout << "I have more delicious " << dessert;
	cout << " for you, " << name << ".\n";

	system("pause");
	return 0;
}
*/

/*
//5. instr3.cpp -- reading more than one word with get() & get()
#include <iostream>
int main()
{
	using namespace std;
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];

	cout << "Enter your name:\n";
	cin.get(name, ArSize).get();			// reads string, newline
	cout << "Enter your favorite dessert:\n";
	cin.get(dessert, ArSize).get();
	cout << "I have more delicious " << dessert;
	cout << " for you, " << name << ".\n";

	system("pause");
	return 0;
}
*/

/*
//6. numstr.cpp -- following number input with line input
#include <iostream>
int main()
{
	using namespace std;
	cout << "What year was your house built?\n";
	int year;
	(cin >> year).get();		// or (cin >> year).get(ch);  or add cin.get();

	cout << "What is its street address?\n";
	char address[80];
	cin.getline(address, 80);
	cout << "Year bulit: " << year << endl;
	cout << "Address: " << address << endl;
	cout << "Done!\n";

	system("pause");
	return 0;
}
*/

/*
//7. strtype.cpp -- using the C++ string class
#include <iostream>
#include <string>						// make string class avaliable
int main()
{
	using namespace std;
	char charr1[20];					// create an empty array
	char charr2[20] = "jaguar";			// create an initialized array
	string str1;						// create an empty string object
	string str2 = "panther";			// create an initialized string

	cout << "Enter a king of feline: ";
	cin >> charr1;
	cout << "Enter another king of feline: ";
	cin >> str1;						// use cin for input
	cout << "Here are some felines:\n";
	cout << charr1 << " " << charr2 << " "
		<< str1 << " " << str2			// use cout for output
		<< endl;
	cout << "The third letter in " << charr2 << " is "
		<< charr2[2] << endl;
	cout << "The third letter in " << str2 << " is "
		<< str2[2] << endl;				// use array notation

	system("pause");
	return 0;
}
*/

/*
//8. strtype2.cpp -- assigning, adding, and appending
#include <iostream>
#include <string>						// make string class avaliable
int main()
{
	using namespace std;
	string s1 = "penguin";
	string s2, s3;

	cout << "You can assign one string object to another: s2 = s1\n";
	s2 = s1;
	cout << "s1: " << s1 << ", s2: " << s2 << endl;

	cout << "You can assign a C-style string to a string object.\n";
	cout << "s2 = \"buzzard\"\n";
	s2 = "buzzard";
	cout << "s2: " << s2 << endl;

	cout << "You can concatenate strings: s3 = s1 + s2\n";
	s3 = s1 + s2;
	cout << "s3: " << s3 << endl;

	cout << "You can append strings.\n";
	s1 += s2;
	cout << "s1 += s2 yields s1 = " << s1 << endl;
	s2 += " for a day";
	cout << "s2 += \" for a day\" yields s2= " << s2 << endl;

	system("pause");
	return 0;
}
*/

/*
//9. strtype3.cpp
#include <iostream>
#include <string>						// make string class avaliable
#include <cstring>						// C-style string library
int main()
{
	using namespace std;
	char charr1[20];
	char charr2[20] = "jaguar";
	string str1;
	string str2 = "panther";

	// assignment for string objects and character arrays
	str1 = str2;						// copy str2 to str1
	strcpy_s(charr1, charr2);				// copy charr2 to charr1

	// appending for string objects and character arrays
	str1 += " paste";					// add paste to end of 
	strcat_s(charr1, " juice");			// add juice to end of charr1

	// finding the length of a string object and a C-style string
	int len1 = str1.size();				// obtain length of str1
	int len2 = strlen(charr1);			// obtain length of charr1

	cout << "The string " << str1 << " contains "
		<< len1 << " characters.\n";
	cout << "The string " << charr1 << " contains "
		<< len2 << " charcaters.\n";

	system("pause");
	return 0;
}
*/

/*
//10. strtype4.cpp
#include <iostream>
#include <string>						// make string class avaliable
#include <cstring>						// C-style string library
int main()
{
	using namespace std;
	char charr[20];
	string str;

	cout << "Length of string in charr before input: "
		<< strlen(charr) << endl;
	cout << "Length of string in str before input: "
		<< str.size() << endl;
	cout << "Enter a line of text:\n";
	cin.getline(charr, 20);				// indicate maximum length
	cout << "You entered: " << charr << endl;
	cout << "Enter another line of text:\n";
	getline(cin, str);					// cin now an argument; no length specifier
	cout << "You entered: " << str << endl;
	cout << "Length of string in charr after input: "
		<< strlen(charr) << endl;
	cout << "Length of string in str after input: "
		<< str.size() << endl;

	system("pause");
	return 0;
}
*/

/*
//11. structur.cpp -- a simple structure
#include <iostream>
struct inflatable		// structure declaration
{
	char name[20];
	float volume;
	double price;
};

int main()
{
	using namespace std;
	inflatable guest =
	{
		"Glorious Glotia",	// name value
		1.88,				// volume value
		29.99				// price value
	};	// guest is a structure variable of type inflatable
// It's initialized to the indicated values
	inflatable pal =
	{
		"Audacious Arthur",
		3.12,
		32.99
	};	// pal is a second variable of type inflatable
// NOTE: some implementations require using
// static inflatable guest = 

	cout << "Expand your guest list with " << guest.name;
	cout << " and " << pal.name << "!\n";
// pal.name is the name member of the pal variable
	cout << "You can have both for $";
	cout << guest.price + pal.price << "!\n";

	system("pause");
	return 0;
}
*/

/*
//12. assgn_st.cpp -- assigning structures
#include <iostream>
struct inflatable		
{
	char name[20];
	float volume;
	double price;
};

int main()
{
	using namespace std;
	inflatable bouquet =
	{
		"sunflowers",	
		0.20,				
		12.49				
	};	
	inflatable choice;
	cout << "bouquet: " << bouquet.name << " for $";
	cout << bouquet.price << endl;

	choice = bouquet;	// assign one structure to another
	cout << "choice: " << choice.name << " for $";
	cout << choice.price << endl;

	system("pause");
	return 0;
}
*/

/*
//13. arrstruc.cpp -- an array of structures
#include <iostream>
struct inflatable
{
	char name[20];
	float volume;
	double price;
};

int main()
{
	using namespace std;
	inflatable guest[2] =			// initializating an array of structs
	{
		{"Bambi", 0.5, 21.99},		// first structure in array
		{"Godzilla", 2000, 565.99}	// next structure in array
	};

	cout << "The guests " << guest[0].name << " and " << guest[1].name
		<< "\nhave a combined volume of "
		<< guest[0].volume + guest[1].volume << " cubic feet.\n";

	system("pause");
	return 0;
}
*/

/*
//14. address.cpp -- using the & operator to find addresses
#include <iostream>
int main()
{
	using namespace std;
	int donuts = 6;
	double cups = 4.5;
	cout << "donuts value = " << donuts;
	cout << " and donuts address = " << (&donuts) << endl;
// NOTE: you may need to use unsigned (&donuts) and unsigned (&cups)
	cout << "cups value = " << cups;
	cout << " and cups address = " << &cups << endl;

	system("pause");
	return 0;
}
*/

/*
//15. pointer.cpp -- our first pointer variable
#include <iostream>
int main()
{
	using namespace std;
	int updates = 6;			// declare a variable
	int * p_updates;
	p_updates = &updates;		// assign address of int to pointer

// express values two ways
	cout << "Values: updates = " << updates;
	cout << ", *p_updates = " << *p_updates << endl;

// express address two ways
	cout << "Addresses: &updates = " << &updates;
	cout << ", p_updates = " << p_updates << endl;

// use pointer to change value
	*p_updates = *p_updates + 1;
	cout << "Now updates = " << updates << endl;

	system("pause");
	return 0;
}
*/

/*
//16. init_ptr.cpp -- initialize a pointer
#include <iostream>
int main()
{
	using namespace std;
	int higgens = 5;
	int* pt = &higgens;

	cout << "Value of higgens = " << higgens
		<< "; Address of higgens = " << &higgens << endl;
	cout << "Value of *pt = " << *pt
		<< "; Value of pt = " << pt << endl;

	system("pause");
	return 0;
}
*/

/*
//17. use_new.cpp -- using the new operator
#include <iostream>
int main()
{
	using namespace std;
	int nights = 1001;
	int * pt = new int;			// allocate space for an int
	*pt = 1001;					// store a value there

	cout << "nights value = ";
	cout << nights << ": location " << &nights << endl;
	cout << "int ";
	cout << "value = " << *pt << ": location = " << pt << endl;
	double * pd = new double;	// allocate space for a double
	*pd = 10000001.0;			// store a double there

	cout << "double ";
	cout << "value = " << *pd << ": location = " << pd << endl;
	cout << "location of pointer pd: " << &pd << endl;
	cout << "size of pt = " << sizeof(pt);
	cout << ": size of *pt = " << sizeof(*pt) << endl;
	cout << "size of pd = " << sizeof pd;
	cout << ": size of *pd = " << sizeof(*pd) << endl;

	system("pause");
	return 0;
}
*/

/*
//18. arraynew.cpp -- using the new operator for arrays
#include <iostream>
int main()
{
	using namespace std;
	double * p3 = new double[3];		// space for 3 doubles
	p3[0] = 0.2;						// treat p3 like an array name
	p3[1] = 0.5;
	p3[2] = 0.8;
	cout << "p3[1] is " << p3[1] << ".\n";
	p3 = p3 + 1;						// increment the pointer
	cout << "Now p3[0] is " << p3[0] << " and ";
	cout << "p3[1] is " << p3[1] << ".\n";
	p3 = p3 - 1;						// point back to beginning
	delete[] p3;						// free the memory

	system("pause");
	return 0;
}
*/

/*
//19. addpntrs.cpp -- pointer addition
#include <iostream>
int main()
{
	using namespace std;
	double wages[3] = { 10000.0, 20000.0, 30000.0 };
	short stacks[3] = { 3, 2, 1 };

// Here are two ways to get the address of an array
	double * pw = wages;		// name of an array = address
	short  * ps = &stacks[0];	// or use address operator
// with array element
	cout << "pw = " << pw << ", *pw = " << *pw << endl;
	pw = pw + 1;
	cout << "add 1 to the pw pointer:\n";
	cout << "pw = " << pw << ", *pw = " << *pw << "\n\n";
	cout << "ps = " << ps << ", *ps = " << *ps << "\n\n";
	ps = ps + 1;
	cout << "add 1 to the ps pointer:\n";
	cout << "ps = " << ps << ", *ps = " << *ps << "\n\n";

	cout << "access two elements with array notation\n";
	cout << "stacks[0] = " << stacks[0]
		<< ", stacks[1] = " << stacks[1] << endl;
	cout << "access two elements with pointer notation\n";
	cout << "*stacks = " << *stacks
		<< ", *(stacks +1) = " << *(stacks + 1) << endl;

	cout << sizeof(wages) << " = size of wages array\n";
	cout << sizeof(pw) << " = size of pw pointer\n";

	system("pause");
	return 0;
}
*/

/*
//20. ptstr.cpp -- using pointers to strings
#include <iostream>
#include <cstring>			// declare strlen(), strcpy()
int main()
{
	using namespace std;
	char animal[20] = "bear";		// anmial holds bear
	const char * bird = "wren";		// bird holds address of string
	char * ps;						// uninitialized

	cout << animal << " and ";		// display bear
	cout << bird << "\n";			// display wren
	//cout << ps << "\n";			//may display garbage, may cause a crash

	cout << "Enter a kind of animal: ";
	cin >> animal;					// ok if input < 20 chars
	// cin >> ps; Too horrible a blunder to try; ps doesn't 
	//			  point to allocated space

	ps = animal;					// set ps to point to string
	cout << ps << "!\n";			// ok, same as using animal
	cout << "Before using strcpy():\n";
	cout << animal << " at " << (int *)animal << endl;
	cout << ps << " at " << (int *)ps << endl;

	ps = new char[strlen(animal) + 1];	// get new storage
	strcpy(ps, animal);					// copy string to new storage
	cout << "After using strcpy():\n";
	cout << animal << " at " << (int *)animal << endl;
	cout << ps << " at " << (int *)ps << endl;
	delete[] ps;

	system("pause");
	return 0;
}
*/

/*
//21. newstrct.cpp -- using new with a structure
#include <iostream>
struct inflatable			// structure definition
{
	char name[20];
	float volume;
	double price;
};
int main()
{
	using namespace std;
	inflatable * ps = new inflatable;		// allot memory for structure
	cout << "Enter name of inflatable item: ";
	cin.get(ps->name, 20);					// method 1 for member access
	cout << "Enter volume in cubic feet: ";
	cin >> (*ps).volume;					// method 2 for member access
	cout << "Enter price: $";
	cin >> ps->price;
	cout << "Name: " << (*ps).name << endl;					// method 2
	cout << "Volume: " << ps->volume << " cubic feet\n";	// method 1
	cout << "Price: $" << ps->price << endl;				// method 1
	delete ps;					// free memory used by structure

	system("pause");
	return 0;
}
*/

/*
//22. delete.cpp -- using the delete operator
#include <iostream>
#include <cstring>			// or string.h
using namespace std;
char * getname(void);	// function prototype
int main()
{
	char * name;		// create pointer but no storage

	name = getname();	// assign address of string to name
	cout << name << " at " << (int *)name << "\n";
	delete[] name;		// memory freed

	name = getname();	// reuse freed memory
	cout << name << " at " << (int *)name << "\n";
	delete[] name;		// memory freed again

	system("pause");
	return 0;
}

char * getname()		// ruturn pointer to new string
{
	char temp[80];		// temporary storage
	cout << "Enter last name: ";
	cin >> temp;
	char * pn = new char[strlen(temp) + 1];
	strcpy(pn, temp);	// copy string into smaller space

	return pn;			// temp lost when function ends
}
*/


/*
//23. mixtypes.cpp -- some type combinations
#include <iostream>
using namespace std;
struct antarctica__years_end
{
	int year;		// some really interesting data, etc. 
};
int main()
{
	antarctica__years_end s01, s02, s03;
	s01.year = 1998;
	antarctica__years_end *pa = &s02;
	pa->year = 1999;
	antarctica__years_end trio[3];		// array of 3 structures
	trio[0].year = 2003;
	cout << trio->year << endl;

	const antarctica__years_end * arp[3] = { &s01, &s02, &s03 };
	cout << arp[1]->year << endl;
	
	const antarctica__years_end ** ppa = arp;
	auto ppb = arp;						// C+11 automatic type deduction
// or else   use const antarctica__years_end **ppb = arp;
	cout << (*ppa)->year << endl;
	cout << (*(ppb + 1))->year << endl;

	system("pause");
	return 0;
}
*/

/*
//24. choices.cpp -- array variations
#include <iostream>
#include <vector>		// STL C++98
#include <array>		// C++11
int main()
{
	using namespace std;
// C, original C++
	double a1[4] = { 1.2, 2.4,3.6,4.8 };
// C++98 STL
	vector<double> a2(4);	// create vector with 4 elements
// no simple way to initialize in C98
	a2[0] = 1.0 / 3.0;
	a2[1] = 1.0 / 5.0;
	a2[2] = 1.0 / 7.0;
	a2[3] = 1.0 / 9.0;
// C++11 -- creat and initialize array object
	array<double, 4> a3 = { 3.14,2.72,1.62,1.41 };
	array<double, 4> a4;
	a4 = a3;				// vaild for array objects of same size
// use array notation
	cout << "a1[2]: " << a1[2] << " at " << &a1[2] << endl;
	cout << "a2[2]: " << a2[2] << " at " << &a2[2] << endl;
	cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
	cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;
// misdeed
	a1[-2] = 20.2;
	cout << "a1[-2]: " << a1[-2] << " at " << &a1[-2] << endl;
	cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
	cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;

	system("pause");
	return 0;
}
*/



/*----------practice----------*/
/*
#include <iostream>	// 1
int main()
{
	using namespace std;
	cout << "What is your first name? ";
	char fname[10];
	cin.getline(fname, 10);
	
	cout << "What is your lase name? ";
	char lname[10];
	cin.getline(lname, 10);

	cout << "What letter grade do you deserve? ";
	char letter;
	(cin >> letter).get();

	cout << "What is your age? ";
	int age;
	(cin >> age).get();

	cout << "Name: " << lname << ", " << fname << endl;
	cout << "Grade: " << char(letter + 1) << endl;
	cout << "Age: " << age << endl;

	system("pause");
	return 0;
}
*/

/*
#include <iostream>	//2
#include <string>	
int main()
{
	using namespace std;
	const int ArSize = 20;
	string name;
	string dessert;

	cout << "Enter your name:\n";
	(cin >> name).get();
	//getline(cin, dessert);
	cout << "Enter your favorite dessert:\n";
	getline(cin,dessert);
	cout << "I have more delicious " << dessert;
	cout << " for you, " << name << ".\n";

	system("pause");
	return 0;
}
*/

/*
#include <iostream>	//3
#include <string>	
int main()
{
	using namespace std;
	cout << "Enter your first name: ";
	char fname[10];
	cin.getline(fname, 10);

	cout << "Enter your last name: ";
	char lname[10];
	(cin >> lname).get();

	char name[20];
	strcpy(name,lname);
	strcat(name,", ");
	strcat(name,fname);
	cout << "Here's the information in a single string: " << name << endl;

	system("pause");
	return 0;
}
*/

/*
#include <iostream>	//4
#include <string>	
int main()
{
	using namespace std;
	cout << "Enter your first name: ";
	string fname;
	getline(cin, fname);

	cout << "Enter your last name: ";
	string lname;
	(cin >> lname).get();

	string name = lname + ", " + fname;
	cout << "Here's the information in a single string: " << name << endl;

	system("pause");
	return 0;
}
*/

/*
#include <iostream>	//5
struct CandyBar
{
	char brand[20];
	float weight;
	int calorie;
};
int main()
{
	using namespace std;
	CandyBar snack = {
		"Mocha Munch",
		2.3,
		350
	};
	cout << snack.brand << endl;
	cout << snack.weight << endl;
	cout << snack.calorie << endl;
	system("pause");
	return 0;
}
*/

/*
#include <iostream>	//6
struct CandyBar
{
	char brand[20];
	float weight;
	int calorie;
};
int main()
{
	using namespace std;
	CandyBar snack[3] = {
		{"Mocha Munch",2.3,350 },
		{"yyp", 2.9, 380},
		{"a w", 5.2, 520}
	};
	cout << snack[0].brand << endl;
	cout << snack[1].weight << endl;
	cout << snack[2].calorie << endl;
	system("pause");
	return 0;
}
*/

/*
#include <iostream>	//7
struct pizza
{
	char name[20];
	float diameter;
	float weight;
};

int main()
{
	using namespace std;
	pizza piz;
	cout << "Enter pizza's name: ";
	cin.getline(piz.name, 20);
	cout << "Enter pizza's diameter: ";
	(cin >> piz.diameter).get();
	cout << "Enter pizza's weight: ";
	(cin >> piz.weight).get();

	cout << piz.name << endl;
	cout << piz.diameter << endl;
	cout << piz.weight << endl;

	system("pause");
	return 0;
}
*/

/*
#include <iostream>	//8
struct pizza
{
	char name[20];
	float diameter;
	float weight;
};
int main()
{
	using namespace std;
	pizza * piz = new pizza;
	cout << "Enter pizza's diameter: ";
	(cin >> piz->diameter).get();
	cout << "Enter pizza's name: ";
	cin.getline(piz->name, 20);
	cout << "Enter pizza's weight: ";
	(cin >> piz->weight).get();

	cout << piz->name << endl;
	cout << piz->diameter << endl;
	cout << piz->weight << endl;
	delete piz;

	system("pause");
	return 0;
}
*/

/*
#include <iostream>	//9
struct CandyBar
{
	char brand[20];
	float weight;
	int calorie;
};
int main()
{
	using namespace std;
	CandyBar * snack = new CandyBar[3];
	strcpy((*snack).brand, "YYP");
	strcpy((snack + 1)->brand, "AW");
	strcpy((snack + 2)->brand, "Lv");
	(*snack).weight = (*(snack + 1)).weight = (*(snack + 2)).weight =1.2;
	snack->calorie = (snack + 1)->calorie = (snack + 2)->calorie = 233;


	cout << snack->brand << endl;
	cout << (snack + 1)->weight << endl;
	cout << (snack + 2)->calorie << endl;
	system("pause");
	return 0;
}
*/


#include <iostream>	//10
#include <array>
int main()
{
	using namespace std;
	array<float, 3> result;
	cout << "Enter three results: \n";
	(cin >> result[0]).get();
	(cin >> result[1]).get();
	(cin >> result[2]).get();

	float average = (result[0] + result[1]+ result[2])/3;
	cout << average << endl;
	system("pause");
	return 0;
}

