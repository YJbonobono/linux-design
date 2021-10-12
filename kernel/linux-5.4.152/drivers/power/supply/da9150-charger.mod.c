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
	{ 0xe45cf80a, "da9150_set_bits" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0x31d47ed8, "devm_usb_get_phy" },
	{ 0xd27dba6b, "power_supply_register" },
	{ 0x3b947043, "iio_channel_get" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa5056eb6, "iio_read_channel_processed" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x86a998c8, "_dev_crit" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xe0fd101b, "power_supply_changed" },
	{ 0x6b23961e, "da9150_reg_read" },
	{ 0x7cca1b34, "iio_channel_release" },
	{ 0xf36f30f5, "power_supply_unregister" },
	{ 0x7181db30, "atomic_notifier_chain_unregister" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xfb44fe01, "platform_get_irq_byname" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "da9150-core,industrialio");


MODULE_INFO(srcversion, "C6E8E562C590B2F90BEBF9B");
