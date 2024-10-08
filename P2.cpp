#include<iostream>
#include <string>;
using namespace std;

// draw lines between functions
void DrawLines()
{
	cout << "\n\n--------------------------------------------------------------------------------------------------------------------------------\n\n";
}

//Homework1

	enum enGender { Male, Female };
	enum enMaritalStatus { Married, Single };
	enum enFavorateHobbi { Swimming, Football, Music };
	enum enFavorateColor { Red, Green, Blue, Black, White };

	struct EmployeeFavorates
	{
		enFavorateHobbi FavorateHobbi = enFavorateHobbi::Swimming;
		enFavorateColor FavorateColor = enFavorateColor::Black;
	};

	struct EmployeeProjectsLinks
	{
		string ProgectWebsite = "N/A";
		string ProjectSocialMedia = "N/A";
	};

	struct StEmployeeContact
	{
		string EmployeePhone = "N/A";
		string EmployeeEmail = "N/A";
		string EmployeeSocialMedia = "N/A";

		EmployeeProjectsLinks Project;
	};

	struct StAdress
	{
		string StreetAdress = "N/A";
		string MailBox = "N/A";
	};

	struct StEmployee
	{
		string FullName = "N/A";
		unsigned short Age = 0;
		string City = "N/A";
		string Country = "N/A";
		float MonthlySalary = 0;
		enGender gender = enGender::Male;
		enMaritalStatus IsMarried = enMaritalStatus::Single;

		StAdress Adress;
		StEmployeeContact ContactInfo;
		EmployeeFavorates Favorates;
	};

//Homework1	
void ReadEmployeeInfo(StEmployee &Info)
	{
		cout << "Enter full name :\n";
		cin.ignore(1, '\n');
		getline(cin , Info.FullName);
		
		cout << "Enter Age :\n";
		cin >> Info.Age;

		cout << "Enter City\n";
		cin >> Info.City;

		cout << "Enter country :\n";
		cin >> Info.Country;

		cout << "Enter monthly salary :\n";
		cin >> Info.MonthlySalary;

		cout << "Enter street adress\n";
		cin >> Info.Adress.StreetAdress;

		cout << "Enter your male box\n";
		cin >> Info.Adress.MailBox;

		cout << "Enter your email\n";
		cin >> Info.ContactInfo.EmployeeEmail;

		cout << "Enter your phone number\n";
		cin >> Info.ContactInfo.EmployeePhone;

		cout << "Enter social media account\n";
		cin >> Info.ContactInfo.EmployeeSocialMedia;

		cout << "Enter publiching website\n";
		cin >> Info.ContactInfo.Project.ProgectWebsite;

		cout << "Enter publiching on soicial media\n";
		cin >> Info.ContactInfo.Project.ProjectSocialMedia;

 	}
//Homework1
void PrintEmployeeInfo(StEmployee  Info)
	{
		cout << "\n**************************************************************\n";

		cout << "Name :" << Info.FullName << "\n";
		cout << "Age :" << Info.Age << "\n";
		cout << "City :" << Info.City << "\n";
		cout << "Country :" << Info.Country << "\n";
		cout << "Monthly salary :" << Info.MonthlySalary << "\n";
		cout << "Yearly salary :" << Info.MonthlySalary * 12 << "\n";
		cout << "Street adress :" << Info.Adress.StreetAdress << "\n";
		cout << "Mail Box :" << Info.Adress.MailBox << "\n";
		cout << "Email :" << Info.ContactInfo.EmployeeEmail << "\n";
		cout << "Phone number :" << Info.ContactInfo.EmployeePhone << "\n";
		cout << "Social media accounts :" << Info.ContactInfo.EmployeeSocialMedia << "\n";
		cout << "Project websites :" << Info.ContactInfo.Project.ProgectWebsite << "\n";
		cout << "Project social media posts :" << Info.ContactInfo.Project.ProjectSocialMedia << "\n";

		cout << "\n**************************************************************\n";

	}

//Homework2
void SquareStars()
{
	cout << "*****" << endl;
	cout << "*****" << endl;
	cout << "*****" << endl;
	cout << "*****" << endl;
}

//Homework3
void PrintArticale()
{
	cout << "I love programming!\n\n";
	cout << "I promise to be the best developer ever!\n\n";
	cout << "I know it will take some practice, but i will achive my goal.\n\n";
	cout << "Best regards.\nMahmoud Wahbe\n";
}

//Homework4
void Stars_H_Letter()
{
	cout << "\n" << "*" << "\t" << "*" ;
	cout << "\n" << "*" << "\t" << "*" ;
	cout << "\n" << "*********" ;
	cout << "\n" << "*" << "\t" << "*" ;
	cout << "\n" << "*" << "\t" << "*" ;

}

//Homework5
void Sum3Numbers()
{
	short a, b, c;
	cout << "Enter a number ?" << endl;
	cin >> a;

	cout << "Enter a second number ?" << endl;
	cin >> b;

	cout << "Enter a third number ?" << endl;
	cin >> c;

	cout << a + b + c << endl;
}

//Homework6
void UserAgeAfter5Years()
{
	unsigned short YourAgeAfterFiveYears;

	cout << "Enter your age ?" << endl;
	cin >> YourAgeAfterFiveYears;

	cout << "After five years you will be " << YourAgeAfterFiveYears + 5 << " Years old" << endl;
}




int main ()
{

	//Homework1
	StEmployee Employee1;
	ReadEmployeeInfo(Employee1);
	PrintEmployeeInfo(Employee1);
	DrawLines();
	//Homework2
	SquareStars();
	DrawLines();

	//Homework3
	PrintArticale();
	DrawLines();

	//Homework4
	Stars_H_Letter();
	DrawLines();

	//Homework5
	Sum3Numbers();
	DrawLines();


	//Homework6
	UserAgeAfter5Years();
	DrawLines();

	return 0;


}