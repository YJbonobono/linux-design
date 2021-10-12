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
	{ 0x52f6a9cb, "glue_ctr_req_128bit" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x1d82cab0, "crypto_unregister_skciphers" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xc7907901, "glue_ecb_req_128bit" },
	{ 0x3fa931e8, "crypto_register_skciphers" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7cd7a6f6, "crypto_register_alg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x61a0e6a9, "glue_cbc_encrypt_req_128bit" },
	{ 0x829589e5, "crypto_unregister_alg" },
	{ 0x4c0b327b, "glue_cbc_decrypt_req_128bit" },
};

MODULE_INFO(depends, "glue_helper");


MODULE_INFO(srcversion, "5EDC1B9C97C86EE7806DC0D");
