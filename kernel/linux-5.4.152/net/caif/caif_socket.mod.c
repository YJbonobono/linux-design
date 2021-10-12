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
	{ 0xb09130b0, "sock_no_sendpage" },
	{ 0x7a688d36, "sock_no_mmap" },
	{ 0x8552971b, "sock_no_getsockopt" },
	{ 0xb64f81a0, "sock_no_shutdown" },
	{ 0x65f40752, "sock_no_listen" },
	{ 0x430200a2, "sock_no_ioctl" },
	{ 0x6c2ba262, "sock_no_getname" },
	{ 0xe0d91def, "sock_no_accept" },
	{ 0xb1e6abd1, "sock_no_socketpair" },
	{ 0x3fd1ac7, "sock_no_bind" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xc82d7720, "sock_register" },
	{ 0x5fb22c8e, "send_sig" },
	{ 0x77733870, "skb_queue_head" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc6fa2f0f, "skb_dequeue" },
	{ 0x9b553753, "skb_pull" },
	{ 0x5067dc06, "_copy_to_iter" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1791c61f, "_copy_from_iter_full" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x8b13c320, "sock_alloc_send_skb" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x6006847, "current_task" },
	{ 0x9e3e305d, "cfpkt_set_prio" },
	{ 0x2a09f713, "cfpkt_fromnative" },
	{ 0xaef989e6, "skb_free_datagram" },
	{ 0xbc3a7fc8, "skb_copy_datagram_iter" },
	{ 0x46dab489, "skb_recv_datagram" },
	{ 0x3bcbf347, "sk_free" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x6f50547f, "debugfs_remove_recursive" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x400c58ac, "caif_disconnect_client" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x49e981bf, "dev_get_by_index_rcu" },
	{ 0xf0aa0975, "caif_connect_client" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xf11f616d, "release_sock" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xb5fc8f7b, "sock_init_data" },
	{ 0xf83fd03a, "lock_sock_nested" },
	{ 0x80197bfb, "sk_alloc" },
	{ 0xc6cbbc89, "capable" },
	{ 0x6e1972e5, "__sk_mem_schedule" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa58219eb, "sock_rfree" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x5d2fef8c, "sk_filter_trim_cap" },
	{ 0x4a237e57, "cfpkt_tonative" },
	{ 0xc5850110, "printk" },
	{ 0xb7b6874e, "caif_free_client" },
	{ 0xccf2f951, "sk_stream_kill_queues" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x1446b60a, "caif_client_register_refcnt" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "caif");


MODULE_INFO(srcversion, "D950C1057EF770C62DC668B");
