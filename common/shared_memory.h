/*
 *   This file is part of DroneBridge: https://github.com/seeul8er/DroneBridge
 *
 *   Copyright 2017 Wolfgang Christl
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 */

#include "wbc_lib.h"
#include "db_protocol.h"

#ifndef CONTROL_STATUS_SHARED_MEMORY_H
#define CONTROL_STATUS_SHARED_MEMORY_H

db_gnd_status_t *db_gnd_status_memory_open(void);
db_rc_status_t *db_rc_status_memory_open(void);
db_uav_status_t *db_uav_status_memory_open(void);
db_rc_values_t *db_rc_values_memory_open(void);
db_rc_overwrite_values_t *db_rc_overwrite_values_memory_open(void);
void db_rc_values_memory_init(db_rc_values_t *rc_values);
void db_rc_overwrite_values_memory_init(db_rc_overwrite_values_t *rc_values);

#endif //CONTROL_STATUS_SHARED_MEMORY_H
