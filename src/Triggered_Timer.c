#include "Triggered_Timer.h"


/*============================================================================*/
/* Attributes access */
/*============================================================================*/
#define My_Counter (Me->var_attr->Counter)
#define My_Recurrence (Me->Recurrence_Millisecond)


/*============================================================================*/
/* Public Methods */
/*============================================================================*/
void Triggered_Timer__Start(
    const Triggered_Timer* Me,
    uint32_t time )
{
    My_Counter = time/My_Recurrence;
    if( My_Counter == 0 )
    {
        Me->Time_Is_Up();
    }
}
/*----------------------------------------------------------------------------*/
void Triggered_Timer__Stop( const Triggered_Timer* Me )
{
    My_Counter = 0;
}
/*----------------------------------------------------------------------------*/
void Triggered_Timer__Tick( const Triggered_Timer* Me )
{
    if(  My_Counter != 0 )
    {
        My_Counter = My_Counter - 1;
        if( My_Counter == 0 )
        {
            Me->Time_Is_Up();
        }
    }
}
/*----------------------------------------------------------------------------*/
uint32_t Triggered_Timer__Get_Remaining_TiMe(
    const Triggered_Timer* Me )
{
    uint32_t remaining_time = 0;
    remaining_time = My_Counter*My_Recurrence;
    return remaining_time;
}
/*----------------------------------------------------------------------------*/
bool Triggered_Timer__Is_Active( const Triggered_Timer* Me )
{
    if( My_Counter == 0 )
    {
        return false;
    }
    else
    {
        return true;
    }
}