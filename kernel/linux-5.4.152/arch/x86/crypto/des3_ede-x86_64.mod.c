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
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x1d82cab0, "crypto_unregister_skciphers" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xa77b3b62, "des3_ede_expand_key" },
	{ 0xaa5b91e6, "skcipher_walk_done" },
	{ 0x3fa931e8, "crypto_register_skciphers" },
	{ 0xc5850110, "printk" },
	{ 0x5d4e17a4, "skcipher_walk_virt" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7cd7a6f6, "crypto_register_alg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3ef051c8, "crypto_inc" },
	{ 0x829589e5, "crypto_unregister_alg" },
};

MODULE_INFO(depends, "libdes");


MODULE_INFO(srcversion, "D72D603E8C18CE87D022A2F");
