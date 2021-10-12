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
	{ 0x2d3385d3, "system_wq" },
	{ 0x48415adb, "dma_direct_unmap_sg" },
	{ 0xea778fab, "sg_pcopy_to_buffer" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x2765edd5, "crypto_alloc_shash" },
	{ 0x38ba8a6c, "crypto_ablkcipher_type" },
	{ 0x461d16ca, "sg_nents" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x87b8798d, "sg_next" },
	{ 0x676a11a9, "cxgb4_unregister_uld" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0x2a2b225a, "crypto_alloc_sync_skcipher" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xfb578fc5, "memset" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x78b45fc8, "crypto_shash_update" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x1a08b249, "crypto_shash_digest" },
	{ 0x4230a8d7, "sg_nents_for_len" },
	{ 0x96317b23, "crypto_register_ahash" },
	{ 0xa6f918c1, "cxgb4_crypto_send" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6720be23, "crypto_aead_encrypt" },
	{ 0xc64e93ca, "crypto_aead_setkey" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0x4e43a2c1, "crypto_skcipher_decrypt" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x2479193e, "crypto_authenc_extractkeys" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x4698a058, "crypto_destroy_tfm" },
	{ 0x18d1fb87, "crypto_unregister_ahash" },
	{ 0x7cd7a6f6, "crypto_register_alg" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x33f02ead, "cxgb4_register_uld" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x558b281d, "aes_expandkey" },
	{ 0x78a16f48, "aes_decrypt" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x5c5d41a4, "crypto_aead_decrypt" },
	{ 0xaa1823b, "crypto_aead_setauthsize" },
	{ 0x66f32578, "crypto_alloc_aead" },
	{ 0x7a1bcd59, "gf128mul_x8_ble" },
	{ 0x37a0cba, "kfree" },
	{ 0x836f9b25, "crypto_unregister_aead" },
	{ 0xc702dbb2, "dma_direct_map_sg" },
	{ 0x913a9509, "crypto_register_aead" },
	{ 0x69acdf38, "memcpy" },
	{ 0x29361773, "complete" },
	{ 0x829589e5, "crypto_unregister_alg" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0x67a9677b, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "cxgb4,authenc");


MODULE_INFO(srcversion, "E5B66AED2789CCBC56411A9");
