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
	{ 0xce99da9d, "mmc_command_done" },
	{ 0x48415adb, "dma_direct_unmap_sg" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0xb9a3671e, "mmc_detect_change" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xd20e0112, "mmc_free_host" },
	{ 0x8d338fac, "regulator_disable" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xffae8e8b, "nsecs_to_jiffies" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x671472e5, "dma_direct_sync_single_for_cpu" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x1eb1bd3c, "dma_direct_sync_sg_for_cpu" },
	{ 0x87b8798d, "sg_next" },
	{ 0x5b6b0329, "swiotlb_max_segment" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x774b4de3, "regulator_is_supported_voltage" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x6006847, "current_task" },
	{ 0x44458f85, "sg_miter_start" },
	{ 0xc5850110, "printk" },
	{ 0xa050ddb, "led_classdev_register_ext" },
	{ 0xd54eece7, "mmc_can_gpio_cd" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x3cac7cba, "sg_miter_stop" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x2f002815, "mmc_can_gpio_ro" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xcaa10107, "mmc_gpio_get_ro" },
	{ 0x53cea585, "sg_miter_next" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x75a1e24b, "regulator_get_current_limit" },
	{ 0x2db31c21, "mmc_gpio_get_cd" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x12a38747, "usleep_range" },
	{ 0x43ca2f65, "sdio_signal_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xad65ce76, "mmc_regulator_set_ocr" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x48af7e15, "mmc_abort_tuning" },
	{ 0x83380314, "mmc_regulator_set_vqmmc" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0x3d75c109, "mmc_add_host" },
	{ 0x95ee7d3a, "mmc_alloc_host" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x7f22b221, "mmc_regulator_get_supply" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xed46adb4, "mmc_remove_host" },
	{ 0xd0e4e11b, "led_classdev_unregister" },
	{ 0xaa309cf, "synchronize_hardirq" },
	{ 0xc702dbb2, "dma_direct_map_sg" },
	{ 0x231a0c6f, "dma_direct_sync_single_for_device" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x83b05a16, "param_ops_uint" },
	{ 0xe7363a56, "mmc_request_done" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x7ea50c52, "mmc_retune_timer_stop" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xc0877d2b, "regulator_enable" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E5D1EFF98325E76287B4493");
