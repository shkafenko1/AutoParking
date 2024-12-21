#pragma once
#include <iostream>
#include "container/List.h"

class Start
{
    public:
        Start() {}
        void parkingApp();
    private:
        int choice;
        void Log();
        void parkLog();
        void employeeLog();
};