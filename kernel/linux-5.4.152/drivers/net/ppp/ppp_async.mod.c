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
	{ 0xa120d33c, "tty_unregister_ldisc" },
	{ 0xdd9a0b52, "tty_register_ldisc" },
	{ 0xeaac1e08, "skb_queue_purge" },
	{ 0xaa2eda5a, "ppp_unregister_channel" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x9eab8d85, "_raw_write_lock_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0xcf39e1e6, "ppp_register_channel" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xd8e9d5, "tty_mode_ioctl" },
	{ 0xf21724d8, "n_tty_ioctl_helper" },
	{ 0x6a455cb3, "ppp_channel_index" },
	{ 0x235d07de, "ppp_unit_number" },
	{ 0xc5850110, "printk" },
	{ 0x9b553753, "skb_pull" },
	{ 0x7182ebd9, "stop_tty" },
	{ 0x40216a4c, "start_tty" },
	{ 0xa887171f, "skb_queue_tail" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0x40a09deb, "skb_trim" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x3ddeb321, "tty_unthrottle" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0x5710ff65, "ppp_output_wakeup" },
	{ 0xde6547e8, "ppp_input_error" },
	{ 0xc6fa2f0f, "skb_dequeue" },
	{ 0x18255e23, "ppp_input" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb832485a, "consume_skb" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x7f03b6a9, "crc_ccitt_table" },
	{ 0x29361773, "complete" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "BC6F52804B158380AAFA03F");
