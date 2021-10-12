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
	{ 0xcab3c35f, "_dev_info" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x645b0277, "__mdiobus_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xed282188, "mdiobus_alloc_size" },
	{ 0x72bbd7cb, "devm_clk_get_optional" },
	{ 0x9d4d4772, "devm_ioremap" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xc5850110, "printk" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x12a38747, "usleep_range" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xed3ab1b1, "mdiobus_read" },
	{ 0xa728d4d9, "mdiobus_free" },
	{ 0xa437e823, "mdiobus_unregister" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cbrcm,genet-mdio-v5");
MODULE_ALIAS("of:N*T*Cbrcm,genet-mdio-v5C*");
MODULE_ALIAS("of:N*T*Cbrcm,genet-mdio-v4");
MODULE_ALIAS("of:N*T*Cbrcm,genet-mdio-v4C*");
MODULE_ALIAS("of:N*T*Cbrcm,genet-mdio-v3");
MODULE_ALIAS("of:N*T*Cbrcm,genet-mdio-v3C*");
MODULE_ALIAS("of:N*T*Cbrcm,genet-mdio-v2");
MODULE_ALIAS("of:N*T*Cbrcm,genet-mdio-v2C*");
MODULE_ALIAS("of:N*T*Cbrcm,genet-mdio-v1");
MODULE_ALIAS("of:N*T*Cbrcm,genet-mdio-v1C*");
MODULE_ALIAS("of:N*T*Cbrcm,unimac-mdio");
MODULE_ALIAS("of:N*T*Cbrcm,unimac-mdioC*");

MODULE_INFO(srcversion, "FD67E7E752DBA474843D4AF");
