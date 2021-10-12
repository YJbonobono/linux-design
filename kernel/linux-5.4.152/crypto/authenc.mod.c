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
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x5bbdfa26, "scatterwalk_ffwd" },
	{ 0xfc0c7df9, "crypto_init_ahash_spawn" },
	{ 0x287e39ab, "crypto_mod_put" },
	{ 0xb73ab077, "ahash_attr_alg" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0x2b3cfce0, "crypto_grab_skcipher" },
	{ 0xf49b3605, "crypto_unregister_template" },
	{ 0x715c7516, "crypto_get_default_null_skcipher" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0x21cd536a, "crypto_put_default_null_skcipher" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0xa90d72ca, "crypto_ahash_digest" },
	{ 0x503828a5, "crypto_register_template" },
	{ 0xeb43577c, "crypto_drop_spawn" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0x4e43a2c1, "crypto_skcipher_decrypt" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4698a058, "crypto_destroy_tfm" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x845c0fbc, "crypto_spawn_tfm2" },
	{ 0x37a0cba, "kfree" },
	{ 0xfe2a62ab, "crypto_ahash_setkey" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x99a493b9, "aead_register_instance" },
	{ 0x67a9677b, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "755314D9A45281518FF2668");
