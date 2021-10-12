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
	{ 0x2db31c21, "mmc_gpio_get_cd" },
	{ 0xcaa10107, "mmc_gpio_get_ro" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0x84edcf0, "__spi_register_driver" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x473bbd54, "mmc_gpiod_request_cd_irq" },
	{ 0x56470118, "__warn_printk" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0xe37a1c7, "mmc_gpiod_request_ro" },
	{ 0xc6c9fe29, "mmc_gpiod_request_cd" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x3d75c109, "mmc_add_host" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x95ee7d3a, "mmc_alloc_host" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xe7363a56, "mmc_request_done" },
	{ 0x79b31cee, "spi_bus_unlock" },
	{ 0x9a34a2b, "crc_itu_t" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0x87b8798d, "sg_next" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0xa2c86dca, "spi_bus_lock" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xba55d23e, "crc7_be" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2292b333, "spi_setup" },
	{ 0x1000e51, "schedule" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x671472e5, "dma_direct_sync_single_for_cpu" },
	{ 0x231a0c6f, "dma_direct_sync_single_for_device" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x3ba631f3, "spi_sync_locked" },
	{ 0xd20e0112, "mmc_free_host" },
	{ 0x37a0cba, "kfree" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xed46adb4, "mmc_remove_host" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x70bf4816, "spi_sync" },
	{ 0xb9a3671e, "mmc_detect_change" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "crc-itu-t,crc7");

MODULE_ALIAS("of:N*T*Cmmc-spi-slot");
MODULE_ALIAS("of:N*T*Cmmc-spi-slotC*");

MODULE_INFO(srcversion, "2F740B5703CFE0E31CEE01B");
