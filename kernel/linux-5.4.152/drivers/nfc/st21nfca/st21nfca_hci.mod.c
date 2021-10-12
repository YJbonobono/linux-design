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
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x6f37656e, "nfc_hci_disconnect_gate" },
	{ 0xaa4a5345, "nfc_hci_disconnect_all_gates" },
	{ 0x1d178a87, "nfc_hci_send_event" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x945820be, "nfc_dep_link_is_up" },
	{ 0x856408d, "nfc_hci_set_param" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xfc7b5f0b, "nfc_vendor_cmd_reply" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xbb1fe2b0, "nfc_se_connectivity" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x40a09deb, "skb_trim" },
	{ 0x51d2f4d6, "nfc_hci_allocate_device" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xa6c7cd5c, "nfc_tm_activated" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xd257dd30, "nfc_hci_get_clientdata" },
	{ 0x262e823a, "wait_for_completion_interruptible" },
	{ 0xc0afd1e6, "nfc_hci_send_cmd" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x581cf443, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x9b553753, "skb_pull" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x448f76fc, "nfc_set_remote_general_bytes" },
	{ 0xb4bc25b8, "nfc_hci_register_device" },
	{ 0x3f49b4c5, "nfc_get_local_general_bytes" },
	{ 0x87c6c8e2, "nfc_se_transaction" },
	{ 0x66af5ebf, "nfc_hci_free_device" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x34709805, "nfc_llc_start" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0xdd231c55, "nfc_hci_sak_to_protocol" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1099c669, "nfc_hci_unregister_device" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x96245bbb, "nfc_remove_se" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xcc98e8fa, "nfc_tm_data_received" },
	{ 0xbc5cde82, "nfc_hci_connect_gate" },
	{ 0xe57aad5c, "nfc_llc_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x96848186, "scnprintf" },
	{ 0xbf0b0ea9, "nfc_add_se" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x5fb5481e, "nfc_hci_send_cmd_async" },
	{ 0x878fcc6a, "nfc_hci_get_param" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xa1179518, "__nfc_alloc_vendor_cmd_reply_skb" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xd2d45ef, "nfc_hci_set_clientdata" },
};

MODULE_INFO(depends, "hci,nfc");


MODULE_INFO(srcversion, "88961D52A381390EE52BE7A");
