//
// Created by Shi Shuai on 2022/8/1.
//

#include "workerManager.h"

WorkerManager::WorkerManager() {
    ifstream ifs;
    ifs.open(FILENAME, ios::in);
    // case 1: file not exists
    if(!ifs.is_open()){
//        cout << "file not exists" << endl;
        this->staffNum = 0;
        this->staffArray = NULL;
        this->fileIsEmpty = true;
        ifs.close();
        return;
    }

    // case 2： file exists, no data
    char c;
    ifs >> c;
    if(ifs.eof()){
//        cout << "file is empty" << endl;
        this->staffNum = 0;
        this->staffArray = NULL;
        this->fileIsEmpty = true;
        ifs.close();
        return;
    }

    // case 3: file exists, with data
    int num = this->getStaffNum();
//    cout << "Staff number: " << num << endl;
    this->staffNum = num;
    // allocate memory
    this->staffArray = new Worker*[this->staffNum];
    // import data from file
    this->initStaff();

    // print
//    for(int i = 0; i < this->staffNum; i++){
//        cout << this->staffArray[i]->id << " "
//        << this->staffArray[i]->name << " "
//        << this->staffArray[i]->deptId << endl;
//    }
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

void WorkerManager::addStaff() {
    cout << "How many staff do you want to add?" << endl;
    int addNum = 0;
    cin >> addNum;
    if(addNum > 0){ // do add
        // calculate new space size
        // old size + add size
        int newSize = this->staffNum + addNum;
        // memory allocate
        Worker ** newSpace = new Worker * [newSize];
        // copy old data to new space
        if(this->staffArray != NULL){
            for(int i = 0; i < this->staffNum; i++){
                newSpace[i] = this->staffArray[i];
            }
        }
        // add new staff
        for(int i = 0; i < addNum; i++){
            int id;
            string name;
            int deptId;

            cout << "Please enter #" << i + 1 << " staff information" << endl;

            cout << "ID: " << endl;
            cin >> id;

            cout << "Name: " << endl;
            cin >> name;

            cout << "Select Dept:" << endl;
            cout << "1.Employee" << endl;
            cout << "2.Manger" << endl;
            cout << "3.Boss" << endl;
            cin >> deptId;

            // new worker
            Worker * worker = NULL;
            switch (deptId) {
                case 1:
                    worker = new Employee(id, name, 1);
                    break;
                case 2:
                    worker = new Manager(id, name, 2);
                    break;
                case 3:
                    worker = new Boss(id, name, 3);
                    break;
                default:
                    break;
            }

            // add worker ptr into array
            newSpace[this->staffNum + i] = worker;
        }

        // free old space
        delete [] this->staffArray;
        // change new space ptr
        this->staffArray = newSpace;
        this->staffNum = newSize;

        cout << "Successfully add " << addNum << " staff" << endl;

        // write into file
        this->save();
        this->fileIsEmpty = false;
    }
    else{
        cout << "wrong number" << endl;
    }
}

void WorkerManager::save() {
    ofstream ofs;
    ofs.open(FILENAME, ios::out);

    for(int i = 0; i < this->staffNum; i++){
        ofs << this->staffArray[i]->id << " "
        << this->staffArray[i]->name << " "
        << this->staffArray[i]->deptId << endl;
    }

    ofs.close();
}

int WorkerManager::getStaffNum() {
    ifstream ifs;
    ifs.open(FILENAME, ios::in);

    int id;
    string name;
    int deptId;

    int num = 0;
    while(ifs >> id && ifs >> name && ifs >> deptId){
        num++;
    }

    return num;
}

void WorkerManager::initStaff() {
    ifstream ifs;
    ifs.open(FILENAME, ios::in);

    int id;
    string name;
    int deptId;

    // read a line
    int idx = 0;
    while(ifs >> id && ifs >> name && ifs >> deptId){
        Worker * worker = NULL;
        if(deptId == 1){
            worker = new Employee(id, name, deptId);
        }
        else if(deptId == 2){
            worker = new Manager(id, name, deptId);
        }
        else{
            worker = new Boss(id, name, deptId);
        }
        this->staffArray[idx] = worker;
        idx++;
    }

    ifs.close();
}

WorkerManager::~WorkerManager() {
    if(this->staffArray != NULL){
        delete[] this->staffArray;
        this->staffArray = NULL;
    }
}