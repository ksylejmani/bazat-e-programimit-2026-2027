
#include<iostream>
using namespace std;

int main(){
    int number;
    char symbol;

    do {
        cout<<"What is the number of your card (1-13): ";
        cin>>number;

        if(number < 1 || number > 13)
            cout<<"Invalid number. Try again!\n";

    } while(number < 1 || number > 13);
    
    bool condition;
    do {
        cout<<"What is the symbol of your card (C, D, H, S): ";
        cin>>symbol;

        condition = symbol!='C' && symbol!='c' &&
           symbol!='D' && symbol!='d' &&
           symbol!='H' && symbol!='h' &&
           symbol!='S' && symbol!='s';

        if(condition)
            cout<<"Invalid symbol. Try again!\n";
    } while(condition);

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
    }

    return 0;
}
