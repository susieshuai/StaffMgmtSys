//
// Created by Shi Shuai on 2022/8/2.
//

#ifndef STAFFMGMTSYS_WORKER_H
#define STAFFMGMTSYS_WORKER_H

#endif //STAFFMGMTSYS_WORKER_H

#pragma once
#include <iostream>
using namespace std;
#include <string>

// abstract worker class
class Worker{
public:

    // show person info
    virtual void showInfo() = 0;
    // get dept name
    virtual string getDeptName() = 0;

    // fields
    int id;
    string name;
    int deptId;
};