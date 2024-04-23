/**
 * @file show_component_bug.h
 *
 */

#pragma once

#include "esp_err.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Fake adding something.
 *
 * @param[out] handle Device handle.
 * @return
 *      - ESP_OK: added device.
 */
esp_err_t show_component_bug_add_device(char** out_data);

#ifdef __cplusplus
}
#endif
