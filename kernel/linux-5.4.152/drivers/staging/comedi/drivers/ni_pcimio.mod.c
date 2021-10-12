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
	{ 0xbb52fc7f, "range_bipolar10" },
	{ 0x2f0ad9d3, "range_bipolar5" },
	{ 0xedcd990b, "comedi_pci_auto_unconfig" },
	{ 0x9b7bae96, "comedi_pci_driver_unregister" },
	{ 0xf9c8183d, "comedi_pci_driver_register" },
	{ 0xcd330f4, "range_unknown" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9476e764, "subdev_8255_init" },
	{ 0xa8d747d7, "ni_tio_cmdtest" },
	{ 0xd955332d, "ni_tio_insn_config" },
	{ 0x9d68da41, "ni_tio_insn_write" },
	{ 0xd39f7030, "ni_tio_insn_read" },
	{ 0x6c3d1534, "ni_tio_init_counter" },
	{ 0xd8a121af, "ni_gpct_device_construct" },
	{ 0xdb2044b2, "range_unipolar5" },
	{ 0x35518cc1, "comedi_alloc_subdev_readback" },
	{ 0xec797760, "comedi_alloc_subdevices" },
	{ 0xf6399e4e, "ni_assign_device_routes" },
	{ 0xbf9258f2, "mite_alloc_ring" },
	{ 0xebeb9dfb, "mite_attach" },
	{ 0xb8a1ebc1, "comedi_alloc_devpriv" },
	{ 0xb2493839, "comedi_pci_enable" },
	{ 0xc959f90d, "comedi_to_pci_dev" },
	{ 0xda11f2f2, "comedi_buf_write_alloc" },
	{ 0x921123e, "ni_lookup_route_register" },
	{ 0x42413332, "ni_tio_set_routing" },
	{ 0xa4ee50de, "ni_tio_unset_routing" },
	{ 0x4da6bc4b, "ni_tio_cancel" },
	{ 0xcd0839f7, "mite_release_channel" },
	{ 0x246aba6e, "ni_tio_cmd" },
	{ 0x401e639b, "ni_tio_acknowledge" },
	{ 0xccaa3e88, "ni_tio_set_mite_channel" },
	{ 0xe65e315b, "mite_request_channel" },
	{ 0xb5ca9a24, "comedi_bytes_per_scan_cmd" },
	{ 0xb3e302a3, "ni_route_to_register" },
	{ 0xe7e05a27, "ni_tio_get_routing" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x76bc308, "ni_find_route_source" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x6006847, "current_task" },
	{ 0xd6c563bb, "comedi_is_subdevice_running" },
	{ 0xe4f6493e, "ni_tio_handle_interrupt" },
	{ 0x1723b365, "comedi_handle_events" },
	{ 0xeb067347, "mite_ack_linkc" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xa1344f73, "mite_init_ring_descriptors" },
	{ 0x61f415fb, "comedi_bytes_per_scan" },
	{ 0x12a38747, "usleep_range" },
	{ 0x42035e0e, "mite_dma_arm" },
	{ 0x735032e2, "mite_prep_dma" },
	{ 0xec919e12, "comedi_buf_read_alloc" },
	{ 0x90c7fcde, "comedi_buf_write_samples" },
	{ 0x95bf856f, "mite_bytes_in_transit" },
	{ 0x2051d479, "mite_sync_dma" },
	{ 0xff73f159, "comedi_dio_insn_config" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xd340e1b7, "comedi_pci_disable" },
	{ 0xedc03953, "iounmap" },
	{ 0x69d5f2be, "mite_detach" },
	{ 0x344f9dd8, "mite_free_ring" },
	{ 0x90e7d0f0, "ni_gpct_device_destroy" },
	{ 0x64443d67, "ni_get_valid_routes" },
	{ 0x991f8541, "comedi_dio_update_state" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x5c30632, "mite_buf_change" },
	{ 0x27607831, "comedi_pci_auto_config" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi,comedi_pci,comedi_8255,ni_tiocmd,ni_tio,ni_routing,mite");

MODULE_ALIAS("pci:v00001093d00000162sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00001170sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00001180sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00001190sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000011B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000011C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000011D0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00001270sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00001330sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00001340sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00001350sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000014E0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000014F0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00001580sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000015B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00001880sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00001870sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000018B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000018C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00002410sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00002420sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00002430sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00002890sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000028C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00002A60sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00002A70sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00002A80sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00002AB0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00002B80sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00002B90sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00002C80sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00002CA0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070AAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070ABsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070ACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070ADsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070AEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070AFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070B2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070B3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070B4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070B5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070B6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070B7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070B8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070B9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070BAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070BBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070BCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070BDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070BEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070BFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070F2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070F3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d0000710Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d0000716Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d0000716Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d0000717Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d0000717Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000071BCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000072E8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000072E9sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "377B18B68D01AFA379AA30D");
