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
	{ 0xa24f23d8, "__request_module" },
	{ 0x7e83fb8, "device_remove_file" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb5fc8f7b, "sock_init_data" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0xa41f47ba, "proc_create_seq_private" },
	{ 0x754d539c, "strlen" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x5fb22c8e, "send_sig" },
	{ 0x9951c67d, "_proc_mkdir" },
	{ 0x6d008ed6, "sock_gettstamp" },
	{ 0xdb1d5e89, "seq_puts" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0xb177d101, "seq_printf" },
	{ 0xaff55470, "remove_proc_entry" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x46dab489, "skb_recv_datagram" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x7181db30, "atomic_notifier_chain_unregister" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x21271fd0, "copy_user_enhanced_fast_string" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xb09130b0, "sock_no_sendpage" },
	{ 0x7a688d36, "sock_no_mmap" },
	{ 0xd3752c27, "atomic_notifier_call_chain" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xfd28534, "PDE_DATA" },
	{ 0xb8e7ce2c, "__put_user_8" },
	{ 0xeaac1e08, "skb_queue_purge" },
	{ 0xfb578fc5, "memset" },
	{ 0xb1e6abd1, "sock_no_socketpair" },
	{ 0xb2f0f1ff, "device_del" },
	{ 0xe5a01321, "device_register" },
	{ 0x80197bfb, "sk_alloc" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x6006847, "current_task" },
	{ 0xbc3a7fc8, "skb_copy_datagram_iter" },
	{ 0xc5850110, "printk" },
	{ 0xf83fd03a, "lock_sock_nested" },
	{ 0x186ea1fd, "class_unregister" },
	{ 0x1f199d24, "copy_user_generic_string" },
	{ 0x1208a414, "seq_putc" },
	{ 0x65f40752, "sock_no_listen" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xe0d91def, "sock_no_accept" },
	{ 0xddba33f8, "sock_wake_async" },
	{ 0x3bcbf347, "sk_free" },
	{ 0x13caabab, "noop_llseek" },
	{ 0x78381292, "init_net" },
	{ 0x94567929, "__class_register" },
	{ 0xa976fc36, "device_create_file" },
	{ 0xecdcabd2, "copy_user_generic_unrolled" },
	{ 0xe1f51ae2, "__sock_recv_ts_and_drops" },
	{ 0x1c8f4c84, "module_put" },
	{ 0xa887171f, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0xec60789c, "proto_register" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0xfb0c6b14, "put_device" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc82d7720, "sock_register" },
	{ 0x1000e51, "schedule" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x6d334118, "__get_user_8" },
	{ 0xb99540a6, "proto_unregister" },
	{ 0x1791c61f, "_copy_from_iter_full" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x9eab8d85, "_raw_write_lock_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xe66a47be, "remove_proc_subtree" },
	{ 0x4297c00d, "proc_create_data" },
	{ 0x37a0cba, "kfree" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xbffde8ec, "compat_alloc_user_space" },
	{ 0x96848186, "scnprintf" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc6fa2f0f, "skb_dequeue" },
	{ 0xf346231f, "seq_list_start_head" },
	{ 0x8f9c199c, "__get_user_2" },
	{ 0xe7d4daac, "seq_list_next" },
	{ 0xb832485a, "consume_skb" },
	{ 0x28db880d, "dev_set_name" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x64a5ffa3, "try_module_get" },
	{ 0xaef989e6, "skb_free_datagram" },
	{ 0x719e0e44, "add_uevent_var" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "FC78AF5FACF3800643605C7");
