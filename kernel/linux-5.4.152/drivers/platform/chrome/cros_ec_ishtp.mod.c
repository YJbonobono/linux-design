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
	{ 0xe853ca82, "ishtp_cl_driver_unregister" },
	{ 0x8e95bbd, "ishtp_cl_driver_register" },
	{ 0x76ccb75e, "cros_ec_suspend" },
	{ 0x2c23ec3, "cros_ec_resume" },
	{ 0xc2f00c92, "ishtp_dev_to_cl_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf9a482f9, "msleep" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe78fd329, "cros_ec_check_result" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x23e1f467, "ishtp_cl_send" },
	{ 0xb8ea7809, "cros_ec_prepare_tx" },
	{ 0x5af205c4, "cros_ec_register" },
	{ 0x6539a798, "ishtp_get_device" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xc3ff38c2, "down_read_trylock" },
	{ 0xbc5cf2df, "ishtp_cl_rx_get_rb" },
	{ 0x53b954a2, "up_read" },
	{ 0xe5aea6ae, "ishtp_cl_io_rb_recycle" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x69acdf38, "memcpy" },
	{ 0xce807a25, "up_write" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xe9771800, "ishtp_set_client_data" },
	{ 0xfd0beeca, "ishtp_set_drvdata" },
	{ 0xa6510499, "ishtp_cl_allocate" },
	{ 0x57bc19d2, "down_write" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xc022b6c9, "ishtp_device" },
	{ 0x6787c9c5, "ishtp_register_event_cb" },
	{ 0x8f9424ad, "ishtp_cl_connect" },
	{ 0x747540d0, "ishtp_cl_set_fw_client_id" },
	{ 0x5f9b0501, "ishtp_get_fw_client_id" },
	{ 0xbd6b3ced, "ishtp_fw_cl_get_client" },
	{ 0xbea30446, "ishtp_set_rx_ring_size" },
	{ 0x80068979, "ishtp_set_tx_ring_size" },
	{ 0x765f9c79, "ishtp_get_ishtp_device" },
	{ 0xbbaf9ca2, "ishtp_cl_link" },
	{ 0x823eae06, "blocking_notifier_call_chain" },
	{ 0x993ecff8, "cros_ec_get_next_event" },
	{ 0x89f17a61, "ishtp_put_device" },
	{ 0x1643ba91, "ishtp_cl_free" },
	{ 0xed95c704, "ishtp_cl_flush_queues" },
	{ 0x557b1fef, "ishtp_cl_unlink" },
	{ 0x4c2ecacb, "ishtp_cl_disconnect" },
	{ 0xe2b682a8, "ishtp_set_connection_state" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x9746f460, "ishtp_get_client_data" },
	{ 0x56021eef, "ishtp_get_drvdata" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "intel-ishtp,cros_ec");


MODULE_INFO(srcversion, "F171D97DFA8DC573DE5B2E5");
