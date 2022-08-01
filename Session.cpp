#include<Session.h>

using namespace PROJ_NS;
using namespace std;

int SessionInstance::start() {
    //main_menu
    //1. Item Coming in
    //2. Item Going Out
    //3. Enquiry about an Item
    //4. Enquiry about a Customer
    //5. Financials

    char choosedOption;
    cin >> choosedOption;

    switch(choosedOption) {
        case 'a':
            itemIn();
            break;
        case 'b':
            itemOut();
            break;
        case 'c':
            itemEnquiry();
            break;
        case 'd':
            customerEnquiry();
            break;
        case 'e':
            financialEnquiry();
            break;
        default:
            handleWrongInput();
            break;
    }

    return 1;
}

void SessionInstance::itemIn() {

}

void SessionInstance::itemOut() {
    
}

void SessionInstance::itemEnquiry() {
    
}

void SessionInstance::customerEnquiry() {
    
}

void SessionInstance::financialEnquiry() {
    
}

void SessionInstance::handleWrongInput() {
    
}