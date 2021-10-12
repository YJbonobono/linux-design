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
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x3d75c109, "mmc_add_host" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x11b21377, "usb_alloc_urb" },
	{ 0x95ee7d3a, "mmc_alloc_host" },
	{ 0xb2d415e9, "usb_control_msg" },
	{ 0xb9a3671e, "mmc_detect_change" },
	{ 0x130b568, "wake_up_process" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xafea1f0c, "usb_submit_urb" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3033d39c, "usb_unlink_urb" },
	{ 0xe7363a56, "mmc_request_done" },
	{ 0xed46adb4, "mmc_remove_host" },
	{ 0x9eecf10, "usb_kill_urb" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xd20e0112, "mmc_free_host" },
	{ 0x37a0cba, "kfree" },
	{ 0x211fdf55, "usb_free_urb" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0A12p5D10d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "DA36753D3BC37A8421C3DC1");
