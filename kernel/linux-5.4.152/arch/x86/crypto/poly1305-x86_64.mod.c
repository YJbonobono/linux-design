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
	{ 0xd8898ca6, "crypto_poly1305_init" },
	{ 0xcbe5c179, "crypto_poly1305_update" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xcaa68533, "cpu_has_xfeatures" },
	{ 0xcedf68c6, "crypto_unregister_shash" },
	{ 0xeb3c98cf, "crypto_poly1305_final" },
	{ 0x296550c7, "crypto_register_shash" },
	{ 0x38722f80, "kernel_fpu_end" },
	{ 0x4129f5ee, "kernel_fpu_begin_mask" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65267047, "crypto_poly1305_setdesckey" },
	{ 0x69acdf38, "memcpy" },
	{ 0x73dd54eb, "irq_fpu_usable" },
};

MODULE_INFO(depends, "poly1305_generic");


MODULE_INFO(srcversion, "2D60B6497153A012E54E574");
