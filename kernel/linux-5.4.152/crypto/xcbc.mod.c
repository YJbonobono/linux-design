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
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0x69acdf38, "memcpy" },
	{ 0xbf765ef, "shash_free_instance" },
	{ 0xe80571ae, "shash_register_instance" },
	{ 0x653e1fdc, "crypto_init_spawn" },
	{ 0x4c144a67, "crypto_alloc_instance" },
	{ 0x287e39ab, "crypto_mod_put" },
	{ 0xfef9bd4, "crypto_attr_alg2" },
	{ 0x243f0b4b, "crypto_check_attr_type" },
	{ 0x78c12fe7, "crypto_spawn_tfm" },
	{ 0x4698a058, "crypto_destroy_tfm" },
	{ 0xfb578fc5, "memset" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D2C3C568383100A9170E05C");
