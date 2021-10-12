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
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x58aa3f08, "vme_register_bridge" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x8c9095f, "vme_init_bridge" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xc5e74216, "release_resource" },
	{ 0xf43ccbff, "pcibios_resource_to_bus" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x1100571b, "pci_bus_alloc_resource" },
	{ 0x3da171f9, "pci_mem_start" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x848d372e, "iowrite8" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x6dee6c9b, "vme_register_error_handler" },
	{ 0x9a0c3a18, "vme_unregister_error_handler" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc5534d64, "ioread16" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0x2bb81c85, "vme_bus_error_handler" },
	{ 0x98320b2a, "vme_irq_handler" },
	{ 0xf10de535, "ioread8" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x37a0cba, "kfree" },
	{ 0x93c0d339, "vme_unregister_bridge" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x1000e51, "schedule" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xe419bc99, "iowrite32be" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0xfdb9b629, "ioread32be" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdfbdc769, "pv_ops" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010E3d00000148sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "42C739581DF63525781F994");
