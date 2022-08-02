//
// Created by Shi Shuai on 2022/8/2.
//

#include "boss.h"

Boss::Boss(int id, string name, int deptId){
    this->id = id;
    this->name = name;
    this->deptId = deptId;
}

void Boss::showInfo(){
    cout << "ID: " << this->id
         << "\tName: " << this->name
         << "\tDept: " << this->getDeptName()
         << "\tResponsibility: Head of the company"
         << endl;
}

string Boss::getDeptName(){
    return "Boss";
}