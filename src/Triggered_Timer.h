#ifndef TRIGGERED_TIMER_H
#define TRIGGERED_TIMER_H


/*============================================================================*/
/* Inclusions */
/*============================================================================*/
#include <stdint.h>
#include <stdbool.h>


/*============================================================================*/
/* Class */
/*============================================================================*/
typedef struct {
    uint32_t Counter;
} Triggered_Timer_Var;

typedef struct {
    /* Variable attributes */
    Triggered_Timer_Var* var_attr;
    
    /* Sent events */
    void (*Time_Is_Up) ( void );

    /* Constants attributes */
    uint32_t Recurrence_Millisecond;

} Triggered_Timer;


/*============================================================================*/
/* Public methods */
/*============================================================================*/
void Triggered_Timer__Start( 
    const Triggered_Timer* me,
    uint32_t time_ms );
void Triggered_Timer__Stop( const Triggered_Timer* me );
void Triggered_Timer__Tick( const Triggered_Timer* me );
uint32_t Triggered_Timer__Get_Remaining_Time( 
    const Triggered_Timer* me );
bool Triggered_Timer__Is_Active( const Triggered_Timer* me );


#endif