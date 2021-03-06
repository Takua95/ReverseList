#include "stdafx.h"

using namespace std;

void help();
int randNum();

int main()
{
	try
	{
		linkedListType zelda;
		struct node*head;
		srand(time(0));
		zelda.add_node(randNum());
		zelda.add_node(randNum());
		zelda.add_node(randNum());
		zelda.add_node(randNum());
		zelda.add_node(randNum());
		zelda.add_node(randNum());
		zelda.add_node(randNum());
		int choice;
		bool exit = false;
		while (!exit)
		{
			cout 
				<< "\n\tMenu\n"
				<< "\n\t 1 : Print link list"
				<< "\n\t 2 : Print the linked list in reverse"\
				<< "\n\t 3 : Print the linked list recursively"
				<< "\n\t 4 : Help"
				<< "\n\t 5 : Quit"
				<< "\n\n\t ->";
			cin >> choice;
			switch (choice)
			{
			case 1:
				cout << "\n\n\tPrinting linked list: \n\n";
				zelda.Display();
				cout << "\n\n\t";
				system("pause");
				break;
			case 2:
				cout << "\n\n\tPrinting the reverse of a linked list: \n\n";
				zelda.reversePrint();
				cout << "\n\n\t";
				system("pause");
				break;
			case 3:
				cout << "\n\n\tPrinting the reverse of a linked list recurrsively: \n\n";
				zelda.recursiveReversePrint();
				cout << "\n\n\t";
				system("pause");
				break;
			case 4:
				help();
				break;
			case 5:
				cout << "\n\tGoodbye!\n\n";
				exit = true;
				break;
			default:
				cout << "\n\tThat wasn't an option...\n";
				system("pause");
				break;
			}
		}
	}
	catch (exception&e)
	{
		cout << "ERROR";
	}
	system("pause");
	return 0;
}

void help()
{
	cout
		<< "\n\tThis program creates and populates a linked list"
		<< "\n\tAnd then allows the user to print this list, pr-"
		<< "\n\tint the list in reverse, and print the list rec-"
		<< "\n\tursively.";
}

int randNum()
{
	return rand() % 9 + 0;
}
