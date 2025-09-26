#include<iostream>
#include<string>
#include <vector>
using namespace std;
struct healthymeals {
	string names;
	double price;
	int calories;
};
int main() {
	vector< healthymeals>meals;
	meals.push_back({ "Tuna Salad", 80.0, 250 });
	meals.push_back({ "Honey Oatmeal", 90.0, 300 });
	meals.push_back({ "Orange Juice", 40.0, 150 });
	meals.push_back({ "Grilled Chicken Breast", 120.0, 400 });
	meals.push_back({ "Fruit Salad", 35.0, 200 });
	meals.push_back({ "Avocado Toast", 60, 280 });
	int choice;
	 
	 cout << "WELCOME TO OUR HEALTHYFOOD RESTAURANT" << endl;
	cout << "********************" << endl;
	cout << "Healthy meals menu " << endl;
	for (int i = 0;i < meals.size();i++) {
	   cout << meals[i].names << " - " << meals[i].price << " LE - " << meals[i].calories << " cal" << endl;
	   cout << "---------------------" << endl;
	}
		do {
			cout << "Please ,enter the number of orders" << endl;
			int n;
			cin >> n;
			cout << "Please,enter your order (write the meal name exactly as in menu): " << endl;
			vector<string>arr(n);
			cin.ignore();
			for (int i = 0;i < n;i++) {
				getline(cin, arr[i]);
			}
			double totalPrice = 0;
			double calori = 0;
			for (int i = 0; i < n; i++) {
				bool found = false;
				for (int j = 0; j < meals.size(); j++) {
					if (arr[i] == meals[j].names) {
						totalPrice += meals[j].price;
						calori += meals[j].calories;
						found = true;
						cout << arr[i] << " added! Price: " << meals[j].price << " LE" << endl;
						break;
					}
				}
				if (!found) {
					cout << arr[i] << " not found in menu!" << endl;
				}
			} cout << "**********************" << endl;
			cout << "your check is: " << totalPrice << " LE" << endl;
			cout << "************************" << endl;
			cout << "The total calories in the meal are: " << calori << " CaL" << endl;
			cout << "*****************************" << endl;
			if (n >= 3) {
				cout << "You Have a Discount 10% " << endl;
				cout << "Your new check is ";
				totalPrice = totalPrice - (totalPrice * 0.10);
				cout << totalPrice << endl;
			} int rating;
			cout << "Please rate our  food from 1 to 5: " << endl;
			cin >> rating;
			if (rating >= 1 && rating <= 3) {
				cout << "Thank you for your rating! Your feedback will help us improve our meals" << endl;
			}
			else if (rating > 3 && rating <= 5) {
				cout << "Thank you for your kind rating! We are delighted you enjoyed your meal." << endl;
			}
			else {
				cout << " Invalid Rating" << endl;
			}
			cout << "DO you want to make another order (1 or 2) " << endl;
			cout << " 1 = Yes " << endl;
			cout << " 2 = No " << endl;
			cout << "Enter your choice" << endl;
			cin >> choice;

		} while (choice == 1);
	  
	cout << " \nThank you for visiting HealthyFood Restaurant. See you again! " << endl;

}