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
	{ 0x12a38747, "usleep_range" },
	{ 0xd72694ff, "gpiod_get_value" },
	{ 0x9b53b2d5, "input_mt_sync_frame" },
	{ 0x466e2fb6, "input_mt_report_slot_state" },
	{ 0xf8c679e2, "input_event" },
	{ 0xc85b1578, "input_mt_assign_slots" },
	{ 0xcf9b558d, "touchscreen_set_mt_pos" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x5416f29f, "i2c_smbus_read_i2c_block_data" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4ce68b52, "input_register_device" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0xfad9bcc5, "devm_gpiod_get_optional" },
	{ 0xc81c5573, "gpiod_set_consumer_name" },
	{ 0xa94ba86f, "devm_gpiod_get" },
	{ 0x5073913b, "devm_add_action" },
	{ 0x2a4f8997, "devm_regulator_get" },
	{ 0x8b29215e, "input_mt_init_slots" },
	{ 0x332f1f5e, "touchscreen_parse_properties" },
	{ 0x49df2111, "input_set_abs_params" },
	{ 0xedb4b219, "device_property_read_u32_array" },
	{ 0xda9d1e18, "devm_input_allocate_device" },
	{ 0xf36d80ec, "device_property_present" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc0877d2b, "regulator_enable" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd24b247, "i2c_smbus_write_byte_data" },
	{ 0xaa29ef71, "gpiod_set_value" },
	{ 0x8d338fac, "regulator_disable" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:bu21013_tp");

MODULE_INFO(srcversion, "B7F0E14B6767527AF6B965E");
