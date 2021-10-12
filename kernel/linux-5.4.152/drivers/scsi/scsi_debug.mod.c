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
	{ 0x66d230ae, "param_ops_string" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0x999e8297, "vfree" },
	{ 0xe894b08b, "root_device_unregister" },
	{ 0xe83ccb8d, "bus_unregister" },
	{ 0x34e0549f, "driver_register" },
	{ 0x55353855, "bus_register" },
	{ 0x18dc505e, "__root_device_register" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xa16c8613, "_raw_read_unlock_irqrestore" },
	{ 0x736b5662, "_raw_read_lock_irqsave" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0x1c1b9f8e, "_raw_write_unlock_irqrestore" },
	{ 0xb0e602eb, "memmove" },
	{ 0xe25ee9d3, "_raw_write_lock_irqsave" },
	{ 0xe5a01321, "device_register" },
	{ 0x28db880d, "dev_set_name" },
	{ 0x6355bfd1, "__scsi_iterate_devices" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0x51ce92, "device_unregister" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xfb578fc5, "memset" },
	{ 0x69e683de, "uuid_gen" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0xc666a132, "crc_t10dif" },
	{ 0x20eadeb6, "ip_compute_csum" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0x8ac743de, "sg_copy_buffer" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x7b8edf3f, "scsi_remove_host" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xed13b586, "blk_abort_request" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x1fcf831c, "blk_mq_unique_tag" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x8112b3d2, "scsi_build_sense_buffer" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x7e20c004, "scsi_host_put" },
	{ 0xa4250e5, "scsi_scan_host" },
	{ 0xfef7d47b, "scsi_add_host_with_dma" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x6c3d866c, "scsi_host_alloc" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xd0fe8d51, "sg_pcopy_from_buffer" },
	{ 0x3cac7cba, "sg_miter_stop" },
	{ 0x53cea585, "sg_miter_next" },
	{ 0x69acdf38, "memcpy" },
	{ 0x44458f85, "sg_miter_start" },
	{ 0x96848186, "scnprintf" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xaaef1481, "sdev_prefix_printk" },
	{ 0xb7964a42, "scsi_change_queue_depth" },
	{ 0xb6a68816, "find_last_bit" },
	{ 0xb177d101, "seq_printf" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xc6cbbc89, "capable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x37a0cba, "kfree" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0DB3496A8EA67FBDA2E0946");
