#include<iostream>
using namespace std;
int main(){
    int number;
    char symbol;
    cout<<"What is the number of your card: ";
    cin>>number;
    cout<<"What is the symbol of your card: ";
    cin>>symbol;
    switch (number)
    {
    case 1:
        cout<<"The card you picked Ace of ";
        break;
    case 11:
        cout<<"The card you picked Jack of ";
        break;
    case 12:
        cout<<"The card you picked Queen of ";
        break;
    case 13:
        cout<<"The card you picked King of ";
        break;
    default:
        cout<<"The card you picked is "<<number<<" of ";
        break;
    }
    switch (symbol)
    {
    case 'C':
    case 'c':
        cout<<"Clubs\n";
        break;
    case 'D':
    case 'd':
        cout<<"Diamonds\n";
        break;
    case 'H':
    case 'h':
        cout<<"Hearts\n";
        break;       
    case 'S':
    case 's':
        cout<<"Spades\n";
        break;
    default:
        break;
    }
    return 0;
}