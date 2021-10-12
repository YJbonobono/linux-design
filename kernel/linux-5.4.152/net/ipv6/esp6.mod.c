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
	{ 0xee93ff7, "xfrm6_protocol_register" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x9eac8aa1, "skb_to_sgvec" },
	{ 0x48c67edc, "__put_devmap_managed_page" },
	{ 0x61f40f37, "xfrm_dev_resume" },
	{ 0xc3558ab5, "xfrm_unregister_type" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x87b8798d, "sg_next" },
	{ 0xef458672, "pskb_put" },
	{ 0x28933ae8, "skb_page_frag_refill" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3abe2035, "skb_cow_data" },
	{ 0x57ecc6d0, "ip6_redirect" },
	{ 0x47e7fcaa, "__pskb_pull_tail" },
	{ 0xd846de9a, "xfrm_input_resume" },
	{ 0xfb578fc5, "memset" },
	{ 0xee82c453, "skb_checksum" },
	{ 0xc5850110, "printk" },
	{ 0x581cf443, "skb_push" },
	{ 0x6720be23, "crypto_aead_encrypt" },
	{ 0x37a02412, "xfrm_aalg_get_byname" },
	{ 0xc64e93ca, "crypto_aead_setkey" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x351b28ab, "xfrm_register_type" },
	{ 0x57257bc9, "xfrm6_find_1stfragopt" },
	{ 0x18b2697a, "make_kuid" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x4698a058, "crypto_destroy_tfm" },
	{ 0xbe378a12, "xfrm_output_resume" },
	{ 0x1d8f8e31, "ip6_update_pmtu" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x11dbe629, "skb_pull_rcsum" },
	{ 0x556d02be, "__xfrm_state_destroy" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x5c5d41a4, "crypto_aead_decrypt" },
	{ 0xaa1823b, "crypto_aead_setauthsize" },
	{ 0x66f32578, "crypto_alloc_aead" },
	{ 0xc65b49bb, "xfrm_state_lookup" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x2b6f9f16, "___pskb_trim" },
	{ 0x8251e2f1, "__skb_ext_del" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x9a9e4116, "__xfrm_state_mtu" },
	{ 0x2b75e98a, "skb_copy_bits" },
	{ 0x275fd8ef, "xfrm6_rcv" },
	{ 0x71dc307b, "__put_page" },
	{ 0x990e0ff9, "xfrm6_protocol_deregister" },
	{ 0x587f22d7, "devmap_managed_key" },
};

MODULE_INFO(depends, "xfrm_algo");


MODULE_INFO(srcversion, "1B257B3AC743A92D0A429A3");
