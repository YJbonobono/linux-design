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
	{ 0xcab3c35f, "_dev_info" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x43d64963, "gpiochip_set_nested_irqchip" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x69ba222, "gpiochip_irqchip_add_key" },
	{ 0xf38a6078, "handle_level_irq" },
	{ 0xda3ba270, "devm_gpiochip_add_data" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xf18735d9, "gpiochip_get_data" },
	{ 0xb80ad490, "i2c_smbus_write_byte" },
	{ 0x34724274, "i2c_transfer_buffer_flags" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0x97c8a653, "irq_find_mapping" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x45c9ddea, "i2c_smbus_read_byte" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:pcf8574");
MODULE_ALIAS("i2c:pcf8574a");
MODULE_ALIAS("i2c:pca8574");
MODULE_ALIAS("i2c:pca9670");
MODULE_ALIAS("i2c:pca9672");
MODULE_ALIAS("i2c:pca9674");
MODULE_ALIAS("i2c:pcf8575");
MODULE_ALIAS("i2c:pca8575");
MODULE_ALIAS("i2c:pca9671");
MODULE_ALIAS("i2c:pca9673");
MODULE_ALIAS("i2c:pca9675");
MODULE_ALIAS("i2c:max7328");
MODULE_ALIAS("i2c:max7329");

MODULE_INFO(srcversion, "8E54FFBADDF071DDB246E87");
