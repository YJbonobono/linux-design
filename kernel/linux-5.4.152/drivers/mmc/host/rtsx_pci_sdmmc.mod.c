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
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0xf134c2a5, "rtsx_pci_write_ppbuf" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0x37a0cba, "kfree" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x33a7f495, "rtsx_pci_dma_transfer" },
	{ 0x4e0a7517, "rtsx_pci_send_cmd_no_wait" },
	{ 0xe0c2ed85, "rtsx_pci_read_ppbuf" },
	{ 0xc4ee0834, "rtsx_pci_switch_clock" },
	{ 0x81ffec8b, "rtsx_pci_card_power_on" },
	{ 0x53f3ae70, "rtsx_pci_card_pull_ctl_enable" },
	{ 0x15c1364, "rtsx_pci_card_pull_ctl_disable" },
	{ 0x19c94ee0, "rtsx_pci_card_power_off" },
	{ 0x907fe8f9, "rtsx_pci_send_cmd" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe9efc6, "rtsx_pci_switch_output_voltage" },
	{ 0x9671b2ce, "rtsx_pci_read_register" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3957acc5, "rtsx_pci_card_exclusive_check" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xfa43bf79, "rtsx_pci_dma_map_sg" },
	{ 0x300b3e2f, "rtsx_pci_card_exist" },
	{ 0x4983f16f, "rtsx_pci_dma_unmap_sg" },
	{ 0x3373f21, "rtsx_pci_add_cmd" },
	{ 0xe484e35f, "ioread32" },
	{ 0xf877e682, "rtsx_pci_start_run" },
	{ 0x23ae43c2, "rtsx_pci_write_register" },
	{ 0xb9a3671e, "mmc_detect_change" },
	{ 0x3d75c109, "mmc_add_host" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x95ee7d3a, "mmc_alloc_host" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xd20e0112, "mmc_free_host" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xed46adb4, "mmc_remove_host" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xe7363a56, "mmc_request_done" },
	{ 0x88c15f2c, "rtsx_pci_complete_unfinished_transfer" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rtsx_pci");

MODULE_ALIAS("platform:rtsx_pci_sdmmc");

MODULE_INFO(srcversion, "A826D0AC8ADA9D3A16AB5E9");
