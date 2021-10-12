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
	{ 0x80530abe, "ssb_driver_unregister" },
	{ 0x307d5d4a, "__ssb_driver_register" },
	{ 0xdfc7c6ef, "ssb_admatch_size" },
	{ 0xcb17f1cb, "ssb_admatch_base" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe6852960, "platform_device_put" },
	{ 0xbf8f8395, "platform_device_add" },
	{ 0x78fb0a28, "platform_device_add_data" },
	{ 0x45f8dd9e, "platform_device_add_resources" },
	{ 0x46ba9a3c, "platform_device_alloc" },
	{ 0x3461a347, "platform_device_unregister" },
	{ 0x1670289f, "ssb_device_enable" },
	{ 0xf87fba2b, "ssb_device_disable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ssb");

MODULE_ALIAS("ssb:v4243id0808rev*");
MODULE_ALIAS("ssb:v4243id0817rev*");
MODULE_ALIAS("ssb:v4243id0819rev*");

MODULE_INFO(srcversion, "D1CBD34E5A02BE2CD8EFC4E");
