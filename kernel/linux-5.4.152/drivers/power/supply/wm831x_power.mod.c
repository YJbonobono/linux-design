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
	{ 0xcab3c35f, "_dev_info" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0x689288c8, "devm_usb_get_phy_by_phandle" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xd27dba6b, "power_supply_register" },
	{ 0x1efad18a, "wm831x_reg_lock" },
	{ 0x8d0b6bd9, "wm831x_reg_unlock" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x3cb699f2, "wm831x_reg_read" },
	{ 0x71fe6c87, "wm831x_auxadc_read_uv" },
	{ 0x86a998c8, "_dev_crit" },
	{ 0xe0fd101b, "power_supply_changed" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x3acfceab, "wm831x_set_bits" },
	{ 0xf36f30f5, "power_supply_unregister" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x6d109050, "irq_create_mapping_affinity" },
	{ 0xfb44fe01, "platform_get_irq_byname" },
	{ 0x7181db30, "atomic_notifier_chain_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "79FA500B28A5794FA3BCF5C");
