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
	{ 0xe0fd101b, "power_supply_changed" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0x6f3bd9ba, "device_init_wakeup" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xd27dba6b, "power_supply_register" },
	{ 0xb87c30c4, "usb_get_phy" },
	{ 0xff547e40, "platform_get_resource_byname" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x9e6c47a8, "regulator_get" },
	{ 0xc0877d2b, "regulator_enable" },
	{ 0xa1a8647d, "regulator_set_current_limit" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x8d338fac, "regulator_disable" },
	{ 0x963d3287, "regulator_put" },
	{ 0xfc4a3d9f, "usb_put_phy" },
	{ 0xf36f30f5, "power_supply_unregister" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D21A4C966C03ACB6382433A");
