#include "control_switch.h"
#include "smart_switch.h"
#include "appliance.h"
#include <iostream>

smart_switch::smart_switch():m_type(),m_power_status(POWER_NOT_AVAILABLE){}

smart_switch::smart_switch(switch_state_t param_state)
{
    //control_switch::set_switch_state(param_state);
}

smart_switch::smart_switch(switch_state_t param_state, electronic_accessory_type_t param_type)
{
    //control_switch::set_switch_state(param_state);
    switch_state_t smart_switch_state = param_state;
    m_type = param_type;
}

smart_switch::smart_switch(switch_state_t param_state, electronic_accessory_type_t param_type, power_status_t param_power, appliance_function f_type)
{
    //control_switch::set_switch_state(param_state);
    switch_state_t smart_switch_state = param_state;
    m_type = param_type;
    m_power_status = param_power;
    func_type = f_type;
}

smart_switch::smart_switch(const smart_switch& ref_switch)
{
    m_type = ref_switch.m_type;
    m_power_status = ref_switch.m_power_status;
}

electronic_accessory_type_t smart_switch::get_electronic_accessory_type()
{
    //std::cout<<m_type<<"\n";
    return m_type;
}
  

function_status_t smart_switch::set_electronic_accessory_type(electronic_accessory_type_t input_type)
{
    if (input_type == LIGHT_BULB)
    {
        m_type = input_type;
        return SUCCESS;
    }

    else if (input_type == FAN)
    {
        m_type = input_type;
        return SUCCESS;
    }

    else if (input_type == FRIDGE)
    {
        m_type = input_type;
        return SUCCESS;
    }

    else
    {
        return FAILURE;
    }
}

power_status_t smart_switch::get_power_status()
{
    return m_power_status;
}

function_status_t smart_switch::set_power_status(power_status_t input_power)
{
    if (input_power == POWER_AVAILABLE)
    {
        m_power_status = input_power;
        return SUCCESS;
    }

    else if (input_power == POWER_NOT_AVAILABLE)
    {
        m_power_status = input_power;
        return SUCCESS;
    }

    else
    {
        m_power_status = POWER_NOT_AVAILABLE;
        return FAILURE;
    }
}

void smart_switch::appliance_functions()
{
if (m_type==LIGHT_BULB)
appliance_function get_bulb_function(appliance_function func_type);
else if(m_type==FAN)
appliance_function get_fan_function(appliance_function func_type);
else 
appliance_function get_fridge_function(appliance_function func_type);
std::cout<<func_type<<"\n";
}

smart_switch::~smart_switch(){}