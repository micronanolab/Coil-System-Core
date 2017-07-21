////////////////////////////////////////////////////////////////////////////////////////
// File      : AutoFabrication.h
// Function  :
// Edited by : Zhe
////////////////////////////////////////////////////////////////////////////////////////
// #ifndef TEMPFEEDING
// #define TEMPFEEDING

#include <pthread.h>
#include <gtk/gtk.h>
#include "DataConstantValue.h"
#include "s826_subroutine.h"
#include "vision.h"
#include "PageGeneralControl.h"
#include "coilFieldControl.h"
// #include "AccelStepper.h"
#include <stdio.h>
#include <math.h>

//
// // discrete bending control
// void init_discrete_bending(void);
// void stop_discrete_bending(void);
// double magnet2field_angle( double );
// double field2magnet_angle( double );
// void set_kp( float );
// void set_ki( float );
// void set_destination_angle( float );
// float anglePlus( float, float );
// float angleMinus( float, float );
// void set_discrete_go(int d);
//
// // continuous bending control
// void init_continuous_bending(void);
// void stop_continuous_bending(void);
// void set_continuous_radius(float d);
// void set_continuous_central(float d);
// void set_continuous_start(float d);
// void set_continuous_time(float d);
// void set_continuous_feedback(int d);
// void set_continuous_go(int);

// sinusoidal field (2D) thread related functions
void init_sinusoidal_field(void);
void stop_sinusoidal_field(void);
void set_fab_heading_s(float d);
void set_fab_amp_s(float d);
void set_fab_fre_s(float d);
void set_sinusoidalfield_go(int d);

// rotational field thread (vertical)
void init_rotational_field(void);
void stop_rotational_field(void);
void set_fab_heading(float d);
void set_fab_amp(float d);
void set_fab_fre(float d);
void set_rotationalfield_go(int d);

// rotational field (horizontal) thread related functions
void init_rotational_field_h (void);
void stop_rotational_field_h (void);
void set_fab_heading_h (int d);
void set_rotationalfield_go_h (int d);

// sawtooth mode thread related functions
void init_sawtooth_mode(void);
void stop_sawtooth_mode(void);
void set_sawtooth_go(int);
void set_peak_angle_st(float);
//
// // temperature control
// void init_temp_control ( void );
// void stop_temp_control ( void );
// void set_destination_temp ( float );
// void set_temp_go ( int );
// float get_current_temp(void);
//
// // automatic feeding
// void init_auto_feeding(void);
// void stop_auto_feeding(void);
// void set_feeding_distance ( float );
// void set_feeding_speed ( float );
// void set_feeding_go ( int );
//
// // manual feeding
// void set_feeding_increments(float);
// void init_manual_feeding(void);
// void stop_manual_feeding(void);
// void feederIncrement (void);
// void feederDecrement (void);
//
// // automatic fabrication
// void set_left_constraint (int);
// void init_auto_fab (void);
// void stop_auto_fab (void);
//
// // timing thread
// void init_timing(void);
// void stop_timing(void);
//
// // cut off thread
// void set_neutral_cut(float);
// void set_mag_cut(float);
// void set_fre_cut(float);
// void init_cut_off (void);
// void stop_cut_off (void);

// // field control
// void set_factor(int);
// void set_field_xyz (int, float);
// void set_field_mag_fab (float);
// void set_field_polar (float, float);

// #endif // TEMPFEEDING
