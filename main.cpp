#include <iostream> 
#include <string>
using namespace std; 

int main() {
  int choice;
	int totalScore = 0;
  string playerName;

    cout << "Welcome to the Lab Safety Game! What is your name?: " << endl;
    cin >> playerName;
    cout << "Hello, " << playerName << "! ";
    cout << "1. You are on the way to the lab and need to make sure you didn't forget any Personal Protection Equipment. What do you grab before leaving?" << endl;
    cout << "1. Sunglasses" << endl;
    cout << "2. Swimming Goggles" << endl;
    cout << "3. Lab Goggles" << endl;

    cin >> choice;
    
    if (choice == 3) {
        cout << "Your answer is correct." << endl << endl;
        totalScore++;
    }
    else {
        cout << "Your answer is incorrect." << endl << endl;
    }

  cout << "2. You rode your bicycle to the lab and are ready to head in for the experiment. Where do you put your bike? "<< endl;
  cout << "1. Hook up on the bike racks." << endl;
  cout << "2. Put it next to your lab bench." << endl;
  cout << "3. In the middle of the hallway." << endl;

  cin >> choice;

  if (choice == 1) {
    cout << "Your answer is correct." << endl << endl;
    totalScore++;
  }
  else {
    cout << "Your answer is incorrect." << endl << endl;
    }

  cout << "3. While you do the experiment, you are handling various chemicals. How should you approach this?" << endl;
  cout << "1. Use nitrile gloves and make sure to minimize spills" << endl;
  cout << "2. Grab them with your bare hands and take a swig" << endl;
  cout << "3. Smell them first to make sure they're safe to handle." << endl;

  cin >> choice;

  if (choice == 1) {
    cout << "Your answer is correct!" << endl << endl;
    totalScore++;
  }
  else {
    cout << "Your answer is incorrect!" << endl << endl;
    }

  cout << "4. You get thirsty and need to drink water. What do you do?" << endl;
  cout << "1. Grab your water bottle and start chugging" << endl;
  cout << "2. Drink but make sure nobody is looking" << endl;
  cout << "3. Step outside with permission and quench your thirst" << endl;

  cin >> choice;

  if (choice == 3) {
    cout << "Your answer is correct!" << endl << endl;
    totalScore++;
  }
  else {
    cout << "Your answer is incorrect!" << endl << endl;
  }

  cout << "5. Your goggles fogged up so you took them off. As a result, chemicals splash into your eyes. How do you navigate through this issue?" << endl;
  cout << "1. Writhe in pain" << endl;
  cout << "2. Wash your eyes out at the eye fountain" << endl;
  cout << "3. Put eyedrops" << endl;

  cin >> choice;

  if (choice == 2) {
    cout << "Your answer is correct!" << endl << endl;
    totalScore++;
  }
  else {
    cout << "Your answer is incorrect!" << endl << endl;
  }

  cout << "6. Unfortunately, it doesn’t end here. As you wash your eye out someone accidentally trips and spills their chemicals all over you. How do you respond?" << endl;
cout << "1. Get upset and go home" << endl;
cout << "2. Grab a paper towel and wipe it off" << endl;
cout << "3. Go to the safety shower and wash off for 15 minutes" << endl;

  cin >> choice; 

  if (choice == 3) {
    cout << "Your answer is correct!" << endl << endl;
    totalScore++;
  }
  else {
    cout << "Your answer is incorrect!" << endl << endl;
  }

	cout << "7. Now that you’ve washed off and know you’re safe, you decide to continue the lab with a new set of clothes and PPE. You notice that there are three bottoms for you to wear. Which do you choose?" << endl;
	cout << "1. Your favorite style of shorts." << endl;
	cout << "2. Jeans" << endl;
	cout << "3. Kilt" << endl;

	cin >> choice;

	if(choice == 2)
	{
		cout << "Your answer is correct!" << endl << endl;
		totalScore++;
	}
	else
	{
		cout << "Your answer is incorrect!" << endl << endl;
	}

	cout << "8. You look to your left and notice someone eating Oreos. What do you do?" << endl;
	cout << "1. Ask for one and laugh as you chow down." << endl;
	cout << "2. Tell them to put it away." << endl;
	cout << "3. Smack it out of their hand." << endl;

	cin >> choice;

	if(choice == 2)
	{
		cout << "Your answer is correct!" << endl << endl;
		totalScore++;
	}
	else
	{
		cout << "Your answer is incorrect!" << endl << endl;
	}

	cout << "9. At this point, so much has gone on that you need to calm down. How do you settle your nerves?" << endl;
	cout << "1. Smoke." << endl;
	cout << "2. Take a deep breath." << endl;
	cout << "3. Take your stress out on your neighbors." << endl;

	cin >> choice;

	if(choice == 2)
	{
		cout << "Your answer is correct!" << endl << endl;
		totalScore++;
	}
	else
	{
		cout << "Your answer is incorrect!" << endl << endl;
	}

	cout << "10. In the process of calming down, you swiftly turn around to eavesdrop on a conversation taking place nearby and break a few of your beakers. How do you clean up the glass?" << endl;
	cout << "1. Put it in the glass disposal container." << endl;
	cout << "2. Call housekeeping." << endl;
	cout << "3. Sweep it to the side and hope someone else gets to it." << endl;

	cin >> choice;

	if(choice == 1)
	{
		cout << "Your answer is correct!" << endl << endl;
		totalScore++;
	}
	else
	{
		cout << "Your answer is incorrect!" << endl << endl;
	}

	cout << "11. After the whole series of unfortunate events, you finally get back to the experiment and gain some momentum. You end up finishing and have to clean up. Where do you put the chemicals?" << endl;
	cout << "1. Down the sink." << endl;
	cout << "2. In the chemical waste bin." << endl;
	cout << "3. In the trash." << endl;

	cin >> choice;

	if(choice == 2)
	{
		cout << "Your answer is correct!" << endl;
		totalScore++;
	}
	else
	{
		cout << "Your answer is incorrect!" << endl;
	}

	cout << "12. You are on the way out and notice your lab bench is filthy with all the previous events that unfolded. What is your final move?" << endl;

	cout << "1. Clean it and put all leftover equipment away." << endl;
	cout << "2. Leave it for the next lab to take care of." << endl;
	cout << "3. Tell the TA you've had enough of this lab and refuse to clean." << endl;

	cin >> choice;

	if(choice == 1)
	{
		cout << "Your answer is correct!" << endl;
		totalScore++;
	}
	else
	{
		cout << "Your answer is incorrect!" << endl;
	}

	cout << "Your total score is: " << totalScore << "/12!";

	if(totalScore > 8)
	{
		cout << " You passed!" << endl;
	}
	else
	{
		cout << " You failed!" << endl;
	}
	  
    return 0;
}
