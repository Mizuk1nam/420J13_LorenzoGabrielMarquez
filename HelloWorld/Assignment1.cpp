#include <iostream>
#include <string>

class UserAccount {
    int ID;                
    std::string userName;   
    std::string password;   

    UserAccount(int id, const std::string& name, const std::string& pass)
        : ID(id), userName(name), password(pass) {
    }
    bool Login(const std::string& inputUserName, const std::string& inputPassword) {
        return (userName == inputUserName && password == inputPassword);
    }
    
};
