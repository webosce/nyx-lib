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
 * @file nyx_display_impl.c
 *
 * @brief implementation of NYX's public API for accessing device information
 *
 *******************************************************************************
 */

#include <nyx/nyx_client.h>
#include <nyx/nyx_module.h>

#include "nyx_display_impl.h"

nyx_error_t nyx_display_get_metrics(nyx_device_handle_t handle,
                                    nyx_display_metrics_t *out_metrics)
{
	nyx_device_t *d = (nyx_device_t *)handle;
	CHECK_DEVICE(d);
	CHECK_DEVICE_TYPE(d, NYX_DEVICE_DISPLAY);
	nyx_display_device_t *dev = (nyx_display_device_t *)d;
	*out_metrics = dev->display_metrics;
	return NYX_ERROR_NONE;
}
