#include <iostream>
using namespace std;
#include "workerManager.h"

int main() {
    WorkerManager wm;
    int choice = 0;
    while(true){
        wm.showMenu();

        cout << "Please choose" << endl;
        cin >> choice;

        switch(choice){
            case 0: // exit
                wm.exitSystem();
                break;
            case 1: // add
                break;
            case 2: // show
                break;
            case 3: // delete
                break;
            case 4: // update
                break;
            case 5: // find
                break;
            case 6: // sort
                break;
            case 7: // reset
                break;
            default:
                break;
        }
    }

    return 0;
}
