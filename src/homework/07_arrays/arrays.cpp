//cpp
#include <iostream>
#include "arrays.h"
using namespace std;
ArrayList::ArrayList(int* array_list, int capacity) :
    elements(array_list)
{
    this->capacity = capacity;
}

void ArrayList::Add(int value)
{
    if(current_index < capacity)
    {
        elements[current_index] = value;
        current_index++;
    }
}

int ArrayList::Get_First_Index_Of(int value)
{
    auto index = -1;
    auto local_current_index = 0;
    
    while(local_current_index < current_index)
    {
        if(elements[local_current_index] == value)
        {
            index = local_current_index;
            break;
        }

        local_current_index++;
    }

    return index;
}

int ArrayList::Get_Value_At_Index(int index)
{
    int value = -1;

    if(index >= 0 && index < current_index)
    {
        value = elements[index];
    }

    return value;
}

void ArrayList::Delete(int value)
{
    auto index = Get_First_Index_Of(value);

    if(index != -1)
    {
        AdjustElements(index);
    }
}

void ArrayList::AdjustElements(int index)
{
    if(index < 0 || index >= current_index)
    {
        return;
    }
    //run loop to move array elements to the left and then reduce array by 1
    for(int i = index; i < current_index; i++)
    {
        elements[i] = elements[i+1];
    }
    current_index--;
}