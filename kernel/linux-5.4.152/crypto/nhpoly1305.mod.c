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
	{ 0xcedf68c6, "crypto_unregister_shash" },
	{ 0x296550c7, "crypto_register_shash" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5ef1870c, "poly1305_core_emit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x69acdf38, "memcpy" },
	{ 0x30dbed6e, "poly1305_core_blocks" },
	{ 0x299fbb2e, "poly1305_core_setkey" },
};

MODULE_INFO(depends, "poly1305_generic");


MODULE_INFO(srcversion, "C5CB614661C4396B94A3776");
