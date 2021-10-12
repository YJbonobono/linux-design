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
	{ 0xfd51535f, "usb_gadget_udc_reset" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xbc477a2, "irq_set_irq_type" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x3d952d0a, "usb_add_gadget_udc" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xdde949c7, "dma_pool_create" },
	{ 0x3d7e54c7, "pci_try_set_mwi" },
	{ 0x89dec815, "pci_set_master" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x313eb271, "pci_enable_msi" },
	{ 0xa9cff0a9, "gpiod_to_irq" },
	{ 0xe426aec8, "gpiod_direction_input" },
	{ 0x47229b5c, "gpio_request" },
	{ 0xe867c425, "pcim_iomap_table" },
	{ 0xf87ba11, "pcim_iomap_regions" },
	{ 0xe5501118, "pcim_enable_device" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xf0979a46, "usb_gadget_giveback_request" },
	{ 0x69acdf38, "memcpy" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xc5850110, "printk" },
	{ 0xfe990052, "gpio_free" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x71752d07, "usb_del_gadget_udc" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x37a0cba, "kfree" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x65190b88, "gpiod_get_raw_value" },
	{ 0xfa719b4c, "gpio_to_desc" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4a2315f5, "usb_ep_set_maxpacket_limit" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xe484e35f, "ioread32" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "udc-core");

MODULE_ALIAS("pci:v00008086d00000939sv*sd*bc0Csc03iFE*");
MODULE_ALIAS("pci:v00008086d00008808sv*sd*bc0Csc03iFE*");
MODULE_ALIAS("pci:v000010DBd0000801Dsv*sd*bc0Csc03iFE*");
MODULE_ALIAS("pci:v000010DBd00008808sv*sd*bc0Csc03iFE*");

MODULE_INFO(srcversion, "AF7810F8D7E28C5C647B439");
