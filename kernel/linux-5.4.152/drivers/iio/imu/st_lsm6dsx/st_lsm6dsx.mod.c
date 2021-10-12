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
	{ 0xf9a482f9, "msleep" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0x6588cd57, "regmap_bulk_read" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x7775d5ed, "regmap_bulk_write" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0x509f66b3, "iio_get_time_ns" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x5c24352a, "__devm_iio_device_register" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6009b351, "iio_device_attach_buffer" },
	{ 0x110512c7, "irq_get_irq_data" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xc61fb118, "iio_device_claim_direct_mode" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5dcb9550, "iio_device_release_direct_mode" },
	{ 0x96848186, "scnprintf" },
	{ 0xb45c4302, "iio_push_to_buffers" },
	{ 0x67031ec1, "devm_iio_kfifo_allocate" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x8441f7b4, "regmap_write" },
};

MODULE_INFO(depends, "industrialio,kfifo_buf");


MODULE_INFO(srcversion, "B46A56422EC049BB7E2164C");
