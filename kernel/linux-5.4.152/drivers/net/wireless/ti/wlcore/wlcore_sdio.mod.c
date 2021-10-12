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
	{ 0x8512b0e4, "__pm_runtime_idle" },
	{ 0xc393be13, "sdio_writesb" },
	{ 0x9f9d0e7d, "sdio_enable_func" },
	{ 0xf5a5cf47, "mmc_hw_reset" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0x12f2067e, "sdio_get_host_pm_caps" },
	{ 0xc5850110, "printk" },
	{ 0x3461a347, "platform_device_unregister" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xe417a2e3, "sdio_readsb" },
	{ 0xedb85f12, "sdio_unregister_driver" },
	{ 0x5c52f4e7, "sdio_f0_writeb" },
	{ 0xf8544108, "sdio_set_host_pm_flags" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4c108934, "sdio_f0_readb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x4eb4db28, "sdio_memcpy_toio" },
	{ 0x935c26a9, "sdio_register_driver" },
	{ 0x2b1d5ab8, "sdio_memcpy_fromio" },
	{ 0xbbdba794, "sdio_claim_host" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x2d05e769, "sdio_set_block_size" },
	{ 0x241db100, "sdio_disable_func" },
	{ 0xaa57bcf0, "sdio_release_host" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("sdio:c*v0097d4076*");

MODULE_INFO(srcversion, "5148108111D1D7B9EE5F3C2");
