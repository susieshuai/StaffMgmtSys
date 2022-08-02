//
// Created by Shi Shuai on 2022/8/2.
//

#include "employee.h"

Employee::Employee(int id, string name, int deptId){
    this->id = id;
    this->name = name;
    this->deptId = deptId;
}

void Employee::showInfo(){
    cout << "ID: " << this->id
    << "\tName: " << this->name
    << "\tDept: " << this->getDeptName()
    << "\tResponsibility: Do tasks assigned by manager"
    << endl;
}

string Employee::getDeptName(){
    return "Employee";
}