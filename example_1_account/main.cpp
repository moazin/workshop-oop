#include <iostream>
#include <string>

using namespace std;

class BankAccount {
    public:
        BankAccount(string title, int initialDeposit){
            this->title = title;
            this->cash = initialDeposit;
        }
        // tells us the owner's name of this account
        string getTitle(){
            return this->title;
        }
        // tells us the owner's current balance
        int getCurrentBalance(){
            return this->cash;
        }
        // deposits come ammount 
        void depositCash(int cash){ 
            this->cash += cash;
        }
        // withdraws cash
        int withdrawCash(int cash){
            this->cash -= cash;
            return this->cash;
        }
    private:
        string title;
        int cash = 0;
};

int main(void){
    BankAccount account("Ahsan Mukhtar", 100);
    // deposit 100 rupees
    account.depositCash(100);
    // print current balance
    cout << account.getCurrentBalance() << endl;
    // deposit 100 rupees
    account.depositCash(100);
    // print current balance
    cout << account.getCurrentBalance() << endl;
    // withdraw 50 rupees
    account.withdrawCash(50);
    // print current balance
    cout << account.getCurrentBalance() << endl;
    return 0;
}
