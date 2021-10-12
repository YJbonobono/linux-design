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
	{ 0x569abcca, "acpi_walk_resources" },
	{ 0x228318b2, "acpi_bus_register_driver" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x85bd1608, "__request_region" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0xe33370d4, "debugfs_create_dir" },
	{ 0x87a67f49, "single_open" },
	{ 0x4f7c3950, "napi_disable" },
	{ 0x77358855, "iomem_resource" },
	{ 0x754d539c, "strlen" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x7f94671e, "napi_schedule_prep" },
	{ 0xa3b53740, "single_release" },
	{ 0xdb1d5e89, "seq_puts" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0xabf32f29, "utf16s_to_utf8s" },
	{ 0xd4b8ce04, "acpi_bus_get_device" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xb177d101, "seq_printf" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x9e46239a, "acpi_bus_unregister_driver" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6a222ae7, "trace_event_buffer_reserve" },
	{ 0x999e8297, "vfree" },
	{ 0x29df1f0d, "platform_device_register_full" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6f50547f, "debugfs_remove_recursive" },
	{ 0x5932b0cc, "seq_read" },
	{ 0xfce8bc1f, "bpf_trace_run3" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x23f45fac, "netif_napi_del" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3f137654, "trace_define_field" },
	{ 0xfb578fc5, "memset" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x246e714e, "bpf_trace_run1" },
	{ 0x8dd2cb7c, "netif_tx_stop_all_queues" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x30c76023, "free_netdev" },
	{ 0xa4bc7c41, "trace_event_reg" },
	{ 0xe296672d, "register_netdev" },
	{ 0xabc205b7, "netif_receive_skb" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x5e121547, "dev_close" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0x3461a347, "platform_device_unregister" },
	{ 0x9343f8d6, "netif_napi_add" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x646a3407, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x12a38747, "usleep_range" },
	{ 0xe3062b90, "__napi_schedule" },
	{ 0xcb4e332, "trace_event_ignore_this_pid" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x5193da32, "alloc_netdev_mqs" },
	{ 0x668abe1f, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x1070e19c, "trace_event_buffer_commit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xe1ab6e70, "ether_setup" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc2ae15b1, "event_triggers_call" },
	{ 0xcf83a698, "bpf_trace_run2" },
	{ 0xcdaf7988, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x41b63ec2, "trace_event_raw_init" },
	{ 0x277b79a7, "dev_trans_start" },
	{ 0xedc03953, "iounmap" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0xd77ae818, "trace_raw_output_prep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1b9d3c81, "platform_get_irq" },
	{ 0x525d0aa3, "trace_seq_printf" },
	{ 0xb832485a, "consume_skb" },
	{ 0x220493ec, "vmalloc_to_page" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x409931cf, "__napi_alloc_skb" },
	{ 0xec2b8a42, "acpi_walk_namespace" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xf817676f, "bpf_trace_run4" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x92ed2c1a, "acpi_device_hid" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xc3bc72ad, "trace_print_array_seq" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:PNP0C02:*");

MODULE_INFO(srcversion, "8DD92C02F7412B4ED8953C0");
