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
	{ 0x533d246c, "inet6_del_offload" },
	{ 0xdb7d0cd0, "xfrm_unregister_type_offload" },
	{ 0x1176ff46, "inet6_add_offload" },
	{ 0xc5850110, "printk" },
	{ 0x43459f6e, "xfrm_register_type_offload" },
	{ 0xb68bab54, "xfrm_input" },
	{ 0xc65b49bb, "xfrm_state_lookup" },
	{ 0x62aeb5fb, "secpath_set" },
	{ 0x70d76e70, "xfrm_parse_spi" },
	{ 0x8251e2f1, "__skb_ext_del" },
	{ 0xb398093b, "esp6_output_tail" },
	{ 0xdbf85407, "esp6_output_head" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xcaa1c0db, "inet6_offloads" },
	{ 0x1b346ef, "skb_mac_gso_segment" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc6ad0c0e, "ipv6_skip_exthdr" },
	{ 0x581cf443, "skb_push" },
	{ 0x47e7fcaa, "__pskb_pull_tail" },
	{ 0xdd7a7ece, "esp6_input_done2" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "esp6");


MODULE_INFO(srcversion, "5F7E4215A5C1337C4689503");
