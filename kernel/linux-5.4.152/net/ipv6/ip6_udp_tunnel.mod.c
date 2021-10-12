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
	{ 0x97e55841, "udp6_set_csum" },
	{ 0x64aff8b2, "sock_release" },
	{ 0xc8050216, "sock_create_kern" },
	{ 0x4e908343, "kernel_setsockopt" },
	{ 0xf0ef13c0, "kernel_connect" },
	{ 0xc3556e50, "kernel_sock_shutdown" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcd187846, "kernel_bind" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x6848f13, "ip6_local_out" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "56C72BFC40F54931C4FFEDB");
