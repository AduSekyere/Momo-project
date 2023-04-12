#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	float reference;
	const int defaultpin = 0000;
	int attempts;
	int new_pin;
	int old_pin;
	int select;
	int number;
	float amount;
	int pin;
	char name;
	float balance,counter;
	string digits;
	balance=1000;
	cout<<"Main menu"<<endl;
	cout<<"1.Sending Money"<<endl;
	cout<<"2.Buy Airtime"<<endl;
	cout<<"3.Resetting/changing Pin"<<endl;
	cout<<"4.Checking balance"<<endl;
	cout<<"5.Authentification"<<endl;
	cin>>select;
	if(select==1)
	{
	cout<<"Enter mobile number"<<endl;
	cin>>number;
	cout<<"Re-enter mobile number"<<endl;
	cin>>number;
	cout<<"Enter amount"<<endl;
	cin>>amount;
	cout<<"Transfer" <<amount<< "to" <<number<<endl;
	cout<<"Enter reference number"<<endl;
	cin>>reference;
	cout<<"Enter pin"<<endl;
	cin>>pin;
	do{
		attempts++;
		if(pin!=defaultpin){cout<<"Incorrect pin. Please try again"<<endl;
		}
		else if(pin==defaultpin){
			cout<<"You have successfully sent" <<amount<< "to" <<number<<endl;
			cout<<"Your current balance is" <<balance - amount <<endl;
		}
		
	} while(pin==defaultpin && attempts>3);
	if(attempts>3){
		cout<<"Maximum attempts reached";
		cout<<"Exting program"<<endl;
	}
	switch(pin){break;
	}
	}
	
	
	
	else if(select==2){
		cout<<"1.Self"<<endl;
		cout<<"2.Other numbers"<<endl;
		cin>>select;
		
		if(select==1){
			cout<<"Enter amount"<<endl;
			cin>>amount;
			cout<<"Enter your pin"<<endl;
			cin>>pin;
			do{
				attempts++;
				if(pin!=defaultpin){cout<<"Incorrect pin. Please try again"<<endl;
				}
				else if (pin==defaultpin){
					cout<<"You have successfully purchase an airtime of" <<amount<<endl;
					cout<<"Your current balance is" <<amount-balance<<endl;
				}
			}while(pin==defaultpin && attempts>3);
			if(attempts>3){
				cout<<"Maximum attempts reached";
				cout<<"Exiting program"<<endl;
			}
			switch(pin){break;
			}
		}
		
		else if(select==2){
			cout<<"Enter your number"<<endl;
			cin>>number;
			cout<<"Re-enter your number"<<endl;
			cin>>number;
			cout<<"Enter amount"<<endl;
			cin>>amount;
			cout<<"Enter your pin"<<endl;
			cin>>pin;
			do{
				attempts++;
				if(pin!=defaultpin){
				cout<<"Incorrect pin. Please try again"<<endl;
				}
				else if(pin==defaultpin){
					cout<<"You have successfully purchased an airtime of"<<amount<<"to"<<number<<endl;
					cout<<"Your balance is"<<balance-amount<<endl;
				}
			}while(pin!=defaultpin && attempts>3);
			 if(attempts>3){
			 	cout<<"Maximum attempts reached";
			 	cout<<"Exiting program"<<endl;
			 }
			 switch(pin){break;
			 }
		}

		}
		
		
		else if(select==3){
		cout<<"Enter old pin"<<endl;
		cin>>pin;
		cout<<"Enter new pin"<<endl;
		cin>>new_pin;
		cout<<"Re-enter new pin"<<endl;
		cin>>new_pin;
		pin==new_pin;
		cout<<"You have successfully changed your pin";	
		}
		
		else if(select==4){
		cout<<"Enter your pin"<<endl;
		cin>>pin;
		do{attempts++;
			if(pin!=defaultpin){
				cout<<"Incorrect pin. Please try again"<<endl;
			}
			else if(pin==defaultpin){
				cout<<"Your balance is 1000"<<endl;
				
			}
			
		}while(pin!=defaultpin && attempts>3);
		if(attempts>3){
			cout<<"Maximum attempts reached";
			cout<<"Exitinng program"<<endl;
		}
		switch(pin){break;
		}
		}
		
		
		else if(select==5){
			cout<<"Provide the following details for authentification:"<<endl;
			cout<<"Enter user name"<<endl;
			cin>>name;
			cout<<"Enter user number"<<endl;
			cin>>number;
			cout<<"Enter your pin"<<endl;
			cin>>pin;
			do{attempts++;
			if(pin!=defaultpin){
				cout<<"incorrect pin. Please try again"<<endl;
			}
			else if(pin==defaultpin){
				cout<<"Authentification successful"<<endl;
			}
			}while(pin!=defaultpin && attempts>3);
			if(attempts>3){
				cout<<"Maximum attempts reached";
				cout<<"Exiting program"<<endl;
			}
			switch(pin){break;
			}
		}
	return 0;
	}
	
	
