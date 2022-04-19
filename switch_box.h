#ifndef SWITCH_BOX_H_
#define SWITCH_BOX_H_
 
#include "control_switch.h"
#define NUM_SWITCHES (5)
 
class switch_box
{
private:
    control_switch m_switch_box[NUM_SWITCHES]; 
public:
    switch_box();
 
    switch_box(switch_state_t param_state);
 
    switch_box(const switch_box& ref_swicth_box);
 
    int get_number_of_switches_with_state(switch_state_t param_state);
 
    bool is_all_switch_states_equal(void);
    
    function_status_t set_all_switch_states(switch_state_t param_state);
 
    ~switch_box();
};
 
#endif  /* SWITCH_BOX_H_ */