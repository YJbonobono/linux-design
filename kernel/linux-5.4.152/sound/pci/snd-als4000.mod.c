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
	{ 0x8c6525ab, "snd_sbdsp_create" },
	{ 0x85bd1608, "__request_region" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x7431107b, "pci_write_config_word" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x9fcabe5e, "snd_pcm_period_elapsed" },
	{ 0x99ed276b, "snd_sbdsp_reset" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0xc7ec3d58, "snd_opl3_hwdep_new" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0x5d2b89e7, "snd_mpu401_uart_new" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0xf731dd69, "snd_sbmixer_suspend" },
	{ 0xc0fa166c, "snd_sbmixer_read" },
	{ 0x1d027e4b, "snd_pcm_format_signed" },
	{ 0x138133c8, "param_ops_charp" },
	{ 0x89dec815, "pci_set_master" },
	{ 0xc0fec227, "snd_mpu401_uart_interrupt" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x36a19d45, "snd_pcm_set_ops" },
	{ 0x30252ab, "pci_read_config_word" },
	{ 0x7d5a28c9, "snd_pcm_lib_free_pages" },
	{ 0xc5a6d10b, "release_and_free_resource" },
	{ 0x54d2c1b6, "snd_pcm_lib_ioctl" },
	{ 0x5b5b223, "__gameport_register_port" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x28707648, "snd_pcm_lib_malloc_pages" },
	{ 0x700ce568, "snd_card_new" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xf2081e5a, "gameport_unregister_port" },
	{ 0x4d311a8d, "snd_sbmixer_new" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xdd71b4ef, "snd_opl3_create" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xafd6087c, "snd_sbdsp_command" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0x6e724099, "param_array_ops" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x45172700, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0x9deccdfb, "snd_card_free" },
	{ 0xbb3c891, "snd_card_register" },
	{ 0xba1be5f, "snd_pcm_new" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0xacad986a, "snd_sbmixer_resume" },
	{ 0x943487ca, "gameport_set_phys" },
	{ 0x47b79d13, "snd_sbmixer_write" },
};

MODULE_INFO(depends, "snd-sb-common,snd-pcm,snd-opl3-lib,snd-mpu401-uart,snd,gameport");

MODULE_ALIAS("pci:v00004005d00004000sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "813AB9FA9029AB4A88965A6");
