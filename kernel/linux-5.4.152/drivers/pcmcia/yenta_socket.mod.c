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
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x66d230ae, "param_ops_string" },
	{ 0x83b05a16, "param_ops_uint" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xcf97f3bd, "dead_socket" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xa976fc36, "device_create_file" },
	{ 0xf8e62a5a, "pcmcia_register_socket" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xa19aa924, "pci_setup_cardbus" },
	{ 0xf43ccbff, "pcibios_resource_to_bus" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0x1aaccdf7, "pccard_nonstatic_ops" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x360b1afe, "probe_irq_mask" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb121390a, "probe_irq_on" },
	{ 0x24d273d1, "add_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc62fc0ed, "pcmcia_parse_events" },
	{ 0x75d94971, "pci_match_id" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x37a0cba, "kfree" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xdcc305dd, "pcmcia_unregister_socket" },
	{ 0x7e83fb8, "device_remove_file" },
	{ 0x30252ab, "pci_read_config_word" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xe0647c87, "pci_claim_resource" },
	{ 0x8e659fb2, "pcibios_bus_to_resource" },
	{ 0xf3e0e1df, "allocate_resource" },
	{ 0x3da171f9, "pci_mem_start" },
	{ 0x197631dc, "pci_bus_resource_n" },
	{ 0x5a470173, "pci_dev_put" },
	{ 0x40355fb5, "pci_get_slot" },
	{ 0x975ee610, "pci_read_config_byte" },
	{ 0xc5e74216, "release_resource" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x7431107b, "pci_write_config_word" },
	{ 0xfa88260f, "pci_write_config_byte" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0x637f23f, "pci_read_config_dword" },
	{ 0xd8f1dfb6, "pci_save_state" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x59771ec9, "pci_write_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcmcia_core,pcmcia_rsrc");

MODULE_ALIAS("pci:v0000104Cd0000AC13sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC1Asv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC12sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC15sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC1Esv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC17sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC19sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC1Csv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC1Dsv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC1Fsv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC51sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC1Bsv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC52sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC56sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC55sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC54sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC41sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd00008011sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC42sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC44sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC46sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC16sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC50sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd00008031sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd00008036sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd00008039sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC8Esv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC8Dsv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC49sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC47sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC48sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v00001524d00001411sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v00001524d00001412sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v00001524d00001421sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v00001524d00001422sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v00001524d00001211sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v00001524d00001225sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v00001524d00001410sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v00001524d00001420sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v00001180d00000465sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v00001180d00000466sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v00001180d00000475sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v00001180d00000476sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v00001180d00000478sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v00001179d0000060Asv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v00001179d0000060Fsv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v00001179d00000617sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v00001217d*sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v*d*sv*sd*bc06sc07i00*");

MODULE_INFO(srcversion, "23C5D5A2AD2BC39D9F3E8D3");
