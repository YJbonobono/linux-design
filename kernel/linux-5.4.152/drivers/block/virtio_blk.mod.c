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
	{ 0x83b05a16, "param_ops_uint" },
	{ 0xd201139b, "unregister_virtio_driver" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x3b78d396, "register_virtio_driver" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x96333815, "blk_queue_physical_block_size" },
	{ 0x6cb44813, "blk_queue_alignment_offset" },
	{ 0xbac71768, "blk_queue_io_min" },
	{ 0x18abba37, "blk_queue_io_opt" },
	{ 0x6d26156c, "blk_queue_flag_set" },
	{ 0xe65ccce1, "blk_queue_max_discard_segments" },
	{ 0xe6a551a4, "blk_queue_max_discard_sectors" },
	{ 0x4fdc9b13, "blk_queue_max_write_zeroes_sectors" },
	{ 0x19f1f7cc, "set_disk_ro" },
	{ 0x9f4af172, "blk_queue_logical_block_size" },
	{ 0xb0e602eb, "memmove" },
	{ 0x419a0a2a, "device_add_disk" },
	{ 0xe8c1e50b, "blk_queue_max_segment_size" },
	{ 0x97211d95, "virtio_max_dma_size" },
	{ 0x903cda76, "blk_queue_max_hw_sectors" },
	{ 0xc2312e2, "blk_queue_max_segments" },
	{ 0x5108542d, "blk_mq_init_queue" },
	{ 0xef247d9d, "blk_mq_alloc_tag_set" },
	{ 0x63587d8d, "__alloc_disk_node" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x18cbf39, "blk_mq_unquiesce_queue" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x66cfd587, "kobject_uevent_env" },
	{ 0x5c1ba4d1, "_dev_notice" },
	{ 0x48a91171, "string_get_size" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x31e598d5, "blk_mq_stop_hw_queue" },
	{ 0xc6e8543, "virtqueue_kick" },
	{ 0x5493de45, "virtqueue_add_sgs" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x58027eea, "blk_rq_map_sg" },
	{ 0x79054c66, "blk_mq_start_request" },
	{ 0x169938c1, "__sysfs_match_string" },
	{ 0x2b547850, "revalidate_disk" },
	{ 0x146eb90a, "blk_queue_write_cache" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xc221a382, "virtio_check_driver_offered_feature" },
	{ 0x84502a47, "blk_status_to_errno" },
	{ 0x5232fe69, "blk_execute_rq" },
	{ 0x754d539c, "strlen" },
	{ 0xfe1643a0, "blk_put_request" },
	{ 0x672312a, "blk_rq_map_kern" },
	{ 0x9cb4da82, "blk_get_request" },
	{ 0x861cd726, "put_disk" },
	{ 0x954b8adc, "blk_mq_free_tag_set" },
	{ 0x77bb09b3, "blk_cleanup_queue" },
	{ 0xcda23bf1, "del_gendisk" },
	{ 0xffb7c514, "ida_free" },
	{ 0x6ef9b38c, "virtqueue_notify" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xd45006d1, "virtqueue_kick_prepare" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x23045299, "blk_mq_end_request" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x5cff295, "blk_mq_virtio_map_queues" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x37a0cba, "kfree" },
	{ 0x8a4ae873, "blk_mq_quiesce_queue" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa6a599f8, "blk_mq_start_stopped_hw_queues" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x8c94dae0, "virtqueue_enable_cb" },
	{ 0xef11476a, "virtqueue_is_broken" },
	{ 0x28e28bd9, "virtqueue_get_buf" },
	{ 0x6edeeb13, "blk_mq_complete_request" },
	{ 0xd8029dd2, "virtqueue_disable_cb" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("virtio:d00000002v*");

MODULE_INFO(srcversion, "82E8386DF4CB310A11C9BDF");
