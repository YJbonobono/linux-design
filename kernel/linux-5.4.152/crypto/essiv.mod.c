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
	{ 0x4c9d28b0, "phys_base" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x6720be23, "crypto_aead_encrypt" },
	{ 0x5c5d41a4, "crypto_aead_decrypt" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0x5bbdfa26, "scatterwalk_ffwd" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4230a8d7, "sg_nents_for_len" },
	{ 0x99a493b9, "aead_register_instance" },
	{ 0x3865272e, "skcipher_register_instance" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5792f848, "strlcpy" },
	{ 0x1d95468e, "crypto_shash_alg_has_setkey" },
	{ 0x674a1010, "crypto_grab_aead" },
	{ 0xc5850110, "printk" },
	{ 0x287e39ab, "crypto_mod_put" },
	{ 0x3b5fe6ce, "crypto_alg_mod_lookup" },
	{ 0x349cba85, "strchr" },
	{ 0x9f984513, "strrchr" },
	{ 0x2b3cfce0, "crypto_grab_skcipher" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0x1a08b249, "crypto_shash_digest" },
	{ 0xc64e93ca, "crypto_aead_setkey" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd264fd59, "crypto_shash_finup" },
	{ 0x78b45fc8, "crypto_shash_update" },
	{ 0x2479193e, "crypto_authenc_extractkeys" },
	{ 0x845c0fbc, "crypto_spawn_tfm2" },
	{ 0x2765edd5, "crypto_alloc_shash" },
	{ 0x93bc49d5, "crypto_alloc_base" },
	{ 0xeb43577c, "crypto_drop_spawn" },
	{ 0x4e43a2c1, "crypto_skcipher_decrypt" },
	{ 0x67a9677b, "crypto_skcipher_encrypt" },
	{ 0xaa1823b, "crypto_aead_setauthsize" },
	{ 0x4698a058, "crypto_destroy_tfm" },
	{ 0x37a0cba, "kfree" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "authenc");


MODULE_INFO(srcversion, "EC970BB391F6A4969223CBC");
