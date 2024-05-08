#include <iostream> 
#include <string>
#include <fstream>
using namespace std; 

int main() {
  	int choice;
	int totalScore = 0;
	int questionNumber = 1;
	bool gameOver = false;
  	string playerName;
	string questions;
	string ansChoice;
	string ans[3] = {};

	ifstream questionsFile("questions.txt");
	ifstream answerFile("answers.txt");
	ifstream ansChoiceFile("answerChoice.txt");

    cout << "Welcome to the Lab Safety Game!\nWhat is your name?: ";
    cin >> playerName;
    cout << "\nHello, " << playerName << "! Lets begin the game.\n" << endl;

	while(!gameOver)
	{
		getline(questionsFile, questions);
		cout << questionNumber << ". " << questions << endl;

		for(int i = 0; i < 3; i++)
		{
			getline(answerFile, ans[i]);
			cout << "   " << i+1 << ". " << ans[i] << endl;
		}

		cout << "answer: ";
		getline(ansChoiceFile, ansChoice);
		
		cin >> choice;

		if(choice == stoi(ansChoice))
		{
			cout << "Your answer is correct!\n" << endl;
			totalScore++;
		}
		else
		{
			cout << "Your answer is incorrect.\n" << endl;
		}

		questionNumber++;

		if(questionNumber > 12)
			gameOver = true;
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
