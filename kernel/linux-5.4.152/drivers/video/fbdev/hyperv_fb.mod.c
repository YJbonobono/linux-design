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
	{ 0xb1f27246, "vmbus_driver_unregister" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xd0bbf4da, "__vmbus_driver_register" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0xdad9000b, "register_framebuffer" },
	{ 0xb9056bb6, "remove_conflicting_framebuffers" },
	{ 0x37b8b39e, "screen_info" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x85df9b6c, "strsep" },
	{ 0xab781570, "fb_get_options" },
	{ 0x5a470173, "pci_dev_put" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0xbff8591a, "vmbus_allocate_mmio" },
	{ 0x8c2d666c, "pci_get_device" },
	{ 0xa0f493d9, "efi" },
	{ 0x46a417ca, "vmbus_proto_version" },
	{ 0x6ad863e9, "vmbus_open" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc88bae18, "framebuffer_alloc" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x29361773, "complete" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3ec3b84c, "vmbus_recvpacket" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd7885357, "cfb_fillrect" },
	{ 0x38c33bd8, "cfb_copyarea" },
	{ 0xd56dec52, "cfb_imageblit" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8416ee80, "vmbus_sendpacket" },
	{ 0xe52425b7, "framebuffer_release" },
	{ 0x31e2e77f, "vmbus_free_mmio" },
	{ 0xedc03953, "iounmap" },
	{ 0x2dcdb92a, "vmbus_close" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x7aecb9a1, "unregister_framebuffer" },
	{ 0x7181db30, "atomic_notifier_chain_unregister" },
	{ 0x7ceeac9, "panic_notifier_list" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hv_vmbus");

MODULE_ALIAS("vmbus:02780ada77e3ac4a8e770558eb1073f8");
MODULE_ALIAS("pci:v00001414d00005353sv00000000sd00000000bc*sc*i*");

MODULE_INFO(srcversion, "42F49150E1B3582B4C3DF60");
