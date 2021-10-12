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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xfdebf4cc, "lbs_resume" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x84edcf0, "__spi_register_driver" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xbb32067a, "lbs_stop_card" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0xc2fad14e, "lbs_start_card" },
	{ 0xfb578fc5, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0x60f6948d, "lbs_queue_event" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x2f6a769e, "lbs_suspend" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x70bf4816, "spi_sync" },
	{ 0x60357797, "lbs_remove_card" },
	{ 0x6bf4ef13, "lbs_process_rxed_packet" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc5ee2db1, "lbs_host_to_card_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3dd2cba8, "lbs_add_card" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xee2514b9, "lbs_get_firmware" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb832485a, "consume_skb" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x5bfa602f, "lbs_notify_command_response" },
};

MODULE_INFO(depends, "libertas");


MODULE_INFO(srcversion, "C0BA2ADDCC4065F2FBB2C6E");
