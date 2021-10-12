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
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x9eb9d1af, "register_candev" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0xd9da003, "netdev_alert" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbd3525e9, "can_bus_off" },
	{ 0x6833822f, "netif_rx" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x77d59f8f, "close_candev" },
	{ 0xf10de535, "ioread8" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x6006847, "current_task" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5e121547, "dev_close" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0x64b4411, "alloc_candev_mqs" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x285da97a, "free_candev" },
	{ 0x1b1d266d, "_dev_alert" },
	{ 0x45b06668, "can_change_mtu" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x7089480, "unregister_candev" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x7ac547d5, "alloc_can_skb" },
	{ 0x12a38747, "usleep_range" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x848d372e, "iowrite8" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x96f8c098, "open_candev" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x9601035f, "request_firmware" },
	{ 0xc5534d64, "ioread16" },
	{ 0x70b651d, "can_get_echo_skb" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0xb9924cd6, "can_put_echo_skb" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x9fe09916, "release_firmware" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "can-dev");


MODULE_INFO(srcversion, "11F3A030111DFA00920CE7D");
