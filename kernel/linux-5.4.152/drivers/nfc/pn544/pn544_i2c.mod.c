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
	{ 0x2d3385d3, "system_wq" },
	{ 0xe8b68246, "nfc_hci_recv_frame" },
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xa94ba86f, "devm_gpiod_get" },
	{ 0x40a09deb, "skb_trim" },
	{ 0xc5850110, "printk" },
	{ 0xe1f09024, "pn544_hci_remove" },
	{ 0x581cf443, "skb_push" },
	{ 0x9b553753, "skb_pull" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x4958b4be, "devm_acpi_dev_add_driver_gpios" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x52ecbc75, "crc_ccitt" },
	{ 0x34724274, "i2c_transfer_buffer_flags" },
	{ 0xbf9de7e0, "nfc_fw_download_done" },
	{ 0x9601035f, "request_firmware" },
	{ 0x43764038, "gpiod_set_value_cansleep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x9fe09916, "release_firmware" },
	{ 0xe914e41e, "strcpy" },
	{ 0xd48f1f73, "pn544_hci_probe" },
};

MODULE_INFO(depends, "hci,pn544,nfc");

MODULE_ALIAS("of:N*T*Cnxp,pn544-i2c");
MODULE_ALIAS("of:N*T*Cnxp,pn544-i2cC*");
MODULE_ALIAS("acpi*:NXP5440:*");
MODULE_ALIAS("i2c:pn544");

MODULE_INFO(srcversion, "6AD54626CE8856F18FB5541");
