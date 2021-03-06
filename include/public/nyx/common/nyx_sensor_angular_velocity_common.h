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
 * @file nyx_sensor_angular_velocity_common.h
 *
 */

#ifndef _NYX_SENSOR_ANGULAR_VELOCITY_COMMON_H_
#define _NYX_SENSOR_ANGULAR_VELOCITY_COMMON_H_

#include <nyx/common/nyx_device.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
* @defgroup nyx_sensor_angular_velocity_public Angular Velocity Sensor
* @ingroup nyx_public
* @{
*/


/**
 * Definition of angular velocity event type.
 */
typedef struct
{

	float x;    /**< angular velocity around x-axis in radians per second */
	float y;    /**< angular velocity around y-axis in radians per second */
	float z;    /**< angular velocity around z-axis in radians per second */

} nyx_sensor_angular_velocity_event_item_t;

/** @} */
#ifdef __cplusplus
}
#endif


#endif /* _NYX_SENSOR_ANGULAR_VELOCITY_COMMON_H_ */
