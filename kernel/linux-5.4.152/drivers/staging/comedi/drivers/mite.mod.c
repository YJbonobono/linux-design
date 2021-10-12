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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x23a80818, "comedi_buf_write_free" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x36e5d95, "comedi_inc_scan_progress" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xfb0c6b14, "put_device" },
	{ 0x61f415fb, "comedi_bytes_per_scan" },
	{ 0xec919e12, "comedi_buf_read_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x336d1bb2, "pci_ioremap_bar" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3750a460, "get_device" },
	{ 0xc959f90d, "comedi_to_pci_dev" },
	{ 0x37a0cba, "kfree" },
	{ 0xda11f2f2, "comedi_buf_write_alloc" },
	{ 0xedc03953, "iounmap" },
	{ 0xa08e1eb2, "comedi_buf_read_free" },
};

MODULE_INFO(depends, "comedi,comedi_pci");


MODULE_INFO(srcversion, "1ECD91AD430E45EA91B1C76");
