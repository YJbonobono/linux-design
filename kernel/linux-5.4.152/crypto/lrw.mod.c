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
	{ 0x3865272e, "skcipher_register_instance" },
	{ 0x754d539c, "strlen" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xad9f9785, "crypto_inst_setname" },
	{ 0x2b3cfce0, "crypto_grab_skcipher" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0x67a9677b, "crypto_skcipher_encrypt" },
	{ 0x4e43a2c1, "crypto_skcipher_decrypt" },
	{ 0x37a0cba, "kfree" },
	{ 0xeb43577c, "crypto_drop_spawn" },
	{ 0x845c0fbc, "crypto_spawn_tfm2" },
	{ 0x4698a058, "crypto_destroy_tfm" },
	{ 0x3755f990, "gf128mul_init_64k_bbe" },
	{ 0xd60736ec, "gf128mul_free_64k" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xaa5b91e6, "skcipher_walk_done" },
	{ 0x5d4e17a4, "skcipher_walk_virt" },
	{ 0x5e373fb4, "gf128mul_64k_bbe" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B93B70A40473D2EBB29F031");
