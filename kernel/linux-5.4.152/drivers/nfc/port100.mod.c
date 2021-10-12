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
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0x69acdf38, "memcpy" },
	{ 0xdd75e18, "nfc_digital_register_device" },
	{ 0xf3900a5a, "nfc_digital_allocate_device" },
	{ 0x11b21377, "usb_alloc_urb" },
	{ 0x3adcd89b, "usb_get_dev" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x581cf443, "skb_push" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0xfd94814e, "complete_all" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x40a09deb, "skb_trim" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xb832485a, "consume_skb" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x9b553753, "skb_pull" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x29361773, "complete" },
	{ 0xafea1f0c, "usb_submit_urb" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x37a0cba, "kfree" },
	{ 0x9c103dfc, "usb_put_dev" },
	{ 0x211fdf55, "usb_free_urb" },
	{ 0x9eecf10, "usb_kill_urb" },
	{ 0x6769c971, "nfc_digital_free_device" },
	{ 0x8dd21092, "nfc_digital_unregister_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nfc_digital");

MODULE_ALIAS("usb:v054Cp06C1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp06C3d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "374DD1E1345017744B1FD56");
