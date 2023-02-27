#include<iostream> 
#include<iomanip>
#include<stdlib.h>
#include<conio.h>
#include <windows.h>
#include "voteSystem.h"

using namespace std;

int main()
{
	// DECLARATION PANEL //
	system("color f0"); 	// customizes the prompt design //
	Election vote; 		// Object for Class Election //
	Results tally; 		// Object for Vlass Results
	
	// DECLARING A FIXED X,Y POSITION //
	int x = 30; 
	int y = 1;
	
	//-----------------------------------//
	int index, select;
	int choice;
	{
		// MAIN OPTION //
		// Selection of choices for the user to prompt //
		gotoxy(x,y);
		cout<<"******** PRESIDENTIAL ELECTION 2022 ********"<<endl;
		y++;
		gotoxy(x,y);
		cout<<"1. Enter Vote"<<endl;
		y++;
		gotoxy(x,y);
		cout<<"2. Vote Tally"<<endl;
		y++;
		gotoxy(x,y);
		cout<<"3. Candidate Information"<<endl;
		y++;
		gotoxy(x,y);
		cout<<"4. Check Leading Tally"<<endl;
		y++;
		gotoxy(x,y);
		gotoxy(x,y);
		cout<<"5. Exit"<<endl;
		y++;
		gotoxy(x,y);
		cout<<"********************************************"<<endl;
		y++;
		cout<<"\nEnter Selection: ";
		cin>>select;
	
	}
	switch(select)
	{
	// OPTION #1 //
	case 1:
	{
		vote.castVote();
		break;
	}
	// OPTION #2 //
	case 2: 
	{
		vote.votesCount();
		break;
	}
	// OPTION #3 //
	case 3: 
	{
		vote.candidateInfo();
		break;
	}
	// OPTION #4 //
	case 4: 
	{
		tally.tallyResults();
		break;
	}
	
		
}
	// ASKING THE USER TO CONTINUE OR LEAVE //
    char yesNo;
    while(true)
    {
        cout<<"\nDo you wish to continue? (Y/N): ";
        cin >> yesNo;
        
        if(yesNo == 'Y'|| yesNo =='y') // Specifying the input //
		{
		system("cls"); // Will clear all prompt and return from the start //
		main();
        return true;
        }
		else if(yesNo =='N'||yesNo =='n') // Specifying the input //
		{
        return false;
        }
    }
	// *** NOTE *** //
	/* If the user prompts "5. EXIT", the system would still continue to ask if he/she wishes to continue
	in case of mistakenly selecting EXIT or insists of leaving literally. */
}
	

		


