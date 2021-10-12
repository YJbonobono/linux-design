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
	{ 0xc5850110, "printk" },
	{ 0x5b5b223, "__gameport_register_port" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x943487ca, "gameport_set_phys" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xc5e74216, "release_resource" },
	{ 0xf2081e5a, "gameport_unregister_port" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "gameport");

MODULE_ALIAS("pci:v00001319d00000802sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "71DD85ACC2B2C1433695BDA");
