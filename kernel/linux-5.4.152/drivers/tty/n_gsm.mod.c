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
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x32f0ff4e, "tty_unregister_driver" },
	{ 0xe1f109b, "put_tty_driver" },
	{ 0x56f7cf2d, "tty_register_driver" },
	{ 0x61991828, "tty_set_operations" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xa120d33c, "tty_unregister_ldisc" },
	{ 0xc39ba767, "__tty_alloc_driver" },
	{ 0xdd9a0b52, "tty_register_ldisc" },
	{ 0x30a7535f, "tty_register_device" },
	{ 0x6833822f, "netif_rx" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0x194d9483, "tty_unregister_device" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xf21724d8, "n_tty_ioctl_helper" },
	{ 0xa2a04a41, "tty_port_lower_dtr_rts" },
	{ 0x14f8875e, "tty_port_close_end" },
	{ 0xd91c385c, "tty_port_close_start" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xe296672d, "register_netdev" },
	{ 0x9166fada, "strncpy" },
	{ 0x5193da32, "alloc_netdev_mqs" },
	{ 0xc6cbbc89, "capable" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x77733870, "skb_queue_head" },
	{ 0xb6c49cb2, "tty_insert_flip_string_fixed_flag" },
	{ 0xaebb54bc, "tty_kref_put" },
	{ 0xe1c05272, "tty_wakeup" },
	{ 0x56f3cf30, "tty_port_tty_get" },
	{ 0x767d41f8, "tty_flip_buffer_push" },
	{ 0xbf3ccdd8, "tty_hangup" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2d94bf1f, "tty_port_install" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x784ba9be, "tty_port_put" },
	{ 0x6006847, "current_task" },
	{ 0x30c76023, "free_netdev" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x521ce967, "tty_port_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xce50481c, "__tty_insert_flip_char" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xa887171f, "skb_queue_tail" },
	{ 0x49e1cb7e, "skb_dequeue_tail" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0x9b553753, "skb_pull" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf849acb0, "tty_port_block_til_ready" },
	{ 0xd7311151, "tty_port_tty_set" },
	{ 0x509612e2, "tty_port_hangup" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc5850110, "printk" },
	{ 0xef25e439, "tty_write_room" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0x41808cea, "tty_hung_up_p" },
	{ 0x56470118, "__warn_printk" },
	{ 0xa7e3398d, "tty_name" },
	{ 0xaaab2511, "tty_port_tty_hangup" },
	{ 0xc6fa2f0f, "skb_dequeue" },
	{ 0xb832485a, "consume_skb" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x30e74134, "tty_termios_copy_hw" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xf96cabf, "tty_port_tty_wakeup" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x69acdf38, "memcpy" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x37a0cba, "kfree" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "4AC998A6E973DA4F33983DC");
