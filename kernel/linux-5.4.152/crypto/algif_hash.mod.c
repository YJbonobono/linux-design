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
	{ 0x7a688d36, "sock_no_mmap" },
	{ 0x8552971b, "sock_no_getsockopt" },
	{ 0x3eeb836, "sock_no_setsockopt" },
	{ 0xb64f81a0, "sock_no_shutdown" },
	{ 0x65f40752, "sock_no_listen" },
	{ 0x430200a2, "sock_no_ioctl" },
	{ 0x6c2ba262, "sock_no_getname" },
	{ 0xb1e6abd1, "sock_no_socketpair" },
	{ 0x8080c17, "sock_no_connect" },
	{ 0x3fd1ac7, "sock_no_bind" },
	{ 0x834dc4ea, "af_alg_release" },
	{ 0x44c57fae, "af_alg_unregister_type" },
	{ 0x47b3d151, "af_alg_register_type" },
	{ 0x4b000764, "af_alg_make_sg" },
	{ 0x42878cfb, "iov_iter_advance" },
	{ 0x5f051491, "af_alg_free_sg" },
	{ 0x7333aff9, "crypto_stats_ahash_update" },
	{ 0xfa4629ca, "crypto_stats_get" },
	{ 0xa90d72ca, "crypto_ahash_digest" },
	{ 0xf472488c, "crypto_ahash_finup" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x5067dc06, "_copy_to_iter" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x9fead42e, "crypto_ahash_final" },
	{ 0xfb578fc5, "memset" },
	{ 0x82eef861, "crypto_alloc_ahash" },
	{ 0x4698a058, "crypto_destroy_tfm" },
	{ 0xfe2a62ab, "crypto_ahash_setkey" },
	{ 0x8feff2f3, "crypto_req_done" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3b825352, "sock_kmalloc" },
	{ 0x6b9607d, "af_alg_release_parent" },
	{ 0xb9f82879, "sock_kfree_s" },
	{ 0x6e14a815, "sock_kzfree_s" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3bcbf347, "sk_free" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa8be73b, "af_alg_accept" },
	{ 0xf11f616d, "release_sock" },
	{ 0xf83fd03a, "lock_sock_nested" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "af_alg");


MODULE_INFO(srcversion, "BEF8B29EAC9EEFBE1DA0351");
