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
	{ 0x22517c8e, "mcb_unregister_driver" },
	{ 0x108e2f2e, "__mcb_register_driver" },
	{ 0x2c7a675f, "serial8250_register_8250_port" },
	{ 0x69e89829, "mcb_get_irq" },
	{ 0x5a921311, "strncmp" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xb43b1853, "devm_ioremap_resource" },
	{ 0xa34c05bf, "mcb_get_resource" },
	{ 0xcefcd99a, "serial8250_unregister_port" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mcb");


MODULE_INFO(srcversion, "00098ECE048803C2EA36838");
