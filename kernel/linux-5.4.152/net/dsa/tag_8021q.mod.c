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
	{ 0x46edaba5, "dsa_tag_drivers_register" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0x3c350e98, "dsa_tag_drivers_unregister" },
	{ 0x2227d1aa, "dsa_port_vid_add" },
	{ 0xff78536e, "dsa_port_vid_del" },
	{ 0xd0c83abb, "br_vlan_get_pvid" },
	{ 0x992bca8, "br_vlan_get_info" },
	{ 0x581cf443, "skb_push" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd0504053, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb0e602eb, "memmove" },
};

MODULE_INFO(depends, "dsa_core,bridge");


MODULE_INFO(srcversion, "68C878645295E445E2E6BB8");
