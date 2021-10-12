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
	{ 0x2d42350d, "sdio_writeb" },
	{ 0x9cda2403, "sdio_readb" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x6c787a9, "mwifiex_cancel_hs" },
	{ 0xc393be13, "sdio_writesb" },
	{ 0x9f9d0e7d, "sdio_enable_func" },
	{ 0x1dfad70f, "sdio_claim_irq" },
	{ 0xf5a5cf47, "mmc_hw_reset" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xf1fe6d, "mwifiex_disable_auto_ds" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x99ebdfc8, "mwifiex_process_sleep_confirm_resp" },
	{ 0x999e8297, "vfree" },
	{ 0x58ccba47, "mwifiex_main_process" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x93c9236a, "mwifiex_prepare_fw_dump_info" },
	{ 0x12f2067e, "sdio_get_host_pm_caps" },
	{ 0x40a09deb, "skb_trim" },
	{ 0xfd94814e, "complete_all" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x799da697, "_mwifiex_dbg" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xb8933534, "mwifiex_add_card" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xf0a4f41b, "mwifiex_shutdown_sw" },
	{ 0x9b553753, "skb_pull" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xd4dad9f3, "mwifiex_alloc_dma_align_buf" },
	{ 0xe417a2e3, "sdio_readsb" },
	{ 0xedb85f12, "sdio_unregister_driver" },
	{ 0xf8544108, "sdio_set_host_pm_flags" },
	{ 0x3f82288e, "mwifiex_dnld_fw" },
	{ 0xa887171f, "skb_queue_tail" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x12a38747, "usleep_range" },
	{ 0x1c4ea539, "sdio_release_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4c108934, "sdio_f0_readb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x5c405dbb, "mwifiex_reinit_sw" },
	{ 0xb5a517a5, "mwifiex_handle_rx_packet" },
	{ 0xdf09e813, "mwifiex_deauthenticate_all" },
	{ 0xccb03ca4, "mwifiex_remove_card" },
	{ 0xd2869ed7, "mwifiex_enable_hs" },
	{ 0xf75ca138, "mwifiex_upload_device_dump" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb0e602eb, "memmove" },
	{ 0x935c26a9, "sdio_register_driver" },
	{ 0xbbdba794, "sdio_claim_host" },
	{ 0xd22030a1, "mwifiex_drv_info_dump" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xcf2aa48c, "mwifiex_init_shutdown_fw" },
	{ 0x2d05e769, "sdio_set_block_size" },
	{ 0x241db100, "sdio_disable_func" },
	{ 0xaa57bcf0, "sdio_release_host" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "mwifiex");

MODULE_ALIAS("sdio:c*v02DFd9116*");
MODULE_ALIAS("sdio:c*v02DFd9119*");
MODULE_ALIAS("sdio:c*v02DFd9129*");
MODULE_ALIAS("sdio:c*v02DFd912D*");
MODULE_ALIAS("sdio:c*v02DFd9135*");
MODULE_ALIAS("sdio:c*v02DFd9139*");
MODULE_ALIAS("sdio:c*v02DFd9145*");
MODULE_ALIAS("sdio:c*v02DFd9149*");
MODULE_ALIAS("sdio:c*v02DFd9141*");

MODULE_INFO(srcversion, "CA00CFAF0D0CC7995B4232C");
