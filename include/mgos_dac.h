#pragma once

#include <stdbool.h>

#if CS_PLATFORM == CS_P_ESP32
#include "esp32/esp32_dac.h"
#endif


#ifdef __cplusplus
extern "C" {
#endif



/* Configure and enable DAC */
bool mgos_dac_output_enable(int pin);


int mgos_dac_output_voltage(int pin, int dac_value);

bool mgos_mongoose_libs_dac_init(void);

bool mgos_dac_output_disable(int pin);

#ifdef __cplusplus
}
#endif