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
	{ 0xca7229f7, "hid_unregister_driver" },
	{ 0x542a5355, "__hid_register_driver" },
	{ 0xc5850110, "printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xa050ddb, "led_classdev_register_ext" },
	{ 0x93c25f35, "hid_validate_values" },
	{ 0x754d539c, "strlen" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x890efe67, "hid_hw_start" },
	{ 0xf739c30c, "hid_open_report" },
	{ 0xe0851549, "__hid_request" },
	{ 0xf8c679e2, "input_event" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x37a0cba, "kfree" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd0e4e11b, "led_classdev_unregister" },
	{ 0x6d15e3f6, "hid_hw_stop" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hid");

MODULE_ALIAS("hid:b0003g*v000017EFp00006009");
MODULE_ALIAS("hid:b0003g*v000017EFp00006047");
MODULE_ALIAS("hid:b0005g*v000017EFp00006048");
MODULE_ALIAS("hid:b0003g*v000017EFp00006067");
MODULE_ALIAS("hid:b0003g*v000004B3p00003100");
MODULE_ALIAS("hid:b0003g*v000004B3p00003103");
MODULE_ALIAS("hid:b0003g*v000004B3p00003105");
MODULE_ALIAS("hid:b0003g*v000004B3p00003108");
MODULE_ALIAS("hid:b0003g*v000004B3p00003109");
MODULE_ALIAS("hid:b0003g*v000017EFp00006049");

MODULE_INFO(srcversion, "3C3121E94044FB6544E0FF5");
