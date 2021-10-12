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
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xa94ba86f, "devm_gpiod_get" },
	{ 0x3d952d0a, "usb_add_gadget_udc" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x4a2315f5, "usb_ep_set_maxpacket_limit" },
	{ 0xfa719b4c, "gpio_to_desc" },
	{ 0x8a361363, "devm_gpio_request_one" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x5c436800, "devm_clk_get" },
	{ 0xaa7413e8, "gpiod_direction_output" },
	{ 0xb87c30c4, "usb_get_phy" },
	{ 0x1b9d3c81, "platform_get_irq" },
	{ 0xb43b1853, "devm_ioremap_resource" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x815588a6, "clk_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf0979a46, "usb_gadget_giveback_request" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4a02cc07, "usb_phy_set_charger_current" },
	{ 0x37a0cba, "kfree" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xfc4a3d9f, "usb_put_phy" },
	{ 0x7181db30, "atomic_notifier_chain_unregister" },
	{ 0x71752d07, "usb_del_gadget_udc" },
	{ 0x5aab6723, "usb_gadget_vbus_disconnect" },
	{ 0x9c50cfce, "usb_gadget_vbus_connect" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xaa29ef71, "gpiod_set_value" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "udc-core");


MODULE_INFO(srcversion, "11ADF71A837561B01B25DB1");
