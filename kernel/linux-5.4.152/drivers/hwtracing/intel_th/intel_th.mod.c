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
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x55353855, "bus_register" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x8512b0e4, "__pm_runtime_idle" },
	{ 0x34e0549f, "driver_register" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0x754d539c, "strlen" },
	{ 0x81b9f84d, "device_release_driver" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x8bde90cc, "__register_chrdev" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0x4bf11f61, "pm_runtime_allow" },
	{ 0xb94e2921, "pm_runtime_forbid" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x17138045, "pm_runtime_no_callbacks" },
	{ 0x601816b4, "device_match_devt" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xb2f0f1ff, "device_del" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0xffb7c514, "ida_free" },
	{ 0x13caabab, "noop_llseek" },
	{ 0x335e4ce6, "device_add" },
	{ 0x74d36c3b, "bus_find_device" },
	{ 0xe83ccb8d, "bus_unregister" },
	{ 0x1c8f4c84, "module_put" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0xf652a497, "devm_free_irq" },
	{ 0xfb0c6b14, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe2b406c7, "__pm_runtime_set_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xa43ceb8b, "device_for_each_child" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xdc90c7cb, "device_initialize" },
	{ 0x96848186, "scnprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x28db880d, "dev_set_name" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x64a5ffa3, "try_module_get" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "8CB84A39D086399110625F6");
