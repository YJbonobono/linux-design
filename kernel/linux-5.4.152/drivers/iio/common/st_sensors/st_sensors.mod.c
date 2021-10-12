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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0x935ea4c2, "iio_trigger_unregister" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdb632f6, "iio_trigger_notify_done" },
	{ 0x8d338fac, "regulator_disable" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0xd58b29b6, "iio_trigger_alloc" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x6588cd57, "regmap_bulk_read" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x509f66b3, "iio_get_time_ns" },
	{ 0x1a5933f0, "iio_trigger_poll_chained" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xe7e67bce, "__iio_trigger_register" },
	{ 0x51e394bb, "iio_trigger_using_own" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x110512c7, "irq_get_irq_data" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x2a4f8997, "devm_regulator_get" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x3750a460, "get_device" },
	{ 0x6b347276, "__module_get" },
	{ 0x173e2162, "iio_trigger_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x96848186, "scnprintf" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xb45c4302, "iio_push_to_buffers" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xc0877d2b, "regulator_enable" },
};

MODULE_INFO(depends, "industrialio");


MODULE_INFO(srcversion, "8E7A88C7F6E9E1BA2BF3004");
