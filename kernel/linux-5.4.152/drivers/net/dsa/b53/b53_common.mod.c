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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0xf9a482f9, "msleep" },
	{ 0x485fe47, "mdiobus_get_phy" },
	{ 0xfa719b4c, "gpio_to_desc" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x434877b0, "dsa_port_phylink_mac_change" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x6f3517ff, "dsa_switch_alloc" },
	{ 0xa8629c87, "phy_init_eee" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3fa0e928, "phylink_helper_basex_speed" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x39b52d19, "__bitmap_and" },
	{ 0xd85045e2, "dsa_register_switch" },
	{ 0xdbdbe94d, "gpiod_set_raw_value" },
	{ 0xc1d15a4c, "phylink_set_port_modes" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xf9b525f7, "devm_kmalloc" },
};

MODULE_INFO(depends, "dsa_core,phylink");


MODULE_INFO(srcversion, "20423676CDCCC2EF31AE26C");
