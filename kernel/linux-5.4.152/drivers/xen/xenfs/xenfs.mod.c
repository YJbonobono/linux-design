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
	{ 0x45d14bdf, "hypercall_page" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x25df43a3, "seq_open_private" },
	{ 0x754d539c, "strlen" },
	{ 0x8b1f4c97, "get_tree_single" },
	{ 0xd81336d0, "seq_release_private" },
	{ 0xb177d101, "seq_printf" },
	{ 0x45034340, "xen_xenbus_fops" },
	{ 0x8faf9060, "xen_privcmd_fops" },
	{ 0x5932b0cc, "seq_read" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xfb578fc5, "memset" },
	{ 0xbdbe887, "kill_litter_super" },
	{ 0xc34b242b, "default_llseek" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x54ea6dfe, "xen_start_flags" },
	{ 0x5187ac4b, "xen_store_evtchn" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xa916b694, "strnlen" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x622c8ae7, "register_filesystem" },
	{ 0xcdaf7988, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x1ed2b8a8, "remap_pfn_range" },
	{ 0x731dba7a, "xen_domain_type" },
	{ 0x2b2d954e, "simple_fill_super" },
	{ 0x2b0765ca, "xen_store_interface" },
	{ 0xeadb8757, "unregister_filesystem" },
};

MODULE_INFO(depends, "xen-privcmd");


MODULE_INFO(srcversion, "FBB8D76D985B825B23CDB6E");
