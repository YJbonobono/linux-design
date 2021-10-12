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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0x483d92b0, "crypto_alloc_skcipher" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xb1441c8d, "cryptd_free_skcipher" },
	{ 0x1d82cab0, "crypto_unregister_skciphers" },
	{ 0x865212e8, "cryptd_free_aead" },
	{ 0x42389e50, "cryptd_skcipher_queued" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x3fa931e8, "crypto_register_skciphers" },
	{ 0x3c8e7938, "crypto_unregister_skcipher" },
	{ 0x21ae2221, "cryptd_aead_queued" },
	{ 0x6720be23, "crypto_aead_encrypt" },
	{ 0xdde68bad, "crypto_register_skcipher" },
	{ 0xc64e93ca, "crypto_aead_setkey" },
	{ 0x6e72d504, "cryptd_alloc_skcipher" },
	{ 0x4e43a2c1, "crypto_skcipher_decrypt" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1caaa202, "cryptd_skcipher_child" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4698a058, "crypto_destroy_tfm" },
	{ 0xf523894f, "crypto_unregister_aeads" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x5c5d41a4, "crypto_aead_decrypt" },
	{ 0xaa1823b, "crypto_aead_setauthsize" },
	{ 0x66f32578, "crypto_alloc_aead" },
	{ 0xcdd76478, "crypto_register_aeads" },
	{ 0x37a0cba, "kfree" },
	{ 0x836f9b25, "crypto_unregister_aead" },
	{ 0x913a9509, "crypto_register_aead" },
	{ 0x73dd54eb, "irq_fpu_usable" },
	{ 0xf52d5054, "cryptd_aead_child" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x794448a2, "cryptd_alloc_aead" },
	{ 0x67a9677b, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "cryptd");


MODULE_INFO(srcversion, "1ACFB78EF3632E97172F629");
