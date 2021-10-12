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
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0xd7219bcb, "cec_received_msg_ts" },
	{ 0xf302fc0b, "cec_transmit_done_ts" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xa7497034, "cec_register_cec_notifier" },
	{ 0xcb0e672b, "devm_remove_action" },
	{ 0x5fd07883, "cec_register_adapter" },
	{ 0xdc5d9169, "cec_notifier_get_conn" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x5073913b, "devm_add_action" },
	{ 0xb2367d62, "cec_allocate_adapter" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xf9a482f9, "msleep" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x69acdf38, "memcpy" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x4cadacbb, "i2c_transfer" },
	{ 0xb4a076, "cec_delete_adapter" },
	{ 0xb4e2add, "cec_notifier_put" },
	{ 0x7ed6f40b, "cec_unregister_adapter" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:tda9950");

MODULE_INFO(srcversion, "853CD6F0D4B93819622BDA9");
