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
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0xc1dda9e4, "gpiochip_add_data_with_key" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xf9722676, "twl_i2c_write" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd6a91f54, "twl_i2c_read" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf18735d9, "gpiochip_get_data" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x4044488a, "gpiochip_remove" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,twl4030-gpio");
MODULE_ALIAS("of:N*T*Cti,twl4030-gpioC*");

MODULE_INFO(srcversion, "600D929A6222D28ECB88662");
