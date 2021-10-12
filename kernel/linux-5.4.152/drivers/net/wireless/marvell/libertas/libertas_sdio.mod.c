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
	{ 0x2d3385d3, "system_wq" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8512b0e4, "__pm_runtime_idle" },
	{ 0xfdebf4cc, "lbs_resume" },
	{ 0xc393be13, "sdio_writesb" },
	{ 0x9f9d0e7d, "sdio_enable_func" },
	{ 0x1dfad70f, "sdio_claim_irq" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xbb32067a, "lbs_stop_card" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0xd9da003, "netdev_alert" },
	{ 0x5132c625, "__lbs_cmd" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x12f2067e, "sdio_get_host_pm_caps" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc2fad14e, "lbs_start_card" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x60f6948d, "lbs_queue_event" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xa80da47b, "lbs_get_firmware_async" },
	{ 0x9a447823, "lbs_cmd_copyback" },
	{ 0x2f6a769e, "lbs_suspend" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe417a2e3, "sdio_readsb" },
	{ 0xedb85f12, "sdio_unregister_driver" },
	{ 0x60357797, "lbs_remove_card" },
	{ 0x5c52f4e7, "sdio_f0_writeb" },
	{ 0xf8544108, "sdio_set_host_pm_flags" },
	{ 0x6bf4ef13, "lbs_process_rxed_packet" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x1c4ea539, "sdio_release_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc5ee2db1, "lbs_host_to_card_done" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x88b85e0b, "sdio_align_size" },
	{ 0x3dd2cba8, "lbs_add_card" },
	{ 0x4c108934, "sdio_f0_readb" },
	{ 0x3d75c109, "mmc_add_host" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xed46adb4, "mmc_remove_host" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x935c26a9, "sdio_register_driver" },
	{ 0xbbdba794, "sdio_claim_host" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x2d05e769, "sdio_set_block_size" },
	{ 0x241db100, "sdio_disable_func" },
	{ 0xaa57bcf0, "sdio_release_host" },
	{ 0x5bfa602f, "lbs_notify_command_response" },
};

MODULE_INFO(depends, "libertas");

MODULE_ALIAS("sdio:c*v02DFd9103*");
MODULE_ALIAS("sdio:c*v02DFd9104*");

MODULE_INFO(srcversion, "574DD96A90F004DBC84B465");
