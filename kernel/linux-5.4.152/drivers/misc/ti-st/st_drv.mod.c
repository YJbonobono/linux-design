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
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xe33370d4, "debugfs_create_dir" },
	{ 0x87a67f49, "single_open" },
	{ 0xa3b53740, "single_release" },
	{ 0x47229b5c, "gpio_request" },
	{ 0xfa719b4c, "gpio_to_desc" },
	{ 0xb177d101, "seq_printf" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6f50547f, "debugfs_remove_recursive" },
	{ 0x5932b0cc, "seq_read" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0xa120d33c, "tty_unregister_ldisc" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfd94814e, "complete_all" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xeaac1e08, "skb_queue_purge" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0xd03c2dea, "tty_ldisc_flush" },
	{ 0x9166fada, "strncpy" },
	{ 0x9d10da1c, "gpiod_direction_output_raw" },
	{ 0x9b553753, "skb_pull" },
	{ 0xa887171f, "skb_queue_tail" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0xdd11b393, "tty_driver_flush_buffer" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe89408aa, "sysfs_notify" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0x7182ebd9, "stop_tty" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xfe990052, "gpio_free" },
	{ 0xcdaf7988, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x9601035f, "request_firmware" },
	{ 0xc6fa2f0f, "skb_dequeue" },
	{ 0x7e838fed, "gpiod_set_raw_value_cansleep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0xdd9a0b52, "tty_register_ldisc" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x9fe09916, "release_firmware" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "AEC16370F398604B404E0D9");
