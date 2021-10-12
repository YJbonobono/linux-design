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
	{ 0x9101b007, "ipcomp_output" },
	{ 0x3842d8c6, "ipcomp_input" },
	{ 0x40fa8d97, "ipcomp_destroy" },
	{ 0xb68bab54, "xfrm_input" },
	{ 0xfb6362a4, "xfrm4_rcv" },
	{ 0xb803929f, "xfrm4_protocol_deregister" },
	{ 0xc3558ab5, "xfrm_unregister_type" },
	{ 0x9e32247, "xfrm4_protocol_register" },
	{ 0xc5850110, "printk" },
	{ 0x351b28ab, "xfrm_register_type" },
	{ 0x11b6a754, "ipv4_update_pmtu" },
	{ 0xaf5f9ff4, "ipv4_redirect" },
	{ 0x556d02be, "__xfrm_state_destroy" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xcfbf4589, "xfrm_state_insert" },
	{ 0xda0e96b, "xfrm_init_state" },
	{ 0xeba3369c, "xfrm_state_alloc" },
	{ 0xc65b49bb, "xfrm_state_lookup" },
	{ 0xafef327b, "ipcomp_init_state" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "xfrm_ipcomp");


MODULE_INFO(srcversion, "0951BE07630704C8C1376DE");
