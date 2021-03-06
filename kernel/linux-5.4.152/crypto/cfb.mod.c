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
	{ 0xf49b3605, "crypto_unregister_template" },
	{ 0x503828a5, "crypto_register_template" },
	{ 0xaa5b91e6, "skcipher_walk_done" },
	{ 0x69acdf38, "memcpy" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x5d4e17a4, "skcipher_walk_virt" },
	{ 0x287e39ab, "crypto_mod_put" },
	{ 0x3865272e, "skcipher_register_instance" },
	{ 0x64d7aded, "skcipher_alloc_instance_simple" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "52093737B07A30D7B526491");
