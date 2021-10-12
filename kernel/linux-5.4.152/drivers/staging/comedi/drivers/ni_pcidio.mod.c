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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0xedcd990b, "comedi_pci_auto_unconfig" },
	{ 0x9b7bae96, "comedi_pci_driver_unregister" },
	{ 0xf9c8183d, "comedi_pci_driver_register" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x1723b365, "comedi_handle_events" },
	{ 0xeb067347, "mite_ack_linkc" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x2051d479, "mite_sync_dma" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xff73f159, "comedi_dio_insn_config" },
	{ 0xcd0839f7, "mite_release_channel" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xd340e1b7, "comedi_pci_disable" },
	{ 0xedc03953, "iounmap" },
	{ 0x69d5f2be, "mite_detach" },
	{ 0x344f9dd8, "mite_free_ring" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xdb2044b2, "range_unipolar5" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xec797760, "comedi_alloc_subdevices" },
	{ 0xcf87c652, "comedi_load_firmware" },
	{ 0xbf9258f2, "mite_alloc_ring" },
	{ 0xebeb9dfb, "mite_attach" },
	{ 0xb8a1ebc1, "comedi_alloc_devpriv" },
	{ 0xb2493839, "comedi_pci_enable" },
	{ 0xc959f90d, "comedi_to_pci_dev" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x1000e51, "schedule" },
	{ 0x6006847, "current_task" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x991f8541, "comedi_dio_update_state" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x42035e0e, "mite_dma_arm" },
	{ 0x735032e2, "mite_prep_dma" },
	{ 0xda11f2f2, "comedi_buf_write_alloc" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x43a5fc01, "mite_request_channel_in_range" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xfb578fc5, "memset" },
	{ 0x5c30632, "mite_buf_change" },
	{ 0x27607831, "comedi_pci_auto_config" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi_pci,comedi,mite");

MODULE_ALIAS("pci:v00001093d00001150sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000012B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00001320sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B17F356F97CE92424238DB0");
