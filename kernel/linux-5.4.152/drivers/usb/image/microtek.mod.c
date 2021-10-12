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
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0x87b8798d, "sg_next" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa4250e5, "scsi_scan_host" },
	{ 0xfef7d47b, "scsi_add_host_with_dma" },
	{ 0x6c3d866c, "scsi_host_alloc" },
	{ 0x11b21377, "usb_alloc_urb" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xc5850110, "printk" },
	{ 0xafea1f0c, "usb_submit_urb" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x95902c1, "usb_reset_device" },
	{ 0xbe8490bc, "usb_lock_device_for_reset" },
	{ 0x55bb6508, "blk_queue_dma_alignment" },
	{ 0x37a0cba, "kfree" },
	{ 0x211fdf55, "usb_free_urb" },
	{ 0x7e20c004, "scsi_host_put" },
	{ 0x7b8edf3f, "scsi_remove_host" },
	{ 0x9eecf10, "usb_kill_urb" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v04CEp0300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DAp0094d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DAp0099d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DAp009Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DAp00A0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DAp00A3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DAp80A3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DAp80ACd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DAp00B6d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "19B461DE370B25545499B57");
