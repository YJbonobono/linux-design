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
	{ 0x8512b0e4, "__pm_runtime_idle" },
	{ 0x34e0549f, "driver_register" },
	{ 0xe33370d4, "debugfs_create_dir" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0x87a67f49, "single_open" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0xa3b53740, "single_release" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb177d101, "seq_printf" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x3074b82d, "device_get_named_child_node" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0xc4adc763, "fwnode_property_present" },
	{ 0x6f50547f, "debugfs_remove_recursive" },
	{ 0x5932b0cc, "seq_read" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xe5a01321, "device_register" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xe83ccb8d, "bus_unregister" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xef2eeb1c, "dev_pm_domain_detach" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x277c1aa5, "fwnode_property_read_u32_array" },
	{ 0xedb4b219, "device_property_read_u32_array" },
	{ 0xfb0c6b14, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xa43ceb8b, "device_for_each_child" },
	{ 0xf29082c2, "dev_pm_domain_attach" },
	{ 0xcdaf7988, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x96848186, "scnprintf" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x51ce92, "device_unregister" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x28db880d, "dev_set_name" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xe7792155, "is_acpi_device_node" },
	{ 0xf36d80ec, "device_property_present" },
	{ 0x719e0e44, "add_uevent_var" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "891EF329C117804DA06823D");
