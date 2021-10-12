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
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0x84edcf0, "__spi_register_driver" },
	{ 0xf271f57a, "devm_kfree" },
	{ 0x6f3bd9ba, "device_init_wakeup" },
	{ 0x4ce68b52, "input_register_device" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x87e5e4e2, "gpiod_set_debounce" },
	{ 0x403f9529, "gpio_request_one" },
	{ 0xeea71840, "hwmon_device_register_with_groups" },
	{ 0x53ca4226, "input_free_device" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9e6c47a8, "regulator_get" },
	{ 0x332f1f5e, "touchscreen_parse_properties" },
	{ 0x49df2111, "input_set_abs_params" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xd05ef65f, "input_allocate_device" },
	{ 0x2292b333, "spi_setup" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xfe990052, "gpio_free" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0x963d3287, "regulator_put" },
	{ 0xc990b1cf, "hwmon_device_unregister" },
	{ 0xabb11fa6, "input_unregister_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x8d338fac, "regulator_disable" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc0877d2b, "regulator_enable" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x94fb90fa, "touchscreen_report_pos" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x70bf4816, "spi_sync" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf8c679e2, "input_event" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x65190b88, "gpiod_get_raw_value" },
	{ 0xfa719b4c, "gpio_to_desc" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "4CD2681A3694442C2EAD082");
