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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8512b0e4, "__pm_runtime_idle" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0x8d338fac, "regulator_disable" },
	{ 0x4afe5389, "gnss_put_device" },
	{ 0xf8969cfe, "gnss_register_device" },
	{ 0x9aa150ed, "serdev_device_close" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0x7db272e5, "gnss_deregister_device" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x43347c8d, "gnss_allocate_device" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xcc3eff2e, "__serdev_device_driver_register" },
	{ 0x37e8a607, "serdev_device_wait_until_sent" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x3e7088f1, "serdev_device_write" },
	{ 0x2171917, "serdev_device_write_wakeup" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x2a4f8997, "devm_regulator_get" },
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xe2b406c7, "__pm_runtime_set_status" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xfad9bcc5, "devm_gpiod_get_optional" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x66c61188, "serdev_device_open" },
	{ 0xa9cff0a9, "gpiod_to_irq" },
	{ 0x9ca264f1, "serdev_device_set_flow_control" },
	{ 0x2cafe987, "gnss_insert_raw" },
	{ 0x43764038, "gpiod_set_value_cansleep" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x92af78dd, "serdev_device_set_baudrate" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xc0877d2b, "regulator_enable" },
	{ 0x1b45043a, "gpiod_get_value_cansleep" },
};

MODULE_INFO(depends, "gnss");


MODULE_INFO(srcversion, "D84AEA9C10C9C42CD3397E9");
