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
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0x5a4a7fe5, "iio_kfifo_free" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x809e31e5, "iio_device_unregister" },
	{ 0xc5bbcaca, "dma_release_channel" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x1f9586be, "dma_request_chan" },
	{ 0x2793bfa4, "__iio_device_register" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x6009b351, "iio_device_attach_buffer" },
	{ 0x4bb1240c, "iio_kfifo_allocate" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x8868a90f, "am335x_tsc_se_adc_done" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x6903dc5a, "am335x_tsc_se_set_once" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb45c4302, "iio_push_to_buffers" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x610a6f1b, "am335x_tsc_se_clr" },
	{ 0x72a8884, "am335x_tsc_se_set_cache" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "kfifo_buf,industrialio,ti_am335x_tscadc");

MODULE_ALIAS("of:N*T*Cti,am3359-adc");
MODULE_ALIAS("of:N*T*Cti,am3359-adcC*");

MODULE_INFO(srcversion, "5664726A91C01E351A62DE8");
