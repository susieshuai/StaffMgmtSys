//
// Created by Shi Shuai on 2022/8/2.
//

#ifndef STAFFMGMTSYS_BOSS_H
#define STAFFMGMTSYS_BOSS_H

#endif //STAFFMGMTSYS_BOSS_H

#pragma once
#include <iostream>
using namespace std;
#include <string>
#include "worker.h"

class Boss : public Worker{
public:

    Boss(int id, string name, int deptId);

    // show person info
    virtual void showInfo();
    // get dept name
    virtual string getDeptName();
};