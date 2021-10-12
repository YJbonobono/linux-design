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
	{ 0x5cefbcdb, "cros_ec_get_host_event" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x85665f95, "power_supply_get_drvdata" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x56470118, "__warn_printk" },
	{ 0x5073913b, "devm_add_action" },
	{ 0x907d14d, "blocking_notifier_chain_register" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf5ff66f5, "devm_power_supply_register_no_ws" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xea5722fc, "cros_ec_cmd_xfer_status" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4ece3615, "blocking_notifier_chain_unregister" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe0fd101b, "power_supply_changed" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "05C9F9ADA7D868B6109B6A2");
