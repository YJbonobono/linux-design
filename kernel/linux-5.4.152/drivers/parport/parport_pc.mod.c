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
	{ 0x85bd1608, "__request_region" },
	{ 0x260e0340, "parport_ieee1284_ecp_write_data" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x59771ec9, "pci_write_config_dword" },
	{ 0x89cc818f, "parport_ieee1284_ecp_write_addr" },
	{ 0x3db6f5e, "parport_register_port" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x353697ae, "parport_remove_port" },
	{ 0x49951708, "sev_enable_key" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x72b243d4, "free_dma" },
	{ 0x975ee610, "pci_read_config_byte" },
	{ 0xfaed6c37, "parport_ieee1284_epp_write_addr" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x75d94971, "pci_match_id" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x56470118, "__warn_printk" },
	{ 0x98c53813, "platform_bus_type" },
	{ 0xfa88260f, "pci_write_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x29df1f0d, "platform_device_register_full" },
	{ 0x7054a3e4, "request_dma" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x718a59be, "pnp_unregister_driver" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x138133c8, "param_ops_charp" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x6006847, "current_task" },
	{ 0x552feef8, "parport_ieee1284_epp_write_data" },
	{ 0xc5850110, "printk" },
	{ 0x4c4370ce, "parport_ieee1284_write_compat" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x3944290e, "parport_announce_port" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x175e33fb, "dma_spin_lock" },
	{ 0x5a921311, "strncmp" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x3461a347, "platform_device_unregister" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x7e1bb40c, "pnp_register_driver" },
	{ 0x73ce6d0b, "parport_ieee1284_epp_read_addr" },
	{ 0xcc4bab63, "pnp_get_resource" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xab600421, "probe_irq_off" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x5e3a3912, "parport_irq_handler" },
	{ 0x637f23f, "pci_read_config_dword" },
	{ 0xd55bed05, "parport_wait_event" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xb121390a, "probe_irq_on" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6e724099, "param_array_ops" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x8c2d666c, "pci_get_device" },
	{ 0xf8f38da6, "parport_ieee1284_read_byte" },
	{ 0x2e9d6e64, "parport_ieee1284_read_nibble" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0xed324aca, "parport_del_port" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x54b22b2d, "parport_wait_peripheral" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xfaefd29d, "parport_ieee1284_epp_read_data" },
	{ 0x2b7618da, "parport_ieee1284_ecp_read_data" },
};

MODULE_INFO(depends, "parport");

MODULE_ALIAS("pnp:dPNP0400*");
MODULE_ALIAS("acpi*:PNP0400:*");
MODULE_ALIAS("pnp:dPNP0401*");
MODULE_ALIAS("acpi*:PNP0401:*");
MODULE_ALIAS("pci:v00001106d00000686sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00008231sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001283d00008872sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000131Fd00001020sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000131Fd00001021sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000131Fd00002020sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000131Fd00002021sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001407d00008000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001407d00008002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001407d00008003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001407d00008800sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009050sv0000D84Dsd00004014bc*sc*i*");
MODULE_ALIAS("pci:v00001409d00007268sv00001409sd00000101bc*sc*i*");
MODULE_ALIAS("pci:v00001409d00007268sv00001409sd00000102bc*sc*i*");
MODULE_ALIAS("pci:v00001409d00007268sv00001409sd00000103bc*sc*i*");
MODULE_ALIAS("pci:v00001409d00007268sv00001409sd00000104bc*sc*i*");
MODULE_ALIAS("pci:v00001409d00007268sv00001409sd00009018bc*sc*i*");
MODULE_ALIAS("pci:v00001592d00000782sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001592d00000783sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014D2d00008001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014DBd00002120sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014DBd00002121sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001415d00009523sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001415d00009513sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001415d00008403sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001415d0000C000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001415d0000C004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001415d0000C100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001415d0000C104sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001415d0000C110sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001415d0000C114sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001415d0000C118sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001415d0000C11Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000416Cd00000100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F2d00000121sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009710d00009705sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009710d00009715sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009710d00009755sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009710d00009805sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009710d00009815sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009710d00009901sv0000A000sd00002000bc*sc*i*");
MODULE_ALIAS("pci:v00009710d00009865sv0000A000sd00001000bc*sc*i*");
MODULE_ALIAS("pci:v00009710d00009865sv0000A000sd00002000bc*sc*i*");
MODULE_ALIAS("pci:v0000135Cd00000278sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001C00d00003050sv00001C00sd00003050bc*sc*i*");

MODULE_INFO(srcversion, "8E05B82B453A6055B239882");
