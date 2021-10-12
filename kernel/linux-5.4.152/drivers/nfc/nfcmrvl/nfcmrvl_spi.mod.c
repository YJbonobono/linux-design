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
	{ 0x1bfc2e1a, "nci_spi_read" },
	{ 0xc1e46c8e, "nfcmrvl_nci_unregister_dev" },
	{ 0x142b399a, "nfcmrvl_nci_recv_frame" },
	{ 0x84edcf0, "__spi_register_driver" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6a4380b2, "nfcmrvl_parse_dt" },
	{ 0xc5850110, "printk" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0xde79bb26, "nci_spi_send" },
	{ 0xa19821e, "nci_spi_allocate_spi" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc127d82, "nfcmrvl_nci_register_dev" },
	{ 0x29361773, "complete" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
};

MODULE_INFO(depends, "nci_spi,nfcmrvl");

MODULE_ALIAS("of:N*T*Cmarvell,nfc-spi");
MODULE_ALIAS("of:N*T*Cmarvell,nfc-spiC*");
MODULE_ALIAS("spi:nfcmrvl_spi");

MODULE_INFO(srcversion, "3E46C58519BB200465CBDF9");
