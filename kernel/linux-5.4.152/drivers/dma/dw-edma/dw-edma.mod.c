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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0xf72c8ce3, "vchan_tx_submit" },
	{ 0xa91f3b9a, "vchan_find_desc" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x8512b0e4, "__pm_runtime_idle" },
	{ 0xe33370d4, "debugfs_create_dir" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0xfd205417, "no_llseek" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x87b8798d, "sg_next" },
	{ 0x22a77893, "dma_async_tx_descriptor_init" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0x6f50547f, "debugfs_remove_recursive" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5fc3eb3a, "dma_async_device_register" },
	{ 0xeed4bd, "debugfs_create_u32" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x7bf29cd, "get_cached_msi_msg" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xeaac5f23, "vchan_tx_desc_free" },
	{ 0xfbfa3abe, "simple_attr_release" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xebb7a8a2, "debugfs_create_file_unsafe" },
	{ 0xd0f032e1, "debugfs_attr_read" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4b85434f, "pci_irq_vector" },
	{ 0x37a0cba, "kfree" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xbfc46c6c, "debugfs_create_u16" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x323ddd2a, "dma_async_device_unregister" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xd2278d5b, "debugfs_attr_write" },
	{ 0x541745d, "simple_attr_open" },
	{ 0x172ddb05, "vchan_init" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "virt-dma");


MODULE_INFO(srcversion, "5640DB24C25FB5A3443730A");
