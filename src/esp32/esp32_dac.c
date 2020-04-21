/*
 * Copyright (c) 2014-2018 Cesanta Software Limited
 * All rights reserved
 *
 * Licensed under the Apache License, Version 2.0 (the ""License"");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an ""AS IS"" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "esp32/esp32_dac.h"

#include <stdbool.h>
#include "driver/gpio.h"
#include "driver/dac.h"
#include "esp_adc_cal.h"

#include "common/platform.h"

#include "mgos_dac.h"
#include "mgos_sys_config.h"


bool mgos_dac_output_enable(int pin){
  return dac_output_enable(pin);
}

int mgos_dac_output_voltage(int pin, int dac_value){
    return dac_output_voltage(pin, dac_value);
}

bool mgos_mongoose_libs_dac_init(void){
  return true;
}

bool mgos_dac_output_disable(int pin){
    return dac_output_disable(pin);
}