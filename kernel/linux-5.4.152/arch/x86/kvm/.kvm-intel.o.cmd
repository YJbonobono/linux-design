cmd_arch/x86/kvm/kvm-intel.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o arch/x86/kvm/kvm-intel.o arch/x86/kvm/vmx/vmx.o arch/x86/kvm/vmx/vmenter.o arch/x86/kvm/vmx/pmu_intel.o arch/x86/kvm/vmx/vmcs12.o arch/x86/kvm/vmx/evmcs.o arch/x86/kvm/vmx/nested.o
