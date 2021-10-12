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
	{ 0x7e83fb8, "device_remove_file" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x8512b0e4, "__pm_runtime_idle" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xe33370d4, "debugfs_create_dir" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0x87a67f49, "single_open" },
	{ 0x4c338969, "__pm_runtime_use_autosuspend" },
	{ 0x754d539c, "strlen" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x9086e58b, "__pm_runtime_suspend" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0xa3b53740, "single_release" },
	{ 0xdb1d5e89, "seq_puts" },
	{ 0xb177d101, "seq_printf" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x22a77893, "dma_async_tx_descriptor_init" },
	{ 0xb43b1853, "devm_ioremap_resource" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6f50547f, "debugfs_remove_recursive" },
	{ 0x5932b0cc, "seq_read" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x5fc3eb3a, "dma_async_device_register" },
	{ 0x8df0b0e5, "dmaengine_unmap_put" },
	{ 0x75c2d19f, "device_get_match_data" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xa976fc36, "device_create_file" },
	{ 0x39c7a099, "dma_run_dependencies" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xedb4b219, "device_property_read_u32_array" },
	{ 0x12a38747, "usleep_range" },
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0xf652a497, "devm_free_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5d0ab309, "devm_kstrdup" },
	{ 0xe2b406c7, "__pm_runtime_set_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xcdaf7988, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x9a3f7253, "platform_msi_domain_alloc_irqs" },
	{ 0x1f9bb33f, "pm_runtime_set_autosuspend_delay" },
	{ 0xe8a728c7, "dmam_alloc_attrs" },
	{ 0x1b9d3c81, "platform_get_irq" },
	{ 0x323ddd2a, "dma_async_device_unregister" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xb07467cd, "platform_msi_domain_free_irqs" },
	{ 0x83b05a16, "param_ops_uint" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cqcom,hidma-1.0");
MODULE_ALIAS("of:N*T*Cqcom,hidma-1.0C*");
MODULE_ALIAS("of:N*T*Cqcom,hidma-1.1");
MODULE_ALIAS("of:N*T*Cqcom,hidma-1.1C*");
MODULE_ALIAS("of:N*T*Cqcom,hidma-1.2");
MODULE_ALIAS("of:N*T*Cqcom,hidma-1.2C*");
MODULE_ALIAS("acpi*:QCOM8061:*");
MODULE_ALIAS("acpi*:QCOM8062:*");
MODULE_ALIAS("acpi*:QCOM8063:*");

MODULE_INFO(srcversion, "7D68B3D7F139D0494F78C00");
