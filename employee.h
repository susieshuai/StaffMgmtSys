//
// Created by Shi Shuai on 2022/8/2.
//

#ifndef STAFFMGMTSYS_EMPLOYEE_H
#define STAFFMGMTSYS_EMPLOYEE_H

#endif //STAFFMGMTSYS_EMPLOYEE_H

#pragma once
#include <iostream>
using namespace std;
#include <string>
#include "worker.h"

class Employee : public Worker{
public:

    Employee(int id, string name, int deptId);

    // show person info
    virtual void showInfo(); // keep "virtual" or not, both okay
    // get dept name
    virtual string getDeptName();
};