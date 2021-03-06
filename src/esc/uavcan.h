#pragma once

#include <stdbool.h>

typedef bool (*restart_handler_ptr)(void);

void uavcan_init(void);
void uavcan_update(void);
void uavcan_set_restart_cb(restart_handler_ptr cb);
void uavcan_send_debug_key_value(const char* name, float val);
