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
	{ 0xc3a074b4, "iscsi_offload_mesg" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb7964a42, "scsi_change_queue_depth" },
	{ 0x8fc9e71a, "__cpuhp_remove_state" },
	{ 0x92095a87, "iscsi_host_remove" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x1fc1d43b, "__iscsi_put_task" },
	{ 0x23fe03d5, "dev_printk" },
	{ 0xa7432cd4, "iscsi_queuecommand" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x8575a8b6, "iscsi_conn_stop" },
	{ 0x997e5495, "pci_dev_get" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x87b8798d, "sg_next" },
	{ 0xe55b192a, "iscsi_eh_recover_target" },
	{ 0x63c87209, "iscsi_unregister_transport" },
	{ 0x204b257f, "iscsi_session_teardown" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x42026801, "iscsi_host_add" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa0ea6380, "iscsi_host_alloc" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xfb2b6907, "kthread_create_on_node" },
	{ 0xe353f037, "iscsi_lookup_endpoint" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0xcca3c037, "kthread_bind" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x9afab2c6, "scsi_is_host_device" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xfb578fc5, "memset" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x86cb1fac, "pci_iounmap" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x6006847, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xff66ddfe, "iscsi_conn_start" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xce2526b0, "kthread_stop" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xc889e1f5, "iscsi_conn_send_pdu" },
	{ 0x219f72f4, "iscsi_session_get_param" },
	{ 0xf79fa1c7, "iscsi_conn_teardown" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x40330b87, "iscsi_host_free" },
	{ 0x5e9d0433, "iscsi_conn_get_param" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0xb48059e, "blk_mq_rq_cpu" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x636af174, "cnic_unregister_driver" },
	{ 0xde88d4f1, "iscsi_destroy_endpoint" },
	{ 0x24d273d1, "add_timer" },
	{ 0xd8a14513, "__cpuhp_setup_state" },
	{ 0x7e20c004, "scsi_host_put" },
	{ 0x81533963, "sysfs_format_mac" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x565db21d, "flush_signals" },
	{ 0x87834c80, "iscsi_set_param" },
	{ 0x5e5ec1c0, "iscsi_session_failure" },
	{ 0x618911fc, "numa_node" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xc4bc088e, "cnic_register_driver" },
	{ 0xa77d8efe, "iscsi_register_transport" },
	{ 0xf43e6f63, "iscsi_eh_device_reset" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x130b568, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x11902748, "iscsi_conn_failure" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xf327b655, "iscsi_eh_cmd_timed_out" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xb06ce0d3, "iscsi_suspend_queue" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x634b0179, "iscsi_create_endpoint" },
	{ 0x669ff46d, "iscsi_eh_abort" },
	{ 0x37a0cba, "kfree" },
	{ 0x8b6e0761, "scsi_dma_unmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0xedc03953, "iounmap" },
	{ 0x3dbbb79, "set_user_nice" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0xc2b5ffbc, "iscsi_session_setup" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x971bf4fb, "iscsi_host_get_param" },
	{ 0x6d6390b4, "iscsi_conn_bind" },
	{ 0xb03247ec, "__iscsi_complete_pdu" },
	{ 0x12559622, "iscsi_target_alloc" },
	{ 0x5a470173, "pci_dev_put" },
	{ 0x29361773, "complete" },
	{ 0x2f5ace2b, "pci_iomap" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x652c10c, "iscsi_session_recovery_timedout" },
	{ 0xb0d54d24, "iscsi_conn_setup" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x83b05a16, "param_ops_uint" },
	{ 0xa626177c, "iscsi_itt_to_task" },
	{ 0x73727241, "iscsi_host_for_each_session" },
	{ 0x372f4ca1, "scsi_dma_map" },
};

MODULE_INFO(depends, "scsi_transport_iscsi,libiscsi,cnic");


MODULE_INFO(srcversion, "889D84ADD3E23DCF9B90AED");
