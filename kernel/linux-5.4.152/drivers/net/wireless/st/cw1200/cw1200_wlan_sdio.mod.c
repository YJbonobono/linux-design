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
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x947f9752, "cw1200_irq_handler" },
	{ 0x9f9d0e7d, "sdio_enable_func" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x1dfad70f, "sdio_claim_irq" },
	{ 0xfa719b4c, "gpio_to_desc" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x7077e4a8, "cw1200_core_release" },
	{ 0x82ad5dde, "cw1200_can_suspend" },
	{ 0xc5850110, "printk" },
	{ 0x9d10da1c, "gpiod_direction_output_raw" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xedb85f12, "sdio_unregister_driver" },
	{ 0x5c52f4e7, "sdio_f0_writeb" },
	{ 0xf8544108, "sdio_set_host_pm_flags" },
	{ 0x1c4ea539, "sdio_release_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x88b85e0b, "sdio_align_size" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4c108934, "sdio_f0_readb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x4eb4db28, "sdio_memcpy_toio" },
	{ 0xfe990052, "gpio_free" },
	{ 0x37a0cba, "kfree" },
	{ 0xdbdbe94d, "gpiod_set_raw_value" },
	{ 0x935c26a9, "sdio_register_driver" },
	{ 0x2b1d5ab8, "sdio_memcpy_fromio" },
	{ 0xbbdba794, "sdio_claim_host" },
	{ 0x580bf24a, "cw1200_core_probe" },
	{ 0x241db100, "sdio_disable_func" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xaa57bcf0, "sdio_release_host" },
};

MODULE_INFO(depends, "cw1200_core");

MODULE_ALIAS("sdio:c*v0020d2280*");

MODULE_INFO(srcversion, "4DBD1B34AEE87429B1758B2");
