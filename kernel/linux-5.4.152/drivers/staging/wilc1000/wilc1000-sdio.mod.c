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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x2d42350d, "sdio_writeb" },
	{ 0x9cda2403, "sdio_readb" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x815588a6, "clk_enable" },
	{ 0xd264aae9, "wilc_netdev_cleanup" },
	{ 0xbfe10fb6, "wilc_handle_isr" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x1dfad70f, "sdio_claim_irq" },
	{ 0xfa719b4c, "gpio_to_desc" },
	{ 0xe3fb1544, "chip_wakeup" },
	{ 0x91bc6cce, "chip_allow_sleep" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xedb85f12, "sdio_unregister_driver" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x4c8f5728, "wilc_cfg80211_init" },
	{ 0x204dea02, "host_wakeup_notify" },
	{ 0x1c4ea539, "sdio_release_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xd4f71093, "host_sleep_notify" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5c436800, "devm_clk_get" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x4eb4db28, "sdio_memcpy_toio" },
	{ 0x37a0cba, "kfree" },
	{ 0x935c26a9, "sdio_register_driver" },
	{ 0x2b1d5ab8, "sdio_memcpy_fromio" },
	{ 0xbbdba794, "sdio_claim_host" },
	{ 0x8bb8c57b, "gpiod_put" },
	{ 0xaa57bcf0, "sdio_release_host" },
	{ 0x72664c00, "gpiod_get" },
};

MODULE_INFO(depends, "wilc1000");

MODULE_ALIAS("of:N*T*Cmicrochip,wilc1000-sdio");
MODULE_ALIAS("of:N*T*Cmicrochip,wilc1000-sdioC*");

MODULE_INFO(srcversion, "5050BC9195347AA58308B75");
