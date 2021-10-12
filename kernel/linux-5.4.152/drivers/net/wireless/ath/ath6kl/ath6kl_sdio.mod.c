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
	{ 0xa34bd03e, "ath6kl_core_destroy" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xfb0f262, "ath6kl_hif_intr_bh_handler" },
	{ 0xa81a8811, "ath6kl_core_cleanup" },
	{ 0x91cfb84a, "ath6kl_hif_rw_comp_handler" },
	{ 0x7babb22b, "ath6kl_core_create" },
	{ 0xc393be13, "sdio_writesb" },
	{ 0x9f9d0e7d, "sdio_enable_func" },
	{ 0x1dfad70f, "sdio_claim_irq" },
	{ 0xf37bed86, "mmc_wait_for_cmd" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x12f2067e, "sdio_get_host_pm_caps" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf6cf10d1, "mmc_wait_for_req" },
	{ 0xb9a689dd, "ath6kl_err" },
	{ 0x1354043d, "ath6kl_warn" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x531b604e, "__virt_addr_valid" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x12d3cfbc, "mmc_set_data_timeout" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x4bcfdecc, "ath6kl_cfg80211_suspend" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe417a2e3, "sdio_readsb" },
	{ 0xedb85f12, "sdio_unregister_driver" },
	{ 0xf8544108, "sdio_set_host_pm_flags" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xde3555c4, "ath6kl_cfg80211_resume" },
	{ 0xf02fbda7, "ath6kl_stop_txrx" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x1c4ea539, "sdio_release_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6f21677b, "ath6kl_core_init" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x4eb4db28, "sdio_memcpy_toio" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x935c26a9, "sdio_register_driver" },
	{ 0x2b1d5ab8, "sdio_memcpy_fromio" },
	{ 0xbbdba794, "sdio_claim_host" },
	{ 0x2d05e769, "sdio_set_block_size" },
	{ 0x241db100, "sdio_disable_func" },
	{ 0xaa57bcf0, "sdio_release_host" },
};

MODULE_INFO(depends, "ath6kl_core");

MODULE_ALIAS("sdio:c*v0271d0300*");
MODULE_ALIAS("sdio:c*v0271d0301*");
MODULE_ALIAS("sdio:c*v0271d0400*");
MODULE_ALIAS("sdio:c*v0271d0401*");
MODULE_ALIAS("sdio:c*v0271d0402*");
MODULE_ALIAS("sdio:c*v0271d0418*");
MODULE_ALIAS("sdio:c*v0271d0419*");

MODULE_INFO(srcversion, "4A648DD1E9DF959B13410DC");
