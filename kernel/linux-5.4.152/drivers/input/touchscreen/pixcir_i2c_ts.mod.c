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
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x4ce68b52, "input_register_device" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0xfad9bcc5, "devm_gpiod_get_optional" },
	{ 0xa94ba86f, "devm_gpiod_get" },
	{ 0x8b29215e, "input_mt_init_slots" },
	{ 0x49df2111, "input_set_abs_params" },
	{ 0xda9d1e18, "devm_input_allocate_device" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc85b1578, "input_mt_assign_slots" },
	{ 0xd4ffb6b5, "input_mt_get_slot_by_key" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1b45043a, "gpiod_get_value_cansleep" },
	{ 0x9b53b2d5, "input_mt_sync_frame" },
	{ 0x466e2fb6, "input_mt_report_slot_state" },
	{ 0xf8c679e2, "input_event" },
	{ 0xcf9b558d, "touchscreen_set_mt_pos" },
	{ 0x34724274, "i2c_transfer_buffer_flags" },
	{ 0x43764038, "gpiod_set_value_cansleep" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xd24b247, "i2c_smbus_write_byte_data" },
	{ 0x4dc1ab58, "i2c_smbus_read_byte_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:pixcir_ts");
MODULE_ALIAS("i2c:pixcir_tangoc");

MODULE_INFO(srcversion, "6B8A2E1DB03E419801775F8");
