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
	{ 0x41509bb8, "mtd_device_parse_register" },
	{ 0x2f196493, "do_map_probe" },
	{ 0x85bd1608, "__request_region" },
	{ 0xc5850110, "printk" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xedc03953, "iounmap" },
	{ 0x96b7827e, "map_destroy" },
	{ 0xa8a6ac49, "mtd_device_unregister" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mtd,chipreg");


MODULE_INFO(srcversion, "6BE84778C55E25CBD378D46");
