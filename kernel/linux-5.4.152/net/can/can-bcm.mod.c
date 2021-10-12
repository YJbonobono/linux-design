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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xa6ea5200, "can_rx_register" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xb4ff6bb6, "hrtimer_active" },
	{ 0xdc21e866, "hrtimer_forward" },
	{ 0x3eeb836, "sock_no_setsockopt" },
	{ 0x8552971b, "sock_no_getsockopt" },
	{ 0x9951c67d, "_proc_mkdir" },
	{ 0x6d008ed6, "sock_gettstamp" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0xb2df421a, "can_proto_unregister" },
	{ 0xa39d69af, "proc_create_net_single" },
	{ 0xb177d101, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x6c2ba262, "sock_no_getname" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xaff55470, "remove_proc_entry" },
	{ 0x74a17a79, "sock_queue_rcv_skb" },
	{ 0x46dab489, "skb_recv_datagram" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x7ea1b695, "sock_i_ino" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xb09130b0, "sock_no_sendpage" },
	{ 0x7a688d36, "sock_no_mmap" },
	{ 0xfd28534, "PDE_DATA" },
	{ 0x8f64285e, "sock_efree" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0xfb578fc5, "memset" },
	{ 0xb1e6abd1, "sock_no_socketpair" },
	{ 0xb92ea046, "unregister_pernet_subsys" },
	{ 0xc5850110, "printk" },
	{ 0x3fd1ac7, "sock_no_bind" },
	{ 0xf83fd03a, "lock_sock_nested" },
	{ 0x1208a414, "seq_putc" },
	{ 0x65f40752, "sock_no_listen" },
	{ 0xe0d91def, "sock_no_accept" },
	{ 0x49e981bf, "dev_get_by_index_rcu" },
	{ 0x3bcbf347, "sk_free" },
	{ 0xe575c2ac, "dev_get_by_index" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xb64f81a0, "sock_no_shutdown" },
	{ 0x83f9ce14, "can_send" },
	{ 0xe1f51ae2, "__sock_recv_ts_and_drops" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x108ec659, "datagram_poll" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x1791c61f, "_copy_from_iter_full" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbcb9ccc6, "can_proto_register" },
	{ 0x88cb6a1c, "register_pernet_subsys" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x2160e9, "can_rx_unregister" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x5067dc06, "_copy_to_iter" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe914e41e, "strcpy" },
	{ 0xaef989e6, "skb_free_datagram" },
};

MODULE_INFO(depends, "can");


MODULE_INFO(srcversion, "785A7ED2B66E17F5785E3CD");
