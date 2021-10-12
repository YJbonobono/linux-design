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
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xaff55470, "remove_proc_entry" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x463b9b0e, "dev_remove_pack" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xa2c3efa3, "dev_add_pack" },
	{ 0xa41f47ba, "proc_create_seq_private" },
	{ 0xc5850110, "printk" },
	{ 0x14a9f111, "ax25_ip_xmit" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0xfc7b6a19, "dev_queue_xmit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x30c76023, "free_netdev" },
	{ 0x5e121547, "dev_close" },
	{ 0xc50e3748, "unregister_netdevice_queue" },
	{ 0xd8afdfa1, "register_netdevice" },
	{ 0x5193da32, "alloc_netdev_mqs" },
	{ 0x47e7fcaa, "__pskb_pull_tail" },
	{ 0xb832485a, "consume_skb" },
	{ 0xd6af1248, "skb_clone" },
	{ 0x6833822f, "netif_rx" },
	{ 0x581cf443, "skb_push" },
	{ 0x40a09deb, "skb_trim" },
	{ 0x9b553753, "skb_pull" },
	{ 0xd0504053, "pskb_expand_head" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x78381292, "init_net" },
	{ 0xdb1d5e89, "seq_puts" },
	{ 0xb177d101, "seq_printf" },
	{ 0x9954d557, "ax25_header_ops" },
	{ 0xaeb7451e, "ax25_defaddr" },
	{ 0xac93ae05, "ax25_bcast" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ax25");


MODULE_INFO(srcversion, "E466A10726C58CAE0A8451C");
