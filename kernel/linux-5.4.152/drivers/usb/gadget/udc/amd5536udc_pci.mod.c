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
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xe9856c5c, "udc_probe" },
	{ 0xfebd6773, "init_dma_pools" },
	{ 0x3d7e54c7, "pci_try_set_mwi" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x5d01d078, "udc_irq" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x85bd1608, "__request_region" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x3d8ba936, "udc_remove" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0xedc03953, "iounmap" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x65d94645, "free_dma_pools" },
	{ 0x71752d07, "usb_del_gadget_udc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "snps_udc_core,udc-core");

MODULE_ALIAS("pci:v00001022d00002096sv*sd*bc0Csc03iFE*");

MODULE_INFO(srcversion, "5B9F889B46EB9AB8797DF58");
