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
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xc1dda9e4, "gpiochip_add_data_with_key" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xd24b247, "i2c_smbus_write_byte_data" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf18735d9, "gpiochip_get_data" },
	{ 0x4044488a, "gpiochip_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:tpic2810");
MODULE_ALIAS("of:N*T*Cti,tpic2810");
MODULE_ALIAS("of:N*T*Cti,tpic2810C*");

MODULE_INFO(srcversion, "5207190324D7D94F66F2218");
