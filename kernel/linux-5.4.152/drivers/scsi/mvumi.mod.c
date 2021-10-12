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
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x637f23f, "pci_read_config_dword" },
	{ 0xfb2b6907, "kthread_create_on_node" },
	{ 0xfef7d47b, "scsi_add_host_with_dma" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x6c3d866c, "scsi_host_alloc" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0x3eb7f0d8, "pci_restore_state" },
	{ 0x459f8be2, "pci_enable_wake" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x130b568, "wake_up_process" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x69acdf38, "memcpy" },
	{ 0x48415adb, "dma_direct_unmap_sg" },
	{ 0x8112b3d2, "scsi_build_sense_buffer" },
	{ 0x87b8798d, "sg_next" },
	{ 0xc702dbb2, "dma_direct_map_sg" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0x1000e51, "schedule" },
	{ 0x57e3d4ed, "scsi_rescan_device" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x6006847, "current_task" },
	{ 0x59771ec9, "pci_write_config_dword" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0xc5850110, "printk" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0x7e20c004, "scsi_host_put" },
	{ 0x7b8edf3f, "scsi_remove_host" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xce2526b0, "kthread_stop" },
	{ 0x33001bea, "pci_set_power_state" },
	{ 0x7f7a5f7f, "pci_choose_state" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0xd8f1dfb6, "pci_save_state" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xff414f9b, "scmd_printk" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0x2f5ace2b, "pci_iomap" },
	{ 0x86cb1fac, "pci_iounmap" },
	{ 0x12a38747, "usleep_range" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf9a482f9, "msleep" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xe484e35f, "ioread32" },
	{ 0x8ea97437, "scsi_device_put" },
	{ 0xd32f90d1, "scsi_remove_device" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x3568c378, "scsi_add_device" },
	{ 0x83bb5552, "scsi_device_lookup" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x37a0cba, "kfree" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001B4Bd00009143sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001B4Bd00009580sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "89176CE19EA25297AC1B395");
