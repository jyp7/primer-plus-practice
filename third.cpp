//3-1
//#include<iostream>
//using namespace std;
//int main()
//{
//	int Foot2Inch = 12;
//	int inch_input = 0;
//	int inch_output = 0;
//	int foot = 0;
//
//	cout << "Please input you height in inch:___\b\b\b";
//	cin >> inch_input;
//	foot = inch_input / Foot2Inch;//求英尺
//	inch_output = inch_input % Foot2Inch;//英寸取模运算
//
//	cout << "Your height in inch was: " << inch_input << "; Your height in foot and inch was: " << foot << " foot " << inch_output << " inch!" << endl;
//	system("pause");
//	return 0;
//}

//3-2
//#include<iostream>
//using namespace std;
//const double inch2meter = 0.0254;
//const double kilo2pound = 2.2;
//
//int main()
//{
//	double height_foot = 0;
//	double height_inch = 0;
//	double height_meter = 0;
//	double weight_pound = 0.0;
//	double weight_kilo = 0.0;
//	double BMI = 0.0;
//	cout<< "please enter your height in foot and inch!\n";
//	cout << "pelase enter your height in foot";
//	cin >> height_foot;
//	cout << "please enter your height in inch";
//	cin >> height_inch;
//	cout << "Enter you weight in pound: ";
//	cin >> weight_pound;
//	height_meter = ((height_foot * 12) + height_inch)*inch2meter;
//	weight_kilo = weight_pound / kilo2pound;
//	BMI= weight_kilo / (height_meter * height_meter);
//	cout << "Your BIM is " << BMI << endl;
//	system("pause");
//	return 0;
//	
//}

//3-3
//#include<iostream>
//using namespace std;
//int main()
//{
//	double degrees = 0;
//	double minutes = 0;
//	double seconds = 0;
//	double total = 0;
//	cout << "please enter a latitude in degrees,minutes,and seconds:\n";
//	cout << "first,enter the degrees:";
//	cin >> degrees;
//	cout << "next,enter the minutes of arc:";
//	cin >> minutes;
//	cout << "finally,enter the seconds of arc:";
//	cin >> seconds;
//	total = degrees + minutes / 60.0 + seconds / 3600.0;
//	cout << degrees << "degrees, " << minutes << "minutes, " << seconds << " seconds" << "="
//		<< total << "degrees\n";
//
//	system("pause");
//	return 0;
//}

//3-4
//#include<iostream>
//using namespace std;
//int main()
//{
//	long long total_seconds = 0;
//	int days = 0;
//	int hours = 0;
//	int minutes = 0;
//	int seconds = 0;
//	cout << "enter the number of seconds";
//	cin >> total_seconds;
//	days = total_seconds /86400;
//	hours = (total_seconds % 86400) / 3600;
//	minutes = ((total_seconds % 86400) % 3600) / 60;
//	seconds = (((total_seconds % 86400) % 3600) % 60);
//	cout << total_seconds
//		<< " seconds = " << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << endl;
//	system("pause");
//	return 0;
//	
//}

//3-5
//#include<iostream>
//using namespace std;
//int main()
//{
//	long long world_population = 0;
//	long long US_population = 0;
//	double precent = 0;
//	cout << "enter the worlds popuilation:";
//	cin >> world_population;
//	cout << "enter the population of the US:";
//	cin >> US_population;
//	precent =(double (US_population) /( world_population))*10 ;
//	cout<<"The population of the US is "<< precent<< "% of the world population." << endl;
//	system("pause");
//	return 0;
//
//}

