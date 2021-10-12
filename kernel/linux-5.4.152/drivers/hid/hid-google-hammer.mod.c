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
	{ 0xca7229f7, "hid_unregister_driver" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x542a5355, "__hid_register_driver" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x6f3bd9ba, "device_init_wakeup" },
	{ 0x907d14d, "blocking_notifier_chain_register" },
	{ 0x4ce68b52, "input_register_device" },
	{ 0x281d1f24, "input_set_capability" },
	{ 0xda9d1e18, "devm_input_allocate_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x4ece3615, "blocking_notifier_chain_unregister" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xde7e0663, "pm_wakeup_dev_event" },
	{ 0xe4b8a68d, "devm_led_classdev_register_ext" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x890efe67, "hid_hw_start" },
	{ 0xf739c30c, "hid_open_report" },
	{ 0xf8c679e2, "input_event" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x37a0cba, "kfree" },
	{ 0xea5722fc, "cros_ec_cmd_xfer_status" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hid");

MODULE_ALIAS("hid:b0003g0001v000018D1p00005050");
MODULE_ALIAS("hid:b0003g0001v000018D1p00005022");
MODULE_ALIAS("hid:b0003g0001v000018D1p0000503D");
MODULE_ALIAS("hid:b0003g0001v000018D1p0000503C");
MODULE_ALIAS("hid:b0003g0001v000018D1p00005044");
MODULE_ALIAS("hid:b0003g0001v000018D1p0000502B");
MODULE_ALIAS("hid:b0003g0001v000018D1p0000502D");
MODULE_ALIAS("hid:b0003g0001v000018D1p00005030");
MODULE_ALIAS("acpi*:GOOG000B:*");

MODULE_INFO(srcversion, "C4FE86B6D8E9625DF4F6A14");
