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
	{ 0x815d7cab, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xf8c679e2, "input_event" },
	{ 0x5416f29f, "i2c_smbus_read_i2c_block_data" },
	{ 0x65190b88, "gpiod_get_raw_value" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x4ce68b52, "input_register_device" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5073913b, "devm_add_action" },
	{ 0x8a361363, "devm_gpio_request_one" },
	{ 0x49df2111, "input_set_abs_params" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xda9d1e18, "devm_input_allocate_device" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xdbdbe94d, "gpiod_set_raw_value" },
	{ 0xfa719b4c, "gpio_to_desc" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xd24b247, "i2c_smbus_write_byte_data" },
	{ 0x4dc1ab58, "i2c_smbus_read_byte_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:auo_pixcir_ts");

MODULE_INFO(srcversion, "17DE32B8F69289B5A94C20C");
