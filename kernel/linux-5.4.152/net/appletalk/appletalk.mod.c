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
	{ 0xf11f616d, "release_sock" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xb5fc8f7b, "sock_init_data" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa41f47ba, "proc_create_seq_private" },
	{ 0xa5bcfd03, "from_kuid_munged" },
	{ 0x3eeb836, "sock_no_setsockopt" },
	{ 0xc57c6d80, "unregister_net_sysctl_table" },
	{ 0x8552971b, "sock_no_getsockopt" },
	{ 0x6d008ed6, "sock_gettstamp" },
	{ 0xdb1d5e89, "seq_puts" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xd6af1248, "skb_clone" },
	{ 0xfbbb3727, "skb_copy" },
	{ 0xb177d101, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x74a17a79, "sock_queue_rcv_skb" },
	{ 0x46dab489, "skb_recv_datagram" },
	{ 0x75bda77a, "seq_hlist_next" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x7769ac9c, "skb_realloc_headroom" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x40a09deb, "skb_trim" },
	{ 0xb09130b0, "sock_no_sendpage" },
	{ 0x47e7fcaa, "__pskb_pull_tail" },
	{ 0x7a688d36, "sock_no_mmap" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xeaac1e08, "skb_queue_purge" },
	{ 0xb1e6abd1, "sock_no_socketpair" },
	{ 0x524f0ed8, "proc_mkdir" },
	{ 0x80197bfb, "sk_alloc" },
	{ 0x6006847, "current_task" },
	{ 0xbc3a7fc8, "skb_copy_datagram_iter" },
	{ 0xc5850110, "printk" },
	{ 0xf83fd03a, "lock_sock_nested" },
	{ 0x3dfc897c, "seq_hlist_start_head" },
	{ 0x65f40752, "sock_no_listen" },
	{ 0x581cf443, "skb_push" },
	{ 0xe0d91def, "sock_no_accept" },
	{ 0x3bcbf347, "sk_free" },
	{ 0x463b9b0e, "dev_remove_pack" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x24d273d1, "add_timer" },
	{ 0x9b553753, "skb_pull" },
	{ 0x78381292, "init_net" },
	{ 0xd467a976, "register_snap_client" },
	{ 0xb64f81a0, "sock_no_shutdown" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xa887171f, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0xec60789c, "proto_register" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x108ec659, "datagram_poll" },
	{ 0xc82d7720, "sock_register" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0xb99540a6, "proto_unregister" },
	{ 0x1791c61f, "_copy_from_iter_full" },
	{ 0x5193da32, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8b13c320, "sock_alloc_send_skb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdeead3c, "__dev_get_by_name" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xe66a47be, "remove_proc_subtree" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xde5fb29c, "unregister_snap_client" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0xc6fa2f0f, "skb_dequeue" },
	{ 0xa2c3efa3, "dev_add_pack" },
	{ 0xb832485a, "consume_skb" },
	{ 0xfc7b6a19, "dev_queue_xmit" },
	{ 0xd879ab8, "register_net_sysctl" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xdf6b082f, "proc_dointvec_jiffies" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x1a625919, "sock_i_uid" },
	{ 0xc46eaf50, "dev_mc_add_global" },
	{ 0xaef989e6, "skb_free_datagram" },
};

MODULE_INFO(depends, "psnap");


MODULE_INFO(srcversion, "45346DE212AE8D55BBF40C5");
