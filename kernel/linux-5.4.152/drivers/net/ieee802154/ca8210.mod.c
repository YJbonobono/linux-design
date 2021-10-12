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
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0x84edcf0, "__spi_register_driver" },
	{ 0xd2c74e81, "ieee802154_hdr_peek_addrs" },
	{ 0xa81af661, "ieee802154_register_hw" },
	{ 0xebdb1357, "clk_register_fixed_rate" },
	{ 0x496287f0, "gpiod_unexport" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xfe990052, "gpio_free" },
	{ 0xa9cff0a9, "gpiod_to_irq" },
	{ 0x9d10da1c, "gpiod_direction_output_raw" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x82ee191e, "debugfs_create_symlink" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x4817b006, "ieee802154_alloc_hw" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x5c1ba4d1, "_dev_notice" },
	{ 0x5ce926f6, "ieee802154_wake_queue" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x9dd70d96, "ieee802154_xmit_complete" },
	{ 0x7e21bbe, "ieee802154_rx_irqsafe" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xc4332d3b, "ieee802154_hdr_push" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x2ddbd4f1, "debugfs_remove" },
	{ 0xeac25319, "ieee802154_free_hw" },
	{ 0x3d5d6c8, "ieee802154_unregister_hw" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x7757b51a, "clk_unregister" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdbdbe94d, "gpiod_set_raw_value" },
	{ 0xfa719b4c, "gpio_to_desc" },
	{ 0x37a0cba, "kfree" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x29361773, "complete" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0xc5850110, "printk" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x485f8d08, "spi_async" },
	{ 0x69acdf38, "memcpy" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x86a998c8, "_dev_crit" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ieee802154,mac802154");

MODULE_ALIAS("of:N*T*Ccascoda,ca8210");
MODULE_ALIAS("of:N*T*Ccascoda,ca8210C*");

MODULE_INFO(srcversion, "8273E27C2F8C5E35856A191");
