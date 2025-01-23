#include <iostream>
#include <string>

class UserAccount {
    int ID;                
    std::string userName;   
    const std::string password;   

    UserAccount(int id, const std::string& name, const std::string& pass)
        : ID(id), userName(name), password(pass) {
    }
    bool Login(const std::string& enteredUserName, const std::string& enteredPassword) {
        return (userName == enteredUserName && password == enteredPassword);
    }
    
};
