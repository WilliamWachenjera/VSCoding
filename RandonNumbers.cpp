#include <iostream>
#include <cstdlib>
using namespace std;

int main(){

	// Providing a seed value
	srand((unsigned) time(NULL));

	// Getting a random number
	int daysUntilExpiration = rand() % 12;

	//when subscription is not expiring in 10days near
	if(daysUntilExpiration >= 10){
		cout << "You have an active subscription" << endl;
	}
	//when subscription has expired
	else if(daysUntilExpiration == 0){
		cout << "Your subscription has expired" << endl;
	}
	//when subscription expires in a day
	else if(daysUntilExpiration == 1){
		cout << "Your subscription expires within a day!" << endl;
		cout << "Renew now and save 20% ! " << endl;
	}
	//when subscription expires in 5 days or less
	else if(daysUntilExpiration <= 5){
		cout << "Your subscription expires in " <<daysUntilExpiration<< " days!" << endl;
		cout << "Renew now and save 10% !" << endl;
	}
	else
	//when subscription expires in 10 days or less
	cout << "Your subscription expires soon. Renew now!" << endl;

	return 0;
}