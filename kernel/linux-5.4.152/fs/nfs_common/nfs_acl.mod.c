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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0xacff5d71, "xdr_decode_word" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x6070aff7, "init_user_ns" },
	{ 0x8b212547, "xdr_encode_array2" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x629a53c5, "make_kgid" },
	{ 0xaf6bc3d0, "posix_acl_init" },
	{ 0x1da8c3f2, "xdr_encode_word" },
	{ 0x19c1b36d, "from_kuid" },
	{ 0xeba488c2, "from_kgid" },
	{ 0xbee380ba, "posix_acl_alloc" },
	{ 0xe3a53f4c, "sort" },
	{ 0x18b2697a, "make_kuid" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb0e602eb, "memmove" },
	{ 0x8e46752f, "xdr_decode_array2" },
};

MODULE_INFO(depends, "sunrpc");


MODULE_INFO(srcversion, "D3F479CEA7CB0AFE8D9CA79");
