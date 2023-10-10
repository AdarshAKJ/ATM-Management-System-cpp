#include<bits/stdc++.h>
using namespace std;

class ATM
{
    int balance ;
public:
    ATM(int amount){
        balance = amount;
    }   
    int getBalance(){
        return balance;
    }
    int withdraw(int amount){
        if (amount > balance){
            return 0;
        }
        balance -= amount;
        return 1;
    }
    void deposite(int amount){
        balance += amount;
    }
    
};
int main() {
    // run();
    ATM atm(1000);
    char op;
    
    

    do{
        // system("cls");
        int amount;
        cout << "1. View balance"<<endl;
        cout << "2. Cash withdraw"<<endl;
        cout << "3. Cash deposite"<<endl;
        cout << "4. Exit"<<endl;
        cout << "Enter Your Choice :";
        int choice ; cin >> choice;
        switch(choice)
        {
        case 1:
            cout << "Your Balance : "<<atm.getBalance();
            break;
        case 2:
            cout << "Enter the amount to withdraw : ";
            cin >> amount;
            int sucess; sucess = atm.withdraw(amount);
            if (sucess) cout << "Withdraw Successfully..."<<endl;
            else cout << "Insufficient Balance..."<<endl;
            break;
        case 3:
            cout << "Enter the amount to deposite : ";
            cin >> amount;
            atm.deposite(amount);
            cout << "\nithdraw Successfully..."<<endl;
            break;
        case 4:
            cout << "Thanks for using ATM";
            break;
        default :
            cout << "Invalid Choice"<<endl;
            return 0;
        }
        cout<<"\nDo you want to try another trasaction [YES / NO] :";
        cin >> op;
    }while(op == 'Y' || op == 'y');

}