//
// Created by Shi Shuai on 2022/8/2.
//

#ifndef STAFFMGMTSYS_MANAGER_H
#define STAFFMGMTSYS_MANAGER_H

#endif //STAFFMGMTSYS_MANAGER_H

#pragma once
#include <iostream>
using namespace std;
#include <string>
#include "worker.h"

class Manager : public Worker{
public:

    Manager(int id, string name, int deptId);

    // show person info
    virtual void showInfo();
    // get dept name
    virtual string getDeptName();
};