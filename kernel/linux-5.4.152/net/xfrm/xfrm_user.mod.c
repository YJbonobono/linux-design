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
	{ 0xe4e1729e, "xfrm_unregister_km" },
	{ 0xb92ea046, "unregister_pernet_subsys" },
	{ 0x1c68887b, "xfrm_register_km" },
	{ 0x88cb6a1c, "register_pernet_subsys" },
	{ 0x75f890c5, "xfrm_state_add" },
	{ 0x1a6aa6f2, "xfrm_audit_state_add" },
	{ 0x90c37bc4, "xfrm_state_update" },
	{ 0x56d36648, "xfrm_dev_state_add" },
	{ 0x533826a2, "xfrm_init_replay" },
	{ 0x27866435, "security_xfrm_state_alloc" },
	{ 0xe8fa7a1e, "__xfrm_init_state" },
	{ 0xaab23340, "xfrm_calg_get_byname" },
	{ 0xd6f50cf7, "xfrm_ealg_get_byname" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x37a02412, "xfrm_aalg_get_byname" },
	{ 0xe914e41e, "strcpy" },
	{ 0x49ca83, "xfrm_aead_get_byname" },
	{ 0x6a42d364, "xfrm_alloc_spi" },
	{ 0x36c8f416, "xfrm_find_acq" },
	{ 0x46ecd5ad, "xfrm_find_acq_byseq" },
	{ 0xfeb5d0aa, "verify_spi_info" },
	{ 0xe41fc0b4, "xfrm_state_delete" },
	{ 0xc599a772, "security_xfrm_state_delete" },
	{ 0x177a4a38, "xfrm_audit_state_delete" },
	{ 0x788b5fbe, "__xfrm_state_delete" },
	{ 0x222e8e, "km_state_expired" },
	{ 0x556d02be, "__xfrm_state_destroy" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x4b3a9df0, "xfrm_audit_policy_delete" },
	{ 0xbd2cb255, "xfrm_policy_delete" },
	{ 0xa814e231, "xfrm_policy_byid" },
	{ 0x504e2630, "km_policy_expired" },
	{ 0x41a58271, "xfrm_policy_bysel_ctx" },
	{ 0x9737c556, "xfrm_state_free" },
	{ 0xa804bc69, "km_query" },
	{ 0xeba3369c, "xfrm_state_alloc" },
	{ 0xb01bebf9, "xfrm_get_acqseq" },
	{ 0x37a0cba, "kfree" },
	{ 0xa9c63b69, "security_xfrm_policy_free" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x6bc17d48, "xfrm_audit_policy_add" },
	{ 0xd7af2cb, "xfrm_policy_insert" },
	{ 0xc65304b3, "security_xfrm_policy_alloc" },
	{ 0x62a11ec2, "xfrm_policy_destroy" },
	{ 0x2e21527, "xfrm_spd_getinfo" },
	{ 0x29c46ab7, "netlink_unicast" },
	{ 0xd840f4f6, "xfrm_sad_getinfo" },
	{ 0xc65b49bb, "xfrm_state_lookup" },
	{ 0x98b3cf43, "xfrm_state_lookup_byaddr" },
	{ 0xc5850110, "printk" },
	{ 0x40a09deb, "skb_trim" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0xbbdc19ba, "netlink_broadcast" },
	{ 0xa19dc7e8, "__nlmsg_put" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0x6df55bf9, "xfrm_state_walk" },
	{ 0x2782b393, "xfrm_state_walk_init" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x7b2112df, "__netlink_dump_start" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x814c7f79, "netlink_net_capable" },
	{ 0x6006847, "current_task" },
	{ 0x6f18b0e3, "nla_put_64bit" },
	{ 0x9166fada, "strncpy" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xa3c72569, "xfrm_policy_alloc" },
	{ 0x7c3896cb, "__netlink_kernel_create" },
	{ 0x96bcf461, "xfrm_state_walk_done" },
	{ 0xc9df055a, "xfrm_policy_walk_init" },
	{ 0x15cd3661, "xfrm_policy_walk" },
	{ 0x66e627ab, "xfrm_policy_walk_done" },
	{ 0xeca62e87, "km_state_notify" },
	{ 0xe6abd463, "xfrm_state_flush" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3a21c15a, "km_policy_notify" },
	{ 0x6d866989, "xfrm_policy_flush" },
	{ 0x8ea00eca, "xfrm_policy_hash_rebuild" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xd51adaf8, "netlink_rcv_skb" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x59c4dd2c, "netlink_kernel_release" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x8e281574, "nla_reserve" },
	{ 0x69acdf38, "memcpy" },
	{ 0x1dc0dc58, "netlink_has_listeners" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "xfrm_algo");


MODULE_INFO(srcversion, "4AEFE25D409F88CF09DCB0F");
