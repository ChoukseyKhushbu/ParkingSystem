#pragma once
#include <string>
#include "Slot.h"

namespace PS
{
    class ParkingSystem
    {
        public:
        ParkingSystem(int n)
        {
            Slot *slots= new Slot(n);
            this->no_of_Slots=n;
           /*
           int freeSlots[n];
            for(int i=0;i<n;i++)
                freeSlots[i]=0;
                */
        }

        park(string colour,string reg_num)
        {
            Slot vehicle=new Slot(colour,reg_num);
            for(int i=0;i<this->no_of_Slots;i++)
            {
                if(slots[i]==0)
                {
                    slots[i]=vehicle;
                    break;
                }
            }
        }
    };
}
