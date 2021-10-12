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
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7431107b, "pci_write_config_word" },
	{ 0x52dd0c09, "param_get_int" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0x975ee610, "pci_read_config_byte" },
	{ 0x92d3725, "proc_create_single_data" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x5727a7af, "pci_stop_and_remove_bus_device_locked" },
	{ 0x40355fb5, "pci_get_slot" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xb177d101, "seq_printf" },
	{ 0xaff55470, "remove_proc_entry" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xfa88260f, "pci_write_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x459f8be2, "pci_enable_wake" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x58af3961, "param_set_int" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0xfb2b6907, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf83f6a04, "dma_get_required_mask" },
	{ 0x89dec815, "pci_set_master" },
	{ 0xfb578fc5, "memset" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x524f0ed8, "proc_mkdir" },
	{ 0x3eb7f0d8, "pci_restore_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xf1e046cc, "panic" },
	{ 0x1208a414, "seq_putc" },
	{ 0x30252ab, "pci_read_config_word" },
	{ 0x5792f848, "strlcpy" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x313eb271, "pci_enable_msi" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x3bee70e, "pci_select_bars" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x130b568, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x33001bea, "pci_set_power_state" },
	{ 0x37a0cba, "kfree" },
	{ 0x2cf4cab4, "pci_disable_msi" },
	{ 0xedc03953, "iounmap" },
	{ 0x5a470173, "pci_dev_put" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7f7a5f7f, "pci_choose_state" },
	{ 0x6a53c86d, "pci_enable_device_mem" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x6e1be8c6, "pci_release_selected_regions" },
	{ 0x6c37202d, "pci_request_selected_regions" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xd8f1dfb6, "pci_save_state" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "37AABA5C5445C28B07652F3");
