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
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0xb94e2921, "pm_runtime_forbid" },
	{ 0x9086e58b, "__pm_runtime_suspend" },
	{ 0x4bf11f61, "pm_runtime_allow" },
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0xe2b406c7, "__pm_runtime_set_status" },
	{ 0x281d1f24, "input_set_capability" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x4ce68b52, "input_register_device" },
	{ 0x8b29215e, "input_mt_init_slots" },
	{ 0x332f1f5e, "touchscreen_parse_properties" },
	{ 0x49df2111, "input_set_abs_params" },
	{ 0xda9d1e18, "devm_input_allocate_device" },
	{ 0xf36d80ec, "device_property_present" },
	{ 0xfad9bcc5, "devm_gpiod_get_optional" },
	{ 0x5073913b, "devm_add_action" },
	{ 0xe18226cc, "regulator_bulk_enable" },
	{ 0xfe49f445, "devm_regulator_bulk_get" },
	{ 0x64264946, "device_property_read_string" },
	{ 0xedb4b219, "device_property_read_u32_array" },
	{ 0x754d539c, "strlen" },
	{ 0x11089ac7, "_ctype" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2f81b10a, "acpi_match_device" },
	{ 0xe7792155, "is_acpi_device_node" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x8cb0c5, "regulator_bulk_disable" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x9b53b2d5, "input_mt_sync_frame" },
	{ 0x466e2fb6, "input_mt_report_slot_state" },
	{ 0xf8c679e2, "input_event" },
	{ 0xc85b1578, "input_mt_assign_slots" },
	{ 0xcf9b558d, "touchscreen_set_mt_pos" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x5416f29f, "i2c_smbus_read_i2c_block_data" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x9fe09916, "release_firmware" },
	{ 0xbbb14b01, "i2c_smbus_write_i2c_block_data" },
	{ 0x9601035f, "request_firmware" },
	{ 0x12a38747, "usleep_range" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xd24b247, "i2c_smbus_write_byte_data" },
	{ 0xf9a482f9, "msleep" },
	{ 0x43764038, "gpiod_set_value_cansleep" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:GSL1680:*");
MODULE_ALIAS("acpi*:GSL1688:*");
MODULE_ALIAS("acpi*:GSL3670:*");
MODULE_ALIAS("acpi*:GSL3675:*");
MODULE_ALIAS("acpi*:GSL3692:*");
MODULE_ALIAS("acpi*:MSSL1680:*");
MODULE_ALIAS("acpi*:MSSL0001:*");
MODULE_ALIAS("acpi*:MSSL0002:*");
MODULE_ALIAS("acpi*:MSSL0017:*");
MODULE_ALIAS("i2c:gsl1680");
MODULE_ALIAS("i2c:gsl1688");
MODULE_ALIAS("i2c:gsl3670");
MODULE_ALIAS("i2c:gsl3675");
MODULE_ALIAS("i2c:gsl3692");
MODULE_ALIAS("i2c:mssl1680");

MODULE_INFO(srcversion, "0948671F35D12695DE9EBA9");
