let DAC = {
    // ## **`DAC.enable(pin)`**
    // Configure and enable DAC for a `pin`,
    // return 1 if success, 0 otherwise
    enable:  ffi('int mgos_dac_output_enable(int)'),
    disable: ffi('int mgos_dac_output_disable(int)'),
    voltage: ffi('int mgos_dac_output_voltage(int, int)'),
};