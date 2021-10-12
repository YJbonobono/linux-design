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
	{ 0x4cadacbb, "i2c_transfer" },
	{ 0x466e2fb6, "input_mt_report_slot_state" },
	{ 0xf8c679e2, "input_event" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0xebe17cb6, "devm_device_add_group" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x4ce68b52, "input_register_device" },
	{ 0x8b29215e, "input_mt_init_slots" },
	{ 0x332f1f5e, "touchscreen_parse_properties" },
	{ 0x49df2111, "input_set_abs_params" },
	{ 0xda9d1e18, "devm_input_allocate_device" },
	{ 0x5073913b, "devm_add_action" },
	{ 0xfe49f445, "devm_regulator_bulk_get" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb541d519, "i2c_smbus_write_word_data" },
	{ 0x4dc1ab58, "i2c_smbus_read_byte_data" },
	{ 0x5416f29f, "i2c_smbus_read_i2c_block_data" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe18226cc, "regulator_bulk_enable" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xb80ad490, "i2c_smbus_write_byte" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0x8cb0c5, "regulator_bulk_disable" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xd24b247, "i2c_smbus_write_byte_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:s6sy761");

MODULE_INFO(srcversion, "2B265CE884FC2353FBC1698");
