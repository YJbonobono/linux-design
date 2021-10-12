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
	{ 0x7c7bf6e0, "twofish_enc_blk" },
	{ 0xcbd5a928, "simd_unregister_skciphers" },
	{ 0x2c7b3458, "twofish_enc_blk_ctr" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0xc7907901, "glue_ecb_req_128bit" },
	{ 0xc5850110, "printk" },
	{ 0xcaa68533, "cpu_has_xfeatures" },
	{ 0x21aa7a73, "simd_register_skciphers_compat" },
	{ 0x105ceace, "glue_xts_req_128bit" },
	{ 0xb1e70801, "__twofish_setkey" },
	{ 0xe4ae7508, "__twofish_enc_blk_3way" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x31ddef7a, "twofish_enc_blk_ctr_3way" },
	{ 0x2b47d5bb, "twofish_setkey" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x92a51c43, "twofish_dec_blk_cbc_3way" },
	{ 0xb4e98a46, "twofish_dec_blk_3way" },
	{ 0x61a0e6a9, "glue_cbc_encrypt_req_128bit" },
	{ 0x1f491d36, "twofish_dec_blk" },
	{ 0x4c0b327b, "glue_cbc_decrypt_req_128bit" },
};

MODULE_INFO(depends, "glue_helper,twofish-x86_64,crypto_simd,twofish-x86_64-3way,twofish_common");


MODULE_INFO(srcversion, "1FD3E14BBD2E3E01F6C8D50");
