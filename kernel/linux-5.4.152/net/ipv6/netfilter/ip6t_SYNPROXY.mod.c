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
	{ 0xb07634c6, "xt_unregister_target" },
	{ 0x875ff07a, "xt_register_target" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1f099794, "synproxy_init_timestamp_cookie" },
	{ 0x31191ec8, "synproxy_send_client_synack_ipv6" },
	{ 0xb832485a, "consume_skb" },
	{ 0xdac683bf, "synproxy_recv_client_ack_ipv6" },
	{ 0x421a936d, "synproxy_parse_options" },
	{ 0x2b75e98a, "skb_copy_bits" },
	{ 0x5bb0c85f, "nf_ip6_checksum" },
	{ 0xa1008cb6, "nf_synproxy_ipv6_init" },
	{ 0xd623a788, "nf_ct_netns_get" },
	{ 0xf4c82ea9, "nf_ct_netns_put" },
	{ 0xdb8eaca4, "nf_synproxy_ipv6_fini" },
	{ 0xca9fc082, "synproxy_net_id" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "x_tables,nf_synproxy_core,nf_conntrack");


MODULE_INFO(srcversion, "22806BCE1520A684EF1FA6D");
