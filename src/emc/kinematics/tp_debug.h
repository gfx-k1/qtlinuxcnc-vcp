/********************************************************************
* Description: tc_debug.h
*
*
* Author: Robert W. Ellenberg
* License: GPL Version 2
* System: Linux
*    
* Copyright (c) 2013 All rights reserved.
*
* Last change:
********************************************************************/
#ifndef TP_DEBUG_H
#define TP_DEBUG_H

/** TP debug stuff */
#ifdef TP_DEBUG
//Kludge because I didn't know any better at the time
//FIXME replace these with better names?
#define tp_debug_print(...) rtapi_print(__VA_ARGS__)
#else
#define tp_debug_print(...) 
#endif

/** "TC" debug info for inspecting trajectory planner output at each timestep */
#ifdef TC_DEBUG
#define tc_debug_print(...) rtapi_print(__VA_ARGS__)
#else
#define tc_debug_print(...) 
#endif

/** TP position data output to debug acceleration spikes */
#ifdef TP_POSITION_LOGGING
#define tp_position_print(...) rtapi_print(__VA_ARGS__)
#else
#define tp_position_print(...)
#endif

/** TP misc data logging */
#ifdef TP_INFO_LOGGING
#define tp_info_print(...) rtapi_print(__VA_ARGS__)
#else
#define tp_info_print(...)
#endif


#endif
