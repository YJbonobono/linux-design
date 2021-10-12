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
	{ 0xb09130b0, "sock_no_sendpage" },
	{ 0x7a688d36, "sock_no_mmap" },
	{ 0x8552971b, "sock_no_getsockopt" },
	{ 0x3eeb836, "sock_no_setsockopt" },
	{ 0xb64f81a0, "sock_no_shutdown" },
	{ 0x65f40752, "sock_no_listen" },
	{ 0x430200a2, "sock_no_ioctl" },
	{ 0x108ec659, "datagram_poll" },
	{ 0x6c2ba262, "sock_no_getname" },
	{ 0xe0d91def, "sock_no_accept" },
	{ 0xb1e6abd1, "sock_no_socketpair" },
	{ 0x8080c17, "sock_no_connect" },
	{ 0x3fd1ac7, "sock_no_bind" },
	{ 0x1c68887b, "xfrm_register_km" },
	{ 0xc82d7720, "sock_register" },
	{ 0x88cb6a1c, "register_pernet_subsys" },
	{ 0xec60789c, "proto_register" },
	{ 0xb99540a6, "proto_unregister" },
	{ 0xb92ea046, "unregister_pernet_subsys" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xe4e1729e, "xfrm_unregister_km" },
	{ 0x6bc17d48, "xfrm_audit_policy_add" },
	{ 0xd7af2cb, "xfrm_policy_insert" },
	{ 0xa3c72569, "xfrm_policy_alloc" },
	{ 0xa9c63b69, "security_xfrm_policy_free" },
	{ 0x41a58271, "xfrm_policy_bysel_ctx" },
	{ 0xc65304b3, "security_xfrm_policy_alloc" },
	{ 0x72395dc1, "xfrm_calg_get_byid" },
	{ 0x5c699441, "xfrm_aalg_get_byid" },
	{ 0x75f890c5, "xfrm_state_add" },
	{ 0x1a6aa6f2, "xfrm_audit_state_add" },
	{ 0x90c37bc4, "xfrm_state_update" },
	{ 0xda0e96b, "xfrm_init_state" },
	{ 0xe914e41e, "strcpy" },
	{ 0xc80741, "xfrm_ealg_get_byid" },
	{ 0x37a0cba, "kfree" },
	{ 0x27866435, "security_xfrm_state_alloc" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xeba3369c, "xfrm_state_alloc" },
	{ 0x6a42d364, "xfrm_alloc_spi" },
	{ 0xfeb5d0aa, "verify_spi_info" },
	{ 0x36c8f416, "xfrm_find_acq" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x46ecd5ad, "xfrm_find_acq_byseq" },
	{ 0x556d02be, "__xfrm_state_destroy" },
	{ 0x177a4a38, "xfrm_audit_state_delete" },
	{ 0xe41fc0b4, "xfrm_state_delete" },
	{ 0xc599a772, "security_xfrm_state_delete" },
	{ 0x4b3a9df0, "xfrm_audit_policy_delete" },
	{ 0x62a11ec2, "xfrm_policy_destroy" },
	{ 0xa814e231, "xfrm_policy_byid" },
	{ 0xd6f50cf7, "xfrm_ealg_get_byname" },
	{ 0xaab23340, "xfrm_calg_get_byname" },
	{ 0x37a02412, "xfrm_aalg_get_byname" },
	{ 0xeca62e87, "km_state_notify" },
	{ 0xe6abd463, "xfrm_state_flush" },
	{ 0x3a21c15a, "km_policy_notify" },
	{ 0x6d866989, "xfrm_policy_flush" },
	{ 0xc6b1fdbe, "xfrm_aalg_get_byidx" },
	{ 0xb73be794, "xfrm_ealg_get_byidx" },
	{ 0x7a8ca627, "xfrm_count_pfkey_enc_supported" },
	{ 0xa575945, "xfrm_count_pfkey_auth_supported" },
	{ 0x28e23139, "xfrm_probe_algs" },
	{ 0xaff55470, "remove_proc_entry" },
	{ 0xc65b49bb, "xfrm_state_lookup" },
	{ 0x1791c61f, "_copy_from_iter_full" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x69acdf38, "memcpy" },
	{ 0xfb578fc5, "memset" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x1e9edfb7, "seq_hlist_start_head_rcu" },
	{ 0x67b78eb3, "seq_hlist_next_rcu" },
	{ 0xb177d101, "seq_printf" },
	{ 0xa5bcfd03, "from_kuid_munged" },
	{ 0x1a625919, "sock_i_uid" },
	{ 0x7ea1b695, "sock_i_ino" },
	{ 0xbae89d96, "proc_create_net_data" },
	{ 0x3bcbf347, "sk_free" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x6df55bf9, "xfrm_state_walk" },
	{ 0x96bcf461, "xfrm_state_walk_done" },
	{ 0x2782b393, "xfrm_state_walk_init" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xfbbb3727, "skb_copy" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xb5fc8f7b, "sock_init_data" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x80197bfb, "sk_alloc" },
	{ 0xe0e3cea6, "ns_capable" },
	{ 0xc9df055a, "xfrm_policy_walk_init" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe1f51ae2, "__sock_recv_ts_and_drops" },
	{ 0xaef989e6, "skb_free_datagram" },
	{ 0xbc3a7fc8, "skb_copy_datagram_iter" },
	{ 0x46dab489, "skb_recv_datagram" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc5850110, "printk" },
	{ 0xeaac1e08, "skb_queue_purge" },
	{ 0x66e627ab, "xfrm_policy_walk_done" },
	{ 0x15cd3661, "xfrm_policy_walk" },
	{ 0xa887171f, "skb_queue_tail" },
	{ 0xa58219eb, "sock_rfree" },
	{ 0xd6af1248, "skb_clone" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "xfrm_algo");


MODULE_INFO(srcversion, "01D5DE2C2C9C471BC6CB15B");
