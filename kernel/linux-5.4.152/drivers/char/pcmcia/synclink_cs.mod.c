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
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x6e724099, "param_array_ops" },
	{ 0x7a6a041, "hdlc_start_xmit" },
	{ 0xe1c838c3, "pcmcia_unregister_driver" },
	{ 0xe1f109b, "put_tty_driver" },
	{ 0x32f0ff4e, "tty_unregister_driver" },
	{ 0xdfcd882, "pcmcia_register_driver" },
	{ 0x56f7cf2d, "tty_register_driver" },
	{ 0x61991828, "tty_set_operations" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xc39ba767, "__tty_alloc_driver" },
	{ 0xf849acb0, "tty_port_block_til_ready" },
	{ 0x83cbb6f2, "hdlc_open" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x13bad2cc, "tty_port_register_device" },
	{ 0xe296672d, "register_netdev" },
	{ 0xc4434a4c, "alloc_hdlcdev" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5917c046, "pcmcia_enable_device" },
	{ 0x73f53a7c, "pcmcia_request_irq" },
	{ 0xfb2ef679, "pcmcia_loop_config" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x521ce967, "tty_port_init" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x1000e51, "schedule" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x65e8720c, "hdlc_ioctl" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0x767d41f8, "tty_flip_buffer_push" },
	{ 0xce50481c, "__tty_insert_flip_char" },
	{ 0x405ffe8c, "do_SAK" },
	{ 0xbf3ccdd8, "tty_hangup" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2cb0a0d9, "tty_buffer_request_room" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb832485a, "consume_skb" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb68a80b3, "tty_ldisc_deref" },
	{ 0x3f293df0, "tty_ldisc_ref" },
	{ 0x6833822f, "netif_rx" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0xd7311151, "tty_port_tty_set" },
	{ 0x14f8875e, "tty_port_close_end" },
	{ 0xd03c2dea, "tty_ldisc_flush" },
	{ 0xd91c385c, "tty_port_close_start" },
	{ 0x509612e2, "tty_port_hangup" },
	{ 0x17bcdfa8, "hdlc_close" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x6006847, "current_task" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xb177d101, "seq_printf" },
	{ 0xc0ce234d, "pcmcia_request_io" },
	{ 0xaebb54bc, "tty_kref_put" },
	{ 0x56f3cf30, "tty_port_tty_get" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xe1c05272, "tty_wakeup" },
	{ 0xf5dcbe39, "tty_port_destroy" },
	{ 0x30c76023, "free_netdev" },
	{ 0xd23a93ef, "unregister_hdlc_device" },
	{ 0x194d9483, "tty_unregister_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x52acc661, "pcmcia_disable_device" },
	{ 0xc5850110, "printk" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hdlc,pcmcia");

MODULE_ALIAS("pcmcia:m02C5c0050f*fn*pfn*pa*pb*pc*pd*");

MODULE_INFO(srcversion, "7A8036AE83A3C7C4DD67332");
