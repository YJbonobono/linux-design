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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf739c30c, "hid_open_report" },
	{ 0x754d539c, "strlen" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf8c679e2, "input_event" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x5052ba6b, "usb_string" },
	{ 0xb2d415e9, "usb_control_msg" },
	{ 0x84750034, "usb_hid_driver" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xa916b694, "strnlen" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x6d15e3f6, "hid_hw_stop" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x542a5355, "__hid_register_driver" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x890efe67, "hid_hw_start" },
	{ 0xca7229f7, "hid_unregister_driver" },
	{ 0xf9b525f7, "devm_kmalloc" },
};

MODULE_INFO(depends, "hid,usbhid");

MODULE_ALIAS("hid:b0003g*v00005543p00000042");
MODULE_ALIAS("hid:b0003g*v00005543p00000003");
MODULE_ALIAS("hid:b0003g*v00005543p00000004");
MODULE_ALIAS("hid:b0003g*v00005543p00000005");
MODULE_ALIAS("hid:b0003g*v00005543p00000064");
MODULE_ALIAS("hid:b0003g*v00005543p00000522");
MODULE_ALIAS("hid:b0003g*v00005543p00000781");
MODULE_ALIAS("hid:b0003g*v0000256Cp0000006E");
MODULE_ALIAS("hid:b0003g*v0000256Cp0000006D");
MODULE_ALIAS("hid:b0003g*v00005543p0000006E");
MODULE_ALIAS("hid:b0003g*v00005543p0000004D");
MODULE_ALIAS("hid:b0003g*v00005543p00000081");
MODULE_ALIAS("hid:b0003g*v00005543p00000045");
MODULE_ALIAS("hid:b0003g*v00005543p00000047");
MODULE_ALIAS("hid:b0003g*v00005543p00003031");
MODULE_ALIAS("hid:b0003g*v00002179p00000053");
MODULE_ALIAS("hid:b0003g*v00002179p00000077");
MODULE_ALIAS("hid:b0003g*v000028BDp00000074");
MODULE_ALIAS("hid:b0003g*v000028BDp00000071");
MODULE_ALIAS("hid:b0003g*v000028BDp00000055");
MODULE_ALIAS("hid:b0003g*v000028BDp00000075");
MODULE_ALIAS("hid:b0003g*v000028BDp00000094");
MODULE_ALIAS("hid:b0003g*v000028BDp00000042");

MODULE_INFO(srcversion, "744D4A5EAA3CD0B63F6162A");
