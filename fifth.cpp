//5-1
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	int sum = 0;
//	cout << "enter first number!:";
//	cin >> a;
//	cout << "ener second number!:";
//	cin >> b;
//	for (i = a; i <= b; i++)
//	{
//		sum += i;
//
//	}
//	cout << sum;
//	system("pause");
//	return 0;
//}

//5-2
//#include<iostream>
//#include<array>
//const int ArSize = 100;
//using namespace std;
//int main()
//{
//	array<long double, ArSize + 1>a1;
//	a1[1] = a1[0] = 1.0;
//	for (int i = 2; i < ArSize; i++)
//		a1[i] = i * a1[i - 1];
//	for (int i = 0; i < ArSize; i++)
//	{
//		cout << i << "!=" << a1[i] << endl;
//	}
//	system("pause");
//		return 0;
//}


//5-3
//#include<iostream>
//using namespace std;
//int main()
//{
//	
//	double sum = 0.0;
//	int number =1 ;
//	while (number)
//	{
//		cout << "enter your number";
//		cin >> number;
//		sum += number;
//		cout << "Until now, the sum of the number you inputed is "
//			<< sum << endl;
//	}
//	cout << "Done." << endl;
//	system("pause");
//			return 0;
//}

//5-4
//#include<iostream>
//using namespace std;
//int main()
//{
//	double D = 100.0;
//	double C = 100.0;
//	const  int return_D = 10;
//	const  double return_C = 0.05;
//	int t = 0;
//	
//	while(D>=C)
//	{
//		t++;
//		D = D + return_D ;
//		C = C + (return_C * C);
//	}
//	cout << t;
//	system("pause");
//	return 0;
//}

//博客上的答案
//#include<iostream>
//using namespace std;
//int main()
//{
//	double Daphne_account = 100;
//	double Cleo_account = 100;
//	int years = 0;
//
//	while (Daphne_account >= Cleo_account)
//	{
//		years++;
//		Cleo_account = Cleo_account + Cleo_account * 0.05;
//		Daphne_account += 10;
//	}
//
//	cout << "After " << years << " years. " << "Cleo account which is " << Cleo_account << " will more than Daphne account which is " << Daphne_account << "." << endl;
//	system("pause");
//		return 0;
//}


//5-5
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	int number [12];
//	int sum = 0;
//	string month[12] = { "January", "February",
//		"March", "April", 
//		"May", "June", 
//		"July", "August", 
//		"Septempber", "October",
//		"November", "December" };
//	for (int i = 0; i < 12; i++)
//	{
//		cout << "enter the"<<month[i]<< "number:";
//		cin >>number[i];
//		sum += number[i];
//	}
//	cout << sum;
//	system("pause");
//		return 0;
//}


//5-6
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	string month[12] = { "January", "February",
//   "March", "April",
//   "May", "June", "July",
//   "August", "Septempber", "October",
//   "November", "December" };
//	unsigned int sales[3][12] = { 0 };
//	unsigned int total_sales[3] = { 0 };
//	for (int i = 0; i < 3; i++)
//	{
//		cout << "enter" << i + 1 << "year number:";
//		for (int j = 0; j < 12; j++)
//		{
//			cout << "enter" << month[j] << "number:";
//			cin >> sales[i][j];
//			total_sales[i] += sales[i][j];
//		}
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		cout << total_sales[i]<<endl;
//	}
//	cout << "Three years total sales is " << total_sales[0] + total_sales[1] + total_sales[2]
//		<< endl;
//	system("pause");
//			return 0;
//	
//}

//5-7
//#include<iostream>
//#include<string>
//using namespace std;
//struct Car
//{
//	string band;
//	int year;
//};
//int main()
//{
//	unsigned int size = 0;
//	cout << "有多少车？";
//	cin >> size;
//	cin.get();
//	Car *ps = new Car[size];
//	for (int i = 0; i < size; i++)
//	{ 
//		cout << "car #" << i + 1;
//		cout << "enter the band:";
//		cin >> ps[i].band;
//		cout << "enter the year:";
//		cin >> ps[i].year;
//	}
//	for (int i = 0; i < size; i++)
//	{
//		cout << ps[i].band << "  " << ps[i].year << endl;
//	}
//	system("pause");
//	return 0;
//}
//
//5-8
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	
//	
//	int number = 0; 
//	
//	char input[128];
//	
//	cout << "enter words （stop type the word done）:";
//	while (cin>>input)
// {
//		if (strcmp(input, "done"))
//		{
//			number++;
//		}
//		else
//			break;
//	}
//	cout << "You entered a total of " << number << " words." << endl;
//	system("pause");
//		return 0;
//}

//5-9
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	int number = 0;
//	string input;
//	cout << "enter words （stop type the word done）:";
//	cin >> input;
//	while (input != "done")
//	{
//		number++;
//		cin >> input;
//	}
//	cout << "You entered a total of " << number << " words." << endl;
//		system("pause");
//			return 0;
//}

//5-10
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	string s1;
//	s1 = "*";
//	int number = 0;
//	cout << "enter number of rows:";
//	cin >> number;
//	for (int i = 1; i<=number; i++)//行数
//	{
//		for (int j = i;j < number; j++)//打印点的个数
//		{
//			cout << ".";
//		}
//		for (int j = 0; j < i; j++)//打印星的个数
//		{
//			cout << "*";
//		}
//		cout << endl;
//
//	}
//	system("pause");
//			return 0;
//}