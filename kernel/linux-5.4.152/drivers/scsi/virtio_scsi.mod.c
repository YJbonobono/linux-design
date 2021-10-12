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
	{ 0xd201139b, "unregister_virtio_driver" },
	{ 0xc5920c58, "kmem_cache_destroy" },
	{ 0x9034a696, "mempool_destroy" },
	{ 0x3b78d396, "register_virtio_driver" },
	{ 0x1953c958, "mempool_create" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x5274cc60, "kmem_cache_create" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xfef7d47b, "scsi_add_host_with_dma" },
	{ 0xab2ad981, "virtqueue_get_vring_size" },
	{ 0x6c3d866c, "scsi_host_alloc" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x69acdf38, "memcpy" },
	{ 0x1fcf831c, "blk_mq_unique_tag" },
	{ 0xc5850110, "printk" },
	{ 0x57e3d4ed, "scsi_rescan_device" },
	{ 0x3568c378, "scsi_add_device" },
	{ 0xa4250e5, "scsi_scan_host" },
	{ 0x37a0cba, "kfree" },
	{ 0xaa1ff60, "__scsi_execute" },
	{ 0x6355bfd1, "__scsi_iterate_devices" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xd32f90d1, "scsi_remove_device" },
	{ 0x8ea97437, "scsi_device_put" },
	{ 0x83bb5552, "scsi_device_lookup" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0xaaef1481, "sdev_prefix_printk" },
	{ 0xff414f9b, "scmd_printk" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x7e20c004, "scsi_host_put" },
	{ 0x7b8edf3f, "scsi_remove_host" },
	{ 0xc221a382, "virtio_check_driver_offered_feature" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xd4034828, "system_freezable_wq" },
	{ 0x5493de45, "virtqueue_add_sgs" },
	{ 0x6ef9b38c, "virtqueue_notify" },
	{ 0xd45006d1, "virtqueue_kick_prepare" },
	{ 0xb7964a42, "scsi_change_queue_depth" },
	{ 0x5cff295, "blk_mq_virtio_map_queues" },
	{ 0xc6e8543, "virtqueue_kick" },
	{ 0xfbfc3ba, "virtqueue_add_inbuf" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x29361773, "complete" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x8c94dae0, "virtqueue_enable_cb" },
	{ 0xef11476a, "virtqueue_is_broken" },
	{ 0x28e28bd9, "virtqueue_get_buf" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0xd8029dd2, "virtqueue_disable_cb" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("virtio:d00000008v*");

MODULE_INFO(srcversion, "D1D8AE3E01EC734EE4288F5");
