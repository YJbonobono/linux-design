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
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x718a59be, "pnp_unregister_driver" },
	{ 0x7e1bb40c, "pnp_register_driver" },
	{ 0x5c1ba4d1, "_dev_notice" },
	{ 0x6f3bd9ba, "device_init_wakeup" },
	{ 0xa976fc36, "device_create_file" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x89d68935, "__devm_request_region" },
	{ 0xb2d4b247, "devm_rc_register_device" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xcc4bab63, "pnp_get_resource" },
	{ 0xdd177627, "pnp_activate_dev" },
	{ 0x1c0c3a3e, "devm_rc_allocate_device" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xd4c9d9b8, "ir_raw_event_store" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xc41422ca, "ir_raw_event_handle" },
	{ 0x6b7e0565, "ir_raw_event_store_with_filter" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7e83fb8, "device_remove_file" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x37a0cba, "kfree" },
	{ 0x3131b773, "ir_raw_encode_scancode" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe0b13336, "argv_free" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x7380dffa, "argv_split" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rc-core");

MODULE_ALIAS("pnp:dWEC0530*");
MODULE_ALIAS("acpi*:WEC0530:*");
MODULE_ALIAS("pnp:dNTN0530*");
MODULE_ALIAS("acpi*:NTN0530:*");

MODULE_INFO(srcversion, "4D6C1E6D9678F07878C14EB");
