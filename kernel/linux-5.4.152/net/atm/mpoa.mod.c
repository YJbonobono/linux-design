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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc2607da9, "vcc_insert_socket" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xa9320d27, "ktime_get_seconds" },
	{ 0xd80065df, "seq_open" },
	{ 0x7ab3bef5, "deregister_atm_ioctl" },
	{ 0x7028574e, "dev_get_by_name" },
	{ 0x526ce9a2, "register_atm_ioctl" },
	{ 0xb177d101, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xaff55470, "remove_proc_entry" },
	{ 0x4443d399, "atm_proc_root" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x7769ac9c, "skb_realloc_headroom" },
	{ 0x596437b8, "vcc_release_async" },
	{ 0x5932b0cc, "seq_read" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x6833822f, "netif_rx" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x581cf443, "skb_push" },
	{ 0x24d273d1, "add_timer" },
	{ 0x9b553753, "skb_pull" },
	{ 0x98141b8e, "softnet_data" },
	{ 0x78381292, "init_net" },
	{ 0x1c8f4c84, "module_put" },
	{ 0xa887171f, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0x736b5662, "_raw_read_lock_irqsave" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0xa16c8613, "_raw_read_unlock_irqrestore" },
	{ 0x9eab8d85, "_raw_write_lock_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x6b347276, "__module_get" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0xcdaf7988, "seq_lseek" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x7a4497db, "kzfree" },
	{ 0xc6fa2f0f, "skb_dequeue" },
	{ 0x87d372fa, "seq_release" },
	{ 0x51463ae5, "proc_create" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xf8595510, "_raw_read_lock_irq" },
};

MODULE_INFO(depends, "atm");


MODULE_INFO(srcversion, "B6CC3D178A911F20B95826E");
