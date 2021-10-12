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
	{ 0xfe874c71, "nf_log_unregister" },
	{ 0xb92ea046, "unregister_pernet_subsys" },
	{ 0xc5850110, "printk" },
	{ 0xf9673c1c, "nf_log_register" },
	{ 0x88cb6a1c, "register_pernet_subsys" },
	{ 0x7add92ea, "nf_log_dump_vlan" },
	{ 0x80c68137, "nf_log_buf_close" },
	{ 0xa444591f, "nf_log_dump_packet_common" },
	{ 0xd4961de, "nf_log_buf_open" },
	{ 0x9aaeefce, "sysctl_nf_log_all_netns" },
	{ 0x78381292, "init_net" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb421fcb3, "nf_log_dump_sk_uid_gid" },
	{ 0xb1dfd816, "nf_log_dump_tcp_header" },
	{ 0xd450d33a, "nf_log_dump_udp_header" },
	{ 0xcd6f2dc9, "nf_log_buf_add" },
	{ 0x2b75e98a, "skb_copy_bits" },
	{ 0x3ff64e76, "nf_log_set" },
	{ 0x1744657b, "nf_log_unset" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_log_common");


MODULE_INFO(srcversion, "5BCBD3A345C686D223510B5");
