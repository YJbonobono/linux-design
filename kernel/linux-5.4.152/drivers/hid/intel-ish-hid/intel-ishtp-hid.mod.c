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
	{ 0x2d3385d3, "system_wq" },
	{ 0xe5aea6ae, "ishtp_cl_io_rb_recycle" },
	{ 0x1749a360, "hid_add_device" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x557b1fef, "ishtp_cl_unlink" },
	{ 0xe2b682a8, "ishtp_set_connection_state" },
	{ 0x8e95bbd, "ishtp_cl_driver_register" },
	{ 0x74bfc54c, "hid_parse_report" },
	{ 0xed95c704, "ishtp_cl_flush_queues" },
	{ 0xc2f00c92, "ishtp_dev_to_cl_device" },
	{ 0x89f17a61, "ishtp_put_device" },
	{ 0x155a6f99, "hid_input_report" },
	{ 0x8f9424ad, "ishtp_cl_connect" },
	{ 0xbea30446, "ishtp_set_rx_ring_size" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xe853ca82, "ishtp_cl_driver_unregister" },
	{ 0xc022b6c9, "ishtp_device" },
	{ 0xbbaf9ca2, "ishtp_cl_link" },
	{ 0xf6a3943f, "ish_hw_reset" },
	{ 0x4c2ecacb, "ishtp_cl_disconnect" },
	{ 0x5f9b0501, "ishtp_get_fw_client_id" },
	{ 0xbd6b3ced, "ishtp_fw_cl_get_client" },
	{ 0xf74bef3a, "ishtp_trace_callback" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x6787c9c5, "ishtp_register_event_cb" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x6539a798, "ishtp_get_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfd0beeca, "ishtp_set_drvdata" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x9746f460, "ishtp_get_client_data" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8135f4a4, "hid_destroy_device" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x80068979, "ishtp_set_tx_ring_size" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xf9958798, "hid_allocate_device" },
	{ 0xe9771800, "ishtp_set_client_data" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x56021eef, "ishtp_get_drvdata" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x747540d0, "ishtp_cl_set_fw_client_id" },
	{ 0x1643ba91, "ishtp_cl_free" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x23e1f467, "ishtp_cl_send" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xa6510499, "ishtp_cl_allocate" },
	{ 0x765f9c79, "ishtp_get_ishtp_device" },
	{ 0xbc5cf2df, "ishtp_cl_rx_get_rb" },
	{ 0xad1c0db0, "hid_output_report" },
};

MODULE_INFO(depends, "intel-ishtp,hid");


MODULE_INFO(srcversion, "810A05814C3D28565B96C4D");
