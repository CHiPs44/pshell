// clang-format off
    {"acosf", 1 | (1 << 5) | (1 << 10), math_defines, __wrap_acosf, 1},
    {"acoshf", 1 | (1 << 5) | (1 << 10), math_defines, __wrap_acoshf, 1},
    {"adc_fifo_drain", 0, adc_defines, adc_fifo_drain, 0},
    {"adc_fifo_get", 0, adc_defines, adc_fifo_get, 0},
    {"adc_fifo_get_blocking", 0, adc_defines, adc_fifo_get_blocking, 0},
    {"adc_fifo_get_level", 0, adc_defines, adc_fifo_get_level, 0},
    {"adc_fifo_is_empty", 0, adc_defines, adc_fifo_is_empty, 0},
    {"adc_fifo_setup", 5, adc_defines, adc_fifo_setup, 0},
    {"adc_get_selected_input", 0, adc_defines, adc_get_selected_input, 0},
    {"adc_gpio_init", 1, adc_defines, adc_gpio_init, 0},
    {"adc_init", 0, adc_defines, adc_init, 0},
    {"adc_irq_set_enabled", 1, adc_defines, adc_irq_set_enabled, 0},
    {"adc_read", 0, adc_defines, adc_read, 0}, {"adc_run", 1, adc_defines, adc_run, 0},
    {"adc_select_input", 1, adc_defines, adc_select_input, 0},
    {"adc_set_clkdiv", 1, adc_defines, adc_set_clkdiv, 0},
    {"adc_set_round_robin", 1, adc_defines, adc_set_round_robin, 0},
    {"adc_set_temp_sensor_enabled", 1, adc_defines, adc_set_temp_sensor_enabled, 0},
    {"asinf", 1 | (1 << 5) | (1 << 10), math_defines, __wrap_asinf, 1},
    {"asinhf", 1 | (1 << 5) | (1 << 10), math_defines, __wrap_asinhf, 1},
    {"atan2f", 2 | (2 << 5) | (0b11 << 10), math_defines, atan2f, 1},
    {"atanf", 1 | (1 << 5) | (1 << 10), math_defines, __wrap_atanf, 1},
    {"atanhf", 1 | (1 << 5) | (1 << 10), math_defines, __wrap_atanhf, 1},
    {"atoi", 1, stdlib_defines, atoi, 0},
    {"calloc", 2, stdlib_defines, wrap_calloc, 0},
    {"clock_configure", 5, clk_defines, clock_configure, 0},
    {"clock_configure_gpin", 4, clk_defines, clock_configure_gpin, 0},
    {"clock_get_hz", 1, clk_defines, clock_get_hz, 0},
    {"clock_gpio_init", 3, clk_defines, clock_gpio_init, 0},
    {"clock_gpio_init_int_frac", 4, clk_defines, clock_gpio_init_int_frac, 0},
    {"clock_set_reported_hz", 2, clk_defines, clock_set_reported_hz, 0},
    {"clock_stop", 1, clk_defines, clock_stop, 0},
    {"clocks_enable_resus", 1, clk_defines, clocks_enable_resus, 0},
    {"close", 1, stdio_defines, wrap_close, 0},
    {"cosf", 1 | (1 << 5) | (1 << 10), math_defines, __wrap_cosf, 1},
    {"coshf", 1 | (1 << 5) | (1 << 10), math_defines, __wrap_coshf, 1},
    {"exit", 1, stdlib_defines, cc_exit, 0},
    {"fmodf", 2 | (2 << 5) | (0b11 << 10), math_defines, fmodf, 1},
    {"free", 1, stdlib_defines, wrap_free, 0},
    {"frequency_count_khz", 1, clk_defines, frequency_count_khz, 0},
    {"frequency_count_mhz", 1, clk_defines, frequency_count_mhz, 0},
    {"get_rand_32", 0, stdlib_defines, get_rand_32, 0},
    {"getchar", 0, stdio_defines, getchar, 0},
    {"getchar_timeout_us", 1, stdio_defines, getchar_timeout_us, 0},
    {"gpio_acknowledge_irq", 2, gpio_defines, gpio_acknowledge_irq, 0},
    {"gpio_add_raw_irq_handler", 2, gpio_defines, gpio_add_raw_irq_handler, 0},
    {"gpio_add_raw_irq_handler_masked", 2, gpio_defines, gpio_add_raw_irq_handler_masked, 0},
    {"gpio_add_raw_irq_handler_with_order_priority", 3, gpio_defines, gpio_add_raw_irq_handler_with_order_priority, 0},
    {"gpio_add_raw_irq_handler_with_order_priority_masked", 3, gpio_defines, gpio_add_raw_irq_handler_with_order_priority_masked, 0},
    {"gpio_clr_mask", 1, gpio_defines, gpio_clr_mask, 0},
    {"gpio_deinit", 1, gpio_defines, gpio_deinit, 0},
    {"gpio_disable_pulls", 1, gpio_defines, gpio_disable_pulls, 0},
    {"gpio_get", 1, gpio_defines, gpio_get, 0},
    {"gpio_get_all", 0, gpio_defines, gpio_get_all, 0},
    {"gpio_get_dir", 1, gpio_defines, gpio_get_dir, 0},
    {"gpio_get_drive_strength", 1, gpio_defines, gpio_get_drive_strength, 0},
    {"gpio_get_function", 1, gpio_defines, gpio_get_function, 0},
    {"gpio_get_irq_event_mask", 1, gpio_defines, gpio_get_irq_event_mask, 0},
    {"gpio_get_out_level", 1, gpio_defines, gpio_get_out_level, 0},
    {"gpio_get_slew_rate", 1, gpio_defines, gpio_get_slew_rate, 0},
    {"gpio_init", 1, gpio_defines, gpio_init, 0},
    {"gpio_init_mask", 1, gpio_defines, gpio_init_mask, 0},
    {"gpio_is_dir_out", 1, gpio_defines, gpio_is_dir_out, 0},
    {"gpio_is_input_hysteresis_enabled", 1, gpio_defines, gpio_is_input_hysteresis_enabled, 0},
    {"gpio_is_pulled_down", 1, gpio_defines, gpio_is_pulled_down, 0},
    {"gpio_is_pulled_up", 1, gpio_defines, gpio_is_pulled_up, 0},
    {"gpio_pull_down", 1, gpio_defines, gpio_pull_down, 0},
    {"gpio_pull_up", 1, gpio_defines, gpio_pull_up, 0},
    {"gpio_put", 2, gpio_defines, gpio_put, 0},
    {"gpio_put_all", 1, gpio_defines, gpio_put_all, 0},
    {"gpio_put_masked", 2, gpio_defines, gpio_put_masked, 0},
    {"gpio_remove_raw_irq_handler", 2, gpio_defines, gpio_remove_raw_irq_handler, 0},
    {"gpio_remove_raw_irq_handler_masked", 2, gpio_defines, gpio_remove_raw_irq_handler_masked, 0},
    {"gpio_set_dir", 2, gpio_defines, gpio_set_dir, 0},
    {"gpio_set_dir_all_bits", 1, gpio_defines, gpio_set_dir_all_bits, 0},
    {"gpio_set_dir_in_masked", 1, gpio_defines, gpio_set_dir_in_masked, 0},
    {"gpio_set_dir_masked", 2, gpio_defines, gpio_set_dir_masked, 0},
    {"gpio_set_dir_out_masked", 1, gpio_defines, gpio_set_dir_out_masked, 0},
    {"gpio_set_dormant_irq_enabled", 3, gpio_defines, gpio_set_dormant_irq_enabled, 0},
    {"gpio_set_drive_strength", 2, gpio_defines, gpio_set_drive_strength, 0},
    {"gpio_set_function", 2, gpio_defines, gpio_set_function, 0},
    {"gpio_set_inover", 2, gpio_defines, gpio_set_inover, 0},
    {"gpio_set_input_enabled", 2, gpio_defines, gpio_set_input_enabled, 0},
    {"gpio_set_input_hysteresis_enabled", 2, gpio_defines, gpio_set_input_hysteresis_enabled, 0},
    {"gpio_set_irq_callback", 1, gpio_defines, gpio_set_irq_callback, 0},
    {"gpio_set_irq_enabled", 3, gpio_defines, gpio_set_irq_enabled, 0},
    {"gpio_set_irq_enabled_with_callback", 4, gpio_defines, gpio_set_irq_enabled_with_callback, 0},
    {"gpio_set_irqover", 2, gpio_defines, gpio_set_irqover, 0},
    {"gpio_set_mask", 1, gpio_defines, gpio_set_mask, 0},
    {"gpio_set_oeover", 2, gpio_defines, gpio_set_oeover, 0},
    {"gpio_set_outover", 2, gpio_defines, gpio_set_outover, 0},
    {"gpio_set_pulls", 3, gpio_defines, gpio_set_pulls, 0},
    {"gpio_set_slew_rate", 2, gpio_defines, gpio_set_slew_rate, 0},
    {"gpio_xor_mask", 1, gpio_defines, gpio_xor_mask, 0},
    {"i2c_deinit", 1, i2c_defines, i2c_deinit, 0},
    {"i2c_get_dreq", 2, i2c_defines, i2c_get_dreq, 0},
    {"i2c_get_hw", 1, i2c_defines, i2c_get_hw, 0},
#if PICO_SDK_VERSION_MAJOR >= 2
    {"i2c_get_index", 1, i2c_defines, i2c_get_index, 0},
#endif
    {"i2c_get_read_available", 1, i2c_defines, i2c_get_read_available, 0},
    {"i2c_get_write_available", 1, i2c_defines, i2c_get_write_available, 0},
#if PICO_SDK_VERSION_MAJOR < 2
    {"i2c_hw_index", 1, i2c_defines, i2c_hw_index, 0},
#endif
    {"i2c_init", 2, i2c_defines, i2c_init, 0},
    {"i2c_read_blocking", 5, i2c_defines, i2c_read_blocking, 0},
    {"i2c_read_raw_blocking", 3, i2c_defines, i2c_read_raw_blocking, 0},
    {"i2c_read_timeout_per_char_us", 6, i2c_defines, i2c_read_timeout_per_char_us, 0},
    {"i2c_read_timeout_us", 6, i2c_defines, i2c_read_timeout_us, 0},
    {"i2c_set_baudrate", 2, i2c_defines, i2c_set_baudrate, 0},
    {"i2c_set_slave_mode", 3, i2c_defines, i2c_set_slave_mode, 0},
    {"i2c_write_blocking", 5, i2c_defines, i2c_write_blocking, 0},
    {"i2c_write_raw_blocking", 3, i2c_defines, i2c_write_raw_blocking, 0},
    {"i2c_write_timeout_per_char_us", 6, i2c_defines, i2c_write_timeout_per_char_us, 0},
    {"i2c_write_timeout_us", 6, i2c_defines, i2c_write_timeout_us, 0},
    {"irq_add_shared_handler", 3, irq_defines, irq_add_shared_handler, 0},
    {"irq_clear", 1, irq_defines, irq_clear, 0},
    {"irq_get_exclusive_handler", 1, irq_defines, irq_get_exclusive_handler, 0},
    {"irq_get_priority", 1, irq_defines, irq_get_priority, 0},
    {"irq_get_vtable_handler", 1, irq_defines, irq_get_vtable_handler, 0},
    {"irq_has_shared_handler", 1, irq_defines, irq_has_shared_handler, 0},
    {"irq_init_priorities", 0, irq_defines, irq_init_priorities, 0},
    {"irq_is_enabled", 1, irq_defines, irq_is_enabled, 0},
    {"irq_remove_handler", 2, irq_defines, irq_remove_handler, 0},
    {"irq_set_enabled", 2, irq_defines, irq_set_enabled, 0},
    {"irq_set_exclusive_handler", 2, irq_defines, irq_set_exclusive_handler, 0},
    {"irq_set_mask_enabled", 2, irq_defines, irq_set_mask_enabled, 0},
    {"irq_set_pending", 1, irq_defines, irq_set_pending, 0},
    {"irq_set_priority", 2, irq_defines, irq_set_priority, 0},
    {"log10f", 1 | (1 << 5) | (1 << 10), math_defines, log10f, 1},
    {"logf", 1 | (1 << 5) | (1 << 10), math_defines, logf, 1},
    {"lseek", 3, stdio_defines, wrap_lseek, 0},
    {"malloc", 1, stdlib_defines, wrap_malloc, 0},
    {"memcmp", 3, string_defines, memcmp, 0},
    {"memcpy", 3, string_defines, memcpy, 0},
    {"memset", 3, string_defines, memset, 0},
    {"open", 2, stdio_defines, wrap_open, 0},
    {"opendir", 1, stdio_defines, wrap_opendir, 0},
    {"popcount", 1, stdlib_defines, wrap_popcount, 0},
    {"powf", 2 | (2 << 5) | (0b11 << 10), math_defines, powf, 1},
    {"printf", 1, stdio_defines, x_printf, 0},
    {"putchar", 1, stdio_defines, putchar, 0},
    {"pwm_advance_count", 1, pwm_defines, pwm_advance_count, 0},
    {"pwm_clear_irq", 1, pwm_defines, pwm_clear_irq, 0},
    {"pwm_config_set_clkdiv", 2 | (1 << 5) | (0b01 << 10), pwm_defines, pwm_config_set_clkdiv, 0},
    {"pwm_config_set_clkdiv_int", 2, pwm_defines, pwm_config_set_clkdiv_int, 0},
    {"pwm_config_set_clkdiv_int_frac", 3, pwm_defines, pwm_config_set_clkdiv_int_frac, 0},
    {"pwm_config_set_clkdiv_mode", 2, pwm_defines, pwm_config_set_clkdiv_mode, 0},
    {"pwm_config_set_output_polarity", 3, pwm_defines, pwm_config_set_output_polarity, 0},
    {"pwm_config_set_phase_correct", 2, pwm_defines, pwm_config_set_phase_correct, 0},
    {"pwm_config_set_wrap", 2, pwm_defines, pwm_config_set_wrap, 0},
    {"pwm_force_irq", 1, pwm_defines, pwm_force_irq, 0},
    {"pwm_get_counter", 1, pwm_defines, pwm_get_counter, 0},
    {"pwm_get_default_config", 0, pwm_defines, pwm_get_default_config, 0},
    {"pwm_get_dreq", 1, pwm_defines, pwm_get_dreq, 0},
    {"pwm_get_irq_status_mask", 0, pwm_defines, pwm_get_irq_status_mask, 0},
    {"pwm_gpio_to_channel", 1, pwm_defines, pwm_gpio_to_channel, 0},
    {"pwm_gpio_to_slice_num", 1, pwm_defines, pwm_gpio_to_slice_num, 0},
    {"pwm_init", 3, pwm_defines, pwm_init, 0},
    {"pwm_retard_count", 1, pwm_defines, pwm_retard_count, 0},
    {"pwm_set_both_levels", 3, pwm_defines, pwm_set_both_levels, 0},
    {"pwm_set_chan_level", 3, pwm_defines, pwm_set_chan_level, 0},
    {"pwm_set_clkdiv", 2, pwm_defines, pwm_set_clkdiv, 0},
    {"pwm_set_clkdiv_int_frac", 3, pwm_defines, pwm_set_clkdiv_int_frac, 0},
    {"pwm_set_clkdiv_mode", 2, pwm_defines, pwm_set_clkdiv_mode, 0},
    {"pwm_set_counter", 2, pwm_defines, pwm_set_counter, 0},
    {"pwm_set_enabled", 2, pwm_defines, pwm_set_enabled, 0},
    {"pwm_set_gpio_level", 2, pwm_defines, pwm_set_gpio_level, 0},
    {"pwm_set_irq_enabled", 2, pwm_defines, pwm_set_irq_enabled, 0},
    {"pwm_set_irq_mask_enabled", 2, pwm_defines, pwm_set_irq_mask_enabled, 0},
    {"pwm_set_mask_enabled", 1, pwm_defines, pwm_set_mask_enabled, 0},
    {"pwm_set_output_polarity", 3, pwm_defines, pwm_set_output_polarity, 0},
    {"pwm_set_phase_correct", 2, pwm_defines, pwm_set_phase_correct, 0},
    {"pwm_set_wrap", 2, pwm_defines, pwm_set_wrap, 0},
    {"rand", 0, stdlib_defines, rand, 0},
    {"read", 3, stdio_defines, wrap_read, 0},
    {"readdir", 2, stdio_defines, wrap_readdir, 0},
    {"remove", 1, stdio_defines, wrap_remove, 0},
    {"rename", 2, stdio_defines, wrap_rename, 0},
    {"screen_height", 0, stdio_defines, wrap_screen_height, 0},
    {"screen_width", 0, stdio_defines, wrap_screen_width, 0},
    {"sinf", 1 | (1 << 5) | (1 << 10), math_defines, __wrap_sinf, 1},
    {"sinhf", 1 | (1 << 5) | (1 << 10), math_defines, __wrap_sinhf, 1},
    {"sleep_ms", 1, time_defines, sleep_ms, 0},
    {"sleep_us", 1, time_defines, sleep_us, 0},
    {"spi_deinit", 1, spi_defines, spi_deinit, 0},
    {"spi_get_baudrate", 1, spi_defines, spi_get_baudrate, 0},
    {"spi_get_const_hw", 1, spi_defines, spi_get_const_hw, 0},
    {"spi_get_dreq", 2, spi_defines, spi_get_dreq, 0},
    {"spi_get_hw", 1, spi_defines, spi_get_hw, 0},
    {"spi_get_index", 1, spi_defines, spi_get_index, 0},
    {"spi_init", 2, spi_defines, spi_init, 0},
    {"spi_is_busy", 1, spi_defines, spi_is_busy, 0},
    {"spi_is_readable", 1, spi_defines, spi_is_readable, 0},
    {"spi_is_writable", 1, spi_defines, spi_is_writable, 0},
    {"spi_read16_blocking", 4, spi_defines, spi_read16_blocking, 0},
    {"spi_read_blocking", 4, spi_defines, spi_read_blocking, 0},
    {"spi_set_baudrate", 2, spi_defines, spi_set_baudrate, 0},
    {"spi_set_format", 5, spi_defines, spi_set_format, 0},
    {"spi_set_slave", 2, spi_defines, spi_set_slave, 0},
    {"spi_write16_blocking", 3, spi_defines, spi_write16_blocking, 0},
    {"spi_write16_read16_blocking", 4, spi_defines, spi_write16_read16_blocking, 0},
    {"spi_write_blocking", 3, spi_defines, spi_write_blocking, 0},
    {"spi_write_read_blocking", 4, spi_defines, spi_write_read_blocking, 0},
    {"sprintf", 1, stdio_defines, x_sprintf, 0},
#if PICO_RP2040
    {"sqrtf", 1 | (1 << 5) | (1 << 10), math_defines, sqrtf, 1},
#endif
#if PICO_RP2350
    {"sqrtf", 1 | (1 << 5) | (1 << 10), math_defines, 0, 1},
#endif
    {"srand", 1, stdlib_defines, srand, 0},
    {"strcat", 2, string_defines, strcat, 0},
    {"strchr", 2, string_defines, strchr, 0},
    {"strcmp", 2, string_defines, strcmp, 0},
    {"strcpy", 2, string_defines, strcpy, 0},
    {"strdup", 1, string_defines, x_strdup, 0},
    {"strlen", 1, string_defines, strlen, 0},
    {"strncat", 3, string_defines, strncat, 0},
    {"strncmp", 3, string_defines, strncmp, 0},
    {"strncpy", 3, string_defines, strncpy, 0},
    {"strrchr", 2, string_defines, strrchr, 0},
    {"strtol", 3, string_defines, strtol, 0},
    {"tanf", 1 | (1 << 5) | (1 << 10), math_defines, __wrap_tanf, 1},
    {"tanhf", 1 | (1 << 5) | (1 << 10), math_defines, __wrap_tanhf, 1},
    {"time_us_32", 0, time_defines, time_us_32, 0},
    {"uart_default_tx_wait_blocking", 0, uart_defines,uart_default_tx_wait_blocking, 0},
    {"uart_deinit", 1, uart_defines, uart_deinit, 0},
    {"uart_get_dreq_num", 2, uart_defines, uart_get_dreq_num, 0},
    {"uart_get_hw", 1, uart_defines, uart_get_hw, 0},
    {"uart_get_index", 1, uart_defines, uart_get_index, 0},
    {"uart_get_instance", 1, uart_defines, uart_get_instance, 0},
    {"uart_get_reset_num", 1, uart_defines, uart_get_reset_num, 0}, 
    {"uart_getc", 1, uart_defines, uart_getc, 0},
    {"uart_init",  2, uart_defines,uart_init, 0},
    {"uart_is_enabled", 1, uart_defines, uart_is_enabled, 0},
    {"uart_is_readable", 1, uart_defines, uart_is_readable, 0},
    {"uart_is_readable_within_us", 2, uart_defines, uart_is_readable_within_us, 0},
    {"uart_is_writable", 1, uart_defines, uart_is_writable, 0},
    {"uart_putc", 2, uart_defines, uart_putc, 0},
    {"uart_putc_raw", 2, uart_defines, uart_putc_raw, 0},
    {"uart_puts", 2, uart_defines, uart_puts, 0},
    {"uart_read_blocking", 3, uart_defines, uart_read_blocking, 0},
    {"uart_set_baudrate", 2,  uart_defines, uart_set_baudrate, 0},
    {"uart_set_break", 2, uart_defines, uart_set_break, 0},
    {"uart_set_fifo_enabled", 2,  uart_defines, uart_set_fifo_enabled, 0},
    {"uart_set_format", 3, uart_defines, uart_set_format, 0},
    {"uart_set_hw_flow", 3, uart_defines, uart_set_hw_flow, 0},
    {"uart_set_irqs_enabled", 3, uart_defines, uart_set_irqs_enabled, 0},
    {"uart_set_translate_crlf", 2, uart_defines, uart_set_translate_crlf, 0},
    {"uart_tx_wait_blocking", 1, uart_defines, uart_tx_wait_blocking, 0},
    {"uart_write_blocking", 3, uart_defines, uart_write_blocking, 0},
    {"user_irq_claim", 1, irq_defines, user_irq_claim, 0},
    {"user_irq_claim_unused", 1, irq_defines, user_irq_claim_unused, 0},
    {"user_irq_is_claimed", 1, irq_defines, user_irq_is_claimed, 0},
    {"user_irq_unclaim", 1, irq_defines, user_irq_unclaim, 0},
    {"wfi", 0, sync_defines, wrap_wfi, 0},
    {"write", 3, stdio_defines, wrap_write, 0}
// clang-format on
