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
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x22517c8e, "mcb_unregister_driver" },
	{ 0x108e2f2e, "__mcb_register_driver" },
	{ 0xd843bb0e, "watchdog_register_device" },
	{ 0xbef44855, "watchdog_init_timeout" },
	{ 0x9d4d4772, "devm_ioremap" },
	{ 0x24f15481, "mcb_request_mem" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xeb2c8905, "mcb_release_mem" },
	{ 0xc32f2624, "watchdog_unregister_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mcb");


MODULE_INFO(srcversion, "F8FBCEF70D523BB51F7DDA5");
