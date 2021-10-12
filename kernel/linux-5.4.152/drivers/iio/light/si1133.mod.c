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
	{ 0xffc70028, "iio_read_const_attr" },
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0x6588cd57, "regmap_bulk_read" },
	{ 0x5c24352a, "__devm_iio_device_register" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xb7f1340b, "__devm_regmap_init_i2c" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x12a38747, "usleep_range" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x29361773, "complete" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("i2c:si1133");

MODULE_INFO(srcversion, "CB161978B17D079495A7509");
