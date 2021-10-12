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
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x12a38747, "usleep_range" },
	{ 0xd85045e2, "dsa_register_switch" },
	{ 0x6f3517ff, "dsa_switch_alloc" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xed3ab1b1, "mdiobus_read" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xaef54ea2, "mdiobus_read_nested" },
	{ 0x86fc3775, "mdiobus_write_nested" },
	{ 0xef5ef19c, "dsa_unregister_switch" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "dsa_core");


MODULE_INFO(srcversion, "1AB9A8F27F184A8076911A5");
