let DAC = {
    enable = ffi('int mgos_dac_output_enable(int)'),
    disable = ffi('int mgos_dac_output_disable(int)'),
    voltage = ffi('int mgos_dac_output_voltage(int, int)'),
};