#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    while(true)
    {
        cout<<"                                     WELCOME!                 "<<endl;
        cout<<"                               Let's play the game                "<<endl;
        cout<<"\n                               GUESS THE NUMBER                         "<<endl;
        cout<<endl;
        cout<<"\n                                  INSTRUCTIONS!                                  "<<endl;
        cout<<"\n                       Guess the number between 1 to 100                               "<<endl;
        cout<<"\n      You'll get limited chances based on the level which you'll choose.               "<<endl;
        cout<<endl;
        cout<<"Levels of the game"<<endl;
        cout<<"1.Easy Level"<<endl;
        cout<<"2.Medium Level"<<endl;
        cout<<"3.Difficult Level"<<endl;
        cout<<endl;
        int ChooseTheLevel;
        int number;
        cout << "Enter the number: ";
        cin >> ChooseTheLevel;
        srand(time(0));
        number=1+(rand()%100);
        int PlayerChoice;
        if (ChooseTheLevel==1) 
        {
            int choicesLeft,i;
            cout << "\nYou have 10 choices for finding the secret number between 1 and 100.";
            choicesLeft=10;
            for (i=1;i<=10;i++)
            {
                cout << "\n\nEnter the number: ";
                cin >> PlayerChoice;
                if (PlayerChoice==number) {
                    cout << "Wow! You won, "
                         << PlayerChoice
                         << " is the right number" << endl;
                    cout << "\t\t\t Thanks for playing..."
                         << endl;
                    cout << "Play the game again with "
                            "us!!\n\n"
                         << endl;
                    break;
                }
                else {
                    cout << "No, " << PlayerChoice
                         << " is not the right number\n";
                    if (PlayerChoice>number) {
                        cout << "The right number is smaller than the number, you have chosen."<< endl;
                    }
                    else {
                        cout << "The right number is greater than the number, you have chosen."<< endl;
                    }
                    choicesLeft--;
                    cout << choicesLeft << " choices left. "<< endl;
                    if (choicesLeft==0) {
                        cout<<"\nBetter luck next time"<<endl;
                        cout<<number<<" is the number"
                             << ", You lose!!\n\n";
                        cout << "Play the game again to "
                                "win!!!\n\n";
                    }
                }
            }
        }
        else if (ChooseTheLevel==2) {
            cout << "\nYou have 7 choices for finding the number between 1 and 100.";
            int choicesLeft=7;
            for (int i=1;i<=7;i++) {
                cout << "\n\nEnter the number: ";
                cin >> PlayerChoice;
                if (PlayerChoice==number) {
                   cout << "Wow! You won, "
                         << PlayerChoice
                         << " is the right number" << endl;
                    cout << "\t\t\t Thanks for playing..."
                         << endl;
                    cout << "Play the game again with "
                            "us!!\n\n"
                         << endl;
                    break;
                }
                else {
                    cout << "No, " << PlayerChoice
                         << " is not the right number\n";
                    if (PlayerChoice>number) {
                        cout << "The right number is smaller than the number, you have chosen."<< endl;
                    }
                    else {
                        cout << "The right number is greater than the number, you have chosen."<< endl;
                    }
                    choicesLeft--;
                    cout << choicesLeft << " choices left. "
                         << endl;
                    if (choicesLeft == 0) {
                        cout<<"\nBetter luck next time"<<endl;
                        cout<<number<<" is the number"
                             << ", You lose!!\n\n";
                        cout << "Play the game again to "
                                "win!!!\n\n";
                    }
                }
            }
        }
        else if (ChooseTheLevel==3) {
            cout << "\nYou have 5 choices for finding the secret number between 1 and 100.";
            int choicesLeft=5;
            for (int i=1;i<=5;i++) {
                cout << "\n\nEnter the number: ";
                cin >> PlayerChoice;
                if (PlayerChoice==number) {
                    cout << "Wow! You won, "
                         << PlayerChoice
                         << " is the right number" << endl;
                    cout << "\t\t\t Thanks for playing..."
                         << endl;
                    cout << "Play the game again with "
                            "us!!\n\n"
                         << endl;
                    break;
                }
                else {
                    cout << "No, " << PlayerChoice
                         << " is not the right number\n";
                    if (PlayerChoice>number) {
                        cout << "The right number is smaller than the number, you have chosen."<< endl;
                    }
                    else {
                        cout << "The right number is greater than the number, you have chosen."<< endl;
                    }
                    choicesLeft--;
                    cout << choicesLeft << " choices left. "
                         << endl;
                    if (choicesLeft == 0) {
                        cout<<"\nBetter luck next time"<<endl;
                        cout<<number<<" is the number"
                             << ", You lose!!\n\n";
                        cout << "Play the game again to "
                                "win!!!\n\n";
                    }
                }
            }
        }
        else if(ChooseTheLevel==0) {
            exit(0);
        }
        else {
            cout << "Kindly select between (0,1,2,3)"<< endl;
        }
    }
    return 0;
}