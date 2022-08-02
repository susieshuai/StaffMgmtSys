cmake_minimum_required(VERSION 3.20)
project(StaffMgmtSys)

set(CMAKE_CXX_STANDARD 14)

add_executable(StaffMgmtSys main.cpp workerManager.h workerManager.cpp worker.h employee.h employee.cpp manager.h manager.cpp boss.h boss.cpp)
