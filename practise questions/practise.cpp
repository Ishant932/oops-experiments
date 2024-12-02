// #include <iostream>
// using namespace std;

// class bankAccount {
//     static int count;
//     const long MIN_HIGH_VALUE = 1000;  // Set as constant since it's not changing
//     double acc_bal;
//     static long long bankacc_no;
//     long long acc_no;

// public:
//     // Default constructor
//     bankAccount() {
//         count++;
//         acc_no = bankacc_no++;
//         acc_bal = 600;
//     }

//     // Static function to get total accounts
//     static int getTotalAccounts() {
//         return count;
//     }

//     // Function to deposit amount
//     double deposit(int amount_added) {
//         acc_bal += amount_added;
//         return acc_bal;
//     }

//     // Function to withdraw amount
//     double withdraw(int withdraw_amount) {
//         if (withdraw_amount <= 0) {
//             cout << "Invalid amount" << endl;
//         } else if (acc_bal - withdraw_amount < 500) {
//             cout << "Insufficient funds" << endl;
//         } else if (withdraw_amount > acc_bal) {
//             cout << "Insufficient balance" << endl;
//         } else {
//             acc_bal -= withdraw_amount;
//             cout << "Withdrew: " << withdraw_amount << endl;
//         }
//         return acc_bal;
//     }

//     // Function to display account details
//     void display() {
//         cout << "Account number: " << acc_no << endl;
//         cout << "Balance: " << acc_bal << endl;
//     }
// };

// // Initialize static members outside the class
// int bankAccount::count = 0;
// long long bankAccount::bankacc_no = 100000; // Example starting account number

// class bank {
//     bankAccount* arr;
//     int count;
//     int max_acc;

// public:
//     // Constructor to initialize bank with a fixed number of accounts
//     bank() {
//         max_acc = 100;
//         count = 0;
//         arr = new bankAccount[max_acc];
//     }

//     // Destructor to release memory
//     ~bank() {
//         delete[] arr;
//     }

//     // Function to add an account
//     void addAccount(bankAccount& p1) {
//         if (count >= max_acc) {
//             cout << "Overflow: Maximum number of accounts reached!\n";
//             return;
//         }
//         arr[count++] = p1;
//         cout << "Account added successfully!\n";
//     }

//     // Function to display high-value accounts (above MIN_HIGH_VALUE)
//     void displayHighValueAccount() {
//         if (count == 0) {
//             cout << "No accounts in the bank\n";
//             return;
//         }

//         for (int i = 0; i < count; i++) {
//             cout << "\n--- Bank Account " << i + 1 << " ---\n";
//             arr[i].display();
//         }
//     }
// };

// int main() {
//     bank h1;

//     // Creating some bank accounts and adding them to the bank
//     bankAccount acc1;
//     h1.addAccount(acc1);

//     bankAccount acc2;
//     h1.addAccount(acc2);

//     // Displaying all high-value accounts
//     h1.displayHighValueAccount();

//     return 0;
// }











#include <iostream>
using namespace std;

class Time{
    int h;
    int m;

    public:
        void setDetails(int h, int m){
            cin>>h>>m;
        }

        void display(){
            cout<<"\nh:"<<h<<" m:"<<m;
        }

        void operator ++(int){
            ++h;
            ++m;
        }

        friend Time operator ++(Time nn);
};

Time operator ++(Time nn){
    ++nn.h;
    ++nn.m;
}

int main(){
    Time t1;

    t1.setDetails(2, 4);
    ++t1;
    


}