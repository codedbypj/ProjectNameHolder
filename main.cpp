#include<iostream>
#include<Session.h>

using namespace PROJ_NS;
using namespace std;

int main() {
    //system_boot_up

    SessionInstance *session = new SessionInstance();

    if(!session) exit(-1);

    if(!session->start()) return -1;

    return 0;
}