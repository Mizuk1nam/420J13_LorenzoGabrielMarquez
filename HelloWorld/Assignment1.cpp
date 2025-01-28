#include <iostream>
#include <string>

class UserAccount {
public:
    int ID;                
    std::string userName;   
    std::string password;   

    UserAccount(int id, const std::string& name, const std::string& pass)
        : ID(id), userName(name), password(pass) {
    }
    bool Login(const std::string& enteredUserName, const std::string& enteredPassword) {
        return (userName == enteredUserName && password == enteredPassword);
    }
    
};
int main() {
    int id;
    std::string username, password;

    std::cout << "Enter account ID: ";
    std::cin >> id;
    std::cin.ignore();

    std::cout << "Enter username: ";
    std::getline(std::cin, username);

    std::cout << "Enter password: ";
    std::getline(std::cin, password);

    UserAccount account(id, username, password);

    std::string enteredUsername, enteredPassword;

    while (true) {
        std::cout << "Login: " << std::endl;
        std::cout << "Enter username: ";
        std::getline(std::cin, enteredUsername);

        std::cout << "Enter password: ";
        std::getline(std::cin, enteredPassword);

        if (account.Login(enteredUsername, enteredPassword)) {
            std::cout << "Login successful! Account ID: " << account.ID << std::endl;
            break;
        }
        else {
            std::cout << "Invalid username or password. Try again." << std::endl;
        }
    }

    return 0;
}
