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
	{ 0x483d92b0, "crypto_alloc_skcipher" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x55cda97c, "ahash_register_instance" },
	{ 0x4581ebaf, "shash_attr_alg" },
	{ 0x287e39ab, "crypto_mod_put" },
	{ 0xfa378eeb, "crypto_dequeue_request" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0x5c845a46, "shash_ahash_digest" },
	{ 0x2b3cfce0, "crypto_grab_skcipher" },
	{ 0xf49b3605, "crypto_unregister_template" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xb6fa89ba, "crypto_shash_final" },
	{ 0xa84445df, "shash_ahash_finup" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x3865272e, "skcipher_register_instance" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x1d95468e, "crypto_shash_alg_has_setkey" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xfb578fc5, "memset" },
	{ 0x674a1010, "crypto_grab_aead" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xc5850110, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x503828a5, "crypto_register_template" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xcc574ab, "crypto_shash_setkey" },
	{ 0x499043d3, "crypto_init_queue" },
	{ 0xeb43577c, "crypto_drop_spawn" },
	{ 0xc64e93ca, "crypto_aead_setkey" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0xa4ec17e4, "crypto_enqueue_request" },
	{ 0x4e43a2c1, "crypto_skcipher_decrypt" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4698a058, "crypto_destroy_tfm" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xaa1823b, "crypto_aead_setauthsize" },
	{ 0x66f32578, "crypto_alloc_aead" },
	{ 0x845c0fbc, "crypto_spawn_tfm2" },
	{ 0x1f18c513, "crypto_init_shash_spawn" },
	{ 0x37a0cba, "kfree" },
	{ 0x5cb473a7, "shash_ahash_update" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x83b05a16, "param_ops_uint" },
	{ 0x99a493b9, "aead_register_instance" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x82eef861, "crypto_alloc_ahash" },
	{ 0x67a9677b, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6376601629563723420DCA5");
