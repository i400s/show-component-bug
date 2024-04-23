/**
 * @file show_component_bug.main.c
 * @brief Minimal project to show proof of issue.
 *
 * © 2024 Jonathan Wilson, <i400s@hotmail.com>
 *
 */

#include <stdio.h>
#include "esp_log.h"
#include "esp_check.h"
#include "show_component_bug.h"

static const char *TAG = "show-component-bug-main";

/**
 * @brief Application main entry point.
*/
void app_main(void)
{
    char* data = NULL;
    ESP_LOGI(TAG, "alive and in app_main()");

    ESP_LOGI(TAG, "Add device");
    ESP_ERROR_CHECK(show_component_bug_add_device(&data));

    ESP_LOGI(TAG, "All done here");
}
