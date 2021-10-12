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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x66f692c7, "usb_gadget_map_request" },
	{ 0xf0979a46, "usb_gadget_giveback_request" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x3de29c5, "usb_gadget_unmap_request" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0xfd51535f, "usb_gadget_udc_reset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x24d273d1, "add_timer" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4a2315f5, "usb_ep_set_maxpacket_limit" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbf0514fc, "usb_add_gadget_udc_release" },
	{ 0x37a0cba, "kfree" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x28db880d, "dev_set_name" },
	{ 0xdde949c7, "dma_pool_create" },
};

MODULE_INFO(depends, "udc-core");


MODULE_INFO(srcversion, "A9789F992BE2BFAF0568E20");
