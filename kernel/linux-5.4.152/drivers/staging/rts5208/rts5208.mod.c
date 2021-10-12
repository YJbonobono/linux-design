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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0x48415adb, "dma_direct_unmap_sg" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x8133c67d, "complete_and_exit" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x6c3d866c, "scsi_host_alloc" },
	{ 0xe5501118, "pcim_enable_device" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x975ee610, "pci_read_config_byte" },
	{ 0xfef7d47b, "scsi_add_host_with_dma" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0x56470118, "__warn_printk" },
	{ 0x87b8798d, "sg_next" },
	{ 0xfa88260f, "pci_write_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x459f8be2, "pci_enable_wake" },
	{ 0x999e8297, "vfree" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xfb2b6907, "kthread_create_on_node" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x3eb7f0d8, "pci_restore_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x6006847, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x262e823a, "wait_for_completion_interruptible" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9166fada, "strncpy" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0xa4250e5, "scsi_scan_host" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x7e20c004, "scsi_host_put" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x313eb271, "pci_enable_msi" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x76f26366, "pci_intx" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0x130b568, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x430143ad, "param_ops_byte" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x33001bea, "pci_set_power_state" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0xc702dbb2, "dma_direct_map_sg" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0x2cf4cab4, "pci_disable_msi" },
	{ 0x55bb6508, "blk_queue_dma_alignment" },
	{ 0xedc03953, "iounmap" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x7b8edf3f, "scsi_remove_host" },
	{ 0xe8a728c7, "dmam_alloc_attrs" },
	{ 0x29361773, "complete" },
	{ 0x7f7a5f7f, "pci_choose_state" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x83b05a16, "param_ops_uint" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xd8f1dfb6, "pci_save_state" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010ECd00005208sv*sd*bcFFsc*i*");
MODULE_ALIAS("pci:v000010ECd00005288sv*sd*bcFFsc*i*");

MODULE_INFO(srcversion, "8F0413750DD26BD398E4AC0");
