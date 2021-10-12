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
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8d338fac, "regulator_disable" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xb80ad490, "i2c_smbus_write_byte" },
	{ 0xd24b247, "i2c_smbus_write_byte_data" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc0877d2b, "regulator_enable" },
	{ 0x12a38747, "usleep_range" },
	{ 0x43764038, "gpiod_set_value_cansleep" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x4ce68b52, "input_register_device" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0x332f1f5e, "touchscreen_parse_properties" },
	{ 0x49df2111, "input_set_abs_params" },
	{ 0x281d1f24, "input_set_capability" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xda9d1e18, "devm_input_allocate_device" },
	{ 0xfad9bcc5, "devm_gpiod_get_optional" },
	{ 0x2a4f8997, "devm_regulator_get" },
	{ 0xedb4b219, "device_property_read_u32_array" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf8c679e2, "input_event" },
	{ 0x94fb90fa, "touchscreen_report_pos" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5416f29f, "i2c_smbus_read_i2c_block_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:bu21029");

MODULE_INFO(srcversion, "3C9D706D7F0F6E3BB92F677");
