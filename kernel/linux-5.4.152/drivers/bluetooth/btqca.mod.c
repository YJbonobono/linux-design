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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0xf9a482f9, "msleep" },
	{ 0x399818dd, "__hci_cmd_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x5c883ca1, "hci_recv_frame" },
	{ 0xd4f6cdf3, "__hci_cmd_sync_ev" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x718b8b7, "bt_info" },
	{ 0xe359da9c, "__hci_cmd_send" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x69acdf38, "memcpy" },
	{ 0x9601035f, "request_firmware" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x9fe09916, "release_firmware" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "1C418AA36E98C793A6255F5");
