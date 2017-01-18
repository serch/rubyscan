/* match_event.h
 * pattern match event class
 * written by Alex Fulton
 * Sept 2016
 */
#ifndef RSCAN_MATCH_EVENT_H
#define RSCAN_MATCH_EVENT_H

typedef struct match_event {
    rscan_event_t head;
    unsigned int id;
    unsigned long long from;
    unsigned long long to;
    unsigned int flags;
} rscan_match_event_t;

extern VALUE rscan_match_event_define(VALUE root);
extern VALUE rscan_class_match_event();

#define Get_Match_Event_Ptr(value,pointer) \
        Data_Get_Struct(value,rscan_match_event_t*,pointer)
#endif
