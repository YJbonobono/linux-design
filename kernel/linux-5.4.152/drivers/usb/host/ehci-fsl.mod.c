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
	{ 0xa3c35c26, "usb_hcd_platform_shutdown" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x2309b7e3, "ehci_init_driver" },
	{ 0xc5850110, "printk" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0xf16818f9, "ehci_setup" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xf8c0536e, "device_wakeup_enable" },
	{ 0x7c5af92b, "usb_add_hcd" },
	{ 0xb43b1853, "devm_ioremap_resource" },
	{ 0xa1955693, "__usb_create_hcd" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0xfed34a2e, "usb_put_hcd" },
	{ 0x8e47018c, "usb_remove_hcd" },
	{ 0xfc4a3d9f, "usb_put_phy" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe419bc99, "iowrite32be" },
	{ 0xfdb9b629, "ioread32be" },
	{ 0xfd6a9f84, "ehci_adjust_port_wakeup_flags" },
	{ 0x5798862d, "usb_root_hub_lost_power" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "35C6D31F45D38B14F68364E");
