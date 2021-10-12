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
	{ 0x2d3385d3, "system_wq" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x9086e58b, "__pm_runtime_suspend" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x186ea1fd, "class_unregister" },
	{ 0xffb7c514, "ida_free" },
	{ 0x74957e8f, "greybus_register_driver" },
	{ 0x5191cd36, "greybus_deregister_driver" },
	{ 0x9a9cd14e, "device_create" },
	{ 0x26b4912b, "gb_operation_sync_timeout" },
	{ 0xd9cb0c17, "gb_connection_destroy" },
	{ 0x94567929, "__class_register" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xcf83c7f2, "gb_connection_enable" },
	{ 0x37a0cba, "kfree" },
	{ 0x6cd7ba9, "gb_connection_create" },
	{ 0x67e46949, "gb_connection_disable" },
	{ 0x51ce92, "device_unregister" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0xe7a02573, "ida_alloc_range" },
};

MODULE_INFO(depends, "greybus");


MODULE_INFO(srcversion, "DCD8EC3544B391C6A23EC66");
