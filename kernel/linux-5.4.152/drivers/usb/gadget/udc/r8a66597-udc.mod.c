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
	{ 0xee821553, "platform_driver_unregister" },
	{ 0xa949d817, "__platform_driver_probe" },
	{ 0x63e14d80, "usb_ep_clear_halt" },
	{ 0xfd51535f, "usb_gadget_udc_reset" },
	{ 0x5857b225, "ioread16_rep" },
	{ 0x3f0546a8, "ioread32_rep" },
	{ 0xe484e35f, "ioread32" },
	{ 0x3de29c5, "usb_gadget_unmap_request" },
	{ 0xf0979a46, "usb_gadget_giveback_request" },
	{ 0x66f692c7, "usb_gadget_map_request" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xbfc177bc, "iowrite32_rep" },
	{ 0x8cc79cab, "iowrite16_rep" },
	{ 0x848d372e, "iowrite8" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc5850110, "printk" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x5c436800, "devm_clk_get" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xff547e40, "platform_get_resource_byname" },
	{ 0x3d952d0a, "usb_add_gadget_udc" },
	{ 0x4a2315f5, "usb_ep_set_maxpacket_limit" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xb43b1853, "devm_ioremap_resource" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x71752d07, "usb_del_gadget_udc" },
	{ 0x37a0cba, "kfree" },
	{ 0x40f79de7, "usb_ep_set_halt" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc5534d64, "ioread16" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "udc-core");


MODULE_INFO(srcversion, "2580A4D8E352F857147F775");
