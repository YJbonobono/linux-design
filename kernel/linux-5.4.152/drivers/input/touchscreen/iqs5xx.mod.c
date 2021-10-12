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
	{ 0x69acdf38, "memcpy" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x37a0cba, "kfree" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x4ce68b52, "input_register_device" },
	{ 0xebe17cb6, "devm_device_add_group" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xa94ba86f, "devm_gpiod_get" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x3cb1a279, "input_alloc_absinfo" },
	{ 0x8b29215e, "input_mt_init_slots" },
	{ 0x281d1f24, "input_set_capability" },
	{ 0xda9d1e18, "devm_input_allocate_device" },
	{ 0x332f1f5e, "touchscreen_parse_properties" },
	{ 0x43764038, "gpiod_set_value_cansleep" },
	{ 0x9b53b2d5, "input_mt_sync_frame" },
	{ 0x466e2fb6, "input_mt_report_slot_state" },
	{ 0xf8c679e2, "input_event" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4cadacbb, "i2c_transfer" },
	{ 0x9fe09916, "release_firmware" },
	{ 0x50cf7585, "hex2bin" },
	{ 0x9601035f, "request_firmware" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x34724274, "i2c_transfer_buffer_flags" },
	{ 0x12a38747, "usleep_range" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cazoteq,iqs550");
MODULE_ALIAS("of:N*T*Cazoteq,iqs550C*");
MODULE_ALIAS("of:N*T*Cazoteq,iqs572");
MODULE_ALIAS("of:N*T*Cazoteq,iqs572C*");
MODULE_ALIAS("of:N*T*Cazoteq,iqs525");
MODULE_ALIAS("of:N*T*Cazoteq,iqs525C*");
MODULE_ALIAS("i2c:iqs550");
MODULE_ALIAS("i2c:iqs572");
MODULE_ALIAS("i2c:iqs525");

MODULE_INFO(srcversion, "DE7173C3EF861DFF273A4E6");
