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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x66f692c7, "usb_gadget_map_request" },
	{ 0x815588a6, "clk_enable" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x71752d07, "usb_del_gadget_udc" },
	{ 0xf0979a46, "usb_gadget_giveback_request" },
	{ 0x56470118, "__warn_printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x3de29c5, "usb_gadget_unmap_request" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xfd51535f, "usb_gadget_udc_reset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x9166fada, "strncpy" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x31d47ed8, "devm_usb_get_phy" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4a2315f5, "usb_ep_set_maxpacket_limit" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5c436800, "devm_clk_get" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xff547e40, "platform_get_resource_byname" },
	{ 0xbf0514fc, "usb_add_gadget_udc_release" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d4d4772, "devm_ioremap" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xdde949c7, "dma_pool_create" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x83fd8b0f, "dma_ops" },
};

MODULE_INFO(depends, "udc-core");


MODULE_INFO(srcversion, "051A0A6146A0308D1E7E3F3");
