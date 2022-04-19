#ifndef SWITCH_H_
#define SWITCH_H_
 
typedef enum switch_state_t
{
    OFF,        
    ON          
} switch_state_t;
 
typedef enum function_status_t
{
    SUCCESS,    
    FAILURE     
} function_status_t;
 
class control_switch
{
private:
    switch_state_t m_switch_state;  
public:
    control_switch(void);
    control_switch(switch_state_t param_state);
    
    control_switch(const control_switch& ref_switch);
 
    switch_state_t get_switch_state();
 
    function_status_t set_switch_state(switch_state_t);
 
    ~control_switch();
};
 
#endif /* SWITCH_H_ */
