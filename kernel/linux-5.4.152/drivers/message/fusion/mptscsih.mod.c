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
	{ 0x2d3385d3, "system_wq" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb7964a42, "scsi_change_queue_depth" },
	{ 0x66797b9b, "scsi_block_requests" },
	{ 0x3420b911, "mpt_set_taskmgmt_in_progress_flag" },
	{ 0xad446ad2, "mpt_HardResetHandler" },
	{ 0x1db69593, "scsi_unblock_requests" },
	{ 0xb177d101, "seq_printf" },
	{ 0x574259aa, "mpt_get_msg_frame" },
	{ 0x87b8798d, "sg_next" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x9a94da08, "mpt_halt_firmware" },
	{ 0xf9453a86, "scsi_print_command" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xdf032d92, "mpt_raid_phys_disk_get_num_paths" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x295bafdb, "mpt_send_handshake_request" },
	{ 0xaaef1481, "sdev_prefix_printk" },
	{ 0x502108d0, "mpt_fwfault_debug" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x7e20c004, "scsi_host_put" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x88a32e80, "mpt_put_msg_frame" },
	{ 0x98b2af42, "mpt_resume" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbe09817a, "mpt_Soft_Hard_ResetHandler" },
	{ 0xed539080, "mpt_GetIocState" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0x63ff0b2c, "mpt_raid_phys_disk_pg1" },
	{ 0x37a0cba, "kfree" },
	{ 0x8b6e0761, "scsi_dma_unmap" },
	{ 0x7aaffd1c, "mpt_print_ioc_summary" },
	{ 0x55bb6508, "blk_queue_dma_alignment" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8d3ff91, "mpt_free_msg_frame" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x3b8f240b, "mpt_suspend" },
	{ 0xc2339c92, "mpt_detach" },
	{ 0x5415669c, "mpt_clear_taskmgmt_in_progress_flag" },
	{ 0x372f4ca1, "scsi_dma_map" },
	{ 0x3de689cc, "mpt_put_msg_frame_hi_pri" },
};

MODULE_INFO(depends, "mptbase");


MODULE_INFO(srcversion, "019341844F87731F5DC96D6");
