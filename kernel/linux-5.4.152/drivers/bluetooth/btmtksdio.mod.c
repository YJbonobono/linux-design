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
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0xedb85f12, "sdio_unregister_driver" },
	{ 0x935c26a9, "sdio_register_driver" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0xb194e058, "hci_register_dev" },
	{ 0x1ff6d818, "hci_alloc_dev" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x4bf11f61, "pm_runtime_allow" },
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0xb94e2921, "pm_runtime_forbid" },
	{ 0xe2b406c7, "__pm_runtime_set_status" },
	{ 0x4c338969, "__pm_runtime_use_autosuspend" },
	{ 0x1f9bb33f, "pm_runtime_set_autosuspend_delay" },
	{ 0x399818dd, "__hci_cmd_sync" },
	{ 0x9fe09916, "release_firmware" },
	{ 0x9601035f, "request_firmware" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x4071b517, "out_of_line_wait_on_bit_timeout" },
	{ 0x44bae227, "bit_wait_timeout" },
	{ 0xe359da9c, "__hci_cmd_send" },
	{ 0x69acdf38, "memcpy" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x40a09deb, "skb_trim" },
	{ 0x214e4265, "bt_warn" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xe417a2e3, "sdio_readsb" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0xd0504053, "pskb_expand_head" },
	{ 0x9086e58b, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x77733870, "skb_queue_head" },
	{ 0x9b553753, "skb_pull" },
	{ 0xc393be13, "sdio_writesb" },
	{ 0x581cf443, "skb_push" },
	{ 0xc6fa2f0f, "skb_dequeue" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x5c883ca1, "hci_recv_frame" },
	{ 0xd6af1248, "skb_clone" },
	{ 0x2d05e769, "sdio_set_block_size" },
	{ 0x1dfad70f, "sdio_claim_irq" },
	{ 0x9f9d0e7d, "sdio_enable_func" },
	{ 0x241db100, "sdio_disable_func" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x1c4ea539, "sdio_release_irq" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xeaac1e08, "skb_queue_purge" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa887171f, "skb_queue_tail" },
	{ 0x7fe4af54, "hci_free_dev" },
	{ 0xe3fb0df5, "hci_unregister_dev" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xaa57bcf0, "sdio_release_host" },
	{ 0x718b8b7, "bt_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0x6ace0f86, "sdio_readl" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x79de05e8, "sdio_writel" },
	{ 0xbbdba794, "sdio_claim_host" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "8E82D5AD15C1BF534DB5AE7");
