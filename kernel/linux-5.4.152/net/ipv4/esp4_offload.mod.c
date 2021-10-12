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
	{ 0xa6a1da3, "inet_del_offload" },
	{ 0xdb7d0cd0, "xfrm_unregister_type_offload" },
	{ 0x4821c689, "inet_add_offload" },
	{ 0xc5850110, "printk" },
	{ 0x43459f6e, "xfrm_register_type_offload" },
	{ 0xb68bab54, "xfrm_input" },
	{ 0xc65b49bb, "xfrm_state_lookup" },
	{ 0x62aeb5fb, "secpath_set" },
	{ 0x70d76e70, "xfrm_parse_spi" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8251e2f1, "__skb_ext_del" },
	{ 0xd78ae67d, "esp_output_tail" },
	{ 0x2124474, "ip_send_check" },
	{ 0x9bb9bae9, "esp_output_head" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xcb4f76b9, "inet_offloads" },
	{ 0x1b346ef, "skb_mac_gso_segment" },
	{ 0x581cf443, "skb_push" },
	{ 0x47e7fcaa, "__pskb_pull_tail" },
	{ 0x95ad18db, "esp_input_done2" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "esp4");


MODULE_INFO(srcversion, "4719C04AB8158B62656A583");
