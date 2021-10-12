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
	{ 0xc5850110, "printk" },
	{ 0x287e39ab, "crypto_mod_put" },
	{ 0x3865272e, "skcipher_register_instance" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1f18c513, "crypto_init_shash_spawn" },
	{ 0x3b5fe6ce, "crypto_alg_mod_lookup" },
	{ 0x1a548e8d, "crypto_grab_spawn" },
	{ 0x2b3cfce0, "crypto_grab_skcipher" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xcc574ab, "crypto_shash_setkey" },
	{ 0x299fbb2e, "poly1305_core_setkey" },
	{ 0x7a4497db, "kzfree" },
	{ 0x8feff2f3, "crypto_req_done" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x78c12fe7, "crypto_spawn_tfm" },
	{ 0x845c0fbc, "crypto_spawn_tfm2" },
	{ 0x67a9677b, "crypto_skcipher_encrypt" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x5ef1870c, "poly1305_core_emit" },
	{ 0x30dbed6e, "poly1305_core_blocks" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb6fa89ba, "crypto_shash_final" },
	{ 0x3cac7cba, "sg_miter_stop" },
	{ 0x78b45fc8, "crypto_shash_update" },
	{ 0x53cea585, "sg_miter_next" },
	{ 0x44458f85, "sg_miter_start" },
	{ 0x461d16ca, "sg_nents" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4698a058, "crypto_destroy_tfm" },
	{ 0x37a0cba, "kfree" },
	{ 0xeb43577c, "crypto_drop_spawn" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "poly1305_generic");


MODULE_INFO(srcversion, "386CE9F72D4A5CB250D00DA");
