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
	{ 0x2f2c95c4, "flush_work" },
	{ 0xe3b66737, "class_find_device" },
	{ 0x77733870, "skb_queue_head" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf11f616d, "release_sock" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb5fc8f7b, "sock_init_data" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x754d539c, "strlen" },
	{ 0xe25ee9d3, "_raw_write_lock_irqsave" },
	{ 0x3eeb836, "sock_no_setsockopt" },
	{ 0x8552971b, "sock_no_getsockopt" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xfd205417, "no_llseek" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0xfbbb3727, "skb_copy" },
	{ 0x6c2ba262, "sock_no_getname" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x74a17a79, "sock_queue_rcv_skb" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x46dab489, "skb_recv_datagram" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x7769ac9c, "skb_realloc_headroom" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xfb2b6907, "kthread_create_on_node" },
	{ 0x6ee078b2, "nonseekable_open" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x40a09deb, "skb_trim" },
	{ 0x1c1b9f8e, "_raw_write_unlock_irqrestore" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x7a688d36, "sock_no_mmap" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xd5e470cd, "sock_no_recvmsg" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x8eb423bd, "misc_register" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xeaac1e08, "skb_queue_purge" },
	{ 0xb1e6abd1, "sock_no_socketpair" },
	{ 0xb2f0f1ff, "device_del" },
	{ 0x80197bfb, "sk_alloc" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x6006847, "current_task" },
	{ 0xbc3a7fc8, "skb_copy_datagram_iter" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xf83fd03a, "lock_sock_nested" },
	{ 0x186ea1fd, "class_unregister" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9166fada, "strncpy" },
	{ 0x65f40752, "sock_no_listen" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0x581cf443, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xe0d91def, "sock_no_accept" },
	{ 0x3bcbf347, "sk_free" },
	{ 0x24d273d1, "add_timer" },
	{ 0x335e4ce6, "device_add" },
	{ 0x9b553753, "skb_pull" },
	{ 0x94567929, "__class_register" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xb64f81a0, "sock_no_shutdown" },
	{ 0x479706e2, "class_for_each_device" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x1c8f4c84, "module_put" },
	{ 0xa887171f, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0x736b5662, "_raw_read_lock_irqsave" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0xfb0c6b14, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x108ec659, "datagram_poll" },
	{ 0xc82d7720, "sock_register" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x6b853d06, "ns_to_kernel_old_timeval" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x1791c61f, "_copy_from_iter_full" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa16c8613, "_raw_read_unlock_irqrestore" },
	{ 0xf7a8fac2, "put_cmsg" },
	{ 0x130b568, "wake_up_process" },
	{ 0x2fbee34a, "device_rename" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x6b347276, "__module_get" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x8080c17, "sock_no_connect" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x4f3735b0, "sock_no_sendmsg" },
	{ 0xdc90c7cb, "device_initialize" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc6fa2f0f, "skb_dequeue" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0xb832485a, "consume_skb" },
	{ 0x28db880d, "dev_set_name" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x83b05a16, "param_ops_uint" },
	{ 0x93082893, "misc_deregister" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe914e41e, "strcpy" },
	{ 0xaef989e6, "skb_free_datagram" },
	{ 0x719e0e44, "add_uevent_var" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "86A83EF894EB62CEFB38F97");
