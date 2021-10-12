#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x77733870, "skb_queue_head" },
	{ 0x92669cb6, "hci_recv_diag" },
	{ 0xdc6699cb, "acpi_dev_free_resource_list" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x50877b9, "dmi_first_match" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9f9e6624, "regulator_set_voltage" },
	{ 0x815588a6, "clk_enable" },
	{ 0xe33370d4, "debugfs_create_dir" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0x924d91a2, "debugfs_create_u8" },
	{ 0x399818dd, "__hci_cmd_sync" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x41cadb41, "btintel_enter_mfg" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x4c338969, "__pm_runtime_use_autosuspend" },
	{ 0x214e4265, "bt_warn" },
	{ 0x7b96f80a, "qca_set_bdaddr" },
	{ 0xb194e058, "hci_register_dev" },
	{ 0x9086e58b, "__pm_runtime_suspend" },
	{ 0x41eb1577, "qca_set_bdaddr_rome" },
	{ 0x8d338fac, "regulator_disable" },
	{ 0x7729a415, "btbcm_patchram" },
	{ 0xb1031ba5, "acpi_dev_get_property" },
	{ 0xa39e6024, "btbcm_check_bdaddr" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x231de7d, "hci_reset_dev" },
	{ 0x3ddeb321, "tty_unthrottle" },
	{ 0x88084d02, "btbcm_set_bdaddr" },
	{ 0xb4968ca5, "__percpu_down_read" },
	{ 0x5641485b, "tty_termios_encode_baud_rate" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xa94ba86f, "devm_gpiod_get" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x9aa150ed, "serdev_device_close" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x768561e7, "qca_read_soc_version" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5c883ca1, "hci_recv_frame" },
	{ 0x9ef2743f, "desc_to_gpio" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0x44bae227, "bit_wait_timeout" },
	{ 0xe3fb0df5, "hci_unregister_dev" },
	{ 0xd4f6cdf3, "__hci_cmd_sync_ev" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0xa120d33c, "tty_unregister_ldisc" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x40a09deb, "skb_trim" },
	{ 0x52ba729f, "serdev_device_write_buf" },
	{ 0x131db64a, "system_long_wq" },
	{ 0xa0cd2b9d, "btintel_read_boot_params" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0xfe49f445, "devm_regulator_bulk_get" },
	{ 0xe18226cc, "regulator_bulk_enable" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x718b8b7, "bt_info" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6c0d2ed6, "serdev_device_set_tiocm" },
	{ 0x2f81b10a, "acpi_match_device" },
	{ 0xeed4bd, "debugfs_create_u32" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xeaac1e08, "skb_queue_purge" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x3e742bf5, "qca_uart_setup" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xcc3eff2e, "__serdev_device_driver_register" },
	{ 0x37e8a607, "serdev_device_wait_until_sent" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x3535163c, "__percpu_init_rwsem" },
	{ 0xd03c2dea, "tty_ldisc_flush" },
	{ 0x5b773ede, "btintel_set_event_mask_mfg" },
	{ 0x7b5ce5c3, "baswap" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0x2347eeec, "debugfs_create_u64" },
	{ 0xf21724d8, "n_tty_ioctl_helper" },
	{ 0xd5a7fdb5, "btintel_load_ddc_config" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x1ff6d818, "hci_alloc_dev" },
	{ 0x581cf443, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x64264946, "device_property_read_string" },
	{ 0xb4043948, "acpi_execute_simple_method" },
	{ 0x4071b517, "out_of_line_wait_on_bit_timeout" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x5ac7efb1, "serdev_device_get_tiocm" },
	{ 0x112070bf, "serdev_device_write_flush" },
	{ 0x96a84ada, "devm_clk_put" },
	{ 0x9b553753, "skb_pull" },
	{ 0x6f3bd9ba, "device_init_wakeup" },
	{ 0x1aee8382, "debugfs_create_bool" },
	{ 0xf8c0536e, "device_wakeup_enable" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x4958b4be, "devm_acpi_dev_add_driver_gpios" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x67481332, "regulator_set_load" },
	{ 0x320cbc36, "percpu_up_write" },
	{ 0x9975dc22, "acpi_get_handle" },
	{ 0xaf7c85d8, "device_wakeup_disable" },
	{ 0x99f018c4, "nvmem_cell_read" },
	{ 0x1c8f4c84, "module_put" },
	{ 0xa887171f, "skb_queue_tail" },
	{ 0x8b149c36, "clk_is_match" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xedb4b219, "device_property_read_u32_array" },
	{ 0x8cb0c5, "regulator_bulk_disable" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0x33e67919, "btintel_set_diag" },
	{ 0x2ce05240, "btintel_exit_mfg" },
	{ 0x12a38747, "usleep_range" },
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0xdd11b393, "tty_driver_flush_buffer" },
	{ 0xf652a497, "devm_free_irq" },
	{ 0xfb0c6b14, "put_device" },
	{ 0x770792cc, "btrtl_get_uart_settings" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x7b38252c, "device_reprobe" },
	{ 0xaf78f260, "btrtl_free" },
	{ 0x9d24b9dc, "acpi_dev_get_resources" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x85540ebc, "nvmem_cell_put" },
	{ 0xe2b406c7, "__pm_runtime_set_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5c436800, "devm_clk_get" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x6f232f03, "serdev_device_set_parity" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4358249a, "btintel_set_bdaddr" },
	{ 0x3750a460, "get_device" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x6b347276, "__module_get" },
	{ 0xfad9bcc5, "devm_gpiod_get_optional" },
	{ 0x74f94141, "btintel_version_info" },
	{ 0x556cca46, "x86_apple_machine" },
	{ 0x66c61188, "serdev_device_open" },
	{ 0x38e075e5, "qca_send_pre_shutdown_cmd" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d6bc8d0, "btintel_read_version" },
	{ 0xbbee1d2a, "__percpu_up_read" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa9cff0a9, "gpiod_to_irq" },
	{ 0x772c75ce, "btrtl_initialize" },
	{ 0x9ca264f1, "serdev_device_set_flow_control" },
	{ 0x4eae26df, "btbcm_initialize" },
	{ 0xfd5f39bb, "btintel_download_firmware" },
	{ 0x9601035f, "request_firmware" },
	{ 0x43764038, "gpiod_set_value_cansleep" },
	{ 0xa7a05aea, "nvmem_cell_get" },
	{ 0x8aeb5a46, "btintel_send_intel_reset" },
	{ 0x1f9bb33f, "pm_runtime_set_autosuspend_delay" },
	{ 0xc6fa2f0f, "skb_dequeue" },
	{ 0xce6e59e1, "btrtl_download_firmware" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1a56efe7, "btbcm_finalize" },
	{ 0x62b47781, "btintel_check_bdaddr" },
	{ 0x1b9d3c81, "platform_get_irq" },
	{ 0x7fe4af54, "hci_free_dev" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x92af78dd, "serdev_device_set_baudrate" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xdd9a0b52, "tty_register_ldisc" },
	{ 0xaa29ef71, "gpiod_set_value" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x81899ece, "percpu_down_write" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x60c2ccfe, "device_set_wakeup_capable" },
	{ 0xe7792155, "is_acpi_device_node" },
	{ 0x9fe09916, "release_firmware" },
	{ 0xc0877d2b, "regulator_enable" },
	{ 0x74e82f5b, "tty_set_termios" },
	{ 0xd8b6c9, "percpu_free_rwsem" },
};

MODULE_INFO(depends, "bluetooth,btintel,btqca,btbcm,btrtl");

MODULE_ALIAS("acpi*:BCM2E00:*");
MODULE_ALIAS("acpi*:BCM2E01:*");
MODULE_ALIAS("acpi*:BCM2E02:*");
MODULE_ALIAS("acpi*:BCM2E03:*");
MODULE_ALIAS("acpi*:BCM2E04:*");
MODULE_ALIAS("acpi*:BCM2E05:*");
MODULE_ALIAS("acpi*:BCM2E06:*");
MODULE_ALIAS("acpi*:BCM2E07:*");
MODULE_ALIAS("acpi*:BCM2E08:*");
MODULE_ALIAS("acpi*:BCM2E09:*");
MODULE_ALIAS("acpi*:BCM2E0A:*");
MODULE_ALIAS("acpi*:BCM2E0B:*");
MODULE_ALIAS("acpi*:BCM2E0C:*");
MODULE_ALIAS("acpi*:BCM2E0D:*");
MODULE_ALIAS("acpi*:BCM2E0E:*");
MODULE_ALIAS("acpi*:BCM2E0F:*");
MODULE_ALIAS("acpi*:BCM2E10:*");
MODULE_ALIAS("acpi*:BCM2E11:*");
MODULE_ALIAS("acpi*:BCM2E12:*");
MODULE_ALIAS("acpi*:BCM2E13:*");
MODULE_ALIAS("acpi*:BCM2E14:*");
MODULE_ALIAS("acpi*:BCM2E15:*");
MODULE_ALIAS("acpi*:BCM2E16:*");
MODULE_ALIAS("acpi*:BCM2E17:*");
MODULE_ALIAS("acpi*:BCM2E18:*");
MODULE_ALIAS("acpi*:BCM2E19:*");
MODULE_ALIAS("acpi*:BCM2E1A:*");
MODULE_ALIAS("acpi*:BCM2E1B:*");
MODULE_ALIAS("acpi*:BCM2E1C:*");
MODULE_ALIAS("acpi*:BCM2E1D:*");
MODULE_ALIAS("acpi*:BCM2E1F:*");
MODULE_ALIAS("acpi*:BCM2E20:*");
MODULE_ALIAS("acpi*:BCM2E21:*");
MODULE_ALIAS("acpi*:BCM2E22:*");
MODULE_ALIAS("acpi*:BCM2E23:*");
MODULE_ALIAS("acpi*:BCM2E24:*");
MODULE_ALIAS("acpi*:BCM2E25:*");
MODULE_ALIAS("acpi*:BCM2E26:*");
MODULE_ALIAS("acpi*:BCM2E27:*");
MODULE_ALIAS("acpi*:BCM2E28:*");
MODULE_ALIAS("acpi*:BCM2E29:*");
MODULE_ALIAS("acpi*:BCM2E2A:*");
MODULE_ALIAS("acpi*:BCM2E2B:*");
MODULE_ALIAS("acpi*:BCM2E2C:*");
MODULE_ALIAS("acpi*:BCM2E2D:*");
MODULE_ALIAS("acpi*:BCM2E2E:*");
MODULE_ALIAS("acpi*:BCM2E2F:*");
MODULE_ALIAS("acpi*:BCM2E30:*");
MODULE_ALIAS("acpi*:BCM2E31:*");
MODULE_ALIAS("acpi*:BCM2E32:*");
MODULE_ALIAS("acpi*:BCM2E33:*");
MODULE_ALIAS("acpi*:BCM2E34:*");
MODULE_ALIAS("acpi*:BCM2E35:*");
MODULE_ALIAS("acpi*:BCM2E36:*");
MODULE_ALIAS("acpi*:BCM2E37:*");
MODULE_ALIAS("acpi*:BCM2E38:*");
MODULE_ALIAS("acpi*:BCM2E39:*");
MODULE_ALIAS("acpi*:BCM2E3A:*");
MODULE_ALIAS("acpi*:BCM2E3B:*");
MODULE_ALIAS("acpi*:BCM2E3C:*");
MODULE_ALIAS("acpi*:BCM2E3D:*");
MODULE_ALIAS("acpi*:BCM2E3E:*");
MODULE_ALIAS("acpi*:BCM2E3F:*");
MODULE_ALIAS("acpi*:BCM2E40:*");
MODULE_ALIAS("acpi*:BCM2E41:*");
MODULE_ALIAS("acpi*:BCM2E42:*");
MODULE_ALIAS("acpi*:BCM2E43:*");
MODULE_ALIAS("acpi*:BCM2E44:*");
MODULE_ALIAS("acpi*:BCM2E45:*");
MODULE_ALIAS("acpi*:BCM2E46:*");
MODULE_ALIAS("acpi*:BCM2E47:*");
MODULE_ALIAS("acpi*:BCM2E48:*");
MODULE_ALIAS("acpi*:BCM2E49:*");
MODULE_ALIAS("acpi*:BCM2E4A:*");
MODULE_ALIAS("acpi*:BCM2E4B:*");
MODULE_ALIAS("acpi*:BCM2E4C:*");
MODULE_ALIAS("acpi*:BCM2E4D:*");
MODULE_ALIAS("acpi*:BCM2E4E:*");
MODULE_ALIAS("acpi*:BCM2E4F:*");
MODULE_ALIAS("acpi*:BCM2E50:*");
MODULE_ALIAS("acpi*:BCM2E51:*");
MODULE_ALIAS("acpi*:BCM2E52:*");
MODULE_ALIAS("acpi*:BCM2E53:*");
MODULE_ALIAS("acpi*:BCM2E54:*");
MODULE_ALIAS("acpi*:BCM2E55:*");
MODULE_ALIAS("acpi*:BCM2E56:*");
MODULE_ALIAS("acpi*:BCM2E57:*");
MODULE_ALIAS("acpi*:BCM2E58:*");
MODULE_ALIAS("acpi*:BCM2E59:*");
MODULE_ALIAS("acpi*:BCM2E5A:*");
MODULE_ALIAS("acpi*:BCM2E5B:*");
MODULE_ALIAS("acpi*:BCM2E5C:*");
MODULE_ALIAS("acpi*:BCM2E5D:*");
MODULE_ALIAS("acpi*:BCM2E5E:*");
MODULE_ALIAS("acpi*:BCM2E5F:*");
MODULE_ALIAS("acpi*:BCM2E60:*");
MODULE_ALIAS("acpi*:BCM2E61:*");
MODULE_ALIAS("acpi*:BCM2E62:*");
MODULE_ALIAS("acpi*:BCM2E63:*");
MODULE_ALIAS("acpi*:BCM2E64:*");
MODULE_ALIAS("acpi*:BCM2E65:*");
MODULE_ALIAS("acpi*:BCM2E66:*");
MODULE_ALIAS("acpi*:BCM2E67:*");
MODULE_ALIAS("acpi*:BCM2E68:*");
MODULE_ALIAS("acpi*:BCM2E69:*");
MODULE_ALIAS("acpi*:BCM2E6B:*");
MODULE_ALIAS("acpi*:BCM2E6D:*");
MODULE_ALIAS("acpi*:BCM2E6E:*");
MODULE_ALIAS("acpi*:BCM2E6F:*");
MODULE_ALIAS("acpi*:BCM2E70:*");
MODULE_ALIAS("acpi*:BCM2E71:*");
MODULE_ALIAS("acpi*:BCM2E72:*");
MODULE_ALIAS("acpi*:BCM2E73:*");
MODULE_ALIAS("acpi*:BCM2E74:*");
MODULE_ALIAS("acpi*:BCM2E75:*");
MODULE_ALIAS("acpi*:BCM2E76:*");
MODULE_ALIAS("acpi*:BCM2E77:*");
MODULE_ALIAS("acpi*:BCM2E78:*");
MODULE_ALIAS("acpi*:BCM2E79:*");
MODULE_ALIAS("acpi*:BCM2E7A:*");
MODULE_ALIAS("acpi*:BCM2E7B:*");
MODULE_ALIAS("acpi*:BCM2E7C:*");
MODULE_ALIAS("acpi*:BCM2E7D:*");
MODULE_ALIAS("acpi*:BCM2E7E:*");
MODULE_ALIAS("acpi*:BCM2E7F:*");
MODULE_ALIAS("acpi*:BCM2E80:*");
MODULE_ALIAS("acpi*:BCM2E81:*");
MODULE_ALIAS("acpi*:BCM2E82:*");
MODULE_ALIAS("acpi*:BCM2E83:*");
MODULE_ALIAS("acpi*:BCM2E84:*");
MODULE_ALIAS("acpi*:BCM2E85:*");
MODULE_ALIAS("acpi*:BCM2E86:*");
MODULE_ALIAS("acpi*:BCM2E87:*");
MODULE_ALIAS("acpi*:BCM2E88:*");
MODULE_ALIAS("acpi*:BCM2E89:*");
MODULE_ALIAS("acpi*:BCM2E8A:*");
MODULE_ALIAS("acpi*:BCM2E8B:*");
MODULE_ALIAS("acpi*:BCM2E8C:*");
MODULE_ALIAS("acpi*:BCM2E8D:*");
MODULE_ALIAS("acpi*:BCM2E8E:*");
MODULE_ALIAS("acpi*:BCM2E90:*");
MODULE_ALIAS("acpi*:BCM2E92:*");
MODULE_ALIAS("acpi*:BCM2E93:*");
MODULE_ALIAS("acpi*:BCM2E94:*");
MODULE_ALIAS("acpi*:BCM2E95:*");
MODULE_ALIAS("acpi*:BCM2E96:*");
MODULE_ALIAS("acpi*:BCM2E97:*");
MODULE_ALIAS("acpi*:BCM2E98:*");
MODULE_ALIAS("acpi*:BCM2E99:*");
MODULE_ALIAS("acpi*:BCM2E9A:*");
MODULE_ALIAS("acpi*:BCM2E9B:*");
MODULE_ALIAS("acpi*:BCM2E9C:*");
MODULE_ALIAS("acpi*:BCM2E9D:*");
MODULE_ALIAS("acpi*:BCM2EA0:*");
MODULE_ALIAS("acpi*:BCM2EA1:*");
MODULE_ALIAS("acpi*:BCM2EA2:*");
MODULE_ALIAS("acpi*:BCM2EA3:*");
MODULE_ALIAS("acpi*:BCM2EA4:*");
MODULE_ALIAS("acpi*:BCM2EA5:*");
MODULE_ALIAS("acpi*:BCM2EA6:*");
MODULE_ALIAS("acpi*:BCM2EA7:*");
MODULE_ALIAS("acpi*:BCM2EA8:*");
MODULE_ALIAS("acpi*:BCM2EA9:*");
MODULE_ALIAS("acpi*:BCM2EAA:*");
MODULE_ALIAS("acpi*:BCM2EAB:*");
MODULE_ALIAS("acpi*:BCM2EAC:*");
MODULE_ALIAS("acpi*:INT33E1:*");
MODULE_ALIAS("acpi*:OBDA8723:*");
MODULE_ALIAS("of:N*T*Cti,cc2560");
MODULE_ALIAS("of:N*T*Cti,cc2560C*");
MODULE_ALIAS("of:N*T*Cti,wl1271-st");
MODULE_ALIAS("of:N*T*Cti,wl1271-stC*");
MODULE_ALIAS("of:N*T*Cti,wl1273-st");
MODULE_ALIAS("of:N*T*Cti,wl1273-stC*");
MODULE_ALIAS("of:N*T*Cti,wl1281-st");
MODULE_ALIAS("of:N*T*Cti,wl1281-stC*");
MODULE_ALIAS("of:N*T*Cti,wl1283-st");
MODULE_ALIAS("of:N*T*Cti,wl1283-stC*");
MODULE_ALIAS("of:N*T*Cti,wl1285-st");
MODULE_ALIAS("of:N*T*Cti,wl1285-stC*");
MODULE_ALIAS("of:N*T*Cti,wl1801-st");
MODULE_ALIAS("of:N*T*Cti,wl1801-stC*");
MODULE_ALIAS("of:N*T*Cti,wl1805-st");
MODULE_ALIAS("of:N*T*Cti,wl1805-stC*");
MODULE_ALIAS("of:N*T*Cti,wl1807-st");
MODULE_ALIAS("of:N*T*Cti,wl1807-stC*");
MODULE_ALIAS("of:N*T*Cti,wl1831-st");
MODULE_ALIAS("of:N*T*Cti,wl1831-stC*");
MODULE_ALIAS("of:N*T*Cti,wl1835-st");
MODULE_ALIAS("of:N*T*Cti,wl1835-stC*");
MODULE_ALIAS("of:N*T*Cti,wl1837-st");
MODULE_ALIAS("of:N*T*Cti,wl1837-stC*");
MODULE_ALIAS("of:N*T*Cqcom,qca6174-bt");
MODULE_ALIAS("of:N*T*Cqcom,qca6174-btC*");
MODULE_ALIAS("of:N*T*Cqcom,wcn3990-bt");
MODULE_ALIAS("of:N*T*Cqcom,wcn3990-btC*");
MODULE_ALIAS("of:N*T*Cqcom,wcn3998-bt");
MODULE_ALIAS("of:N*T*Cqcom,wcn3998-btC*");

MODULE_INFO(srcversion, "7C654C917C68F620555E80A");
