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
	{ 0xc166ae1c, "phy_init" },
	{ 0x6521edb3, "usb_gadget_unmap_request_by_dev" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x8512b0e4, "__pm_runtime_idle" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x7f397114, "usb_gadget_map_request_by_dev" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0x4c338969, "__pm_runtime_use_autosuspend" },
	{ 0x754d539c, "strlen" },
	{ 0xad92918c, "device_property_read_u16_array" },
	{ 0x9086e58b, "__pm_runtime_suspend" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x71752d07, "usb_del_gadget_udc" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xf0979a46, "usb_gadget_giveback_request" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xb43b1853, "devm_ioremap_resource" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0x6a222ae7, "trace_event_buffer_reserve" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xbbf1e986, "devm_phy_optional_get" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xfce8bc1f, "bpf_trace_run3" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0xef1657c0, "usb_gadget_set_state" },
	{ 0x29ce339a, "usb_role_switch_register" },
	{ 0xd758ff97, "phy_power_off" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x3f137654, "trace_define_field" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0xfd51535f, "usb_gadget_udc_reset" },
	{ 0x246e714e, "bpf_trace_run1" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x46ba9a3c, "platform_device_alloc" },
	{ 0xa4bc7c41, "trace_event_reg" },
	{ 0x6f8257de, "phy_power_on" },
	{ 0xbf8f8395, "platform_device_add" },
	{ 0xede1ec4a, "phy_reset" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3461a347, "platform_device_unregister" },
	{ 0xd4034828, "system_freezable_wq" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xf271f57a, "devm_kfree" },
	{ 0x646a3407, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x45f8dd9e, "platform_device_add_resources" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xc57b77a7, "phy_exit" },
	{ 0x12a38747, "usleep_range" },
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0xcb4e332, "trace_event_ignore_this_pid" },
	{ 0xf652a497, "devm_free_irq" },
	{ 0xc4fae44, "usb_get_maximum_speed" },
	{ 0x3d952d0a, "usb_add_gadget_udc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfb44fe01, "platform_get_irq_byname" },
	{ 0xe2b406c7, "__pm_runtime_set_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4a2315f5, "usb_ep_set_maxpacket_limit" },
	{ 0x1070e19c, "trace_event_buffer_commit" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0xf402e79b, "usb_get_dr_mode" },
	{ 0x4531624f, "usb_decode_ctrl" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xff547e40, "platform_get_resource_byname" },
	{ 0xc2ae15b1, "event_triggers_call" },
	{ 0xcf83a698, "bpf_trace_run2" },
	{ 0x2882d40e, "usb_role_switch_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x41b63ec2, "trace_event_raw_init" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x1f9bb33f, "pm_runtime_set_autosuspend_delay" },
	{ 0xd77ae818, "trace_raw_output_prep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x525d0aa3, "trace_seq_printf" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x60c2ccfe, "device_set_wakeup_capable" },
	{ 0xe914e41e, "strcpy" },
	{ 0xe6852960, "platform_device_put" },
};

MODULE_INFO(depends, "udc-core");


MODULE_INFO(srcversion, "3396D089C514024A9A3CD28");
