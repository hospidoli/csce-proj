#include <iostream> 

using namespace std; 

//Bank account  

//Access funds 

  

void main_menu(); 

//the login 

void get_input();  

  

void login_menu(char& login_choice); 

  

//Checking and saving account  

void checking_account();  

void saving_account(); 

  

//void customer_account, employee_account, manager_account 
//Desposit, Withdrawl, Access Credit, Statement view, and Loans
  

int main() 

{  

  char login_choice; 

   

  login_menu(login_choice); 

  switch(login_choice) 

  { 

   case 1:  

        get_input(); 

        break;  

         

   case 2:  

        get_input(); 

        break;  

         

   case 3:  

        return 0; 

        break; 

  } 

   

  get_input(); 

  main_menu(); 

   

} 

//Menu 

void login_menu(char& login_choice) 

{ 

    cout << "[1] Create Account\n"; 

    cout << "[2]          Login\n"; 

    cout << "[3]           Exit\n"; 

    cin >> login_choice; 

} 

    

//Login Information 

void get_input() 

{ 

    string created_username, created_password, username, password; 

     

    cout << "Enter username to use: \n"; 

    cin >> created_username; 

    cout << "Enter Passward to use: \n"; 

    cin >> created_password; 

     

    cout << "Enter Login Information: \n"; 

    int credential_exit = 0; 

     

    do{  

         

        cout << "Enter Username: \n"; 

        cin >> username; 

        cout << "Enter Password: \n"; 

        cin >> password;  

         

        if ((username == created_username) && (password == created_password)) 

        { 

            credential_exit = 1; 

        } 

        else  

        { 

            cout << "Please Enter Correct Username and Password\n"; 

        } 

  

        } while (credential_exit == 0); 

         

    }  

     

    void main_menu() 

    {  int menu_choice;  

        cout << "[1] Checking Account\n"; 

        cout << "[2]  Savings Account\n"; 

        cout << "[3]             Exit\n"; 

        cin >> menu_choice; 

         

        switch(menu_choice) 

        { 

            case 1: 

            checking_account(); 

            break; 

             

            case 2:  

            saving_account(); 

            break; 

             

            case 3:  

            cout << "Have a nice day!"; 

            return;  

        } 

    } 

     

  void checking_account() 

  { 

      cout << ""; 

  } 

void saving_account()  

{ 

     cout << ""; 

} 

   

