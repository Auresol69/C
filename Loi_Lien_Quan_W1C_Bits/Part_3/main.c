#include <stdio.h>

#define MOD_SCMI_BASE_COMMAND_COUNT 2
#define MOD_SCMI_PROTOCOL_VERSION 0
#define MOD_SCMI_PROTOCOL_ATTRIBUTES 1

int main(void)
{
    unsigned int Array1[MOD_SCMI_BASE_COMMAND_COUNT] = {1, 2};
    unsigned int Array2[MOD_SCMI_BASE_COMMAND_COUNT] = {[MOD_SCMI_PROTOCOL_ATTRIBUTES] = 1, [MOD_SCMI_PROTOCOL_VERSION] = 2};

    printf("Array1: %d, %d\n", Array1[0], Array1[1]);
    printf("Array2: %d, %d\n", Array2[0], Array2[1]);

    return 0U;
}