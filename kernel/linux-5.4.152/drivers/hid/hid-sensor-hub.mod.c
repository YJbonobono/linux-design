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
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xf739c30c, "hid_open_report" },
	{ 0x8605a977, "mfd_remove_devices" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xe0851549, "__hid_request" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x4dded074, "devm_kasprintf" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xbe66444d, "hid_hw_close" },
	{ 0xfd5c2022, "mfd_add_devices" },
	{ 0x62e68a9e, "hid_hw_open" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x99baad52, "hid_set_field" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6d15e3f6, "hid_hw_stop" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x542a5355, "__hid_register_driver" },
	{ 0x29361773, "complete" },
	{ 0x890efe67, "hid_hw_start" },
	{ 0xca7229f7, "hid_unregister_driver" },
	{ 0xf9b525f7, "devm_kmalloc" },
};

MODULE_INFO(depends, "hid");

MODULE_ALIAS("hid:b*g0003v*p*");

MODULE_INFO(srcversion, "14CC9916386119F68B44966");
