
#include <stdio.h>
#include <stddef.h>

int main(void)
{
    const float readings[] = {
        22.5f,
        24.0f,
        28.5f,
        26.0f
    };

    const size_t count =
        sizeof(readings) / sizeof(readings[0]);

    float min_temp = readings[0];
    float max_temp = readings[0];
    float sum = 0.0f;

    for (size_t i = 0; i < count; i++)
    {
        if (readings[i] < min_temp)
        {
            min_temp = readings[i];
        }

        if (readings[i] > max_temp)
        {
            max_temp = readings[i];
        }

        sum += readings[i];
    }

    printf("Sensor readings: %zu\n", count);
    printf("Minimum: %.1f C\n", min_temp);
    printf("Maximum: %.1f C\n", max_temp);
    printf("Average: %.1f C\n", sum / (float)count);

    return 0;
}
