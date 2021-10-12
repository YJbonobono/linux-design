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
	{ 0x7e0e09dd, "transport_class_register" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x49a9e1e0, "scsi_remove_target" },
	{ 0x65815fbc, "blk_queue_rq_timeout" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf7676742, "scsi_flush_work" },
	{ 0x648b5826, "blk_mq_run_hw_queues" },
	{ 0x23fe03d5, "dev_printk" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x28c8899d, "transport_destroy_device" },
	{ 0x6a40489b, "bsg_job_put" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x481a80a5, "attribute_container_unregister" },
	{ 0x77df663a, "scsi_scan_target" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x9afab2c6, "scsi_is_host_device" },
	{ 0x87a91074, "bsg_job_get" },
	{ 0xfb578fc5, "memset" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xb2f0f1ff, "device_del" },
	{ 0x62d42a7a, "scsi_queue_work" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xea58b78a, "transport_add_device" },
	{ 0xc5850110, "printk" },
	{ 0x2ec4e91e, "transport_configure_device" },
	{ 0x5a921311, "strncmp" },
	{ 0x856b5228, "attribute_container_register" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xb79c798, "sysfs_remove_link" },
	{ 0x335e4ce6, "device_add" },
	{ 0x5d28af9b, "transport_class_unregister" },
	{ 0x7e20c004, "scsi_host_put" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x37ba08b4, "sysfs_create_link" },
	{ 0xc8362787, "scsi_target_unblock" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0xd6762310, "scsi_host_get" },
	{ 0xbbdc19ba, "netlink_broadcast" },
	{ 0xfb0c6b14, "put_device" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xebeb1328, "transport_setup_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x23045299, "blk_mq_end_request" },
	{ 0x3750a460, "get_device" },
	{ 0x191e562, "__scsi_init_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xdc90c7cb, "device_initialize" },
	{ 0x39917476, "scsi_is_target_device" },
	{ 0xb253ca09, "scsi_nl_sock" },
	{ 0x84ed005, "transport_remove_device" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb0147577, "scsi_target_block" },
	{ 0x37c7ad2e, "bsg_job_done" },
	{ 0x28db880d, "dev_set_name" },
	{ 0xc66a63ca, "bsg_remove_queue" },
	{ 0xaec0f069, "bsg_setup_queue" },
	{ 0x83b05a16, "param_ops_uint" },
	{ 0xa19dc7e8, "__nlmsg_put" },
	{ 0xdf9208c0, "alloc_workqueue" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "933B32C63DC87EA8829348F");
