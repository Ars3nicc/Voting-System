#include <iostream>
#include <windows.h>
using namespace std;

// COORDINATE LIBRARY TO ENABLE X Y POINTS //
HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;

void gotoxy(int x, int y)
{
CursorPosition.X = x;
CursorPosition.Y = y;
SetConsoleCursorPosition(console,CursorPosition);
};

// LIBRARY FOR VOTE COUNTS //
int isko=0, leni=0, bbm=0, ping=0, manny=0, go=0, noVotes=0;

// CANDIDATE NAMES ARE STORED WITHIN A VARIABLE //
string candidate1= "ISKO MORENO";
string candidate2= "LENI ROBREDO";
string candidate3= "BONG BONG MARCOS";
string candidate4= "PING LACSON";
string candidate5= "MANNY PACQUIAO";
string candidate6= "BONG GO";
string spoiled = "NONE OF THESE";



// CLASS FOR ELECTION DISPLAY //
class Election{
public:
	// DECLARING A FIXED X,Y POSITION //
	int x=30;
	int y=10;
	
	// ------- VOTING PROPER PANEL ------- //
	/* USERS WILL PROMPT TO SELECT A PREFERRED PRESIDENTIAL CANDIDATE */
	void castVote(){
		
		int choice;
		
		gotoxy(x,y);
		// DISPLAY OF CANDIDATE NAMES //
		cout<<"******** SELECT YOUR CANDIDATE ********"<<endl;
		y++;
		gotoxy(x,y);
		cout<<"1."<<candidate1<<endl;
		y++;
		gotoxy(x,y);
		cout<<"2."<<candidate2<<endl;
		y++;
		gotoxy(x,y);
		cout<<"3."<<candidate3<<endl;
		y++;
		gotoxy(x,y);
		cout<<"4."<<candidate4<<endl;
		y++;
		gotoxy(x,y);
		cout<<"5."<<candidate5<<endl;
		y++;
		gotoxy(x,y);
		cout<<"6."<<candidate6<<endl;
		y++;
		gotoxy(x,y);
		cout<<"7."<<spoiled<<endl;
		y++;
		gotoxy(x,y);
		cout<<"**************************************"<<endl;
		y++;

		cout<<"Enter Selected Candidate: ";
		cin>>choice;
		
		// Array to store voter's count //
		/* ONCE THE USER SELECTS A CANDIDATE, THE VOTE WILL BE STORED DEPENDING ON
		 THE SELECTED CANDIDATE NUMBER FROM THE PROMPT */
		if(choice == 1){
			isko++; 	// Vote will record to ISKO MORENO //
		}
		else if (choice == 2){
			leni++; 	// Vote will record to LENI ROBREDO //
		}
		else if (choice == 3){
			bbm++;		// Vote will record to BONG BONG MARCOS //
		}
		else if (choice == 4){
			ping++; 	// Vote will record to PING LACSON //
		}
		else if (choice == 5){
			manny++; 	// Vote will record to MANNY PACQUIAO //
		}
		else if (choice == 6){
			go++; 		// Vote will record to BONG GO //
		}
		else if (choice == 7){
			noVotes++; 	// Vote will record to NONE OF THESE //
		}
		else{
			gotoxy(x,y);
			cout<<"INVALID INPUT TRY AGAIN"<<endl;
			y++;
			castVote();
		}

	}
		
	// ------- FINDING VOTE COUNT ------- //
	/*THIS PANEL WILL DETERMINGE HOW MUCH VOTE COUNTS DOES ONE CANDIDATE HAVE
	FROM THE PREVIOUS VOTES */
	void votesCount(){
		
		gotoxy(x,y);
		cout<<"******** VOTE COUNT ********"<<endl;
		y++;
		gotoxy(x,y);
		cout<< candidate1 <<" = "<<isko <<endl; 	// VOTE COUNT FOR CANDIDATES //
		y++;
		gotoxy(x,y);
		cout<< candidate2 <<" = "<< leni <<endl;
		y++;
		gotoxy(x,y);
		cout<< candidate3 <<" = "<< bbm <<endl;
		y++;
		gotoxy(x,y);
		cout<< candidate4 <<" = "<< ping <<endl;
		y++;
		gotoxy(x,y);
		cout<< candidate5 <<" = "<< manny <<endl;
		y++;
		gotoxy(x,y);
		cout<< candidate6 <<" = "<< go <<endl;
		y++;
		gotoxy(x,y);
		cout<< spoiled <<" = "<< noVotes <<endl;
		y++;
		gotoxy(x,y);
		cout<<"****************************"<<endl;
		y++;
	}
	
	// ------- FINDING INFORMATION ABOUT THE CANDIDATE ------- //
	/* USERS ARE ABLE TO FIND MORE INFORMATION ABOUT THE CANDIDATE'S HISTORY AND EDUCATIONAL BACKGROUND BEFORE, DURING OR AFTER VOTING */
	void candidateInfo(){
		int choice;
		int y2=20;
		
		gotoxy(x,y);
		// DISPLAY OF CANDIDATE NAMES //
		cout<<"******** CANDIDATE INFORMATION ********"<<endl;
		y++;
		gotoxy(x,y);
		cout<<"1."<<candidate1<<endl;
		y++;
		gotoxy(x,y);
		cout<<"2."<<candidate2<<endl;
		y++;
		gotoxy(x,y);
		cout<<"3."<<candidate3<<endl;
		y++;
		gotoxy(x,y);
		cout<<"4."<<candidate4<<endl;
		y++;
		gotoxy(x,y);
		cout<<"5."<<candidate5<<endl;
		y++;
		gotoxy(x,y);
		cout<<"6."<<candidate6<<endl;
		y++;
		gotoxy(x,y);
		cout<<"***************************************"<<endl;
		y++;
		cout<<"Enter Selected Candidate: ";
		cin>>choice;
		
		gotoxy(x,y2);
		cout<<"******** CANDIDATE INFO *********"<<endl;
		y2++;
		
		// This panel should display the specific information about the presidential aspirants for the election //
			
			// USER WILL PROMPT CANDIDATE #1: ISKO MORENO //
			if (choice == 1){
				gotoxy(x,y2);
				cout<<"*****************************************************************"<<endl;
				y2++;
				gotoxy(x,y2);
				cout<<"Name: "<< candidate1 <<endl;
				y2++;
				gotoxy(x,y2);
				cout<<"Current Occupation: "<<"Manila City Mayor"<<endl;
				y2++;
				gotoxy(x,y2);
				cout<<"Birthdate: " <<"October 24, 1974"<<endl;
				y2++;
				gotoxy(x,y2);
				cout<<"Educational Background: "<< "University of the Philippines System";
				y2++;
				gotoxy(x,y2);
				cout<<"****************************************************************"<<endl;
				y2++;
			}
			// USER WILL PROMPT CANDIDATE #2: LENI ROBREDO //
			else if (choice == 2){
				gotoxy(x,y2);
				cout<<"*****************************************************************"<<endl;
				y2++;
				gotoxy(x,y2);
				cout<<"Name: "<< candidate2 <<endl;
				y2++;
				gotoxy(x,y2);
				cout<<"Current Occupation: "<<"Vice President of the Philippines"<<endl;
				y2++;
				gotoxy(x,y2);
				cout<<"Birthdate: " <<"April 23, 1965"<<endl;
				y2++;
				gotoxy(x,y2);
				cout<<"Educational Background: "<< "UP School of Economics";
				y2++;
				gotoxy(x,y2);
				cout<<"****************************************************************"<<endl;
				y2++;
			}
			// USER WILL PROMPT CANDIDATE #3: BONG BONG MARCOS //
			else if (choice == 3){
				gotoxy(x,y2);
				cout<<"*****************************************************************"<<endl;
				y2++;
				gotoxy(x,y2);
				cout<<"Name: "<< candidate3 <<endl;
				y2++;
				gotoxy(x,y2);
				cout<<"Current Occupation: "<<"Senator"<<endl;
				y2++;
				gotoxy(x,y2);
				cout<<"Birthdate: " <<"September 13, 1957"<<endl;
				y2++;
				gotoxy(x,y2);
				cout<<"Educational Background: "<< "Wharton School of the University of Pennsylvania";
				y2++;
				gotoxy(x,y2);
				cout<<"****************************************************************"<<endl;
				y2++;
			}
			// USER WILL PROMPT CANDIDATE #4: PING LACSON //
			else if (choice == 4){
				gotoxy(x,y);
				cout<<"*****************************************************************"<<endl;
				y2++;
				gotoxy(x,y2);
				cout<<"Name: "<< candidate4 <<endl;
				y2++;
				gotoxy(x,y2);
				cout<<"Current Occupation: "<<"Senator"<<endl;
				y2++;
				gotoxy(x,y2);
				cout<<"Birthdate: " <<"June 1, 1948 "<<endl;
				y2++;
				gotoxy(x,y2);
				cout<<"Educational Background: "<< "Philippine Military Academy";
				y2++;
				gotoxy(x,y2);
				cout<<"****************************************************************"<<endl;
				y2++;
			}
			// USER WILL PROMPT CANDIDATE #5: MANNY PACQUIAO //
			else if (choice == 5){
				gotoxy(x,y2);
				cout<<"*****************************************************************"<<endl;
				y2++;
				gotoxy(x,y2);
				cout<<"Name: "<< candidate5 <<endl;
				y2++;
				gotoxy(x,y2);
				cout<<"Current Occupation: "<<"Senator"<<endl;
				y2++;
				gotoxy(x,y2);
				cout<<"Birthdate: " <<"December 17, 1978 "<<endl;
				y2++;
				gotoxy(x,y2);
				cout<<"Educational Background: "<< "University of Makati";
				y2++;
				gotoxy(x,y2);
				cout<<"****************************************************************"<<endl;
				y2++;
			}
			// USER WILL PROMPT CANDIDATE #6: BONG GO //			
			else if (choice == 6){
				gotoxy(x,y2);
				cout<<"*****************************************************************"<<endl;
				y2++;
				gotoxy(x,y2);
				cout<<"Name: "<< candidate6 <<endl;
				y2++;
				gotoxy(x,y2);
				cout<<"Current Occupation: "<<"Senator"<<endl;
				y2++;
				gotoxy(x,y2);
				cout<<"Birthdate: " <<"June 14, 1974 "<<endl;
				y2++;
				gotoxy(x,y2);
				cout<<"Educational Background: "<< "Ateneo de Davao University";
				y2++;
				gotoxy(x,y2);
				cout<<"****************************************************************"<<endl;
				y2++;
			}
			// IF INPUT IS NOT WITHIN THE CONDITION, IT SHOULD PROMPT THIS ERROR //
			else{
				gotoxy(x,y2);
				cout<<"CANDIDATE NOT FOUND";
				y2++;
				gotoxy(x,y2);
				cout<<"*********************************"<<endl;
				y2++;
			}
		}

};

// CLASS FOR RESULTS OF VOTES //
class Results: public Election{
public:
	int x=30;
	int y=10;
	// This will call the record of votes and determine which candidate has the highest vote number //
	void tallyResults()
	{
		gotoxy(x,y);
		cout<<"******** VOTING RESULTS ********"<<endl;
		y++;
		gotoxy(x,y);
		cout<<"LEADING CANDIDATE:";

		if(isko > leni && isko > bbm && isko > ping && isko > manny && isko > go)
		{
			y++;
			gotoxy(x,y);
			cout<<candidate1; // RESULT WILL DISPLAY ISKO MORENO //
		}
		else if(leni > isko && leni > bbm && leni > ping && leni > manny && leni > go)
		{
			y++;
			gotoxy(x,y);
			cout<<candidate2; // RESULT WILL DISPLAY LENI ROBREDO //
		}
		else if(bbm > isko && bbm > leni && bbm > ping && bbm > manny && bbm > go)
		{
			y++;
			gotoxy(x,y);
			cout<<candidate3; // RESULT WILL DISPLAY BONG BONG MARCOS //
		}
		else if(ping > isko && ping > leni && ping > bbm && ping > manny && ping > go)
		{
			y++;
			gotoxy(x,y);
			cout<<candidate4; // RESULT WILL DISPLAY PING LACSON //
		}
		else if(manny > isko && manny > leni && manny > bbm && manny > ping && manny > go)
		{
			y++;
			gotoxy(x,y);
			cout<<candidate5; // RESULT WILL DISPLAY MANNY PACQUIAO //
		}
		else if(go > isko && go > leni && go > bbm && go > ping && go > manny)
		{
			y++;
			gotoxy(x,y);
			cout<<candidate6; // RESULT WILL DISPLAY BONG GO //
		}

		else
		{
			y++;
			gotoxy(x,y);
			cout<<" NO LEADING CANDIDATE AT THE MOMENT";
		}
		y++;
		gotoxy(x,y);
		cout<<"*****************************"<<endl;
			
	}  
	    
	    
};

