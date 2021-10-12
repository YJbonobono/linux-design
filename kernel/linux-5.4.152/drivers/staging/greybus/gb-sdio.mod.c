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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0xea778fab, "sg_pcopy_to_buffer" },
	{ 0xb9a3671e, "mmc_detect_change" },
	{ 0x9c30bd95, "gb_gbphy_register_driver" },
	{ 0x9086e58b, "__pm_runtime_suspend" },
	{ 0xd20e0112, "mmc_free_host" },
	{ 0xd0fe8d51, "sg_pcopy_from_buffer" },
	{ 0xb56638e7, "gb_connection_disable_rx" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xfbe8a140, "gb_gbphy_deregister_driver" },
	{ 0xc6979144, "gb_connection_enable_tx" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x26b4912b, "gb_operation_sync_timeout" },
	{ 0xd9cb0c17, "gb_connection_destroy" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x73916598, "gb_operation_request_send_sync_timeout" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3d75c109, "mmc_add_host" },
	{ 0x95ee7d3a, "mmc_alloc_host" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xcf83c7f2, "gb_connection_enable" },
	{ 0xed46adb4, "mmc_remove_host" },
	{ 0x6cd7ba9, "gb_connection_create" },
	{ 0x67e46949, "gb_connection_disable" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xdd92a2e8, "gb_operation_get_payload_size_max" },
	{ 0xa63dbd09, "gb_operation_put" },
	{ 0xe7363a56, "mmc_request_done" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xa76db6a, "gb_operation_create_flags" },
};

MODULE_INFO(depends, "gb-gbphy,greybus");


MODULE_INFO(srcversion, "1177D317CEF9678C93E91EA");
