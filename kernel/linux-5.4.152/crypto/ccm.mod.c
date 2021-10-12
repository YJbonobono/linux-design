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
	{ 0xdaa4dc6d, "crypto_unregister_templates" },
	{ 0x515d07fc, "crypto_register_templates" },
	{ 0x67a9677b, "crypto_skcipher_encrypt" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0x4e43a2c1, "crypto_skcipher_decrypt" },
	{ 0x87b8798d, "sg_next" },
	{ 0xf472488c, "crypto_ahash_finup" },
	{ 0x7333aff9, "crypto_stats_ahash_update" },
	{ 0xfa4629ca, "crypto_stats_get" },
	{ 0x6720be23, "crypto_aead_encrypt" },
	{ 0x5c5d41a4, "crypto_aead_decrypt" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x5bbdfa26, "scatterwalk_ffwd" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x674a1010, "crypto_grab_aead" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0x99a493b9, "aead_register_instance" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x2b3cfce0, "crypto_grab_skcipher" },
	{ 0xfc0c7df9, "crypto_init_ahash_spawn" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x2b8b576b, "crypto_find_alg" },
	{ 0xf2434009, "crypto_ahash_type" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0xe80571ae, "shash_register_instance" },
	{ 0x287e39ab, "crypto_mod_put" },
	{ 0xbf765ef, "shash_free_instance" },
	{ 0x653e1fdc, "crypto_init_spawn" },
	{ 0x4c144a67, "crypto_alloc_instance" },
	{ 0xfef9bd4, "crypto_attr_alg2" },
	{ 0x243f0b4b, "crypto_check_attr_type" },
	{ 0x78c12fe7, "crypto_spawn_tfm" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0xfe2a62ab, "crypto_ahash_setkey" },
	{ 0xfb578fc5, "memset" },
	{ 0x37a0cba, "kfree" },
	{ 0xeb43577c, "crypto_drop_spawn" },
	{ 0x845c0fbc, "crypto_spawn_tfm2" },
	{ 0x4698a058, "crypto_destroy_tfm" },
	{ 0xc64e93ca, "crypto_aead_setkey" },
	{ 0xaa1823b, "crypto_aead_setauthsize" },
	{ 0x69acdf38, "memcpy" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6163408619F3FE346E2B230");
