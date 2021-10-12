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
	{ 0x88fd53df, "nft_unregister_expr" },
	{ 0xaa770521, "nft_unregister_obj" },
	{ 0xa616e404, "nft_register_expr" },
	{ 0xcd80747d, "nft_register_obj" },
	{ 0x1f099794, "synproxy_init_timestamp_cookie" },
	{ 0xeb3d3c72, "synproxy_send_client_synack" },
	{ 0x31191ec8, "synproxy_send_client_synack_ipv6" },
	{ 0xf613583a, "synproxy_recv_client_ack" },
	{ 0xb832485a, "consume_skb" },
	{ 0xdac683bf, "synproxy_recv_client_ack_ipv6" },
	{ 0x421a936d, "synproxy_parse_options" },
	{ 0x2b75e98a, "skb_copy_bits" },
	{ 0xe1cf7dd0, "nf_ip_checksum" },
	{ 0xa1008cb6, "nf_synproxy_ipv6_init" },
	{ 0x92535b71, "nf_synproxy_ipv4_init" },
	{ 0xd623a788, "nf_ct_netns_get" },
	{ 0xdb8eaca4, "nf_synproxy_ipv6_fini" },
	{ 0xf4c82ea9, "nf_ct_netns_put" },
	{ 0xe8dd7b63, "nf_synproxy_ipv4_fini" },
	{ 0xca9fc082, "synproxy_net_id" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x4c26b4c, "nft_chain_validate_hooks" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_tables,nf_synproxy_core,nf_conntrack");


MODULE_INFO(srcversion, "28CADBE602C23F45B106C71");
