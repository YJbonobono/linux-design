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
	{ 0xb5fc8f7b, "sock_init_data" },
	{ 0xa41f47ba, "proc_create_seq_private" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xa5bcfd03, "from_kuid_munged" },
	{ 0x26a77871, "dev_getbyhwaddr_rcu" },
	{ 0xc57c6d80, "unregister_net_sysctl_table" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xdb1d5e89, "seq_puts" },
	{ 0xb308c97d, "wait_woken" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xd6af1248, "skb_clone" },
	{ 0xb177d101, "seq_printf" },
	{ 0xaff55470, "remove_proc_entry" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x74a17a79, "sock_queue_rcv_skb" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xa3de0625, "skb_set_owner_w" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xa58219eb, "sock_rfree" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9c3a530d, "skb_unlink" },
	{ 0xb09130b0, "sock_no_sendpage" },
	{ 0x7a688d36, "sock_no_mmap" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x5674c4f5, "sk_wait_data" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xeaac1e08, "skb_queue_purge" },
	{ 0x8f64285e, "sock_efree" },
	{ 0xb1e6abd1, "sock_no_socketpair" },
	{ 0x50fb8ccc, "llc_set_station_handler" },
	{ 0x524f0ed8, "proc_mkdir" },
	{ 0x80197bfb, "sk_alloc" },
	{ 0x6006847, "current_task" },
	{ 0xbc3a7fc8, "skb_copy_datagram_iter" },
	{ 0xc5850110, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xf83fd03a, "lock_sock_nested" },
	{ 0xe0e3cea6, "ns_capable" },
	{ 0x52d7b2fd, "llc_sap_list" },
	{ 0x183f8460, "llc_mac_hdr_init" },
	{ 0x581cf443, "skb_push" },
	{ 0x49e981bf, "dev_get_by_index_rcu" },
	{ 0x3bcbf347, "sk_free" },
	{ 0xe575c2ac, "dev_get_by_index" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x38b92846, "llc_remove_pack" },
	{ 0x2421c2, "llc_sap_find" },
	{ 0x78381292, "init_net" },
	{ 0xeb48885c, "llc_add_pack" },
	{ 0xa887171f, "skb_queue_tail" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0xec60789c, "proto_register" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x108ec659, "datagram_poll" },
	{ 0xc82d7720, "sock_register" },
	{ 0x3b6f5bcc, "dev_getfirstbyhwtype" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0xb99540a6, "proto_unregister" },
	{ 0x1791c61f, "_copy_from_iter_full" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8b13c320, "sock_alloc_send_skb" },
	{ 0xf7a8fac2, "put_cmsg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x361f38c, "llc_sap_open" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x69acdf38, "memcpy" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0xc6fa2f0f, "skb_dequeue" },
	{ 0xd33d7771, "llc_sap_close" },
	{ 0xfc7b6a19, "dev_queue_xmit" },
	{ 0xd879ab8, "register_net_sysctl" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xb6e182c4, "llc_build_and_send_ui_pkt" },
	{ 0xdf6b082f, "proc_dointvec_jiffies" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x1a625919, "sock_i_uid" },
	{ 0xda10ec3, "security_sock_graft" },
};

MODULE_INFO(depends, "llc");


MODULE_INFO(srcversion, "4D03C9B03C6957AFD673D69");
