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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x59771ec9, "pci_write_config_dword" },
	{ 0xdc1fece, "snd_ac97_write" },
	{ 0x7431107b, "pci_write_config_word" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x975ee610, "pci_read_config_byte" },
	{ 0x9fcabe5e, "snd_pcm_period_elapsed" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0xb177d101, "seq_printf" },
	{ 0xfa88260f, "pci_write_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x138133c8, "param_ops_charp" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x3dd0f9ef, "snd_device_new" },
	{ 0x7f7c319e, "snd_pcm_hw_constraint_list" },
	{ 0x36a19d45, "snd_pcm_set_ops" },
	{ 0x30252ab, "pci_read_config_word" },
	{ 0x7d5a28c9, "snd_pcm_lib_free_pages" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x54d2c1b6, "snd_pcm_lib_ioctl" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x28fed39f, "snd_ctl_boolean_mono_info" },
	{ 0x28707648, "snd_pcm_lib_malloc_pages" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xac5ccce, "snd_ac97_suspend" },
	{ 0x700ce568, "snd_card_new" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xd7bd3ecb, "snd_ctl_new1" },
	{ 0x637f23f, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0xdc77dbde, "snd_pcm_set_sync" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xd0acea1c, "snd_ac97_bus" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x603ece0c, "snd_ac97_mixer" },
	{ 0x5b963be9, "snd_card_rw_proc_new" },
	{ 0x37a0cba, "kfree" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0xa61aa028, "snd_pcm_format_unsigned" },
	{ 0xb2a1ca5d, "snd_pcm_hw_constraint_minmax" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x8c2d666c, "pci_get_device" },
	{ 0x45172700, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0x9deccdfb, "snd_card_free" },
	{ 0xbb3c891, "snd_card_register" },
	{ 0x5a470173, "pci_dev_put" },
	{ 0xba1be5f, "snd_pcm_new" },
	{ 0x43dd3bad, "snd_ac97_resume" },
	{ 0xa6de447a, "snd_ctl_add" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "snd-pcm,snd-ac97-codec,snd");

MODULE_ALIAS("pci:v000010B9d00005451sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "C93EC9CE43943B8C02628CF");
