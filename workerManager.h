//
// Created by Shi Shuai on 2022/8/1.
//

#ifndef STAFFMGMTSYS_WORKERMANAGER_H
#define STAFFMGMTSYS_WORKERMANAGER_H

#endif //STAFFMGMTSYS_WORKERMANAGER_H

#pragma once
#include <iostream>
using namespace std;
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"

#include <fstream>
#define FILENAME "staffFile.txt"

class WorkerManager{
public:
    WorkerManager();
    void showMenu();
    void exitSystem();

    // fields
    // staff num
    int staffNum;
    // staff array
    Worker ** staffArray;
    // flag of file is empty
    bool fileIsEmpty;

    // add staff
    void addStaff();

    // save file
    void save();

    // get staff num
    int getStaffNum();

    // init staff from file
    void initStaff();

    // show staff
    void showStaff();

    // delete staff by id
    int isExist(int id);

    void delStaff();

    // modify existing staff
    void updateStaff();

    ~WorkerManager();
};