#include <iostream>
using namespace std;
#include "workerManager.h"

#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"

int main() {

    // test polymorphism
//    Worker * worker1 = NULL;
//    worker1 = new Employee(1, "Kate", 1);
//    worker1->showInfo();
//
//    Worker * worker2 = NULL;
//    worker2 = new Manager(2, "Judy", 2);
//    worker2->showInfo();
//
//    Worker * worker3 = NULL;
//    worker3 = new Boss(3, "Amy", 3);
//    worker3->showInfo();

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
            wm.addStaff();
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
