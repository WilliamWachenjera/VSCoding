#include <iostream>
#include <cstdlib>
using namespace std;

int main(){

	srand((unsigned) time(NULL));
	// Getting a random number
	int daysUntilExpiration = rand() % 12;

	switch(daysUntilExpiration){
		
	//when subscription has expired
		case 0:
			cout << "Your subscription has expired" << endl;
		break;
	//when subscription expires in a day
		case 1:
			cout << "Your subscription expires within a day!" << endl;
			cout << "Renew now and save 20% ! " << endl;
		break;
	//when subscription expires in 5 days or less
		case 2:
			cout << "Your subscription expires in 2 days!" << endl;
			cout << "Renew now and save 10% !" << endl;
		break;
        case 3:
			cout << "Your subscription expires in 3 days!" << endl;
			cout << "Renew now and save 10% !" << endl;
		break;
        case 4:
			cout << "Your subscription expires in 4 days!" << endl;
			cout << "Renew now and save 10% !" << endl;
		break;
        case 5:
			cout << "Your subscription expires in  5 days!" << endl;
			cout << "Renew now and save 10% !" << endl;
		break;
		case 6:
			cout << "Your subscription expires in 6 days. Renew now!" << endl;
			break;
        case 7:
			cout << "Your subscription expires in 7 days. Renew now!" << endl;
			break;
        case 8:
			cout << "Your subscription expires in 8 days. Renew now!" << endl;
			break;
        case 9:
			cout << "Your subscription expires in 9 days. Renew now!" << endl;
			break;
            
        default:
		     cout << "You have an active subscription" << endl;
		    
	}
	return 0;
}