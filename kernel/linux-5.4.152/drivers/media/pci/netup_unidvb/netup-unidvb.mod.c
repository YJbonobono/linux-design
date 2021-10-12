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
	{ 0xa24f23d8, "__request_module" },
	{ 0x85bd1608, "__request_region" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb9e1fec6, "spi_register_controller" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x77358855, "iomem_resource" },
	{ 0x975ee610, "pci_read_config_byte" },
	{ 0xa4191c0b, "memset_io" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xef4b66f5, "pcie_capability_clear_and_set_word" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x52d0e934, "vb2_dvb_unregister_bus" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfddedc91, "i2c_add_adapter" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x13dc096b, "vb2_dvb_dealloc_frontends" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x63c4ae47, "vb2_vmalloc_memops" },
	{ 0x94e48364, "param_ops_short" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x7bd2de6a, "vb2_plane_vaddr" },
	{ 0xfab7ced9, "vb2_buffer_done" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x71c6c4d0, "spi_new_device" },
	{ 0x30252ab, "pci_read_config_word" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0xec313f9e, "spi_unregister_controller" },
	{ 0x393a2318, "__devm_spi_alloc_controller" },
	{ 0xb91779c2, "dvb_ca_en50221_release" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xe8fd9989, "i2c_del_adapter" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x6e724099, "param_array_ops" },
	{ 0xedc03953, "iounmap" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xfcfd30b7, "vb2_dvb_alloc_frontend" },
	{ 0xcaa24a2, "vb2_dvb_get_frontend" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x349c7313, "dvb_ca_en50221_init" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x5f787440, "spi_finalize_current_message" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x2caa9928, "vb2_dvb_register_bus" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x9461543d, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-dvb,videobuf2-vmalloc,videobuf2-common,dvb-core,videobuf2-v4l2");

MODULE_ALIAS("pci:v00001B55d000018F6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001B55d000018F7sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "ACD6BB1435025B5BB1DF2FD");
