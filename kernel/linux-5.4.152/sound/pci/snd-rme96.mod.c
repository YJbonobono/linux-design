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
	{ 0xd6ee688f, "vmalloc" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x975ee610, "pci_read_config_byte" },
	{ 0xfffd89db, "copy_from_user_toio" },
	{ 0xa4191c0b, "memset_io" },
	{ 0x9fcabe5e, "snd_pcm_period_elapsed" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0x342a2354, "copy_to_user_fromio" },
	{ 0xb177d101, "seq_printf" },
	{ 0xc7c1b9cd, "snd_pcm_lib_mmap_iomem" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x999e8297, "vfree" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x138133c8, "param_ops_charp" },
	{ 0xb9638db4, "snd_pcm_rate_to_rate_bit" },
	{ 0x7f7c319e, "snd_pcm_hw_constraint_list" },
	{ 0x36a19d45, "snd_pcm_set_ops" },
	{ 0xd00fa911, "snd_ctl_notify" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x54d2c1b6, "snd_pcm_lib_ioctl" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x28fed39f, "snd_ctl_boolean_mono_info" },
	{ 0x700ce568, "snd_card_new" },
	{ 0x81b69e41, "snd_ctl_enum_info" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xd7bd3ecb, "snd_ctl_new1" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0xdc77dbde, "snd_pcm_set_sync" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x5b963be9, "snd_card_rw_proc_new" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0x6e724099, "param_array_ops" },
	{ 0xb2a1ca5d, "snd_pcm_hw_constraint_minmax" },
	{ 0xedc03953, "iounmap" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x9deccdfb, "snd_card_free" },
	{ 0xbb3c891, "snd_card_register" },
	{ 0xba1be5f, "snd_pcm_new" },
	{ 0xa6de447a, "snd_ctl_add" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "snd,snd-pcm");

MODULE_ALIAS("pci:v000010EEd00003FC0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd00003FC1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd00003FC2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd00003FC3sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "A48CBB80E724057F35DD3BA");
