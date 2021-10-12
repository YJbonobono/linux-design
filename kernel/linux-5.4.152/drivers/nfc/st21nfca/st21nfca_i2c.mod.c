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
	{ 0xf9a482f9, "msleep" },
	{ 0xe8b68246, "nfc_hci_recv_frame" },
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xa94ba86f, "devm_gpiod_get" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x799f00de, "st21nfca_hci_probe" },
	{ 0x40a09deb, "skb_trim" },
	{ 0xa4b0d984, "st21nfca_hci_remove" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x581cf443, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9b553753, "skb_pull" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x4958b4be, "devm_acpi_dev_add_driver_gpios" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x52ecbc75, "crc_ccitt" },
	{ 0x34724274, "i2c_transfer_buffer_flags" },
	{ 0xaa29ef71, "gpiod_set_value" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0xf36d80ec, "device_property_present" },
};

MODULE_INFO(depends, "hci,st21nfca_hci");

MODULE_ALIAS("i2c:st21nfca_hci");
MODULE_ALIAS("of:N*T*Cst,st21nfca-i2c");
MODULE_ALIAS("of:N*T*Cst,st21nfca-i2cC*");
MODULE_ALIAS("of:N*T*Cst,st21nfca_i2c");
MODULE_ALIAS("of:N*T*Cst,st21nfca_i2cC*");
MODULE_ALIAS("acpi*:SMO2100:*");

MODULE_INFO(srcversion, "1B2636F5E478FC0CE75A022");
