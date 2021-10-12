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
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xf18735d9, "gpiochip_get_data" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xc1dda9e4, "gpiochip_add_data_with_key" },
	{ 0xa4f03709, "bgpio_init" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x24f15481, "mcb_request_mem" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xeb2c8905, "mcb_release_mem" },
	{ 0xedc03953, "iounmap" },
	{ 0x4044488a, "gpiochip_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mcb,gpio-generic");


MODULE_INFO(srcversion, "AA79B67B82951AE78E23048");
