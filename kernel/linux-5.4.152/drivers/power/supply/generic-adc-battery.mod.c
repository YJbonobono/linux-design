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
	{ 0xdbdb0e8b, "request_any_context_irq" },
	{ 0x47229b5c, "gpio_request" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd27dba6b, "power_supply_register" },
	{ 0x3b947043, "iio_channel_get" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x65190b88, "gpiod_get_raw_value" },
	{ 0xe0fd101b, "power_supply_changed" },
	{ 0x8ce1e810, "power_supply_am_i_supplied" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa5056eb6, "iio_read_channel_processed" },
	{ 0x85665f95, "power_supply_get_drvdata" },
	{ 0xfe990052, "gpio_free" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xa9cff0a9, "gpiod_to_irq" },
	{ 0xfa719b4c, "gpio_to_desc" },
	{ 0x37a0cba, "kfree" },
	{ 0x7cca1b34, "iio_channel_release" },
	{ 0xf36f30f5, "power_supply_unregister" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");


MODULE_INFO(srcversion, "477F10F412DCFE582D59D62");
