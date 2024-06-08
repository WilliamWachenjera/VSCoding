#include <bits/stdc++.h>

using namespace std;

string ip_classless(string ip){
	// Extract the first octet as a string and then convert it to an int using stoi function 

	int first_octet=stoi(ip.substr(0,ip.find('.')));
	if(first_octet>=0 and first_octet<=127){
		// Means the IP Address in Class A 
		return ip+"/8";
	}
	if(first_octet>=128 and first_octet<=191){
		// Means the IP Address is in Class B
		return ip+"/16";
	}
	if(first_octet>=192 and first_octet<=223){
		// Means the IP Address is in Class C
		return ip+"/24";
	}
	return "Reserved IP Address. Invalid."; 
}
//Driver Code
int main() {
	// Will store the ip address as an input in ip variable
	string ip;
	cout<<"Enter the IP Address: ";
	cin>>ip;
	cout<<ip_classless(ip)<<endl;

	// This Code is contributed by Himesh Singh Chauhan
	return 0;
}
