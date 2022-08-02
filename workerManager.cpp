//
// Created by Shi Shuai on 2022/8/1.
//

#include "workerManager.h"

WorkerManager::WorkerManager() {

}

void WorkerManager::showMenu(){
    cout << "**********************************" << endl;
    cout << "Welcome to Staff Management System" << endl;
    cout << "0.Exit" << endl;
    cout << "1.Add staff" << endl;
    cout << "2.Show staff" << endl;
    cout << "3.Delete staff" << endl;
    cout << "4.Update staff" << endl;
    cout << "5.Find staff" << endl;
    cout << "6.Sort" << endl;
    cout << "7.Reset" << endl;
    cout << "**********************************" << endl;
    cout << endl;
}

void WorkerManager::exitSystem() {
    cout << "See you next time" << endl;
    exit(0);
}

WorkerManager::~WorkerManager() {

}