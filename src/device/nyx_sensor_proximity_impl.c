// Copyright (c) 2010-2018 LG Electronics, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// SPDX-License-Identifier: Apache-2.0

/**
 *******************************************************************************
 * @file nyx_sensor_proximity_impl.c
 *
 * @brief implementation of NYX's public API for accessing proximity
 * sensor device and events it generates.
 *
 *******************************************************************************
 */

#include "nyx_device_impl.h"
#include <nyx/module/nyx_device_internal.h>

nyx_error_t nyx_sensor_proximity_event_get_presence(nyx_event_handle_t handle,
        int32_t *presence_out_ptr)
{
	nyx_event_t *e = (nyx_event_t *)handle;
	CHECK_EVENT(e);
	CHECK_EVENT_TYPE(e, NYX_EVENT_SENSOR_PROXIMITY);
	nyx_event_sensor_proximity_t *a = (nyx_event_sensor_proximity_t *)e;
	*presence_out_ptr = a->item.presence;
	return NYX_ERROR_NONE;
}
