//#include<iostream>
//using namespace std;
//int main()
//{
//	const int a = 20;
//	char name[a];
//	char dessert[a];
//	cout << "enter your name:\n";
//	cin.get(name, a).get();
//	cout << "enter your favorite dessert:\n";
//	cin.get(dessert, a).get();
//	cout << "i have some delicious" << dessert;
//	cout << "for you, " << name << ".\n";
//	system("pause");
//	return 0;
//}

//4-1
//#include<iostream>
//using namespace std;
//int main()
//{
//	char first_name[128];
//	char last_name[128];
//	char  grade;
//	int age = 0;
//
//	cout << "what is your first name?";
//	cin.getline(first_name, 128);
//	cout<< "what is your last name?";
//	cin.getline(last_name,128);
//	cout << "what lettr grade do you deserve?";
//	cin >> grade;
//	cout << "what is your age?";
//	cin >> age;
//	cout << "Name: " << last_name << "," << first_name <<endl;
//	cout << "Grade: " << char(grade +1)<<endl;
//	cout << "age: " << age;
//	system("pause");
//	return 0;
//
//
//}

//4-2
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	const int Arsize = 20;
//	string name;
//	string dessert;
//	cout << "enter your name:\n";
//	getline(cin,name);
//	cout << "enter your favorite dessert:\n";
//	getline(cin, dessert);
//	cout << "I have some delicious " << dessert;
//	cout << " for you, " << name << ".\n";
//	system("pause");
//	return 0;
//}


//4-3
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	char first_name[256];
//	char last_name[256];
//	cout << "enter your first name ";
//	cin.getline(first_name, 256);
//	cout <<"enter your last time ";
//	cin.getline(last_name, 256);
//	cout << "here ids the information in a single string :"
//	<< last_name 
//	<< ", " << first_name;
//	system("pause");
//	return 0;
//}


//4-4
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	string first_name;
//	string last_name;
//	cout << "enter your first name ";
//	getline(cin, first_name);
//	cout << "enter your last time ";
//	getline(cin, last_name);
//	cout << "here ids the information in a single string :"
//			<< last_name 
//			<< ", " << first_name;
//			system("pause");
//			return 0;
//}

//4-5

//#include<iostream>
//#include<string>
//using namespace std;
//struct CandyBar
//{
//	string band;
//	double weight;
//	int calories;
//};
//int main()
//{
//	CandyBar snack =
//	{
//		"mocha munch",
//		2.3,
//		350
//	};
//	cout << "the infomation of snack, Name: " << snack.band << "weight"
//		<< snack.weight << "calories" << snack.calories;
//	system("pause");
//	return 0;
//
//}
 

//4-6
//#include<iostream>
//#include<string>
//using namespace std;
//struct CandyBar
//{
//	string band;
//		double weight;
//	int calories;
//};
//int main()
//{
//	CandyBar candybar[3] = { {"jyp",2.1,220},
//		{"jyp1",2.2,210},
//		{"jyp2",2.3,220} };
//	for (int i = 0; i < 3; i++)
//	{
//		cout << "the infomation of CandyBar, Name: " 
//			<< candybar[i].band << ", Weight: " 
//			<< candybar[i].weight 
//			<< ", " << " Calories: " 
//			<< candybar[i].calories << "." << endl;
//	}
//	system("pause");
//		return 0;
//	
//}

//4-7
//#include<iostream>
//#include<string>
//using namespace std;
//struct Pizza_information
//{
//	string name_company;
//	double pizza_diameter;
//	double pizza_weight;
//};
//int main()
//{
//	Pizza_information pizza_information;
//	cout << "Enter the pizza company name: ";
//	getline(cin, pizza_information.name_company);
//	cout << "Enter the pizza size:";
//	cin >> pizza_information.pizza_diameter;
//	cout << "Enter the pizza weight:";
//	cin >> pizza_information.pizza_weight;
//	cout<<"The company name of pizza is " <<pizza_information.name_company
//		<< ", the size of the pizza is "
//		<< pizza_information.pizza_diameter
//		<< ", the weight of the pizza is "
//		<< pizza_information.pizza_weight<< endl;
//	system("pause");
//	return 0;
//}

//4-8
//#include<iostream>
//#include<string>
//using namespace std;
//struct Pizza_information
//	{
//		string name_company;
//		double pizza_diameter;
//		double pizza_weight;
//	};
//int main()
//{
//	Pizza_information * ps = new  Pizza_information;
//	cout << "Enter the pizza size:";
//	cin >> ps->pizza_diameter;
//	cin.get();//»»ÐÐ
//	cout << "Enter the pizza company name: ";
//	getline(cin,ps->name_company);
//	cout << "Enter the pizza weight:";
//	cin >> ps->pizza_weight;
//	cout << "The company name of pizza is " << ps->name_company
//				<< ", the size of the pizza is "
//			<< ps->pizza_diameter
//				<< ", the weight of the pizza is "
//				<< ps->pizza_weight<< endl;
//delete ps;
//			system("pause");
//			return 0;
//}


//4-9
//#include<iostream>
//#include<string>
//using namespace std;
//struct CandyBar
//{
//	string band;
//	double weight;
//	int calories;
//};
//int main()
//{
//	CandyBar * ps = new CandyBar[3]{
//	{ "Mocha Munch", 2.3, 350 },
//		{ "Banana", 3.5, 400 },
//		{ "HAHAHAHA", 3.0, 370 }
//	};
//	for (int i = 0; i < 3; i++)
//	{
//		cout << "the infomation of CandyBar, Name: " << ps[i].band
//			<< ", Weight: " << ps[i].weight << ", " << " Calories: " << ps[i].calories << "." << endl;
//	}
//
//	delete[]ps;
//	system("pause");
//	return 0;
//}
//


//4-10
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	double array[3];
//	double average=0.0;
//	cout << "enter you first grad";
//	cin >> array[0];
//	cout<< "enter you second grad";
//	cin >> array[1];
//	cout<< "enter you third grad";
//	cin >> array[2];
//	average = (array[0] + array[1] + array[2]) / 3;
//	cout << "Result: " << array[0] << ", " 
//		<< array[1] << ", " << array[2] << endl;
//	cout << "Average result: " << average;
//	system("pause");
//	return 0;
//
//}
