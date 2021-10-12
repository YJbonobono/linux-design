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
	{ 0x6eada123, "mdio_driver_unregister" },
	{ 0x35b7de59, "mdio_driver_register" },
	{ 0x12a38747, "usleep_range" },
	{ 0xaef54ea2, "mdiobus_read_nested" },
	{ 0x86fc3775, "mdiobus_write_nested" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x68648701, "b53_switch_register" },
	{ 0x744d7a6d, "b53_switch_alloc" },
	{ 0xed3ab1b1, "mdiobus_read" },
	{ 0xef5ef19c, "dsa_unregister_switch" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "b53_common,dsa_core");

MODULE_ALIAS("of:N*T*Cbrcm,bcm5325");
MODULE_ALIAS("of:N*T*Cbrcm,bcm5325C*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm53115");
MODULE_ALIAS("of:N*T*Cbrcm,bcm53115C*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm53125");
MODULE_ALIAS("of:N*T*Cbrcm,bcm53125C*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm53128");
MODULE_ALIAS("of:N*T*Cbrcm,bcm53128C*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm5365");
MODULE_ALIAS("of:N*T*Cbrcm,bcm5365C*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm5389");
MODULE_ALIAS("of:N*T*Cbrcm,bcm5389C*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm5395");
MODULE_ALIAS("of:N*T*Cbrcm,bcm5395C*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm5397");
MODULE_ALIAS("of:N*T*Cbrcm,bcm5397C*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm5398");
MODULE_ALIAS("of:N*T*Cbrcm,bcm5398C*");

MODULE_INFO(srcversion, "CFE4C355AAE6EDCF15E5193");
