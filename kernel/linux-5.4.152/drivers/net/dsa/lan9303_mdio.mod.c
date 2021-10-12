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
	{ 0xada83f40, "lan9303_register_set" },
	{ 0x6eada123, "mdio_driver_unregister" },
	{ 0x35b7de59, "mdio_driver_register" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x9f8ab43f, "lan9303_probe" },
	{ 0x8c44ba97, "__devm_regmap_init" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xaef54ea2, "mdiobus_read_nested" },
	{ 0x86fc3775, "mdiobus_write_nested" },
	{ 0xbeb9527, "lan9303_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "lan9303-core");

MODULE_ALIAS("of:N*T*Csmsc,lan9303-mdio");
MODULE_ALIAS("of:N*T*Csmsc,lan9303-mdioC*");

MODULE_INFO(srcversion, "DC115F40B08BF0FEE81EF31");
