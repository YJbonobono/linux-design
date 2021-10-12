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
	{ 0x41b63ec2, "trace_event_raw_init" },
	{ 0xa4bc7c41, "trace_event_reg" },
	{ 0x83b05a16, "param_ops_uint" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x66d230ae, "param_ops_string" },
	{ 0xfd205417, "no_llseek" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0x84edcf0, "__spi_register_driver" },
	{ 0x6f50547f, "debugfs_remove_recursive" },
	{ 0xaf7c85d8, "device_wakeup_disable" },
	{ 0xa4faf62a, "acpi_disable_gpe" },
	{ 0x9d099a39, "acpi_remove_gpe_handler" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0x1aee8382, "debugfs_create_bool" },
	{ 0xe33370d4, "debugfs_create_dir" },
	{ 0xe4b8a68d, "devm_led_classdev_register_ext" },
	{ 0x37a0cba, "kfree" },
	{ 0x87dcf67e, "efivar_entry_get" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xf8c0536e, "device_wakeup_enable" },
	{ 0xb97f7045, "acpi_install_gpe_handler" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb1031ba5, "acpi_dev_get_property" },
	{ 0x9975dc22, "acpi_get_handle" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xe7792155, "is_acpi_device_node" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa07a37f0, "memchr" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0x9b53b2d5, "input_mt_sync_frame" },
	{ 0x466e2fb6, "input_mt_report_slot_state" },
	{ 0xf8c679e2, "input_event" },
	{ 0xc85b1578, "input_mt_assign_slots" },
	{ 0x19df99b9, "acpi_finish_gpe" },
	{ 0x1344d7e6, "acpi_enable_gpe" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x4ce68b52, "input_register_device" },
	{ 0x8b29215e, "input_mt_init_slots" },
	{ 0x49df2111, "input_set_abs_params" },
	{ 0x281d1f24, "input_set_capability" },
	{ 0xda9d1e18, "devm_input_allocate_device" },
	{ 0x56470118, "__warn_printk" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x81b03377, "efivar_entry_set_safe" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x754d539c, "strlen" },
	{ 0x6ee078b2, "nonseekable_open" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x1000e51, "schedule" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xf5e7ea40, "ktime_get_coarse_ts64" },
	{ 0x485f8d08, "spi_async" },
	{ 0xbd6841d4, "crc16" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xcd8ce890, "acpi_format_exception" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb4043948, "acpi_execute_simple_method" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0xcf83a698, "bpf_trace_run2" },
	{ 0xf817676f, "bpf_trace_run4" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x525d0aa3, "trace_seq_printf" },
	{ 0xcc5c2df4, "trace_print_symbols_seq" },
	{ 0xe02ba436, "trace_print_hex_seq" },
	{ 0xd77ae818, "trace_raw_output_prep" },
	{ 0xcb4e332, "trace_event_ignore_this_pid" },
	{ 0xc2ae15b1, "event_triggers_call" },
	{ 0x1070e19c, "trace_event_buffer_commit" },
	{ 0x6a222ae7, "trace_event_buffer_reserve" },
	{ 0x69acdf38, "memcpy" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x646a3407, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x3f137654, "trace_define_field" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:APP000D:*");

MODULE_INFO(srcversion, "D22401AAC796AAFFB520B3A");
