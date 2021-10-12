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
	{ 0xc1e46c8e, "nfcmrvl_nci_unregister_dev" },
	{ 0x142b399a, "nfcmrvl_nci_recv_frame" },
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x6a4380b2, "nfcmrvl_parse_dt" },
	{ 0xc5850110, "printk" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc127d82, "nfcmrvl_nci_register_dev" },
	{ 0x34724274, "i2c_transfer_buffer_flags" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
};

MODULE_INFO(depends, "nfcmrvl");

MODULE_ALIAS("i2c:nfcmrvl_i2c");
MODULE_ALIAS("of:N*T*Cmarvell,nfc-i2c");
MODULE_ALIAS("of:N*T*Cmarvell,nfc-i2cC*");

MODULE_INFO(srcversion, "69950B6A031B106680B8FE4");
