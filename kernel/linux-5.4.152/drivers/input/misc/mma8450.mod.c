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
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf8c679e2, "input_event" },
	{ 0x5416f29f, "i2c_smbus_read_i2c_block_data" },
	{ 0x4dc1ab58, "i2c_smbus_read_byte_data" },
	{ 0x83d511d9, "input_register_polled_device" },
	{ 0x49df2111, "input_set_abs_params" },
	{ 0x599e4c86, "devm_input_allocate_polled_device" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xd24b247, "i2c_smbus_write_byte_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "input-polldev");

MODULE_ALIAS("of:N*T*Cfsl,mma8450");
MODULE_ALIAS("of:N*T*Cfsl,mma8450C*");
MODULE_ALIAS("i2c:mma8450");

MODULE_INFO(srcversion, "0334C3C2B6BBB14C98F9215");
