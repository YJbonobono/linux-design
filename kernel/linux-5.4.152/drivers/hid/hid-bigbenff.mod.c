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
	{ 0xe0851549, "__hid_request" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe4b8a68d, "devm_led_classdev_register_ext" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x754d539c, "strlen" },
	{ 0xea8e2574, "input_ff_create_memless" },
	{ 0x890efe67, "hid_hw_start" },
	{ 0xf739c30c, "hid_open_report" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x6d15e3f6, "hid_hw_stop" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hid,ff-memless");

MODULE_ALIAS("hid:b0003g*v0000146Bp00000902");

MODULE_INFO(srcversion, "C23167C7681F54E6D5EA389");
