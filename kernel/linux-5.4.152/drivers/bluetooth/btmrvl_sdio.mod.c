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
	{ 0xedb85f12, "sdio_unregister_driver" },
	{ 0x935c26a9, "sdio_register_driver" },
	{ 0x13ed5ac3, "btmrvl_register_hdev" },
	{ 0xdd97c07f, "btmrvl_add_card" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x9fe09916, "release_firmware" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x9601035f, "request_firmware" },
	{ 0x2d05e769, "sdio_set_block_size" },
	{ 0x1dfad70f, "sdio_claim_irq" },
	{ 0x9f9d0e7d, "sdio_enable_func" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xc393be13, "sdio_writesb" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x51956b67, "btmrvl_check_evtpkt" },
	{ 0x5c883ca1, "hci_recv_frame" },
	{ 0xe1471c92, "btmrvl_process_event" },
	{ 0x9b553753, "skb_pull" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0xac621e4, "btmrvl_send_module_cfg_cmd" },
	{ 0xbba32a18, "btmrvl_remove_card" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x8b42e47, "btmrvl_interrupt" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xe417a2e3, "sdio_readsb" },
	{ 0xf9a482f9, "msleep" },
	{ 0x241db100, "sdio_disable_func" },
	{ 0x1c4ea539, "sdio_release_irq" },
	{ 0xf8544108, "sdio_set_host_pm_flags" },
	{ 0xc71d1d0b, "btmrvl_enable_hs" },
	{ 0x7756893b, "hci_suspend_dev" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xfc380736, "hci_resume_dev" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x12f2067e, "sdio_get_host_pm_caps" },
	{ 0x68beeb2a, "dev_coredumpv" },
	{ 0x69acdf38, "memcpy" },
	{ 0x754d539c, "strlen" },
	{ 0xe914e41e, "strcpy" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x999e8297, "vfree" },
	{ 0x12a38747, "usleep_range" },
	{ 0x718b8b7, "bt_info" },
	{ 0x9cda2403, "sdio_readb" },
	{ 0x4c108934, "sdio_f0_readb" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xaa57bcf0, "sdio_release_host" },
	{ 0x2d42350d, "sdio_writeb" },
	{ 0xbbdba794, "sdio_claim_host" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "btmrvl,bluetooth");

MODULE_ALIAS("sdio:c*v02DFd9105*");
MODULE_ALIAS("sdio:c*v02DFd911A*");
MODULE_ALIAS("sdio:c*v02DFd911B*");
MODULE_ALIAS("sdio:c*v02DFd912A*");
MODULE_ALIAS("sdio:c*v02DFd9136*");
MODULE_ALIAS("sdio:c*v02DFd912E*");
MODULE_ALIAS("sdio:c*v02DFd9146*");
MODULE_ALIAS("sdio:c*v02DFd914A*");
MODULE_ALIAS("sdio:c*v02DFd9142*");

MODULE_INFO(srcversion, "65A0DDC0CEEF578B8FA3D9C");
