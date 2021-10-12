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
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x41509bb8, "mtd_device_parse_register" },
	{ 0xc5850110, "printk" },
	{ 0x2f196493, "do_map_probe" },
	{ 0x5ba8f35a, "simple_map_init" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x85bd1608, "__request_region" },
	{ 0xfa88260f, "pci_write_config_byte" },
	{ 0x975ee610, "pci_read_config_byte" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0xedc03953, "iounmap" },
	{ 0x96b7827e, "map_destroy" },
	{ 0xa8a6ac49, "mtd_device_unregister" },
	{ 0x38208ac5, "mtd_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mtd,chipreg,map_funcs");

MODULE_ALIAS("pci:v00001166d00000201sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "16A167BF7E406CC63082D10");
