#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"

#define LED_GPIO GPIO_NUM_2

void LED_INIT()
{
    gpio_reset_pin(LED_GPIO);
    gpio_set_direction(LED_GPIO,GPIO_MODE_OUTPUT);
}

void myTask(void *pvParameters)
{
    int counter= 0;
    while (1)
    {
        printf("LED ON counter: %d\n",counter++);
        gpio_set_level(LED_GPIO, 1);   // LED ON
        vTaskDelay(pdMS_TO_TICKS(1000));

        printf("LED is OFF...\n");
        gpio_set_level(LED_GPIO, 0);   // LED OFF
        vTaskDelay(pdMS_TO_TICKS(1000));

        if(counter >= 10)
        {
            printf("Task has been deleted\n");
            vTaskDelete(NULL);
        }
        //vTaskDelay(pdMS_TO_TICKS(1000));
    }
}

void app_main(void)
{
    LED_INIT();
	xTaskCreate(myTask,"Bhaumik",2048,NULL,5,NULL);
}
