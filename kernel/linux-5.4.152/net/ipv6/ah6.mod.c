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
	{ 0x57257bc9, "xfrm6_find_1stfragopt" },
	{ 0x275fd8ef, "xfrm6_rcv" },
	{ 0x990e0ff9, "xfrm6_protocol_deregister" },
	{ 0xc3558ab5, "xfrm_unregister_type" },
	{ 0xee93ff7, "xfrm6_protocol_register" },
	{ 0x351b28ab, "xfrm_register_type" },
	{ 0xd846de9a, "xfrm_input_resume" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x47e7fcaa, "__pskb_pull_tail" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0xa90d72ca, "crypto_ahash_digest" },
	{ 0xf3329ebf, "skb_to_sgvec_nomark" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xd0504053, "pskb_expand_head" },
	{ 0xfb578fc5, "memset" },
	{ 0x581cf443, "skb_push" },
	{ 0x3abe2035, "skb_cow_data" },
	{ 0x57ecc6d0, "ip6_redirect" },
	{ 0x556d02be, "__xfrm_state_destroy" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x1d8f8e31, "ip6_update_pmtu" },
	{ 0x18b2697a, "make_kuid" },
	{ 0xc65b49bb, "xfrm_state_lookup" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xb0e602eb, "memmove" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc5850110, "printk" },
	{ 0x37a02412, "xfrm_aalg_get_byname" },
	{ 0xfe2a62ab, "crypto_ahash_setkey" },
	{ 0x82eef861, "crypto_alloc_ahash" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x4698a058, "crypto_destroy_tfm" },
	{ 0xbe378a12, "xfrm_output_resume" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "xfrm_algo");


MODULE_INFO(srcversion, "7280237730993B640E95D3D");
