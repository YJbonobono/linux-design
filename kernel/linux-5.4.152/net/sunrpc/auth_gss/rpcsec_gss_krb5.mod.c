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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x38d3dce5, "g_make_token_header" },
	{ 0x2765edd5, "crypto_alloc_shash" },
	{ 0x90722f51, "write_bytes_to_xdr_buf" },
	{ 0x7333aff9, "crypto_stats_ahash_update" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xf54bd49b, "lcm" },
	{ 0xac208005, "gss_mech_register" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0x9fead42e, "crypto_ahash_final" },
	{ 0x2a2b225a, "crypto_alloc_sync_skcipher" },
	{ 0xa90d72ca, "crypto_ahash_digest" },
	{ 0xd7673035, "g_verify_token_header" },
	{ 0xc0b67655, "xdr_buf_subsegment" },
	{ 0x31a89d59, "rpc_debug" },
	{ 0xfb578fc5, "memset" },
	{ 0x6006847, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x1a08b249, "crypto_shash_digest" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0xcc574ab, "crypto_shash_setkey" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x4e43a2c1, "crypto_skcipher_decrypt" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4698a058, "crypto_destroy_tfm" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xac866119, "gss_mech_unregister" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xfe2a62ab, "crypto_ahash_setkey" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0x7a4497db, "kzfree" },
	{ 0xa9a9c059, "read_bytes_from_xdr_buf" },
	{ 0x2ca16e62, "xdr_process_buf" },
	{ 0xb0e602eb, "memmove" },
	{ 0x482ac5a4, "g_token_size" },
	{ 0xfa4629ca, "crypto_stats_get" },
	{ 0x59483c21, "xdr_buf_trim" },
	{ 0x82eef861, "crypto_alloc_ahash" },
	{ 0x67a9677b, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "auth_rpcgss,sunrpc");


MODULE_INFO(srcversion, "09B93E252E7311769A6B47A");
