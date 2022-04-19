#ifndef SMART_SWITCH_H_
#define SMART_SWITCH_H_
 
#include "control_switch.h"
#include "appliance.h"
 
typedef enum electronic_accessory_type_t
{
    LIGHT_BULB,     
    FAN,            
    FRIDGE          
}electronic_accessory_type_t;
 
typedef enum power_status_t
{
    POWER_AVAILABLE,        
    POWER_NOT_AVAILABLE     
}power_status_t;   


 
class smart_switch:public control_switch
{
private:
    electronic_accessory_type_t m_type; 
    power_status_t m_power_status;  
    appliance_function func_type;    
public:
    smart_switch();
 
    smart_switch(switch_state_t param_state);
    
    smart_switch(switch_state_t param_state, electronic_accessory_type_t param_type);
    
    smart_switch(switch_state_t param_state, electronic_accessory_type_t param_type, power_status_t param_power, appliance_function f_type);
 
    smart_switch(const smart_switch& ref_switch);
 
    electronic_accessory_type_t get_electronic_accessory_type();
 
    function_status_t set_electronic_accessory_type(electronic_accessory_type_t);
 
    power_status_t get_power_status();
 
    function_status_t set_power_status(power_status_t);

    void appliance_functions();
    
    ~smart_switch();
};
 
#endif /* SMART_SWITCH_H_ */
