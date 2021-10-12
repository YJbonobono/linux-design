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
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xaa461401, "dsa_switch_suspend" },
	{ 0x195b4d68, "dsa_switch_resume" },
	{ 0x85683c3f, "phy_support_asym_pause" },
	{ 0xef5ef19c, "dsa_unregister_switch" },
	{ 0xd85045e2, "dsa_register_switch" },
	{ 0x6f3517ff, "dsa_switch_alloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x43764038, "gpiod_set_value_cansleep" },
	{ 0xfad9bcc5, "devm_gpiod_get_optional" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9166fada, "strncpy" },
	{ 0xc5850110, "printk" },
	{ 0x8c44ba97, "__devm_regmap_init" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "dsa_core");


MODULE_INFO(srcversion, "6CC5692F8E34739DB471217");
