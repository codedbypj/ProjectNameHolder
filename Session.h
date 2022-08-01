#ifndef SESSION_H
#define SESSION_H


#include<iostream>

namespace PROJ_NS {

class SessionInstance {
private:
    int sessionID;

private:
    void itemIn();
    void itemOut();
    void itemEnquiry();
    void customerEnquiry();
    void financialEnquiry();
    void handleWrongInput();

public:
    int start();
};

}

#endif

