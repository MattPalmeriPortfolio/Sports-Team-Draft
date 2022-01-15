#include <iostream>
#include <string>
#include <ctime>
//This program determines the draft pick order of teams in a sports league randomly, given a user input of which teams have already picked.
//declare functions
int randomBallPicker(bool firstTeam, bool secondTeam, bool thirdTeam, bool fourthTeam);
//This function picks the next team to draft, given bool values of which teams have (true) and haven't (false) picked, by picking randomly, weighted to the # of balls each team has in the urn.
bool hasPicked(char team);
//returns a bool value for whether a team has picked (true) yet or not (false), based off whether the input char value is Y or y.
//main
int main()
{
	using namespace std;
	//initialize variables
	char prompt;
	//greet user
	cout << "This program will determine the draft order for the teams in your league.\n";
	//begin program loop
	do
	{
		//set random seed
		srand(time(0));
		//declare variables
		bool drafted1 = false, drafted2 = false, drafted3 = false, drafted4 = false;
		char team1 = 'n', team2 = 'n', team3 = 'n', team4 = 'n';
		//receive input and determine which teams have picked
		cout << "Has the last placed team picked? Y or N: ";
		cin >> team1;
		drafted1 = hasPicked(team1);
		cout << "Has the second to last placed team picked? Y or N: ";
		cin >> team2;
		drafted2 = hasPicked(team2);
		cout << "Has the third to last placed team picked? Y or N: ";
		cin >> team3;
		drafted3 = hasPicked(team3);
		cout << "Has the fourth to last placed team picked? Y or N: ";
		cin >> team4;
		drafted4 = hasPicked(team4);
		while (drafted1 == false || drafted2 == false || drafted3 == false || drafted4 == false)
		{
			//determine the next team to pick
			int nextTeam = randomBallPicker(drafted1, drafted2, drafted3, drafted4);
			//output next team to pick
			cout << "The next to pick is team " << nextTeam << endl;
			switch (nextTeam)
			{
			case 1:
				drafted1 = true;
				break;
			case 2:
				drafted2 = true;
				break;
			case 3:
				drafted3 = true;
				break;
			case 4:
				drafted4 = true;
				break;
			}
		}
		//prompt to continue
		cout << "Would you like to continue? Y to continue, N to end\n";
		cin >> prompt;
	} while (prompt == 'Y' || prompt == 'y');
	cout << "Goodbye!\n";
	return 0;
}

//define functions
bool hasPicked(char team)
{
	using namespace std;
	if (team == 'Y' || team == 'y')
		return true;
	else
		return false;
}

int randomBallPicker(bool firstTeam, bool secondTeam, bool thirdTeam, bool fourthTeam)
{
	using namespace std;
	int counter = 0;
	while (counter < 1)
	{
		int nextPick = (rand() % 40) + 1;
		if (nextPick <= 20)
		{
			if (firstTeam == false)
				return 1;
		}
		else if (nextPick > 20 && nextPick <= 30)
		{
			if (secondTeam == false)
				return 2;
		}
		else if (nextPick > 30 && nextPick <= 36)
		{
			if (thirdTeam == false)
				return 3;
		}
		else if (nextPick > 36 && nextPick <= 40)
		{
			if (fourthTeam == false)
				return 4;
		}
	}
}