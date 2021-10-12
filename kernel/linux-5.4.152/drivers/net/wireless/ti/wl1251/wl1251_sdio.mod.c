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
	{ 0x2d42350d, "sdio_writeb" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x8512b0e4, "__pm_runtime_idle" },
	{ 0x11d771a, "ieee80211_queue_work" },
	{ 0x9f9d0e7d, "sdio_enable_func" },
	{ 0xfcf59bdb, "wl1251_free_hw" },
	{ 0x36661c24, "sdio_writeb_readb" },
	{ 0x1dfad70f, "sdio_claim_irq" },
	{ 0xfa719b4c, "gpio_to_desc" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0xc5850110, "printk" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x13243d4b, "wl1251_get_platform_data" },
	{ 0xedb85f12, "sdio_unregister_driver" },
	{ 0xbc477a2, "irq_set_irq_type" },
	{ 0x1c4ea539, "sdio_release_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0x5dd395a7, "wl1251_init_ieee80211" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x4eb4db28, "sdio_memcpy_toio" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0xdbdbe94d, "gpiod_set_raw_value" },
	{ 0x935c26a9, "sdio_register_driver" },
	{ 0x2b1d5ab8, "sdio_memcpy_fromio" },
	{ 0xbbdba794, "sdio_claim_host" },
	{ 0x1d864272, "devm_gpio_request" },
	{ 0xe8ee485d, "wl1251_alloc_hw" },
	{ 0x2d05e769, "sdio_set_block_size" },
	{ 0x241db100, "sdio_disable_func" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xaa57bcf0, "sdio_release_host" },
};

MODULE_INFO(depends, "mac80211,wl1251");

MODULE_ALIAS("sdio:c*v0097d9066*");

MODULE_INFO(srcversion, "11E49F5EBA8A10C2D3D8D8C");
