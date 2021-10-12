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
	{ 0x2d3385d3, "system_wq" },
	{ 0x77733870, "skb_queue_head" },
	{ 0x1749a360, "hid_add_device" },
	{ 0xb5fc8f7b, "sock_init_data" },
	{ 0x8b91e066, "hid_ignore" },
	{ 0x53b954a2, "up_read" },
	{ 0xb8cc585b, "kernel_sendmsg" },
	{ 0x6760ebc5, "sockfd_lookup" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x3eeb836, "sock_no_setsockopt" },
	{ 0x74bfc54c, "hid_parse_report" },
	{ 0x8552971b, "sock_no_getsockopt" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x6c2ba262, "sock_no_getname" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x1d3afb3d, "bt_sock_register" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xdd64e639, "strscpy" },
	{ 0xfb2b6907, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x155a6f99, "hid_input_report" },
	{ 0x668b19a1, "down_read" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x718b8b7, "bt_info" },
	{ 0x47e7fcaa, "__pskb_pull_tail" },
	{ 0xf8c679e2, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x7a688d36, "sock_no_mmap" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xd5e470cd, "sock_no_recvmsg" },
	{ 0x710dd424, "bt_sock_unlink" },
	{ 0xeaac1e08, "skb_queue_purge" },
	{ 0xb1e6abd1, "sock_no_socketpair" },
	{ 0xbc6e4b39, "l2cap_conn_put" },
	{ 0x80197bfb, "sk_alloc" },
	{ 0x6006847, "current_task" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc04ab66d, "l2cap_is_socket" },
	{ 0x3fd1ac7, "sock_no_bind" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x65f40752, "sock_no_listen" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xe0d91def, "sock_no_accept" },
	{ 0x3bcbf347, "sk_free" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x8fea24bd, "bt_sock_unregister" },
	{ 0x9b553753, "skb_pull" },
	{ 0xce807a25, "up_write" },
	{ 0x78381292, "init_net" },
	{ 0x57bc19d2, "down_write" },
	{ 0xa164179, "fput" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xb64f81a0, "sock_no_shutdown" },
	{ 0x24639291, "bt_sock_link" },
	{ 0xa887171f, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0xec60789c, "proto_register" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0xfb0c6b14, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4ce68b52, "input_register_device" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0xb99540a6, "proto_unregister" },
	{ 0x4561d816, "l2cap_register_user" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7974e61a, "__module_put_and_exit" },
	{ 0x130b568, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8135f4a4, "hid_destroy_device" },
	{ 0xf9958798, "hid_allocate_device" },
	{ 0xff16a6d6, "l2cap_conn_get" },
	{ 0x3750a460, "get_device" },
	{ 0x6b347276, "__module_get" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x8080c17, "sock_no_connect" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xabb11fa6, "input_unregister_device" },
	{ 0x4f3735b0, "sock_no_sendmsg" },
	{ 0x3dbbb79, "set_user_nice" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x1ce270de, "bt_procfs_init" },
	{ 0xc6fa2f0f, "skb_dequeue" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x825fa9e0, "bt_procfs_cleanup" },
	{ 0xf812cff6, "memscan" },
	{ 0x8d8f2d7f, "l2cap_unregister_user" },
	{ 0xd05ef65f, "input_allocate_device" },
};

MODULE_INFO(depends, "hid,bluetooth");


MODULE_INFO(srcversion, "E3B2EB459C0A3189B46809F");
