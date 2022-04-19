#include "control_switch.h"
#include "smart_switch.h"
#include "appliance.h"
#include <iostream>
int main()
{
    control_switch c(ON);
    c.get_switch_state();
    //c.set_switch_state(switch_state_t);
   smart_switch c1(ON, LIGHT_BULB, POWER_AVAILABLE, stduyMode);
    c1.get_electronic_accessory_type();
    //c1.set_electronic_accessory_type(electronic_accessory_type_t);
    c1.get_power_status();
    //c1.set_power_status(power_status_t);
    c1.appliance_functions();
  

}
    
