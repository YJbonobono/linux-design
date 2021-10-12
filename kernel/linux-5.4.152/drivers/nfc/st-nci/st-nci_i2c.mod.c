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
	{ 0x3728390d, "ndlc_probe" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0xa94ba86f, "devm_gpiod_get" },
	{ 0xba786bdc, "ndlc_recv" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x4958b4be, "devm_acpi_dev_add_driver_gpios" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x34724274, "i2c_transfer_buffer_flags" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x5a0a69fa, "ndlc_remove" },
	{ 0xaa29ef71, "gpiod_set_value" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0xf36d80ec, "device_property_present" },
};

MODULE_INFO(depends, "st-nci");

MODULE_ALIAS("acpi*:SMO2101:*");
MODULE_ALIAS("acpi*:SMO2102:*");
MODULE_ALIAS("of:N*T*Cst,st21nfcb-i2c");
MODULE_ALIAS("of:N*T*Cst,st21nfcb-i2cC*");
MODULE_ALIAS("of:N*T*Cst,st21nfcb_i2c");
MODULE_ALIAS("of:N*T*Cst,st21nfcb_i2cC*");
MODULE_ALIAS("of:N*T*Cst,st21nfcc-i2c");
MODULE_ALIAS("of:N*T*Cst,st21nfcc-i2cC*");
MODULE_ALIAS("i2c:st_nci");

MODULE_INFO(srcversion, "DEA67E48F5CE27415F42049");
