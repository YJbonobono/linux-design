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
	{ 0xe7e05a27, "ni_tio_get_routing" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xa4ee50de, "ni_tio_unset_routing" },
	{ 0x42413332, "ni_tio_set_routing" },
	{ 0x76bc308, "ni_find_route_source" },
	{ 0xb3e302a3, "ni_route_to_register" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x246aba6e, "ni_tio_cmd" },
	{ 0x401e639b, "ni_tio_acknowledge" },
	{ 0xe65e315b, "mite_request_channel" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x6c3d1534, "ni_tio_init_counter" },
	{ 0xa8d747d7, "ni_tio_cmdtest" },
	{ 0xd955332d, "ni_tio_insn_config" },
	{ 0x9d68da41, "ni_tio_insn_write" },
	{ 0xd39f7030, "ni_tio_insn_read" },
	{ 0xdb2044b2, "range_unipolar5" },
	{ 0xec797760, "comedi_alloc_subdevices" },
	{ 0xd8a121af, "ni_gpct_device_construct" },
	{ 0xf6399e4e, "ni_assign_device_routes" },
	{ 0xbf9258f2, "mite_alloc_ring" },
	{ 0xebeb9dfb, "mite_attach" },
	{ 0xb8a1ebc1, "comedi_alloc_devpriv" },
	{ 0xb2493839, "comedi_pci_enable" },
	{ 0xc959f90d, "comedi_to_pci_dev" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xd340e1b7, "comedi_pci_disable" },
	{ 0xedc03953, "iounmap" },
	{ 0x69d5f2be, "mite_detach" },
	{ 0x344f9dd8, "mite_free_ring" },
	{ 0x90e7d0f0, "ni_gpct_device_destroy" },
	{ 0x64443d67, "ni_get_valid_routes" },
	{ 0xcd0839f7, "mite_release_channel" },
	{ 0xccaa3e88, "ni_tio_set_mite_channel" },
	{ 0x4da6bc4b, "ni_tio_cancel" },
	{ 0x257eb4, "comedi_buf_read_n_available" },
	{ 0x2051d479, "mite_sync_dma" },
	{ 0x5c30632, "mite_buf_change" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x1723b365, "comedi_handle_events" },
	{ 0xe4f6493e, "ni_tio_handle_interrupt" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x27607831, "comedi_pci_auto_config" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi_pci,ni_tio,ni_routing,ni_tiocmd,mite,comedi");

MODULE_ALIAS("pci:v00001093d00001310sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00001360sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00002C60sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00002DB0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00002CC0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00001E30sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00001E40sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "5564FAB9E09CA1CA03246BB");
