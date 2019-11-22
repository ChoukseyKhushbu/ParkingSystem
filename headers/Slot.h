#pragma once
#include <string>

namespace PS
{
    class Slot
    {
        string colour;
        string reg_num;
        public:
        Slot(string colour, string reg_num)
        {
           this->colour = colour;
           this->reg_num = reg_num;
        }
    };
}
