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
	{ 0x55353855, "bus_register" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x34e0549f, "driver_register" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0x6a222ae7, "trace_event_buffer_reserve" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xfce8bc1f, "bpf_trace_run3" },
	{ 0x3f137654, "trace_define_field" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xb2f0f1ff, "device_del" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xffb7c514, "ida_free" },
	{ 0xa4bc7c41, "trace_event_reg" },
	{ 0x5a921311, "strncmp" },
	{ 0x9730d0a0, "bpf_trace_run5" },
	{ 0x335e4ce6, "device_add" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xe83ccb8d, "bus_unregister" },
	{ 0x646a3407, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0xcb4e332, "trace_event_ignore_this_pid" },
	{ 0xfb0c6b14, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe2b406c7, "__pm_runtime_set_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1070e19c, "trace_event_buffer_commit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xc2ae15b1, "event_triggers_call" },
	{ 0xa43ceb8b, "device_for_each_child" },
	{ 0x37a0cba, "kfree" },
	{ 0x41b63ec2, "trace_event_raw_init" },
	{ 0xdc90c7cb, "device_initialize" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x51ce92, "device_unregister" },
	{ 0xa63a07c, "bpf_trace_run6" },
	{ 0xd77ae818, "trace_raw_output_prep" },
	{ 0x525d0aa3, "trace_seq_printf" },
	{ 0x28db880d, "dev_set_name" },
	{ 0xf817676f, "bpf_trace_run4" },
	{ 0xe7a02573, "ida_alloc_range" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "19A62B80D020AA6387AFB1F");
