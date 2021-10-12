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
	{ 0x138133c8, "param_ops_charp" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0xda7ba21b, "svga_get_tilemax" },
	{ 0x38ecfd32, "svga_tileblit" },
	{ 0xad9fef04, "svga_tilefill" },
	{ 0xeadbdec4, "svga_tilecopy" },
	{ 0xd625d556, "svga_get_caps" },
	{ 0x38c33bd8, "cfb_copyarea" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x3eb7f0d8, "pci_restore_state" },
	{ 0xa4191c0b, "memset_io" },
	{ 0x83a41489, "svga_set_timings" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x1be6dc30, "svga_set_textmode_vga_regs" },
	{ 0x4ab38ef2, "svga_set_default_crt_regs" },
	{ 0x17f3f471, "svga_set_default_seq_regs" },
	{ 0xd22ca511, "svga_set_default_atc_regs" },
	{ 0xe28d2a49, "svga_set_default_gfx_regs" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x5b641283, "arch_phys_wc_add" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdad9000b, "register_framebuffer" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0xc6c115cb, "fb_find_mode" },
	{ 0x8e659fb2, "pcibios_bus_to_resource" },
	{ 0x94e86184, "pci_iomap_wc" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc88bae18, "framebuffer_alloc" },
	{ 0x30252ab, "pci_read_config_word" },
	{ 0xd7885357, "cfb_fillrect" },
	{ 0xd56dec52, "cfb_imageblit" },
	{ 0xd6ec2c44, "svga_compute_pll" },
	{ 0x37a0cba, "kfree" },
	{ 0xe7a2620e, "save_vga" },
	{ 0x686de290, "restore_vga" },
	{ 0xc5850110, "printk" },
	{ 0xb0ab2b2e, "svga_check_timings" },
	{ 0x84c97d2a, "svga_match_format" },
	{ 0xe52425b7, "framebuffer_release" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0x86cb1fac, "pci_iounmap" },
	{ 0x98b71c6, "fb_dealloc_cmap" },
	{ 0x7aecb9a1, "unregister_framebuffer" },
	{ 0x50d68377, "arch_phys_wc_del" },
	{ 0xc631580a, "console_unlock" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x33001bea, "pci_set_power_state" },
	{ 0x7f7a5f7f, "pci_choose_state" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0xd8f1dfb6, "pci_save_state" },
	{ 0x6db25140, "fb_set_suspend" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xfbaaf01e, "console_lock" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x83351607, "svga_tilecursor" },
	{ 0x84c337c2, "svga_wcrt_multi" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "svgalib,vgastate");

MODULE_ALIAS("pci:v0000EDD8d0000A099sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F1932C1FBFBF76E0DD18636");
