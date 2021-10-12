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
	{ 0xb687d40a, "comedi_pcmcia_auto_unconfig" },
	{ 0x56a6e0c9, "comedi_pcmcia_driver_unregister" },
	{ 0xbf43d3f8, "comedi_pcmcia_driver_register" },
	{ 0xcd330f4, "range_unknown" },
	{ 0x9476e764, "subdev_8255_init" },
	{ 0xd955332d, "ni_tio_insn_config" },
	{ 0x9d68da41, "ni_tio_insn_write" },
	{ 0xd39f7030, "ni_tio_insn_read" },
	{ 0x6c3d1534, "ni_tio_init_counter" },
	{ 0xd8a121af, "ni_gpct_device_construct" },
	{ 0xdb2044b2, "range_unipolar5" },
	{ 0x35518cc1, "comedi_alloc_subdev_readback" },
	{ 0xec797760, "comedi_alloc_subdevices" },
	{ 0xf6399e4e, "ni_assign_device_routes" },
	{ 0xb8a1ebc1, "comedi_alloc_devpriv" },
	{ 0x73f53a7c, "pcmcia_request_irq" },
	{ 0x49c29289, "comedi_pcmcia_enable" },
	{ 0x8bbcc280, "comedi_to_pcmcia_dev" },
	{ 0x921123e, "ni_lookup_route_register" },
	{ 0x42413332, "ni_tio_set_routing" },
	{ 0xa4ee50de, "ni_tio_unset_routing" },
	{ 0xd6c563bb, "comedi_is_subdevice_running" },
	{ 0x257eb4, "comedi_buf_read_n_available" },
	{ 0x1723b365, "comedi_handle_events" },
	{ 0xb3e302a3, "ni_route_to_register" },
	{ 0xe7e05a27, "ni_tio_get_routing" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x76bc308, "ni_find_route_source" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x6006847, "current_task" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xff73f159, "comedi_dio_insn_config" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x279e4ccc, "comedi_pcmcia_disable" },
	{ 0x90e7d0f0, "ni_gpct_device_destroy" },
	{ 0x64443d67, "ni_get_valid_routes" },
	{ 0x991f8541, "comedi_dio_update_state" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc0ce234d, "pcmcia_request_io" },
	{ 0x83f5fe41, "comedi_buf_read_samples" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x90c7fcde, "comedi_buf_write_samples" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xe6eaa103, "comedi_pcmcia_auto_config" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi,comedi_pcmcia,comedi_8255,ni_tio,ni_routing,pcmcia");

MODULE_ALIAS("pcmcia:m010Bc010Df*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m010Bc010Cf*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m010Bc02C4f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m010Bc075Ef*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m010Bc0245f*fn*pfn*pa*pb*pc*pd*");

MODULE_INFO(srcversion, "05F5438754AB28685728E10");
