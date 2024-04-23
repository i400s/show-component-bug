/**
 * @file show_component_bug.c
 * @brief show component bug.
 *
 * © 2024 Jonathan Wilson, <i400s@hotmail.com>
 *
 */

#include <stdio.h>
#include <string.h>
#include "esp_types.h"
#include "esp_log.h"
#include "esp_check.h"
#include "show_component_bug.h"

static const char *TAG = "show-component-bug";

esp_err_t show_component_bug_add_device(char** out_data)
{
    ESP_LOGI(TAG, "adding device");

    esp_err_t ret = ESP_OK;
    int datasize = 100;
    *out_data = (char*)malloc(datasize);

    if (ret != ESP_OK) {
        int i = 0;
        i++;
        ESP_LOGI(TAG, "i: %d", i);
    }
    ESP_LOGI(TAG, "all done here");
    return ret;
}
