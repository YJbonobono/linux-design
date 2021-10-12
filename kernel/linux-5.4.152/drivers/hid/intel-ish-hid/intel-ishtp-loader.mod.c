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
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x557b1fef, "ishtp_cl_unlink" },
	{ 0xe2b682a8, "ishtp_set_connection_state" },
	{ 0x8e95bbd, "ishtp_cl_driver_register" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0xed95c704, "ishtp_cl_flush_queues" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x89f17a61, "ishtp_put_device" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x8f9424ad, "ishtp_cl_connect" },
	{ 0xbea30446, "ishtp_set_rx_ring_size" },
	{ 0xc805f93, "clflush_cache_range" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xe853ca82, "ishtp_cl_driver_unregister" },
	{ 0xc022b6c9, "ishtp_device" },
	{ 0xbbaf9ca2, "ishtp_cl_link" },
	{ 0xf6a3943f, "ish_hw_reset" },
	{ 0x4c2ecacb, "ishtp_cl_disconnect" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x5f9b0501, "ishtp_get_fw_client_id" },
	{ 0xbd6b3ced, "ishtp_fw_cl_get_client" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0x64264946, "device_property_read_string" },
	{ 0xb82b7803, "ishtp_get_pci_device" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0x6787c9c5, "ishtp_register_event_cb" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x6539a798, "ishtp_get_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xfd0beeca, "ishtp_set_drvdata" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0x9746f460, "ishtp_get_client_data" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x80068979, "ishtp_set_tx_ring_size" },
	{ 0xe9771800, "ishtp_set_client_data" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x56021eef, "ishtp_get_drvdata" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x747540d0, "ishtp_cl_set_fw_client_id" },
	{ 0x1643ba91, "ishtp_cl_free" },
	{ 0x231a0c6f, "dma_direct_sync_single_for_device" },
	{ 0x9601035f, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x23e1f467, "ishtp_cl_send" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xa6510499, "ishtp_cl_allocate" },
	{ 0x765f9c79, "ishtp_get_ishtp_device" },
	{ 0x9fe09916, "release_firmware" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0xbc5cf2df, "ishtp_cl_rx_get_rb" },
};

MODULE_INFO(depends, "intel-ishtp");


MODULE_INFO(srcversion, "5501EF58F328E90BA56E375");
