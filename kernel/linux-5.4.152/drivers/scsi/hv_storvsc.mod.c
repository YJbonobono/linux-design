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
	{ 0x65815fbc, "blk_queue_rq_timeout" },
	{ 0x45d246da, "node_to_cpumask_map" },
	{ 0xb7964a42, "scsi_change_queue_depth" },
	{ 0x719fbc2a, "vmbus_sendpacket_mpb_desc" },
	{ 0xd877c7e3, "__hv_pkt_iter_next" },
	{ 0x6c3d866c, "scsi_host_alloc" },
	{ 0xfbad3cf0, "scsi_normalize_sense" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0xfef7d47b, "scsi_add_host_with_dma" },
	{ 0xd32f90d1, "scsi_remove_device" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd0bbf4da, "__vmbus_driver_register" },
	{ 0x87b8798d, "sg_next" },
	{ 0xbad6c25c, "vmbus_set_sc_create_callback" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x7f52778, "hv_pkt_iter_close" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x57e3d4ed, "scsi_rescan_device" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x46a417ca, "vmbus_proto_version" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xa4250e5, "scsi_scan_host" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x6ad863e9, "vmbus_open" },
	{ 0x7e20c004, "scsi_host_put" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8ea97437, "scsi_device_put" },
	{ 0xdd59221a, "fc_release_transport" },
	{ 0x618911fc, "numa_node" },
	{ 0x3568c378, "scsi_add_device" },
	{ 0xd6762310, "scsi_host_get" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8d4ac1bd, "fc_remote_port_delete" },
	{ 0x1000e51, "schedule" },
	{ 0x83bb5552, "scsi_device_lookup" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc1fba954, "scsi_test_unit_ready" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x2dcdb92a, "vmbus_close" },
	{ 0x6355bfd1, "__scsi_iterate_devices" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x39c94d87, "fc_eh_timed_out" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4f84c1c9, "hv_pkt_iter_first" },
	{ 0x8416ee80, "vmbus_sendpacket" },
	{ 0x7aff77a3, "__cpu_present_mask" },
	{ 0x368b9920, "fc_remove_host" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x7b8edf3f, "scsi_remove_host" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x58b9b8ff, "fc_remote_port_add" },
	{ 0xa084f79f, "cpumask_next_wrap" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xf56f804e, "fc_attach_transport" },
	{ 0x3f27ea7e, "scsi_print_sense_hdr" },
	{ 0xb1f27246, "vmbus_driver_unregister" },
};

MODULE_INFO(depends, "hv_vmbus,scsi_transport_fc");

MODULE_ALIAS("vmbus:d96361baa104294db60572e2ffb1dc7f");
MODULE_ALIAS("vmbus:32264132cb86a2449b5c50d1417354f5");
MODULE_ALIAS("vmbus:4acc9b2f6900f34ab76b6fd0be528cda");

MODULE_INFO(srcversion, "AC8AF52632671278A7AF163");
