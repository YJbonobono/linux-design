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
	{ 0x73f53a7c, "pcmcia_request_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x85bd1608, "__request_region" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5917c046, "pcmcia_enable_device" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x77358855, "iomem_resource" },
	{ 0x235d07de, "ppp_unit_number" },
	{ 0xdfcd882, "pcmcia_register_driver" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x4d3c3d6, "pcmcia_reset_card" },
	{ 0x56f7cf2d, "tty_register_driver" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xaa2eda5a, "ppp_unregister_channel" },
	{ 0xe1f109b, "put_tty_driver" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc0ce234d, "pcmcia_request_io" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x61991828, "tty_set_operations" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x5710ff65, "ppp_output_wakeup" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x13bad2cc, "tty_port_register_device" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x521ce967, "tty_port_init" },
	{ 0x5a419e39, "pcmcia_request_window" },
	{ 0xb6c49cb2, "tty_insert_flip_string_fixed_flag" },
	{ 0xf5dcbe39, "tty_port_destroy" },
	{ 0x581cf443, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xe220f939, "tty_vhangup" },
	{ 0x9b553753, "skb_pull" },
	{ 0xfb2ef679, "pcmcia_loop_config" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x194d9483, "tty_unregister_device" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x32f0ff4e, "tty_unregister_driver" },
	{ 0xbf3ccdd8, "tty_hangup" },
	{ 0xd81bec8c, "tty_perform_flush" },
	{ 0xc39ba767, "__tty_alloc_driver" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x18255e23, "ppp_input" },
	{ 0x72061f63, "pcmcia_map_mem_page" },
	{ 0xedc03953, "iounmap" },
	{ 0xe1c838c3, "pcmcia_unregister_driver" },
	{ 0x767d41f8, "tty_flip_buffer_push" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xcf39e1e6, "ppp_register_channel" },
	{ 0x6a455cb3, "ppp_channel_index" },
	{ 0x52acc661, "pcmcia_disable_device" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x13c49cc2, "_copy_from_user" },
};

MODULE_INFO(depends, "pcmcia,pcmcia_core");

MODULE_ALIAS("pcmcia:m02F2c0100f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m02F2c0200f*fn*pfn*pa*pb*pc*pd*");

MODULE_INFO(srcversion, "1A8E918373F3B472E755D9A");
