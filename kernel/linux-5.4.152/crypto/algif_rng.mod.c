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
	{ 0xb09130b0, "sock_no_sendpage" },
	{ 0x7a688d36, "sock_no_mmap" },
	{ 0x4f3735b0, "sock_no_sendmsg" },
	{ 0x8552971b, "sock_no_getsockopt" },
	{ 0x3eeb836, "sock_no_setsockopt" },
	{ 0xb64f81a0, "sock_no_shutdown" },
	{ 0x65f40752, "sock_no_listen" },
	{ 0x430200a2, "sock_no_ioctl" },
	{ 0x6c2ba262, "sock_no_getname" },
	{ 0xe0d91def, "sock_no_accept" },
	{ 0xb1e6abd1, "sock_no_socketpair" },
	{ 0x8080c17, "sock_no_connect" },
	{ 0x3fd1ac7, "sock_no_bind" },
	{ 0x834dc4ea, "af_alg_release" },
	{ 0x44c57fae, "af_alg_unregister_type" },
	{ 0x47b3d151, "af_alg_register_type" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5067dc06, "_copy_to_iter" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe4c66239, "crypto_stats_rng_generate" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xfa4629ca, "crypto_stats_get" },
	{ 0x3acb7f30, "crypto_alloc_rng" },
	{ 0x4698a058, "crypto_destroy_tfm" },
	{ 0xcbbf35ee, "crypto_rng_reset" },
	{ 0x6b9607d, "af_alg_release_parent" },
	{ 0xb9f82879, "sock_kfree_s" },
	{ 0x3b825352, "sock_kmalloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "af_alg");


MODULE_INFO(srcversion, "112487709BD197DFB9228B2");
