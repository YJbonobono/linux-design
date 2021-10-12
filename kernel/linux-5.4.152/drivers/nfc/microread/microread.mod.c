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
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x1d178a87, "nfc_hci_send_event" },
	{ 0x945820be, "nfc_dep_link_is_up" },
	{ 0xcec3f2ec, "nfc_targets_found" },
	{ 0x856408d, "nfc_hci_set_param" },
	{ 0x40a09deb, "skb_trim" },
	{ 0x51d2f4d6, "nfc_hci_allocate_device" },
	{ 0xa6c7cd5c, "nfc_tm_activated" },
	{ 0xc5850110, "printk" },
	{ 0xd257dd30, "nfc_hci_get_clientdata" },
	{ 0xc0afd1e6, "nfc_hci_send_cmd" },
	{ 0x581cf443, "skb_push" },
	{ 0x448f76fc, "nfc_set_remote_general_bytes" },
	{ 0xb4bc25b8, "nfc_hci_register_device" },
	{ 0x3f49b4c5, "nfc_get_local_general_bytes" },
	{ 0x66af5ebf, "nfc_hci_free_device" },
	{ 0xdd231c55, "nfc_hci_sak_to_protocol" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1099c669, "nfc_hci_unregister_device" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x74fe3670, "nfc_hci_result_to_errno" },
	{ 0xcc98e8fa, "nfc_tm_data_received" },
	{ 0x52ecbc75, "crc_ccitt" },
	{ 0x37a0cba, "kfree" },
	{ 0x5fb5481e, "nfc_hci_send_cmd_async" },
	{ 0x878fcc6a, "nfc_hci_get_param" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xd2d45ef, "nfc_hci_set_clientdata" },
};

MODULE_INFO(depends, "hci,nfc");


MODULE_INFO(srcversion, "DD58250EB1099EC8324EA79");
