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
    while (1)
    {
        printf("First Task is running......\n");
        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}

void ThirdTask(void *pvParameters)
{
    while (1)
    {
        printf("Third Task is running......\n");
        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}

void SecondTask(void *pvParameters)
{
    while (1)
    {
        printf("Second Task is running......\n");
        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}

void app_main(void)
{
    //LED_INIT();
    xTaskCreate(SecondTask, "secondTask",2048,NULL,4,NULL);
    xTaskCreate(ThirdTask, "ThirdTask",2048,NULL,3,NULL);
	xTaskCreate(myTask,"Bhaumik",2048,NULL,5,NULL);
}
