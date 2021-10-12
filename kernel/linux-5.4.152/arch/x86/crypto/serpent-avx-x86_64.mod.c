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
	{ 0x47c4e08f, "glue_xts_crypt_128bit_one" },
	{ 0x4eb4c55e, "__serpent_encrypt" },
	{ 0xcbd5a928, "simd_unregister_skciphers" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0xc7907901, "glue_ecb_req_128bit" },
	{ 0xbcc074f3, "__serpent_decrypt" },
	{ 0xc5850110, "printk" },
	{ 0xcaa68533, "cpu_has_xfeatures" },
	{ 0x21aa7a73, "simd_register_skciphers_compat" },
	{ 0x105ceace, "glue_xts_req_128bit" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd4c9681a, "__serpent_setkey" },
	{ 0x61a0e6a9, "glue_cbc_encrypt_req_128bit" },
	{ 0x4c0b327b, "glue_cbc_decrypt_req_128bit" },
};

MODULE_INFO(depends, "glue_helper,serpent_generic,crypto_simd");


MODULE_INFO(srcversion, "3BE30A6256F0C1A0216C909");
