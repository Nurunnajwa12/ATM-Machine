#include <iostream>

using namespace std;

void showMenu(){
cout<<"**********MENU**********"<<endl;
cout<<"1.Check balance"<<endl;
cout<<"2.Deposit"<<endl;
cout<<"3.Withdraw"<<endl;
cout<<"4.Exit"<<endl;
cout<<"***********MENU*********"<<endl;

}

int main()
{
    //check balance,deposit,withdraw. show menu
    int option;
    double balance = 800;
    double depositAmount;
    double withdrawAmount;

    do{
    showMenu();
    cout<<"Option : ";
    cin>> option;
    system ("cls");

    switch(option) {
        case 1: cout<<"Balance is: RM "<< balance <<endl; break;
        case 2: cout<<"Deposit amount: ";
        cin>> depositAmount;
        balance += depositAmount;
        break;
        case 3:cout<< "Withdraw amount: ";
        cin>> withdrawAmount;
    if (withdrawAmount <= balance)
        balance += withdrawAmount;
    else
        cout<<"Not enough money"<<endl;
    break;

    }

    }while (option !=4);














    return 0;
}
