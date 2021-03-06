/* Automatically generated, don't edit */
/* Generated on: tyson-Lenovo-G505 */
/* At: Sat, 19 Mar 2016 22:22:02 +0000 */
/* Linux version 3.13.0-79-generic (buildd@lcy01-24) (gcc version 4.8.2 (Ubuntu 4.8.2-19ubuntu1) ) #123-Ubuntu SMP Fri Feb 19 14:27:58 UTC 2016 */

/* Pistachio Kernel Configuration System */

/* Hardware */

/* Basic Architecture */
#define CONFIG_ARCH_X86 1
#undef  CONFIG_ARCH_POWERPC
#undef  CONFIG_ARCH_POWERPC64


/* X86 Processor Architecture */
#undef  CONFIG_SUBARCH_X32
#define CONFIG_SUBARCH_X64 1


/* Processor Type */
#undef  CONFIG_CPU_X86_I486
#undef  CONFIG_CPU_X86_I586
#define CONFIG_CPU_X86_I686 1
#undef  CONFIG_CPU_X86_P4
#undef  CONFIG_CPU_X86_K8
#undef  CONFIG_CPU_X86_C3
#undef  CONFIG_CPU_X86_SIMICS


/* Platform */
#define CONFIG_PLAT_PC99 1
#undef  CONFIG_PLAT_EFI


/* Processor Type */
#undef  CONFIG_CPU_POWERPC_PPC440
#undef  CONFIG_CPU_POWERPC_IBM750
#undef  CONFIG_CPU_POWERPC_PPC604


/* Platform */
#undef  CONFIG_PLAT_OFPPC
#undef  CONFIG_PLAT_PPC44X


/* Sub-Platform */
#undef  CONFIG_SUBPLAT_440_BGP
#undef  CONFIG_SUBPLAT_440_EBONY


/* Miscellaneous */
#define CONFIG_IOAPIC 1
#define CONFIG_MAX_IOAPICS 2
#define CONFIG_APIC_TIMER_TICK 1000
#undef  CONFIG_PPC_EXPOSE_OPIC

#undef  CONFIG_SMP
#define CONFIG_SMP_MAX_PROCS 4
#undef  CONFIG_SMP_IDLE_POLL


/* Kernel */
#undef  CONFIG_EXPERIMENTAL

/* Experimental Features */
#undef  CONFIG_X_PAGER_EXREGS
#undef  CONFIG_X_CTRLXFER_MSG
#undef  CONFIG_X_EVT_LOGGING

/* Kernel scheduling policy */
#undef  CONFIG_SCHED_RR
#undef  CONFIG_X_SCHED_HS


#undef  CONFIG_IPC_FASTPATH
#undef  CONFIG_DEBUG
#undef  CONFIG_DEBUG_SYMBOLS
#undef  CONFIG_PERFMON
#define CONFIG_SPIN_WHEELS 1
#undef  CONFIG_NEW_MDB
#undef  CONFIG_STATIC_TCBS
#define CONFIG_PPC_BAT_SYSCALLS 1
#undef  CONFIG_X86_SMALL_SPACES
#define CONFIG_X86_COMPATIBILITY_MODE 1
#undef  CONFIG_X86_IO_FLEXPAGES


/* Debugger */

/* Kernel Debugger Console */
#undef  CONFIG_KDB_CONS_COM
#define CONFIG_KDB_COMPORT 0x0
#define CONFIG_KDB_COMSPEED 115200
#undef  CONFIG_KDB_CONS_KBD
#undef  CONFIG_KDB_CONS_OF1275
#undef  CONFIG_KDB_CONS_PSIM_COM
#define CONFIG_KDB_BOOT_CONS 0

#undef  CONFIG_KDB_DISAS
#undef  CONFIG_KDB_ON_STARTUP
#undef  CONFIG_KDB_BREAKIN
#undef  CONFIG_KDB_BREAKIN_BREAK
#undef  CONFIG_KDB_BREAKIN_ESCAPE
#undef  CONFIG_KDB_INPUT_HLT
#undef  CONFIG_KDB_NO_ASSERTS

/* Trace Settings */
#undef  CONFIG_VERBOSE_INIT
#undef  CONFIG_TRACEPOINTS
#undef  CONFIG_KMEM_TRACE
#undef  CONFIG_TRACEBUFFER
#undef  CONFIG_TBUF_PERFMON
#undef  CONFIG_X86_KEEP_LAST_BRANCHES



/* Code Generator Options */
#define CONFIG_SYSV_ABI 1
#undef  CONFIG_PPC_SEGMENT_LOOP
#define CONFIG_PPC_MULTIWORD_INSTR 1


/* Derived symbols */
#undef  CONFIG_HAVE_MEMORY_CONTROL
#define CONFIG_X86_PSE 1
#undef  CONFIG_BIGENDIAN
#undef  CONFIG_PPC_MMU_TLB
#define CONFIG_X86_SYSENTER 1
#define CONFIG_X86_PGE 1
#define CONFIG_X86_FXSR 1
#undef  CONFIG_IS_32BIT
#undef  CONFIG_X86_HTT
#define CONFIG_X86_PAT 1
#undef  CONFIG_PPC_BOOKE
#define CONFIG_IS_64BIT 1
#define CONFIG_MULTI_ARCHITECTURE 1
#undef  CONFIG_X86_EM64T
#undef  CONFIG_PPC_CACHE_L1_WRITETHROUGH
#undef  CONFIG_PPC_TLB_INV_LOCAL
#undef  CONFIG_PPC_CACHE_ICBI_LOCAL
#undef  CONFIG_X86_SMALL_SPACES_GLOBAL
#undef  CONFIG_X86_HVM
#undef  CONFIG_PPC_MMU_SEGMENTS
#define CONFIG_X86_TSC 1
/* That's all, folks! */
#define AUTOCONF_INCLUDED
