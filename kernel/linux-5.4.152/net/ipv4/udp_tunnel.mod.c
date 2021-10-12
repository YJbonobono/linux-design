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
	{ 0x64aff8b2, "sock_release" },
	{ 0x378a48b7, "metadata_dst_alloc" },
	{ 0xc8050216, "sock_create_kern" },
	{ 0x4e908343, "kernel_setsockopt" },
	{ 0xf0ef13c0, "kernel_connect" },
	{ 0x5f567c9b, "iptunnel_xmit" },
	{ 0xc3556e50, "kernel_sock_shutdown" },
	{ 0x99517682, "udp_encap_enable" },
	{ 0xc31f230d, "ipv6_stub" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x7768008f, "udp_set_csum" },
	{ 0xcd187846, "kernel_bind" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0A315BA6124B0664F4D23FB");
