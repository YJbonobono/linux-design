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
	{ 0x77733870, "skb_queue_head" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf11f616d, "release_sock" },
	{ 0xc5920c58, "kmem_cache_destroy" },
	{ 0xb5fc8f7b, "sock_init_data" },
	{ 0xcf4b0f2, "register_pernet_device" },
	{ 0x6760ebc5, "sockfd_lookup" },
	{ 0x5446b31a, "strp_init" },
	{ 0xcca9729c, "strp_unpause" },
	{ 0x8f00cda, "csum_and_copy_from_iter_full" },
	{ 0xdb1d5e89, "seq_puts" },
	{ 0x5403e9b6, "strp_data_ready" },
	{ 0x64aff8b2, "sock_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xa39d69af, "proc_create_net_single" },
	{ 0xb177d101, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x6c2ba262, "sock_no_getname" },
	{ 0xaff55470, "remove_proc_entry" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xa843805a, "get_unused_fd_flags" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xa58219eb, "sock_rfree" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x9c3a530d, "skb_unlink" },
	{ 0x7a688d36, "sock_no_mmap" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x5674c4f5, "sk_wait_data" },
	{ 0xb1e6abd1, "sock_no_socketpair" },
	{ 0xb92ea046, "unregister_pernet_subsys" },
	{ 0xac6d0785, "strp_check_rcv" },
	{ 0x80197bfb, "sk_alloc" },
	{ 0x6006847, "current_task" },
	{ 0xbc3a7fc8, "skb_copy_datagram_iter" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x3fd1ac7, "sock_no_bind" },
	{ 0xf83fd03a, "lock_sock_nested" },
	{ 0x3d117aa8, "unregister_pernet_device" },
	{ 0x7c2535de, "sk_stream_wait_memory" },
	{ 0xbd2908e6, "strp_done" },
	{ 0x65f40752, "sock_no_listen" },
	{ 0x48c22258, "__sk_mem_reclaim" },
	{ 0xcfba4f97, "kmem_cache_free" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xe0d91def, "sock_no_accept" },
	{ 0x3bcbf347, "sk_free" },
	{ 0xa164179, "fput" },
	{ 0xf84bd6ee, "bpf_stats_enabled_key" },
	{ 0xb64f81a0, "sock_no_shutdown" },
	{ 0xb0f5e59f, "bpf_prog_get_type_dev" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xa887171f, "skb_queue_tail" },
	{ 0xec60789c, "proto_register" },
	{ 0xb8ce18a0, "kmem_cache_alloc" },
	{ 0x9ff5e2ef, "_copy_from_iter_full_nocache" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x736da327, "kernel_sendpage" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x108ec659, "datagram_poll" },
	{ 0xc82d7720, "sock_register" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0xb99540a6, "proto_unregister" },
	{ 0x1791c61f, "_copy_from_iter_full" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3a26ed11, "sched_clock" },
	{ 0x88cb6a1c, "register_pernet_subsys" },
	{ 0x3f4547a7, "put_unused_fd" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbae89d96, "proc_create_net_data" },
	{ 0xdfc0113e, "sock_alloc_file" },
	{ 0x68c9553e, "sock_alloc" },
	{ 0x6e1972e5, "__sk_mem_schedule" },
	{ 0xb89eea8e, "sk_stream_error" },
	{ 0x5274cc60, "kmem_cache_create" },
	{ 0x6e85d14b, "strp_stop" },
	{ 0x6b347276, "__module_get" },
	{ 0x8080c17, "sock_no_connect" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x9b3916d3, "skb_splice_bits" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x1924f57c, "fd_install" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0xc6fa2f0f, "skb_dequeue" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x9835b6b6, "sk_page_frag_refill" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xe6c73091, "bpf_prog_put" },
	{ 0x88db9f48, "__check_object_size" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "AA39BA77A31994E9EEAB809");
