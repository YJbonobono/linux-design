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
	{ 0x77733870, "skb_queue_head" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa80af765, "nci_req_complete" },
	{ 0x705c39a5, "nci_hci_set_param" },
	{ 0xa4b41527, "nci_hci_dev_session_init" },
	{ 0x72fa1482, "nci_recv_frame" },
	{ 0xfc7b5f0b, "nfc_vendor_cmd_reply" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x665be5fd, "nci_hci_send_cmd" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xbb1fe2b0, "nfc_se_connectivity" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8449ac57, "nci_hci_clear_all_pipes" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xdb0fb6c2, "nci_hci_send_event" },
	{ 0x49e1cb7e, "skb_dequeue_tail" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xeaac1e08, "skb_queue_purge" },
	{ 0x78141203, "nci_unregister_device" },
	{ 0xefa88187, "nci_nfcc_loopback" },
	{ 0xc5850110, "printk" },
	{ 0x95b56dc7, "nci_core_conn_create" },
	{ 0xf6ea37d5, "nci_prop_cmd" },
	{ 0x262e823a, "wait_for_completion_interruptible" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x581cf443, "skb_push" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x8509530f, "nci_hci_connect_gate" },
	{ 0x9b553753, "skb_pull" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x87c6c8e2, "nfc_se_transaction" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xa887171f, "skb_queue_tail" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x9392f1c4, "nci_hci_get_param" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x783282e3, "nci_nfcee_mode_set" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x96245bbb, "nfc_remove_se" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x96848186, "scnprintf" },
	{ 0xc6fa2f0f, "skb_dequeue" },
	{ 0xbf0b0ea9, "nfc_add_se" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xa1179518, "__nfc_alloc_vendor_cmd_reply_skb" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x52a8c05c, "nci_register_device" },
	{ 0x6bd30716, "nci_allocate_device" },
	{ 0xd90b8543, "nci_free_device" },
};

MODULE_INFO(depends, "nci,nfc");


MODULE_INFO(srcversion, "FCA1D2205882E73AD503165");
