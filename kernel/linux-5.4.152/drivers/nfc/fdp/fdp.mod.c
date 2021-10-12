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
	{ 0xf9a482f9, "msleep" },
	{ 0xa80af765, "nci_req_complete" },
	{ 0xc7cfdc0a, "nci_core_conn_close" },
	{ 0x72fa1482, "nci_recv_frame" },
	{ 0xaebd2aa3, "nci_send_data" },
	{ 0xcd4fc196, "nci_core_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x78141203, "nci_unregister_device" },
	{ 0x95b56dc7, "nci_core_conn_create" },
	{ 0xf6ea37d5, "nci_prop_cmd" },
	{ 0x8e072d7c, "nci_core_reset" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xbbe3b4dc, "nci_core_cmd" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x69acdf38, "memcpy" },
	{ 0x9601035f, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x52a8c05c, "nci_register_device" },
	{ 0x5b6050cc, "nci_get_conn_info_by_dest_type_params" },
	{ 0x9fe09916, "release_firmware" },
	{ 0x6bd30716, "nci_allocate_device" },
	{ 0xd90b8543, "nci_free_device" },
	{ 0x65000175, "nci_conn_max_data_pkt_payload_size" },
};

MODULE_INFO(depends, "nci");


MODULE_INFO(srcversion, "36AD642CFD1CEF46DFB07F4");
