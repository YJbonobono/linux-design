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
	{ 0xfd205417, "no_llseek" },
	{ 0x610b257e, "mpt_reset_deregister" },
	{ 0xe6c1e126, "mpt_event_deregister" },
	{ 0x74a0134a, "mpt_device_driver_deregister" },
	{ 0xd6744089, "mpt_event_register" },
	{ 0x16981a49, "mpt_reset_register" },
	{ 0x981efe92, "mpt_deregister" },
	{ 0x93082893, "misc_deregister" },
	{ 0xde456b20, "mpt_register" },
	{ 0x8eb423bd, "misc_register" },
	{ 0x4cd3f3b8, "mpt_device_driver_register" },
	{ 0xad446ad2, "mpt_HardResetHandler" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x9166fada, "strncpy" },
	{ 0x8bdb9e8e, "mpt_alloc_fw_memory" },
	{ 0xfbb4e50e, "mpt_free_fw_memory" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xd2ce2097, "mpt_verify_adapter" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x6355bfd1, "__scsi_iterate_devices" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x754d539c, "strlen" },
	{ 0x88a32e80, "mpt_put_msg_frame" },
	{ 0xed539080, "mpt_GetIocState" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x5cc765f2, "mpt_config" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x9a94da08, "mpt_halt_firmware" },
	{ 0xbe09817a, "mpt_Soft_Hard_ResetHandler" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x502108d0, "mpt_fwfault_debug" },
	{ 0x3de689cc, "mpt_put_msg_frame_hi_pri" },
	{ 0x8d3ff91, "mpt_free_msg_frame" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x295bafdb, "mpt_send_handshake_request" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x574259aa, "mpt_get_msg_frame" },
	{ 0x3420b911, "mpt_set_taskmgmt_in_progress_flag" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xfe03915b, "fasync_helper" },
	{ 0xdd805159, "ioc_list" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x29361773, "complete" },
	{ 0x5415669c, "mpt_clear_taskmgmt_in_progress_flag" },
	{ 0xc5850110, "printk" },
	{ 0x92eac3e4, "kill_fasync" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mptbase");


MODULE_INFO(srcversion, "FD0EDD7A1D4E32B40E16283");
