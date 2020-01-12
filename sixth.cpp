//6-1
//#include<iostream>
//#include<cctype>
//using namespace std;
//int main()
//{
//	char ch = 0;
//	while ((ch = cin.get()) != '@')
//	{
//		if (isdigit(ch))
//		{
//			continue;
//		}
//		else if (islower(ch))
//		{
//			cout<< (char)toupper(ch);
//		}
//		else if (isupper(ch))
//		{
//			cout << (char)tolower(ch);
//		}
//	}
//	cout << "Done!" << endl;
//	system("pause");
//	return 0;
//}

//6-2
//#include<iostream>
//
//#include <array>
//using namespace std;
//int main()
//{
//	const unsigned int SIZE = 10;
//	array<double, SIZE > donation;
//	double avg = 0.0;
//	int enter = 0;
//	int total_value = 0;
//	int large_avg = 0;
//	
//	while (enter < 10 && (cin >> donation[enter]))
//	{
//		total_value += donation[enter];
//		enter++;
//	}
//
//	avg = total_value / enter;
//	for (unsigned int i = 0; i < enter; i++)
//	{
//		if (donation[i] > avg)
//		{
//			large_avg++;
//		}
//	}
//
//	cout << "The average value is " << avg << ", and there are " << large_avg << " double value large than agerage value!" << endl;
//	system("pause");
//	return 0;
//}


//6-3
//#include<iostream>
//using namespace std;
//int main()
//{
//	char ch = 0;
//	cout << "Please enter one of the following choices : " << endl;
//	cout << "c) carnivore        " << "p) pianist" << endl;
//	cout << "t) tree           " << "g) game" << endl;
//	
//	while (cin >> ch )
//	{
//		switch (ch)
//		{
//		case 'c':
//			cout << "Tyrannosaurus rex is a carnivore." << endl;
//			
//			break;
//
//		case 'p':
//			cout << "Langlang is a pianist." << endl;
//		
//			break;
//
//		case 't':
//			cout << "A maple is a tree." << endl;
//			
//			break;
//
//		case 'g':
//			cout << "Dota2 is a game." << endl;
//		
//			break;
//
//		default:
//			cout << "Please enter a c, p, t or g: ";
//			break;
//		}
//
//
//	}
//	system("pause");
//		return 0;
//
//}

//6-4

//#include <iostream>
//#include <string>
//#include <cctype>
//#include <array>
//#include <iomanip>
//#include <fstream>
//using namespace std;
//void display_by_name(const struct bop *bopArray, unsigned int size)
//{
//	for (size_t i = 0; i < size; i++)
//	{
//		cout <<bopArray[i].
//	}
//}
//
//int main()
//{	
//	const unsigned int strsize = 50;
//	struct bop
//	{
//		
//		char fullname[strsize];     // real name
//		char title[strsize];        // job title
//		char bopname[strsize];      // secret BOP name
//		int preference;             // 0 = fullname, 1 = title, 2 = bopname
//	};
//	
//	const struct bop bopArray[5] = {
//		{"Wimp Macho", "YYY", "Y----", 0},
//		{"XXXXXXXX", "2XXXX", "3XXXXX", 1},
//		{"AAAAAAAA", "2AAAA", "3AAAAA", 2},
//		{"BBBBBBBB", "2BBBB", "3BBBBB", 0},
//		{"CCCCCCCC", "4CCCC", "3CCCCC", 1}
//	};
//	char choice = 0;
//	cout << "Benevolent Order of Proframers Report" << endl;
//	cout << left << setw(30) << "a. display by name" << "b. display by title" << endl;
//	cout << left << setw(30) << "c. display by bopname" << "d. display by preference" << endl;
//	cout << left << setw(30) << "q. quit" << endl;
//	cout << "Enter your choice:";
//	while (cin>>choice)
//	{
//		if (choice == 'q')
//		{
//			break;
//		}
//		switch (choice)
//		{
//		case 'a':
//			display_by_name(bopArray, 5);
//			break;
//
//		case 'b':
//			display_by_title(bopArray, 5);
//			break;
//
//		case 'c':
//			display_by_bopname(bopArray, 5);
//			break;
//
//		case 'd':
//			display_by_preference(bopArray, 5);
//			break;
//
//		default:
//			break;
//		}
//		cout << "Next choice:";
//	}
//
//}



//6-5
//#include<iostream>
//using namespace std;
//int main()
//{
//	const double s1 = 0.1;
//	const double s2 = 0.15;
//	const double s3 = 0.2;
//	double number = 0;
//	double total = 0.0;
//	cout << "enter your number:";
//	while (cin>>number&&number>0)
//	{
//		if (number < 5000)
//		{
//			total = 0;
//			cout << total;
//			break;
//		}
//		else if (number >= 5001 && number <= 15000)
//		{
//			total = (number - 5000)*s1;
//			cout << total;
//			break;
//		}
//		else if(number >= 15001 && number <= 35000)
//
//		{
//			total = 10000 * s1 + (number - 10000)*s2;
//			cout << total;
//			break;
//		}
//		else if (number > 35000)
//		{
//			total = 10000 * s1 + 20000 * s2 + (number - 35000)*s3;
//			cout << total;
//			break;
//		}
//	
//	}
//
//	system("pause");
//	return 0;
//	
//
//}

//6-6
//*#include <iostream>
//#include <string>
//#include <cctype>
//#include <array>
//#include <iomanip>
//#include <fstream>
//using namespace std;
//struct pat_info
//{
//	string name;
//	double amount;
//};
//int main()
//{
//	unsigned int contributors = 0;
//	unsigned int tmp = 0;
//	cout << "enter contributors number";
//	cin >> contributors;
//	cin.get();
//	struct pat_info *ps=new pat_info[contributors];
//	for (int i = 0; i<contributors; i++)
//	{
//		cout<< "Enter the name of " << i + 1 << " contributor: ";
//		getline(cin, ps[i].name);
//		cout << "Enter the amount of donation: ";
//		cin >> ps[i].amount;
//		cin.get();
//	}
//	cout << "Grand Pators:" << endl;
//	for (int i = 0; i <contributors; i++)
//	{
//		if (ps[i].amount > 10000)
//		{
//			cout << "Contributor name: " << ps[i].name << endl;
//			cout << "Contributor amount: " << ps[i].amount << endl;
//			tmp++;
//		}
//	}
//	if (tmp == 0)
//	{
//		cout << "none" << endl;
//	}
//	 tmp = 0;
//	for (int i = 0; i < contributors; i++)
//	{
//		if (ps[i].amount < 10000)
//		{
//			cout << "Contributor name: " << ps[i].name << endl;
//			cout << "Contributor amount: " << ps[i].amount << endl;
//			tmp++;
//		}
//	}
//	if (tmp == 0)
//	{
//		cout << "none" << endl;
//	}

//	system("pause");
//	return 0;
//		
//}

//6-7
//#include <iostream>
//#include <string>
//#include <cctype>
//#include <array>
//#include <iomanip>
//#include <fstream>
//using namespace std;
//int main()
//{
//	string input;
//	int vowels = 0;
//	int consonants = 0;
//	int others = 0;
//	cout<< "Enter words (q to quit): " << endl;
//	while (cin >> input)
//	{
//
//		if (input.length() == 1 && input[0] == 'q')
//		{
//			break;
//		}
//
//		if (isalpha(input[0]))
//		{
//			if (input[0] == 'a' || input[0] == 'e' || input[0] == 'i' || input[0] == 'o' || input[0] == 'u')
//			{
//				vowels++;
//			}
//			else
//				consonants++;
//		}
//		else
//			others++;
//	}
//	cout << vowels << " words beginning with vowels" << endl;
//	cout << consonants << " words beginning with consonants" << endl;
//	cout << others << " otners" << endl;
//
//	system("pause");
//		return 0;
//}


//6-8
#include <iostream>
#include <string>
#include <cctype>
#include <array>
#include <iomanip>
#include <fstream>
using namespace std;
int main()
{

}
