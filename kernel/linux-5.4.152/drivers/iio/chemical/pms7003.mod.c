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
	{ 0x2171917, "serdev_device_write_wakeup" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0xcc3eff2e, "__serdev_device_driver_register" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x5c24352a, "__devm_iio_device_register" },
	{ 0xa461b429, "devm_iio_triggered_buffer_setup" },
	{ 0x5073913b, "devm_add_action" },
	{ 0x6f232f03, "serdev_device_set_parity" },
	{ 0x9ca264f1, "serdev_device_set_flow_control" },
	{ 0x92af78dd, "serdev_device_set_baudrate" },
	{ 0x46d38844, "devm_serdev_device_open" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0xdb632f6, "iio_trigger_notify_done" },
	{ 0xb45c4302, "iio_push_to_buffers" },
	{ 0x509f66b3, "iio_get_time_ns" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0x3e7088f1, "serdev_device_write" },
	{ 0x29361773, "complete" },
	{ 0x69acdf38, "memcpy" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("of:N*T*Cplantower,pms1003");
MODULE_ALIAS("of:N*T*Cplantower,pms1003C*");
MODULE_ALIAS("of:N*T*Cplantower,pms3003");
MODULE_ALIAS("of:N*T*Cplantower,pms3003C*");
MODULE_ALIAS("of:N*T*Cplantower,pms5003");
MODULE_ALIAS("of:N*T*Cplantower,pms5003C*");
MODULE_ALIAS("of:N*T*Cplantower,pms6003");
MODULE_ALIAS("of:N*T*Cplantower,pms6003C*");
MODULE_ALIAS("of:N*T*Cplantower,pms7003");
MODULE_ALIAS("of:N*T*Cplantower,pms7003C*");
MODULE_ALIAS("of:N*T*Cplantower,pmsa003");
MODULE_ALIAS("of:N*T*Cplantower,pmsa003C*");

MODULE_INFO(srcversion, "7951D0094A2B364B10122F4");
