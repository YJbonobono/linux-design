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
	{ 0x2d3385d3, "system_wq" },
	{ 0xf11f616d, "release_sock" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x56837fb, "vmci_get_context_id" },
	{ 0xe11895c1, "vmci_event_unsubscribe" },
	{ 0x285d0b91, "__vsock_create" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x4d2b00b5, "vmci_qpair_enquev" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x8d96f24b, "vsock_add_pending" },
	{ 0x89f7775d, "vmci_qpair_dequev" },
	{ 0x46dab489, "skb_recv_datagram" },
	{ 0x612df9ae, "vmci_qpair_detach" },
	{ 0xdf83ef65, "__vsock_core_init" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x2711da05, "vsock_stream_has_space" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x7f730c80, "vsock_core_exit" },
	{ 0x557e4a5f, "vsock_find_connected_socket" },
	{ 0xe0cc9c92, "vmci_qpair_alloc" },
	{ 0xbc3a7fc8, "skb_copy_datagram_iter" },
	{ 0xf0eeee71, "vsock_stream_has_data" },
	{ 0xc5850110, "printk" },
	{ 0x46dd187, "vmci_datagram_create_handle" },
	{ 0xc403cafe, "vmci_is_context_owner" },
	{ 0xf83fd03a, "lock_sock_nested" },
	{ 0xf4e68311, "vmci_qpair_peekv" },
	{ 0x676bd843, "vmci_qpair_consume_free_space" },
	{ 0x2663cb64, "vsock_addr_equals_addr" },
	{ 0x3bcbf347, "sk_free" },
	{ 0xc04c7e84, "vmci_qpair_get_consume_indexes" },
	{ 0xc88e4e9e, "__sk_receive_skb" },
	{ 0xc6cbbc89, "capable" },
	{ 0xbd0f699d, "vsock_addr_bound" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0xcaa002d4, "vsock_remove_pending" },
	{ 0x73879664, "vsock_addr_init" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x24d14bc, "vmci_qpair_produce_free_space" },
	{ 0x1791c61f, "_copy_from_iter_full" },
	{ 0xb95d9c63, "vsock_find_bound_socket" },
	{ 0x7c8e7d11, "vsock_remove_connected" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xea143610, "vmci_datagram_send" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x2449459d, "vmci_event_subscribe" },
	{ 0x37a0cba, "kfree" },
	{ 0xea61eefe, "vmci_qpair_produce_buf_ready" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe1b5357b, "vsock_remove_sock" },
	{ 0x3a22fa8a, "vmci_datagram_destroy_handle" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xde190610, "vsock_for_each_connected_socket" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x7c74d7a6, "vmci_qpair_consume_buf_ready" },
	{ 0x1fd4782d, "vmci_qpair_get_produce_indexes" },
	{ 0x71cb3879, "vsock_insert_connected" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x5591b58e, "vmci_context_get_priv_flags" },
	{ 0xde3abc2e, "vmci_datagram_create_handle_priv" },
	{ 0xaef989e6, "skb_free_datagram" },
	{ 0xb7b5e8e6, "vsock_enqueue_accept" },
};

MODULE_INFO(depends, "vmw_vmci,vsock");


MODULE_INFO(srcversion, "A4BA32BE8BFCD91E24E5262");
