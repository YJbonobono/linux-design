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
	{ 0x77e9eb37, "aes_encrypt" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x89ae7aa0, "rsa_parse_pub_key" },
	{ 0x2765edd5, "crypto_alloc_shash" },
	{ 0x5df1e825, "crypto_register_akcipher" },
	{ 0x38ba8a6c, "crypto_ablkcipher_type" },
	{ 0x461d16ca, "sg_nents" },
	{ 0x91fa3748, "ccp_enqueue_cmd" },
	{ 0x4773b60, "ccp_present" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x87b8798d, "sg_next" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0x2a2b225a, "crypto_alloc_sync_skcipher" },
	{ 0x3a1a3979, "ccp_version" },
	{ 0xfb578fc5, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x1a08b249, "crypto_shash_digest" },
	{ 0x9166fada, "strncpy" },
	{ 0x96317b23, "crypto_register_ahash" },
	{ 0xd75b20aa, "rsa_parse_priv_key" },
	{ 0xf59e973, "crypto_unregister_akcipher" },
	{ 0x3a2f6702, "sg_alloc_table" },
	{ 0x4e43a2c1, "crypto_skcipher_decrypt" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4698a058, "crypto_destroy_tfm" },
	{ 0x18d1fb87, "crypto_unregister_ahash" },
	{ 0x7cd7a6f6, "crypto_register_alg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x558b281d, "aes_expandkey" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x37a0cba, "kfree" },
	{ 0x836f9b25, "crypto_unregister_aead" },
	{ 0x913a9509, "crypto_register_aead" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7a4497db, "kzfree" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x83b05a16, "param_ops_uint" },
	{ 0x829589e5, "crypto_unregister_alg" },
	{ 0x67a9677b, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "ccp");


MODULE_INFO(srcversion, "503B3EBEF682F4E35203AED");
