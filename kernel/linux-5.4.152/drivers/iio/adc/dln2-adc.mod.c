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
	{ 0x5dcb9550, "iio_device_release_direct_mode" },
	{ 0xc61fb118, "iio_device_claim_direct_mode" },
	{ 0x2793bfa4, "__iio_device_register" },
	{ 0x38cf3a18, "dln2_register_event_cb" },
	{ 0xa461b429, "devm_iio_triggered_buffer_setup" },
	{ 0x402ccab6, "iio_trigger_set_immutable" },
	{ 0x2f7c0345, "__devm_iio_trigger_register" },
	{ 0x24d88838, "devm_iio_trigger_alloc" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x4838e3c6, "iio_triggered_buffer_postenable" },
	{ 0xf2663790, "iio_triggered_buffer_predisable" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xdb632f6, "iio_trigger_notify_done" },
	{ 0xb45c4302, "iio_push_to_buffers" },
	{ 0x509f66b3, "iio_get_time_ns" },
	{ 0xfb578fc5, "memset" },
	{ 0x69acdf38, "memcpy" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xddea90b6, "dln2_transfer" },
	{ 0x27c29caa, "iio_trigger_poll" },
	{ 0x42757752, "dln2_unregister_event_cb" },
	{ 0x809e31e5, "iio_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,dln2,industrialio-triggered-buffer");


MODULE_INFO(srcversion, "2738D141CC5D16E6876F7A8");
