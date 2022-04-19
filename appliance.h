#ifndef APPLIANCE_H_
#define APPLIANCE_H_

#include <iostream>
// #include "control_switch.h"
// #include "smart_switch.h"

typedef enum appliance_function{
    dim,
    bright,
    stduyMode,
    slow,
    medium,
    fast,
    breeze,
    normal,
    cold,
    twinCool,
}appliance_function;

appliance_function get_bulb_function(appliance_function);
appliance_function get_fan_function(appliance_function);
appliance_function get_fridge_function(appliance_function);

#endif