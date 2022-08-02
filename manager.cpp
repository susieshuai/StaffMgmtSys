//
// Created by Shi Shuai on 2022/8/2.
//

#include "manager.h"

Manager::Manager(int id, string name, int deptId){
    this->id = id;
    this->name = name;
    this->deptId = deptId;
}

void Manager::showInfo(){
    cout << "ID: " << this->id
         << "\tName: " << this->name
         << "\tDept: " << this->getDeptName()
         << "\tResponsibility: Do tasks assigned by boss, assign tasks to employee"
         << endl;
}

string Manager::getDeptName(){
    return "Manager";
}