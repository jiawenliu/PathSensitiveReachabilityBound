typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;
typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;
__extension__ typedef signed long long int __int64_t;
__extension__ typedef unsigned long long int __uint64_t;
__extension__ typedef long long int __quad_t;
__extension__ typedef unsigned long long int __u_quad_t;
__extension__ typedef __u_quad_t __dev_t;
__extension__ typedef unsigned int __uid_t;
__extension__ typedef unsigned int __gid_t;
__extension__ typedef unsigned long int __ino_t;
__extension__ typedef __u_quad_t __ino64_t;
__extension__ typedef unsigned int __mode_t;
__extension__ typedef unsigned int __nlink_t;
__extension__ typedef long int __off_t;
__extension__ typedef __quad_t __off64_t;
__extension__ typedef int __pid_t;
__extension__ typedef struct {
    int __val[2];
} __fsid_t;
__extension__ typedef long int __clock_t;
__extension__ typedef unsigned long int __rlim_t;
__extension__ typedef __u_quad_t __rlim64_t;
__extension__ typedef unsigned int __id_t;
__extension__ typedef long int __time_t;
__extension__ typedef unsigned int __useconds_t;
__extension__ typedef long int __suseconds_t;
__extension__ typedef int __daddr_t;
__extension__ typedef long int __swblk_t;
__extension__ typedef int __key_t;
__extension__ typedef int __clockid_t;
__extension__ typedef void *__timer_t;
__extension__ typedef long int __blksize_t;
__extension__ typedef long int __blkcnt_t;
__extension__ typedef __quad_t __blkcnt64_t;
__extension__ typedef unsigned long int __fsblkcnt_t;
__extension__ typedef __u_quad_t __fsblkcnt64_t;
__extension__ typedef unsigned long int __fsfilcnt_t;
__extension__ typedef __u_quad_t __fsfilcnt64_t;
__extension__ typedef int __ssize_t;
typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;
__extension__ typedef int __intptr_t;
__extension__ typedef unsigned int __socklen_t;
enum { _ISupper = ((0) < 8 ? ((1 << (0)) << 8) : ((1 << (0)) >> 8)), _ISlower = ((1) < 8 ? ((1 << (1)) << 8) : ((1 << (1)) >> 8)), _ISalpha = ((2) < 8 ? ((1 << (2)) << 8) : ((1 << (2)) >> 8)), _ISdigit = ((3) < 8 ? ((1 << (3)) << 8) : ((1 << (3)) >> 8)), _ISxdigit = ((4) < 8 ? ((1 << (4)) << 8) : ((1 << (4)) >> 8)), _ISspace = ((5) < 8 ? ((1 << (5)) << 8) : ((1 << (5)) >> 8)), _ISprint = ((6) < 8 ? ((1 << (6)) << 8) : ((1 << (6)) >> 8)), _ISgraph = ((7) < 8 ? ((1 << (7)) << 8) : ((1 << (7)) >> 8)), _ISblank = ((8) < 8 ? ((1 << (8)) << 8) : ((1 << (8)) >> 8)), _IScntrl = ((9) < 8 ? ((1 << (9)) << 8) : ((1 << (9)) >> 8)), _ISpunct = ((10) < 8 ? ((1 << (10)) << 8) : ((1 << (10)) >> 8)), _ISalnum = ((11) < 8 ? ((1 << (11)) << 8) : ((1 << (11)) >> 8)) };
extern __const unsigned short int **__ctype_b_loc(void) __attribute__ ((__nothrow__)) __attribute__ ((__const));
extern __const __int32_t **__ctype_tolower_loc(void) __attribute__ ((__nothrow__)) __attribute__ ((__const));
extern __const __int32_t **__ctype_toupper_loc(void) __attribute__ ((__nothrow__)) __attribute__ ((__const));
extern int isalnum(int) __attribute__ ((__nothrow__));
extern int isalpha(int) __attribute__ ((__nothrow__));
extern int iscntrl(int) __attribute__ ((__nothrow__));
extern int isdigit(int) __attribute__ ((__nothrow__));
extern int islower(int) __attribute__ ((__nothrow__));
extern int isgraph(int) __attribute__ ((__nothrow__));
extern int isprint(int) __attribute__ ((__nothrow__));
extern int ispunct(int) __attribute__ ((__nothrow__));
extern int isspace(int) __attribute__ ((__nothrow__));
extern int isupper(int) __attribute__ ((__nothrow__));
extern int isxdigit(int) __attribute__ ((__nothrow__));
extern int tolower(int __c) __attribute__ ((__nothrow__));
extern int toupper(int __c) __attribute__ ((__nothrow__));
extern int isblank(int) __attribute__ ((__nothrow__));
extern int isascii(int __c) __attribute__ ((__nothrow__));
extern int toascii(int __c) __attribute__ ((__nothrow__));
extern int _toupper(int) __attribute__ ((__nothrow__));
extern int _tolower(int) __attribute__ ((__nothrow__));
typedef struct __locale_struct {
    struct locale_data *__locales[13];
    const unsigned short int *__ctype_b;
    const int *__ctype_tolower;
    const int *__ctype_toupper;
    const char *__names[13];
} *__locale_t;
typedef __locale_t locale_t;
extern int isalnum_l(int, __locale_t) __attribute__ ((__nothrow__));
extern int isalpha_l(int, __locale_t) __attribute__ ((__nothrow__));
extern int iscntrl_l(int, __locale_t) __attribute__ ((__nothrow__));
extern int isdigit_l(int, __locale_t) __attribute__ ((__nothrow__));
extern int islower_l(int, __locale_t) __attribute__ ((__nothrow__));
extern int isgraph_l(int, __locale_t) __attribute__ ((__nothrow__));
extern int isprint_l(int, __locale_t) __attribute__ ((__nothrow__));
extern int ispunct_l(int, __locale_t) __attribute__ ((__nothrow__));
extern int isspace_l(int, __locale_t) __attribute__ ((__nothrow__));
extern int isupper_l(int, __locale_t) __attribute__ ((__nothrow__));
extern int isxdigit_l(int, __locale_t) __attribute__ ((__nothrow__));
extern int isblank_l(int, __locale_t) __attribute__ ((__nothrow__));
extern int __tolower_l(int __c, __locale_t __l) __attribute__ ((__nothrow__));
extern int tolower_l(int __c, __locale_t __l) __attribute__ ((__nothrow__));
extern int __toupper_l(int __c, __locale_t __l) __attribute__ ((__nothrow__));
extern int toupper_l(int __c, __locale_t __l) __attribute__ ((__nothrow__));
typedef int __sig_atomic_t;
typedef struct {
    unsigned long int __val[(1024 / (8 * sizeof(unsigned long int)))];
} __sigset_t;
extern int __sigismember(__const __sigset_t *, int);
extern int __sigaddset(__sigset_t *, int);
extern int __sigdelset(__sigset_t *, int);
typedef __sig_atomic_t sig_atomic_t;
typedef __sigset_t sigset_t;
typedef __pid_t pid_t;
typedef __uid_t uid_t;
struct timespec {
    __time_t tv_sec;
    long int tv_nsec;
};
typedef union sigval {
    int sival_int;
    void *sival_ptr;
} sigval_t;
typedef struct siginfo {
    int si_signo;
    int si_errno;
    int si_code;
    union {
	int _pad[((128 / sizeof(int)) - 3)];
	struct {
	    __pid_t si_pid;
	    __uid_t si_uid;
	} _kill;
	struct {
	    int si_tid;
	    int si_overrun;
	    sigval_t si_sigval;
	} _timer;
	struct {
	    __pid_t si_pid;
	    __uid_t si_uid;
	    sigval_t si_sigval;
	} _rt;
	struct {
	    __pid_t si_pid;
	    __uid_t si_uid;
	    int si_status;
	    __clock_t si_utime;
	    __clock_t si_stime;
	} _sigchld;
	struct {
	    void *si_addr;
	} _sigfault;
	struct {
	    long int si_band;
	    int si_fd;
	} _sigpoll;
    } _sifields;
} siginfo_t;
enum { SI_ASYNCNL = -60, SI_TKILL = -6, SI_SIGIO, SI_ASYNCIO, SI_MESGQ, SI_TIMER, SI_QUEUE, SI_USER, SI_KERNEL = 0x80 };
enum { ILL_ILLOPC = 1, ILL_ILLOPN, ILL_ILLADR, ILL_ILLTRP, ILL_PRVOPC, ILL_PRVREG, ILL_COPROC, ILL_BADSTK };
enum { FPE_INTDIV = 1, FPE_INTOVF, FPE_FLTDIV, FPE_FLTOVF, FPE_FLTUND, FPE_FLTRES, FPE_FLTINV, FPE_FLTSUB };
enum { SEGV_MAPERR = 1, SEGV_ACCERR };
enum { BUS_ADRALN = 1, BUS_ADRERR, BUS_OBJERR };
enum { TRAP_BRKPT = 1, TRAP_TRACE };
enum { CLD_EXITED = 1, CLD_KILLED, CLD_DUMPED, CLD_TRAPPED, CLD_STOPPED, CLD_CONTINUED };
enum { POLL_IN = 1, POLL_OUT, POLL_MSG, POLL_ERR, POLL_PRI, POLL_HUP };
typedef struct sigevent {
    sigval_t sigev_value;
    int sigev_signo;
    int sigev_notify;
    union {
	int _pad[((64 / sizeof(int)) - 3)];
	__pid_t _tid;
	struct {
	    void (*_function) (sigval_t);
	    void *_attribute;
	} _sigev_thread;
    } _sigev_un;
} sigevent_t;
enum { SIGEV_SIGNAL = 0, SIGEV_NONE, SIGEV_THREAD, SIGEV_THREAD_ID = 4 };
typedef void (*__sighandler_t) (int);
extern __sighandler_t __sysv_signal(int __sig, __sighandler_t __handler) __attribute__ ((__nothrow__));
extern __sighandler_t signal(int __sig, __sighandler_t __handler) __attribute__ ((__nothrow__));
extern int kill(__pid_t __pid, int __sig) __attribute__ ((__nothrow__));
extern int killpg(__pid_t __pgrp, int __sig) __attribute__ ((__nothrow__));
extern int raise(int __sig) __attribute__ ((__nothrow__));
extern __sighandler_t ssignal(int __sig, __sighandler_t __handler) __attribute__ ((__nothrow__));
extern int gsignal(int __sig) __attribute__ ((__nothrow__));
extern void psignal(int __sig, __const char *__s);
extern void psiginfo(__const siginfo_t * __pinfo, __const char *__s);
extern int __sigpause(int __sig_or_mask, int __is_sig);
extern int sigblock(int __mask) __attribute__ ((__nothrow__)) __attribute__ ((__deprecated__));
extern int sigsetmask(int __mask) __attribute__ ((__nothrow__)) __attribute__ ((__deprecated__));
extern int siggetmask(void) __attribute__ ((__nothrow__)) __attribute__ ((__deprecated__));
typedef __sighandler_t sig_t;
extern int sigemptyset(sigset_t * __set) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int sigfillset(sigset_t * __set) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int sigaddset(sigset_t * __set, int __signo) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int sigdelset(sigset_t * __set, int __signo) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int sigismember(__const sigset_t * __set, int __signo) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
struct sigaction {
    union {
	__sighandler_t sa_handler;
	void (*sa_sigaction) (int, siginfo_t *, void *);
    } __sigaction_handler;
    __sigset_t sa_mask;
    int sa_flags;
    void (*sa_restorer) (void);
};
extern int sigprocmask(int __how, __const sigset_t * __restrict __set, sigset_t * __restrict __oset) __attribute__ ((__nothrow__));
extern int sigsuspend(__const sigset_t * __set) __attribute__ ((__nonnull__(1)));
extern int sigaction(int __sig, __const struct sigaction *__restrict __act, struct sigaction *__restrict __oact) __attribute__ ((__nothrow__));
extern int sigpending(sigset_t * __set) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int sigwait(__const sigset_t * __restrict __set, int *__restrict __sig) __attribute__ ((__nonnull__(1, 2)));
extern int sigwaitinfo(__const sigset_t * __restrict __set, siginfo_t * __restrict __info) __attribute__ ((__nonnull__(1)));
extern int sigtimedwait(__const sigset_t * __restrict __set, siginfo_t * __restrict __info, __const struct timespec *__restrict __timeout) __attribute__ ((__nonnull__(1)));
extern int sigqueue(__pid_t __pid, int __sig, __const union sigval __val) __attribute__ ((__nothrow__));
extern __const char *__const _sys_siglist[65];
extern __const char *__const sys_siglist[65];
struct sigvec {
    __sighandler_t sv_handler;
    int sv_mask;
    int sv_flags;
};
extern int sigvec(int __sig, __const struct sigvec *__vec, struct sigvec *__ovec) __attribute__ ((__nothrow__));
typedef __signed__ char __s8;
typedef unsigned char __u8;
typedef __signed__ short __s16;
typedef unsigned short __u16;
typedef __signed__ int __s32;
typedef unsigned int __u32;
__extension__ typedef __signed__ long long __s64;
__extension__ typedef unsigned long long __u64;
typedef unsigned short umode_t;
typedef struct {
    unsigned long fds_bits[(1024 / (8 * sizeof(unsigned long)))];
} __kernel_fd_set;
typedef void (*__kernel_sighandler_t) (int);
typedef int __kernel_key_t;
typedef int __kernel_mqd_t;
typedef unsigned long __kernel_ino_t;
typedef unsigned short __kernel_mode_t;
typedef unsigned short __kernel_nlink_t;
typedef long __kernel_off_t;
typedef int __kernel_pid_t;
typedef unsigned short __kernel_ipc_pid_t;
typedef unsigned short __kernel_uid_t;
typedef unsigned short __kernel_gid_t;
typedef unsigned int __kernel_size_t;
typedef int __kernel_ssize_t;
typedef int __kernel_ptrdiff_t;
typedef long __kernel_time_t;
typedef long __kernel_suseconds_t;
typedef long __kernel_clock_t;
typedef int __kernel_timer_t;
typedef int __kernel_clockid_t;
typedef int __kernel_daddr_t;
typedef char *__kernel_caddr_t;
typedef unsigned short __kernel_uid16_t;
typedef unsigned short __kernel_gid16_t;
typedef unsigned int __kernel_uid32_t;
typedef unsigned int __kernel_gid32_t;
typedef unsigned short __kernel_old_uid_t;
typedef unsigned short __kernel_old_gid_t;
typedef unsigned short __kernel_old_dev_t;
typedef long long __kernel_loff_t;
typedef struct {
    int val[2];
} __kernel_fsid_t;
typedef __u16 __le16;
typedef __u16 __be16;
typedef __u32 __le32;
typedef __u32 __be32;
typedef __u64 __le64;
typedef __u64 __be64;
typedef __u16 __sum16;
typedef __u32 __wsum;
struct _fpx_sw_bytes {
    __u32 magic1;
    __u32 extended_size;
    __u64 xstate_bv;
    __u32 xstate_size;
    __u32 padding[7];
};
struct _fpreg {
    unsigned short significand[4];
    unsigned short exponent;
};
struct _fpxreg {
    unsigned short significand[4];
    unsigned short exponent;
    unsigned short padding[3];
};
struct _xmmreg {
    unsigned long element[4];
};
struct _fpstate {
    unsigned long cw;
    unsigned long sw;
    unsigned long tag;
    unsigned long ipoff;
    unsigned long cssel;
    unsigned long dataoff;
    unsigned long datasel;
    struct _fpreg _st[8];
    unsigned short status;
    unsigned short magic;
    unsigned long _fxsr_env[6];
    unsigned long mxcsr;
    unsigned long reserved;
    struct _fpxreg _fxsr_st[8];
    struct _xmmreg _xmm[8];
    unsigned long padding1[44];
    union {
	unsigned long padding2[12];
	struct _fpx_sw_bytes sw_reserved;
    };
};
struct sigcontext {
    unsigned short gs, __gsh;
    unsigned short fs, __fsh;
    unsigned short es, __esh;
    unsigned short ds, __dsh;
    unsigned long edi;
    unsigned long esi;
    unsigned long ebp;
    unsigned long esp;
    unsigned long ebx;
    unsigned long edx;
    unsigned long ecx;
    unsigned long eax;
    unsigned long trapno;
    unsigned long err;
    unsigned long eip;
    unsigned short cs, __csh;
    unsigned long eflags;
    unsigned long esp_at_signal;
    unsigned short ss, __ssh;
    struct _fpstate *fpstate;
    unsigned long oldmask;
    unsigned long cr2;
};
struct _xsave_hdr {
    __u64 xstate_bv;
    __u64 reserved1[2];
    __u64 reserved2[5];
};
struct _ymmh_state {
    __u32 ymmh_space[64];
};
struct _xstate {
    struct _fpstate fpstate;
    struct _xsave_hdr xstate_hdr;
    struct _ymmh_state ymmh;
};
extern int sigreturn(struct sigcontext *__scp) __attribute__ ((__nothrow__));
typedef __typeof__(((int *) 0) - ((int *) 0)) ptrdiff_t;
typedef __typeof__(sizeof(int)) size_t;
typedef int wchar_t;
extern int siginterrupt(int __sig, int __interrupt) __attribute__ ((__nothrow__));
struct sigstack {
    void *ss_sp;
    int ss_onstack;
};
enum { SS_ONSTACK = 1, SS_DISABLE };
typedef struct sigaltstack {
    void *ss_sp;
    int ss_flags;
    size_t ss_size;
} stack_t;
extern int sigstack(struct sigstack *__ss, struct sigstack *__oss) __attribute__ ((__nothrow__)) __attribute__ ((__deprecated__));
extern int sigaltstack(__const struct sigaltstack *__restrict __ss, struct sigaltstack *__restrict __oss) __attribute__ ((__nothrow__));
typedef unsigned long int pthread_t;
typedef union {
    char __size[36];
    long int __align;
} pthread_attr_t;
typedef struct __pthread_internal_slist {
    struct __pthread_internal_slist *__next;
} __pthread_slist_t;
typedef union {
    struct __pthread_mutex_s {
	int __lock;
	unsigned int __count;
	int __owner;
	int __kind;
	unsigned int __nusers;
	__extension__ union {
	    int __spins;
	    __pthread_slist_t __list;
	};
    } __data;
    char __size[24];
    long int __align;
} pthread_mutex_t;
typedef union {
    char __size[4];
    long int __align;
} pthread_mutexattr_t;
typedef union {
    struct {
	int __lock;
	unsigned int __futex;
	__extension__ unsigned long long int __total_seq;
	__extension__ unsigned long long int __wakeup_seq;
	__extension__ unsigned long long int __woken_seq;
	void *__mutex;
	unsigned int __nwaiters;
	unsigned int __broadcast_seq;
    } __data;
    char __size[48];
    __extension__ long long int __align;
} pthread_cond_t;
typedef union {
    char __size[4];
    long int __align;
} pthread_condattr_t;
typedef unsigned int pthread_key_t;
typedef int pthread_once_t;
typedef union {
    struct {
	int __lock;
	unsigned int __nr_readers;
	unsigned int __readers_wakeup;
	unsigned int __writer_wakeup;
	unsigned int __nr_readers_queued;
	unsigned int __nr_writers_queued;
	unsigned char __flags;
	unsigned char __shared;
	unsigned char __pad1;
	unsigned char __pad2;
	int __writer;
    } __data;
    char __size[32];
    long int __align;
} pthread_rwlock_t;
typedef union {
    char __size[8];
    long int __align;
} pthread_rwlockattr_t;
typedef volatile int pthread_spinlock_t;
typedef union {
    char __size[20];
    long int __align;
} pthread_barrier_t;
typedef union {
    char __size[4];
    int __align;
} pthread_barrierattr_t;
extern int pthread_sigmask(int __how, __const __sigset_t * __restrict __newmask, __sigset_t * __restrict __oldmask) __attribute__ ((__nothrow__));
extern int pthread_kill(pthread_t __threadid, int __signo) __attribute__ ((__nothrow__));
extern int __libc_current_sigrtmin(void) __attribute__ ((__nothrow__));
extern int __libc_current_sigrtmax(void) __attribute__ ((__nothrow__));
struct _IO_FILE;
typedef struct _IO_FILE FILE;
typedef struct _IO_FILE __FILE;
typedef struct {
    int __count;
    union {
	unsigned int __wch;
	char __wchb[4];
    } __value;
} __mbstate_t;
typedef struct {
    __off_t __pos;
    __mbstate_t __state;
} _G_fpos_t;
typedef struct {
    __off64_t __pos;
    __mbstate_t __state;
} _G_fpos64_t;
typedef int _G_int16_t __attribute__ ((__mode__(__HI__)));
typedef int _G_int32_t __attribute__ ((__mode__(__SI__)));
typedef unsigned int _G_uint16_t __attribute__ ((__mode__(__HI__)));
typedef unsigned int _G_uint32_t __attribute__ ((__mode__(__SI__)));
typedef __builtin_va_list va_list;
typedef __builtin_va_list __gnuc_va_list;
struct _IO_jump_t;
struct _IO_FILE;
typedef void _IO_lock_t;
struct _IO_marker {
    struct _IO_marker *_next;
    struct _IO_FILE *_sbuf;
    int _pos;
};
enum __codecvt_result { __codecvt_ok, __codecvt_partial, __codecvt_error, __codecvt_noconv };
struct _IO_FILE {
    int _flags;
    char *_IO_read_ptr;
    char *_IO_read_end;
    char *_IO_read_base;
    char *_IO_write_base;
    char *_IO_write_ptr;
    char *_IO_write_end;
    char *_IO_buf_base;
    char *_IO_buf_end;
    char *_IO_save_base;
    char *_IO_backup_base;
    char *_IO_save_end;
    struct _IO_marker *_markers;
    struct _IO_FILE *_chain;
    int _fileno;
    int _flags2;
    __off_t _old_offset;
    unsigned short _cur_column;
    signed char _vtable_offset;
    char _shortbuf[1];
    _IO_lock_t *_lock;
    __off64_t _offset;
    void *__pad1;
    void *__pad2;
    void *__pad3;
    void *__pad4;
    size_t __pad5;
    int _mode;
    char _unused2[15 * sizeof(int) - 4 * sizeof(void *) - sizeof(size_t)];
};
typedef struct _IO_FILE _IO_FILE;
struct _IO_FILE_plus;
extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
typedef __ssize_t __io_read_fn(void *__cookie, char *__buf, size_t __nbytes);
typedef __ssize_t __io_write_fn(void *__cookie, __const char *__buf, size_t __n);
typedef int __io_seek_fn(void *__cookie, __off64_t * __pos, int __w);
typedef int __io_close_fn(void *__cookie);
extern int __underflow(_IO_FILE *);
extern int __uflow(_IO_FILE *);
extern int __overflow(_IO_FILE *, int);
extern int _IO_getc(_IO_FILE * __fp);
extern int _IO_putc(int __c, _IO_FILE * __fp);
extern int _IO_feof(_IO_FILE * __fp) __attribute__ ((__nothrow__));
extern int _IO_ferror(_IO_FILE * __fp) __attribute__ ((__nothrow__));
extern int _IO_peekc_locked(_IO_FILE * __fp);
extern void _IO_flockfile(_IO_FILE *) __attribute__ ((__nothrow__));
extern void _IO_funlockfile(_IO_FILE *) __attribute__ ((__nothrow__));
extern int _IO_ftrylockfile(_IO_FILE *) __attribute__ ((__nothrow__));
extern int _IO_vfscanf(_IO_FILE * __restrict, const char *__restrict, __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf(_IO_FILE * __restrict, const char *__restrict, __gnuc_va_list);
extern __ssize_t _IO_padn(_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn(_IO_FILE *, void *, size_t);
extern __off64_t _IO_seekoff(_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos(_IO_FILE *, __off64_t, int);
extern void _IO_free_backup_area(_IO_FILE *) __attribute__ ((__nothrow__));
typedef _G_fpos_t fpos_t;
extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;
extern int remove(__const char *__filename) __attribute__ ((__nothrow__));
extern int rename(__const char *__old, __const char *__new) __attribute__ ((__nothrow__));
extern int renameat(int __oldfd, __const char *__old, int __newfd, __const char *__new) __attribute__ ((__nothrow__));
extern FILE *tmpfile(void);
extern char *tmpnam(char *__s) __attribute__ ((__nothrow__));
extern char *tmpnam_r(char *__s) __attribute__ ((__nothrow__));
extern char *tempnam(__const char *__dir, __const char *__pfx) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__));
extern int fclose(FILE * __stream);
extern int fflush(FILE * __stream);
extern int fflush_unlocked(FILE * __stream);
extern FILE *fopen(__const char *__restrict __filename, __const char *__restrict __modes);
extern FILE *freopen(__const char *__restrict __filename, __const char *__restrict __modes, FILE * __restrict __stream);
extern FILE *fdopen(int __fd, __const char *__modes) __attribute__ ((__nothrow__));
extern FILE *fmemopen(void *__s, size_t __len, __const char *__modes) __attribute__ ((__nothrow__));
extern FILE *open_memstream(char **__bufloc, size_t * __sizeloc) __attribute__ ((__nothrow__));
extern void setbuf(FILE * __restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__));
extern int setvbuf(FILE * __restrict __stream, char *__restrict __buf, int __modes, size_t __n) __attribute__ ((__nothrow__));
extern void setbuffer(FILE * __restrict __stream, char *__restrict __buf, size_t __size) __attribute__ ((__nothrow__));
extern void setlinebuf(FILE * __stream) __attribute__ ((__nothrow__));
extern int fprintf(FILE * __restrict __stream, __const char *__restrict __format, ...);
extern int printf(__const char *__restrict __format, ...);
extern int sprintf(char *__restrict __s, __const char *__restrict __format, ...) __attribute__ ((__nothrow__));
extern int vfprintf(FILE * __restrict __s, __const char *__restrict __format, __gnuc_va_list __arg);
extern int vprintf(__const char *__restrict __format, __gnuc_va_list __arg);
extern int vsprintf(char *__restrict __s, __const char *__restrict __format, __gnuc_va_list __arg) __attribute__ ((__nothrow__));
extern int snprintf(char *__restrict __s, size_t __maxlen, __const char *__restrict __format, ...) __attribute__ ((__nothrow__)) __attribute__ ((__format__(__printf__, 3, 4)));
extern int vsnprintf(char *__restrict __s, size_t __maxlen, __const char *__restrict __format, __gnuc_va_list __arg) __attribute__ ((__nothrow__)) __attribute__ ((__format__(__printf__, 3, 0)));
extern int vdprintf(int __fd, __const char *__restrict __fmt, __gnuc_va_list __arg) __attribute__ ((__format__(__printf__, 2, 0)));
extern int fscanf(FILE * __restrict __stream, __const char *__restrict __format, ...);
extern int scanf(__const char *__restrict __format, ...);
extern int sscanf(__const char *__restrict __s, __const char *__restrict __format, ...) __attribute__ ((__nothrow__));
extern int fscanf(FILE * __restrict __stream, __const char *__restrict __format, ...) __asm__("" "__isoc99_fscanf");
extern int scanf(__const char *__restrict __format, ...) __asm__("" "__isoc99_scanf");
extern int sscanf(__const char *__restrict __s, __const char *__restrict __format, ...) __asm__("" "__isoc99_sscanf") __attribute__ ((__nothrow__));
extern int vfscanf(FILE * __restrict __s, __const char *__restrict __format, __gnuc_va_list __arg) __attribute__ ((__format__(__scanf__, 2, 0)));
extern int vscanf(__const char *__restrict __format, __gnuc_va_list __arg) __attribute__ ((__format__(__scanf__, 1, 0)));
extern int vsscanf(__const char *__restrict __s, __const char *__restrict __format, __gnuc_va_list __arg) __attribute__ ((__nothrow__)) __attribute__ ((__format__(__scanf__, 2, 0)));
extern int vfscanf(FILE * __restrict __s, __const char *__restrict __format, __gnuc_va_list __arg) __asm__("" "__isoc99_vfscanf") __attribute__ ((__format__(__scanf__, 2, 0)));
extern int vscanf(__const char *__restrict __format, __gnuc_va_list __arg) __asm__("" "__isoc99_vscanf") __attribute__ ((__format__(__scanf__, 1, 0)));
extern int vsscanf(__const char *__restrict __s, __const char *__restrict __format, __gnuc_va_list __arg) __asm__("" "__isoc99_vsscanf") __attribute__ ((__nothrow__)) __attribute__ ((__format__(__scanf__, 2, 0)));
extern int fgetc(FILE * __stream);
extern int getc(FILE * __stream);
extern int getchar(void);
extern int getc_unlocked(FILE * __stream);
extern int getchar_unlocked(void);
extern int fgetc_unlocked(FILE * __stream);
extern int fputc(int __c, FILE * __stream);
extern int putc(int __c, FILE * __stream);
extern int putchar(int __c);
extern int fputc_unlocked(int __c, FILE * __stream);
extern int putc_unlocked(int __c, FILE * __stream);
extern int putchar_unlocked(int __c);
extern int getw(FILE * __stream);
extern int putw(int __w, FILE * __stream);
extern char *fgets(char *__restrict __s, int __n, FILE * __restrict __stream);
extern char *gets(char *__s);
extern __ssize_t __getdelim(char **__restrict __lineptr, size_t * __restrict __n, int __delimiter, FILE * __restrict __stream);
extern __ssize_t getdelim(char **__restrict __lineptr, size_t * __restrict __n, int __delimiter, FILE * __restrict __stream);
extern int fputs(__const char *__restrict __s, FILE * __restrict __stream);
extern int puts(__const char *__s);
extern int ungetc(int __c, FILE * __stream);
extern size_t fread(void *__restrict __ptr, size_t __size, size_t __n, FILE * __restrict __stream);
extern size_t fwrite(__const void *__restrict __ptr, size_t __size, size_t __n, FILE * __restrict __s);
extern size_t fread_unlocked(void *__restrict __ptr, size_t __size, size_t __n, FILE * __restrict __stream);
extern size_t fwrite_unlocked(__const void *__restrict __ptr, size_t __size, size_t __n, FILE * __restrict __stream);
extern int fseek(FILE * __stream, long int __off, int __whence);
extern long int ftell(FILE * __stream);
extern void rewind(FILE * __stream);
extern int fseeko(FILE * __stream, __off_t __off, int __whence);
extern __off_t ftello(FILE * __stream);
extern int fgetpos(FILE * __restrict __stream, fpos_t * __restrict __pos);
extern int fsetpos(FILE * __stream, __const fpos_t * __pos);
extern void clearerr(FILE * __stream) __attribute__ ((__nothrow__));
extern int feof(FILE * __stream) __attribute__ ((__nothrow__));
extern int ferror(FILE * __stream) __attribute__ ((__nothrow__));
extern void clearerr_unlocked(FILE * __stream) __attribute__ ((__nothrow__));
extern int feof_unlocked(FILE * __stream) __attribute__ ((__nothrow__));
extern int ferror_unlocked(FILE * __stream) __attribute__ ((__nothrow__));
extern void perror(__const char *__s);
extern int sys_nerr;
extern __const char *__const sys_errlist[];
extern int fileno(FILE * __stream) __attribute__ ((__nothrow__));
extern int fileno_unlocked(FILE * __stream) __attribute__ ((__nothrow__));
extern FILE *popen(__const char *__command, __const char *__modes);
extern int pclose(FILE * __stream);
extern char *ctermid(char *__s) __attribute__ ((__nothrow__));
extern void flockfile(FILE * __stream) __attribute__ ((__nothrow__));
extern int ftrylockfile(FILE * __stream) __attribute__ ((__nothrow__));
extern void funlockfile(FILE * __stream) __attribute__ ((__nothrow__));
typedef struct {
    int quot;
    int rem;
} div_t;
typedef struct {
    long int quot;
    long int rem;
} ldiv_t;
__extension__ typedef struct {
    long long int quot;
    long long int rem;
} lldiv_t;
extern size_t __ctype_get_mb_cur_max(void) __attribute__ ((__nothrow__));
extern double atof(__const char *__nptr) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1)));
extern int atoi(__const char *__nptr) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1)));
extern long int atol(__const char *__nptr) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1)));
__extension__ extern long long int atoll(__const char *__nptr) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1)));
extern double strtod(__const char *__restrict __nptr, char **__restrict __endptr) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern float strtof(__const char *__restrict __nptr, char **__restrict __endptr) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern long double strtold(__const char *__restrict __nptr, char **__restrict __endptr) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern long int strtol(__const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern unsigned long int strtoul(__const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
__extension__ extern long long int strtoq(__const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
__extension__ extern unsigned long long int strtouq(__const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
__extension__ extern long long int strtoll(__const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
__extension__ extern unsigned long long int strtoull(__const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern char *l64a(long int __n) __attribute__ ((__nothrow__));
extern long int a64l(__const char *__s) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1)));
typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;
typedef __loff_t loff_t;
typedef __ino_t ino_t;
typedef __dev_t dev_t;
typedef __gid_t gid_t;
typedef __mode_t mode_t;
typedef __nlink_t nlink_t;
typedef __off_t off_t;
typedef __id_t id_t;
typedef __ssize_t ssize_t;
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;
typedef __key_t key_t;
typedef __time_t time_t;
typedef __clockid_t clockid_t;
typedef __timer_t timer_t;
typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
typedef int int8_t __attribute__ ((__mode__(__QI__)));
typedef int int16_t __attribute__ ((__mode__(__HI__)));
typedef int int32_t __attribute__ ((__mode__(__SI__)));
typedef int int64_t __attribute__ ((__mode__(__DI__)));
typedef unsigned int u_int8_t __attribute__ ((__mode__(__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__(__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__(__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__(__DI__)));
typedef int register_t __attribute__ ((__mode__(__word__)));
struct timeval {
    __time_t tv_sec;
    __suseconds_t tv_usec;
};
typedef __suseconds_t suseconds_t;
typedef long int __fd_mask;
typedef struct {
    __fd_mask __fds_bits[1024 / (8 * (int) sizeof(__fd_mask))];
}
fd_set;
typedef __fd_mask fd_mask;
extern int select(int __nfds, fd_set * __restrict __readfds, fd_set * __restrict __writefds, fd_set * __restrict __exceptfds, struct timeval *__restrict __timeout);
extern int pselect(int __nfds, fd_set * __restrict __readfds, fd_set * __restrict __writefds, fd_set * __restrict __exceptfds, const struct timespec *__restrict __timeout, const __sigset_t * __restrict __sigmask);
__extension__ extern unsigned int gnu_dev_major(unsigned long long int __dev) __attribute__ ((__nothrow__));
__extension__ extern unsigned int gnu_dev_minor(unsigned long long int __dev) __attribute__ ((__nothrow__));
__extension__ extern unsigned long long int gnu_dev_makedev(unsigned int __major, unsigned int __minor) __attribute__ ((__nothrow__));
typedef __blkcnt_t blkcnt_t;
typedef __fsblkcnt_t fsblkcnt_t;
typedef __fsfilcnt_t fsfilcnt_t;
extern long int random(void) __attribute__ ((__nothrow__));
extern void srandom(unsigned int __seed) __attribute__ ((__nothrow__));
extern char *initstate(unsigned int __seed, char *__statebuf, size_t __statelen) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
extern char *setstate(char *__statebuf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
struct random_data {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
};
extern int random_r(struct random_data *__restrict __buf, int32_t * __restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern int srandom_r(unsigned int __seed, struct random_data *__buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
extern int initstate_r(unsigned int __seed, char *__restrict __statebuf, size_t __statelen, struct random_data *__restrict __buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2, 4)));
extern int setstate_r(char *__restrict __statebuf, struct random_data *__restrict __buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern int rand(void) __attribute__ ((__nothrow__));
extern void srand(unsigned int __seed) __attribute__ ((__nothrow__));
extern int rand_r(unsigned int *__seed) __attribute__ ((__nothrow__));
extern double drand48(void) __attribute__ ((__nothrow__));
extern double erand48(unsigned short int __xsubi[3]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern long int lrand48(void) __attribute__ ((__nothrow__));
extern long int nrand48(unsigned short int __xsubi[3]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern long int mrand48(void) __attribute__ ((__nothrow__));
extern long int jrand48(unsigned short int __xsubi[3]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern void srand48(long int __seedval) __attribute__ ((__nothrow__));
extern unsigned short int *seed48(unsigned short int __seed16v[3]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern void lcong48(unsigned short int __param[7]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
struct drand48_data {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    unsigned long long int __a;
};
extern int drand48_r(struct drand48_data *__restrict __buffer, double *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern int erand48_r(unsigned short int __xsubi[3], struct drand48_data *__restrict __buffer, double *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern int lrand48_r(struct drand48_data *__restrict __buffer, long int *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern int nrand48_r(unsigned short int __xsubi[3], struct drand48_data *__restrict __buffer, long int *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern int mrand48_r(struct drand48_data *__restrict __buffer, long int *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern int jrand48_r(unsigned short int __xsubi[3], struct drand48_data *__restrict __buffer, long int *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern int srand48_r(long int __seedval, struct drand48_data *__buffer) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
extern int seed48_r(unsigned short int __seed16v[3], struct drand48_data *__buffer) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern int lcong48_r(unsigned short int __param[7], struct drand48_data *__buffer) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern void *malloc(size_t __size) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__));
extern void *calloc(size_t __nmemb, size_t __size) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__));
extern void *realloc(void *__ptr, size_t __size) __attribute__ ((__nothrow__)) __attribute__ ((__warn_unused_result__));
extern void free(void *__ptr) __attribute__ ((__nothrow__));
extern void cfree(void *__ptr) __attribute__ ((__nothrow__));
extern void *alloca(size_t __size) __attribute__ ((__nothrow__));
extern void *valloc(size_t __size) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__));
extern int posix_memalign(void **__memptr, size_t __alignment, size_t __size) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern void abort(void) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));
extern int atexit(void (*__func) (void)) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int on_exit(void (*__func) (int __status, void *__arg), void *__arg) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern void exit(int __status) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));
extern void _Exit(int __status) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));
extern char *getenv(__const char *__name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern char *__secure_getenv(__const char *__name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int putenv(char *__string) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int setenv(__const char *__name, __const char *__value, int __replace) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
extern int unsetenv(__const char *__name) __attribute__ ((__nothrow__));
extern int clearenv(void) __attribute__ ((__nothrow__));
extern char *mktemp(char *__template) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int mkstemp(char *__template) __attribute__ ((__nonnull__(1)));
extern int mkstemps(char *__template, int __suffixlen) __attribute__ ((__nonnull__(1)));
extern char *mkdtemp(char *__template) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int system(__const char *__command);
extern char *realpath(__const char *__restrict __name, char *__restrict __resolved) __attribute__ ((__nothrow__));
typedef int (*__compar_fn_t) (__const void *, __const void *);
extern void *bsearch(__const void *__key, __const void *__base, size_t __nmemb, size_t __size, __compar_fn_t __compar) __attribute__ ((__nonnull__(1, 2, 5)));
extern void qsort(void *__base, size_t __nmemb, size_t __size, __compar_fn_t __compar) __attribute__ ((__nonnull__(1, 4)));
extern int abs(int __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long int labs(long int __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
__extension__ extern long long int llabs(long long int __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern div_t div(int __numer, int __denom) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern ldiv_t ldiv(long int __numer, long int __denom) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
__extension__ extern lldiv_t lldiv(long long int __numer, long long int __denom) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern char *ecvt(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(3, 4)));
extern char *fcvt(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(3, 4)));
extern char *gcvt(double __value, int __ndigit, char *__buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(3)));
extern char *qecvt(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(3, 4)));
extern char *qfcvt(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(3, 4)));
extern char *qgcvt(long double __value, int __ndigit, char *__buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(3)));
extern int ecvt_r(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign, char *__restrict __buf, size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(3, 4, 5)));
extern int fcvt_r(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign, char *__restrict __buf, size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(3, 4, 5)));
extern int qecvt_r(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign, char *__restrict __buf, size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(3, 4, 5)));
extern int qfcvt_r(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign, char *__restrict __buf, size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(3, 4, 5)));
extern int mblen(__const char *__s, size_t __n) __attribute__ ((__nothrow__));
extern int mbtowc(wchar_t * __restrict __pwc, __const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__));
extern int wctomb(char *__s, wchar_t __wchar) __attribute__ ((__nothrow__));
extern size_t mbstowcs(wchar_t * __restrict __pwcs, __const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__));
extern size_t wcstombs(char *__restrict __s, __const wchar_t * __restrict __pwcs, size_t __n) __attribute__ ((__nothrow__));
extern int rpmatch(__const char *__response) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int posix_openpt(int __oflag);
extern int getloadavg(double __loadavg[], int __nelem) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern void *memcpy(void *__restrict __dest, __const void *__restrict __src, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern void *memmove(void *__dest, __const void *__src, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern void *memccpy(void *__restrict __dest, __const void *__restrict __src, int __c, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern void *memset(void *__s, int __c, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int memcmp(__const void *__s1, __const void *__s2, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1, 2)));
extern void *memchr(__const void *__s, int __c, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1)));
extern char *strcpy(char *__restrict __dest, __const char *__restrict __src) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern char *strncpy(char *__restrict __dest, __const char *__restrict __src, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern char *strcat(char *__restrict __dest, __const char *__restrict __src) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern char *strncat(char *__restrict __dest, __const char *__restrict __src, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern int strcmp(__const char *__s1, __const char *__s2) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1, 2)));
extern int strncmp(__const char *__s1, __const char *__s2, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1, 2)));
extern int strcoll(__const char *__s1, __const char *__s2) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1, 2)));
extern size_t strxfrm(char *__restrict __dest, __const char *__restrict __src, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
extern int strcoll_l(__const char *__s1, __const char *__s2, __locale_t __l) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1, 2, 3)));
extern size_t strxfrm_l(char *__dest, __const char *__src, size_t __n, __locale_t __l) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2, 4)));
extern char *strdup(__const char *__s) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__(1)));
extern char *strndup(__const char *__string, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__(1)));
extern char *strchr(__const char *__s, int __c) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1)));
extern char *strrchr(__const char *__s, int __c) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1)));
extern size_t strcspn(__const char *__s, __const char *__reject) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1, 2)));
extern size_t strspn(__const char *__s, __const char *__accept) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1, 2)));
extern char *strpbrk(__const char *__s, __const char *__accept) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1, 2)));
extern char *strstr(__const char *__haystack, __const char *__needle) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1, 2)));
extern char *strtok(char *__restrict __s, __const char *__restrict __delim) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
extern char *__strtok_r(char *__restrict __s, __const char *__restrict __delim, char **__restrict __save_ptr) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2, 3)));
extern char *strtok_r(char *__restrict __s, __const char *__restrict __delim, char **__restrict __save_ptr) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2, 3)));
extern size_t strlen(__const char *__s) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1)));
extern size_t strnlen(__const char *__string, size_t __maxlen) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1)));
extern char *strerror(int __errnum) __attribute__ ((__nothrow__));
extern int strerror_r(int __errnum, char *__buf, size_t __buflen) __asm__("" "__xpg_strerror_r") __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
extern char *strerror_l(int __errnum, __locale_t __l) __attribute__ ((__nothrow__));
extern void __bzero(void *__s, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern void bcopy(__const void *__src, void *__dest, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern void bzero(void *__s, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int bcmp(__const void *__s1, __const void *__s2, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1, 2)));
extern char *index(__const char *__s, int __c) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1)));
extern char *rindex(__const char *__s, int __c) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1)));
extern int ffs(int __i) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern int strcasecmp(__const char *__s1, __const char *__s2) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1, 2)));
extern int strncasecmp(__const char *__s1, __const char *__s2, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1, 2)));
extern char *strsep(char **__restrict __stringp, __const char *__restrict __delim) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern char *strsignal(int __sig) __attribute__ ((__nothrow__));
extern char *__stpcpy(char *__restrict __dest, __const char *__restrict __src) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern char *stpcpy(char *__restrict __dest, __const char *__restrict __src) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern char *__stpncpy(char *__restrict __dest, __const char *__restrict __src, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern char *stpncpy(char *__restrict __dest, __const char *__restrict __src, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
struct stat {
    __dev_t st_dev;
    unsigned short int __pad1;
    __ino_t st_ino;
    __mode_t st_mode;
    __nlink_t st_nlink;
    __uid_t st_uid;
    __gid_t st_gid;
    __dev_t st_rdev;
    unsigned short int __pad2;
    __off_t st_size;
    __blksize_t st_blksize;
    __blkcnt_t st_blocks;
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
    unsigned long int __unused4;
    unsigned long int __unused5;
};
extern int stat(__const char *__restrict __file, struct stat *__restrict __buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern int fstat(int __fd, struct stat *__buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
extern int fstatat(int __fd, __const char *__restrict __file, struct stat *__restrict __buf, int __flag) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2, 3)));
extern int lstat(__const char *__restrict __file, struct stat *__restrict __buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern int chmod(__const char *__file, __mode_t __mode) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int lchmod(__const char *__file, __mode_t __mode) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int fchmod(int __fd, __mode_t __mode) __attribute__ ((__nothrow__));
extern int fchmodat(int __fd, __const char *__file, __mode_t __mode, int __flag) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
extern __mode_t umask(__mode_t __mask) __attribute__ ((__nothrow__));
extern int mkdir(__const char *__path, __mode_t __mode) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int mkdirat(int __fd, __const char *__path, __mode_t __mode) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
extern int mknod(__const char *__path, __mode_t __mode, __dev_t __dev) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int mknodat(int __fd, __const char *__path, __mode_t __mode, __dev_t __dev) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
extern int mkfifo(__const char *__path, __mode_t __mode) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int mkfifoat(int __fd, __const char *__path, __mode_t __mode) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
extern int utimensat(int __fd, __const char *__path, __const struct timespec __times[2], int __flags) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
extern int futimens(int __fd, __const struct timespec __times[2]) __attribute__ ((__nothrow__));
extern int __fxstat(int __ver, int __fildes, struct stat *__stat_buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(3)));
extern int __xstat(int __ver, __const char *__filename, struct stat *__stat_buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2, 3)));
extern int __lxstat(int __ver, __const char *__filename, struct stat *__stat_buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2, 3)));
extern int __fxstatat(int __ver, int __fildes, __const char *__filename, struct stat *__stat_buf, int __flag) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(3, 4)));
extern int __xmknod(int __ver, __const char *__path, __mode_t __mode, __dev_t * __dev) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2, 4)));
extern int __xmknodat(int __ver, int __fd, __const char *__path, __mode_t __mode, __dev_t * __dev) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(3, 5)));
typedef __useconds_t useconds_t;
typedef __intptr_t intptr_t;
typedef __socklen_t socklen_t;
extern int access(__const char *__name, int __type) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int faccessat(int __fd, __const char *__file, int __type, int __flag) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
extern __off_t lseek(int __fd, __off_t __offset, int __whence) __attribute__ ((__nothrow__));
extern int close(int __fd);
extern ssize_t read(int __fd, void *__buf, size_t __nbytes);
extern ssize_t write(int __fd, __const void *__buf, size_t __n);
extern int pipe(int __pipedes[2]) __attribute__ ((__nothrow__));
extern unsigned int alarm(unsigned int __seconds) __attribute__ ((__nothrow__));
extern unsigned int sleep(unsigned int __seconds);
extern __useconds_t ualarm(__useconds_t __value, __useconds_t __interval) __attribute__ ((__nothrow__));
extern int usleep(__useconds_t __useconds);
extern int pause(void);
extern int chown(__const char *__file, __uid_t __owner, __gid_t __group) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int fchown(int __fd, __uid_t __owner, __gid_t __group) __attribute__ ((__nothrow__));
extern int lchown(__const char *__file, __uid_t __owner, __gid_t __group) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int fchownat(int __fd, __const char *__file, __uid_t __owner, __gid_t __group, int __flag) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
extern int chdir(__const char *__path) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int fchdir(int __fd) __attribute__ ((__nothrow__));
extern char *getcwd(char *__buf, size_t __size) __attribute__ ((__nothrow__));
extern char *getwd(char *__buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1))) __attribute__ ((__deprecated__));
extern int dup(int __fd) __attribute__ ((__nothrow__));
extern int dup2(int __fd, int __fd2) __attribute__ ((__nothrow__));
extern char **__environ;
extern int execve(__const char *__path, char *__const __argv[], char *__const __envp[]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int fexecve(int __fd, char *__const __argv[], char *__const __envp[]) __attribute__ ((__nothrow__));
extern int execv(__const char *__path, char *__const __argv[]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int execle(__const char *__path, __const char *__arg, ...) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int execl(__const char *__path, __const char *__arg, ...) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int execvp(__const char *__file, char *__const __argv[]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int execlp(__const char *__file, __const char *__arg, ...) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int nice(int __inc) __attribute__ ((__nothrow__));
extern void _exit(int __status) __attribute__ ((__noreturn__));
enum { _PC_LINK_MAX, _PC_MAX_CANON, _PC_MAX_INPUT, _PC_NAME_MAX, _PC_PATH_MAX, _PC_PIPE_BUF, _PC_CHOWN_RESTRICTED, _PC_NO_TRUNC, _PC_VDISABLE, _PC_SYNC_IO, _PC_ASYNC_IO, _PC_PRIO_IO, _PC_SOCK_MAXBUF, _PC_FILESIZEBITS, _PC_REC_INCR_XFER_SIZE, _PC_REC_MAX_XFER_SIZE, _PC_REC_MIN_XFER_SIZE, _PC_REC_XFER_ALIGN, _PC_ALLOC_SIZE_MIN, _PC_SYMLINK_MAX, _PC_2_SYMLINKS };
enum { _SC_ARG_MAX, _SC_CHILD_MAX, _SC_CLK_TCK, _SC_NGROUPS_MAX, _SC_OPEN_MAX, _SC_STREAM_MAX, _SC_TZNAME_MAX, _SC_JOB_CONTROL, _SC_SAVED_IDS, _SC_REALTIME_SIGNALS, _SC_PRIORITY_SCHEDULING, _SC_TIMERS, _SC_ASYNCHRONOUS_IO, _SC_PRIORITIZED_IO, _SC_SYNCHRONIZED_IO, _SC_FSYNC, _SC_MAPPED_FILES, _SC_MEMLOCK, _SC_MEMLOCK_RANGE, _SC_MEMORY_PROTECTION, _SC_MESSAGE_PASSING, _SC_SEMAPHORES, _SC_SHARED_MEMORY_OBJECTS, _SC_AIO_LISTIO_MAX, _SC_AIO_MAX, _SC_AIO_PRIO_DELTA_MAX, _SC_DELAYTIMER_MAX, _SC_MQ_OPEN_MAX, _SC_MQ_PRIO_MAX, _SC_VERSION, _SC_PAGESIZE, _SC_RTSIG_MAX, _SC_SEM_NSEMS_MAX, _SC_SEM_VALUE_MAX, _SC_SIGQUEUE_MAX, _SC_TIMER_MAX, _SC_BC_BASE_MAX, _SC_BC_DIM_MAX, _SC_BC_SCALE_MAX, _SC_BC_STRING_MAX, _SC_COLL_WEIGHTS_MAX, _SC_EQUIV_CLASS_MAX, _SC_EXPR_NEST_MAX, _SC_LINE_MAX, _SC_RE_DUP_MAX, _SC_CHARCLASS_NAME_MAX, _SC_2_VERSION, _SC_2_C_BIND, _SC_2_C_DEV, _SC_2_FORT_DEV, _SC_2_FORT_RUN, _SC_2_SW_DEV, _SC_2_LOCALEDEF, _SC_PII, _SC_PII_XTI, _SC_PII_SOCKET, _SC_PII_INTERNET, _SC_PII_OSI, _SC_POLL, _SC_SELECT, _SC_UIO_MAXIOV, _SC_IOV_MAX = _SC_UIO_MAXIOV, _SC_PII_INTERNET_STREAM, _SC_PII_INTERNET_DGRAM, _SC_PII_OSI_COTS, _SC_PII_OSI_CLTS, _SC_PII_OSI_M, _SC_T_IOV_MAX, _SC_THREADS, _SC_THREAD_SAFE_FUNCTIONS, _SC_GETGR_R_SIZE_MAX, _SC_GETPW_R_SIZE_MAX, _SC_LOGIN_NAME_MAX, _SC_TTY_NAME_MAX, _SC_THREAD_DESTRUCTOR_ITERATIONS, _SC_THREAD_KEYS_MAX, _SC_THREAD_STACK_MIN, _SC_THREAD_THREADS_MAX, _SC_THREAD_ATTR_STACKADDR, _SC_THREAD_ATTR_STACKSIZE, _SC_THREAD_PRIORITY_SCHEDULING, _SC_THREAD_PRIO_INHERIT, _SC_THREAD_PRIO_PROTECT, _SC_THREAD_PROCESS_SHARED, _SC_NPROCESSORS_CONF, _SC_NPROCESSORS_ONLN, _SC_PHYS_PAGES, _SC_AVPHYS_PAGES, _SC_ATEXIT_MAX, _SC_PASS_MAX, _SC_XOPEN_VERSION, _SC_XOPEN_XCU_VERSION, _SC_XOPEN_UNIX, _SC_XOPEN_CRYPT, _SC_XOPEN_ENH_I18N, _SC_XOPEN_SHM, _SC_2_CHAR_TERM, _SC_2_C_VERSION, _SC_2_UPE, _SC_XOPEN_XPG2, _SC_XOPEN_XPG3, _SC_XOPEN_XPG4, _SC_CHAR_BIT, _SC_CHAR_MAX, _SC_CHAR_MIN, _SC_INT_MAX, _SC_INT_MIN, _SC_LONG_BIT, _SC_WORD_BIT, _SC_MB_LEN_MAX, _SC_NZERO, _SC_SSIZE_MAX, _SC_SCHAR_MAX, _SC_SCHAR_MIN, _SC_SHRT_MAX, _SC_SHRT_MIN, _SC_UCHAR_MAX, _SC_UINT_MAX, _SC_ULONG_MAX, _SC_USHRT_MAX, _SC_NL_ARGMAX, _SC_NL_LANGMAX, _SC_NL_MSGMAX, _SC_NL_NMAX, _SC_NL_SETMAX, _SC_NL_TEXTMAX, _SC_XBS5_ILP32_OFF32, _SC_XBS5_ILP32_OFFBIG, _SC_XBS5_LP64_OFF64, _SC_XBS5_LPBIG_OFFBIG, _SC_XOPEN_LEGACY, _SC_XOPEN_REALTIME, _SC_XOPEN_REALTIME_THREADS, _SC_ADVISORY_INFO, _SC_BARRIERS, _SC_BASE, _SC_C_LANG_SUPPORT, _SC_C_LANG_SUPPORT_R, _SC_CLOCK_SELECTION, _SC_CPUTIME, _SC_THREAD_CPUTIME, _SC_DEVICE_IO, _SC_DEVICE_SPECIFIC, _SC_DEVICE_SPECIFIC_R, _SC_FD_MGMT, _SC_FIFO, _SC_PIPE, _SC_FILE_ATTRIBUTES, _SC_FILE_LOCKING, _SC_FILE_SYSTEM, _SC_MONOTONIC_CLOCK, _SC_MULTI_PROCESS, _SC_SINGLE_PROCESS, _SC_NETWORKING, _SC_READER_WRITER_LOCKS, _SC_SPIN_LOCKS, _SC_REGEXP, _SC_REGEX_VERSION, _SC_SHELL, _SC_SIGNALS, _SC_SPAWN, _SC_SPORADIC_SERVER, _SC_THREAD_SPORADIC_SERVER, _SC_SYSTEM_DATABASE, _SC_SYSTEM_DATABASE_R, _SC_TIMEOUTS, _SC_TYPED_MEMORY_OBJECTS, _SC_USER_GROUPS, _SC_USER_GROUPS_R, _SC_2_PBS, _SC_2_PBS_ACCOUNTING, _SC_2_PBS_LOCATE, _SC_2_PBS_MESSAGE, _SC_2_PBS_TRACK, _SC_SYMLOOP_MAX, _SC_STREAMS, _SC_2_PBS_CHECKPOINT, _SC_V6_ILP32_OFF32, _SC_V6_ILP32_OFFBIG, _SC_V6_LP64_OFF64, _SC_V6_LPBIG_OFFBIG, _SC_HOST_NAME_MAX, _SC_TRACE, _SC_TRACE_EVENT_FILTER, _SC_TRACE_INHERIT, _SC_TRACE_LOG, _SC_LEVEL1_ICACHE_SIZE, _SC_LEVEL1_ICACHE_ASSOC, _SC_LEVEL1_ICACHE_LINESIZE, _SC_LEVEL1_DCACHE_SIZE, _SC_LEVEL1_DCACHE_ASSOC, _SC_LEVEL1_DCACHE_LINESIZE, _SC_LEVEL2_CACHE_SIZE, _SC_LEVEL2_CACHE_ASSOC, _SC_LEVEL2_CACHE_LINESIZE, _SC_LEVEL3_CACHE_SIZE, _SC_LEVEL3_CACHE_ASSOC, _SC_LEVEL3_CACHE_LINESIZE, _SC_LEVEL4_CACHE_SIZE, _SC_LEVEL4_CACHE_ASSOC, _SC_LEVEL4_CACHE_LINESIZE, _SC_IPV6 = _SC_LEVEL1_ICACHE_SIZE + 50, _SC_RAW_SOCKETS, _SC_V7_ILP32_OFF32, _SC_V7_ILP32_OFFBIG, _SC_V7_LP64_OFF64, _SC_V7_LPBIG_OFFBIG, _SC_SS_REPL_MAX, _SC_TRACE_EVENT_NAME_MAX, _SC_TRACE_NAME_MAX, _SC_TRACE_SYS_MAX, _SC_TRACE_USER_EVENT_MAX, _SC_XOPEN_STREAMS, _SC_THREAD_ROBUST_PRIO_INHERIT, _SC_THREAD_ROBUST_PRIO_PROTECT };
enum { _CS_PATH, _CS_V6_WIDTH_RESTRICTED_ENVS, _CS_GNU_LIBC_VERSION, _CS_GNU_LIBPTHREAD_VERSION, _CS_V5_WIDTH_RESTRICTED_ENVS, _CS_V7_WIDTH_RESTRICTED_ENVS, _CS_LFS_CFLAGS = 1000, _CS_LFS_LDFLAGS, _CS_LFS_LIBS, _CS_LFS_LINTFLAGS, _CS_LFS64_CFLAGS, _CS_LFS64_LDFLAGS, _CS_LFS64_LIBS, _CS_LFS64_LINTFLAGS, _CS_XBS5_ILP32_OFF32_CFLAGS = 1100, _CS_XBS5_ILP32_OFF32_LDFLAGS, _CS_XBS5_ILP32_OFF32_LIBS, _CS_XBS5_ILP32_OFF32_LINTFLAGS, _CS_XBS5_ILP32_OFFBIG_CFLAGS, _CS_XBS5_ILP32_OFFBIG_LDFLAGS, _CS_XBS5_ILP32_OFFBIG_LIBS, _CS_XBS5_ILP32_OFFBIG_LINTFLAGS, _CS_XBS5_LP64_OFF64_CFLAGS, _CS_XBS5_LP64_OFF64_LDFLAGS, _CS_XBS5_LP64_OFF64_LIBS, _CS_XBS5_LP64_OFF64_LINTFLAGS, _CS_XBS5_LPBIG_OFFBIG_CFLAGS, _CS_XBS5_LPBIG_OFFBIG_LDFLAGS, _CS_XBS5_LPBIG_OFFBIG_LIBS, _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS, _CS_POSIX_V6_ILP32_OFF32_CFLAGS, _CS_POSIX_V6_ILP32_OFF32_LDFLAGS, _CS_POSIX_V6_ILP32_OFF32_LIBS, _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS, _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS, _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS, _CS_POSIX_V6_ILP32_OFFBIG_LIBS, _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS, _CS_POSIX_V6_LP64_OFF64_CFLAGS, _CS_POSIX_V6_LP64_OFF64_LDFLAGS, _CS_POSIX_V6_LP64_OFF64_LIBS, _CS_POSIX_V6_LP64_OFF64_LINTFLAGS, _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS, _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS, _CS_POSIX_V6_LPBIG_OFFBIG_LIBS, _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS, _CS_POSIX_V7_ILP32_OFF32_CFLAGS, _CS_POSIX_V7_ILP32_OFF32_LDFLAGS, _CS_POSIX_V7_ILP32_OFF32_LIBS, _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS, _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS, _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS, _CS_POSIX_V7_ILP32_OFFBIG_LIBS, _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS, _CS_POSIX_V7_LP64_OFF64_CFLAGS, _CS_POSIX_V7_LP64_OFF64_LDFLAGS, _CS_POSIX_V7_LP64_OFF64_LIBS, _CS_POSIX_V7_LP64_OFF64_LINTFLAGS, _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS, _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS, _CS_POSIX_V7_LPBIG_OFFBIG_LIBS, _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS };
extern long int pathconf(__const char *__path, int __name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern long int fpathconf(int __fd, int __name) __attribute__ ((__nothrow__));
extern long int sysconf(int __name) __attribute__ ((__nothrow__));
extern size_t confstr(int __name, char *__buf, size_t __len) __attribute__ ((__nothrow__));
extern __pid_t getpid(void) __attribute__ ((__nothrow__));
extern __pid_t getppid(void) __attribute__ ((__nothrow__));
extern __pid_t getpgrp(void) __attribute__ ((__nothrow__));
extern __pid_t __getpgid(__pid_t __pid) __attribute__ ((__nothrow__));
extern int setpgid(__pid_t __pid, __pid_t __pgid) __attribute__ ((__nothrow__));
extern int setpgrp(void) __attribute__ ((__nothrow__));
extern __pid_t setsid(void) __attribute__ ((__nothrow__));
extern __uid_t getuid(void) __attribute__ ((__nothrow__));
extern __uid_t geteuid(void) __attribute__ ((__nothrow__));
extern __gid_t getgid(void) __attribute__ ((__nothrow__));
extern __gid_t getegid(void) __attribute__ ((__nothrow__));
extern int getgroups(int __size, __gid_t __list[]) __attribute__ ((__nothrow__));
extern int setuid(__uid_t __uid) __attribute__ ((__nothrow__));
extern int setreuid(__uid_t __ruid, __uid_t __euid) __attribute__ ((__nothrow__));
extern int seteuid(__uid_t __uid) __attribute__ ((__nothrow__));
extern int setgid(__gid_t __gid) __attribute__ ((__nothrow__));
extern int setregid(__gid_t __rgid, __gid_t __egid) __attribute__ ((__nothrow__));
extern int setegid(__gid_t __gid) __attribute__ ((__nothrow__));
extern __pid_t fork(void) __attribute__ ((__nothrow__));
extern __pid_t vfork(void) __attribute__ ((__nothrow__));
extern char *ttyname(int __fd) __attribute__ ((__nothrow__));
extern int ttyname_r(int __fd, char *__buf, size_t __buflen) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
extern int isatty(int __fd) __attribute__ ((__nothrow__));
extern int ttyslot(void) __attribute__ ((__nothrow__));
extern int link(__const char *__from, __const char *__to) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern int linkat(int __fromfd, __const char *__from, int __tofd, __const char *__to, int __flags) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2, 4)));
extern int symlink(__const char *__from, __const char *__to) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern ssize_t readlink(__const char *__restrict __path, char *__restrict __buf, size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern int symlinkat(__const char *__from, int __tofd, __const char *__to) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 3)));
extern ssize_t readlinkat(int __fd, __const char *__restrict __path, char *__restrict __buf, size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2, 3)));
extern int unlink(__const char *__name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int unlinkat(int __fd, __const char *__name, int __flag) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
extern int rmdir(__const char *__path) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern __pid_t tcgetpgrp(int __fd) __attribute__ ((__nothrow__));
extern int tcsetpgrp(int __fd, __pid_t __pgrp_id) __attribute__ ((__nothrow__));
extern char *getlogin(void);
extern int getlogin_r(char *__name, size_t __name_len) __attribute__ ((__nonnull__(1)));
extern int setlogin(__const char *__name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern char *optarg;
extern int optind;
extern int opterr;
extern int optopt;
extern int getopt(int ___argc, char *const *___argv, const char *__shortopts) __attribute__ ((__nothrow__));
extern int gethostname(char *__name, size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int sethostname(__const char *__name, size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int sethostid(long int __id) __attribute__ ((__nothrow__));
extern int getdomainname(char *__name, size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int setdomainname(__const char *__name, size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int vhangup(void) __attribute__ ((__nothrow__));
extern int revoke(__const char *__file) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int profil(unsigned short int *__sample_buffer, size_t __size, size_t __offset, unsigned int __scale) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int acct(__const char *__name) __attribute__ ((__nothrow__));
extern char *getusershell(void) __attribute__ ((__nothrow__));
extern void endusershell(void) __attribute__ ((__nothrow__));
extern void setusershell(void) __attribute__ ((__nothrow__));
extern int daemon(int __nochdir, int __noclose) __attribute__ ((__nothrow__));
extern int chroot(__const char *__path) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern char *getpass(__const char *__prompt) __attribute__ ((__nonnull__(1)));
extern int fsync(int __fd);
extern long int gethostid(void);
extern void sync(void) __attribute__ ((__nothrow__));
extern int getpagesize(void) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern int getdtablesize(void) __attribute__ ((__nothrow__));
extern int truncate(__const char *__file, __off_t __length) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int ftruncate(int __fd, __off_t __length) __attribute__ ((__nothrow__));
extern int brk(void *__addr) __attribute__ ((__nothrow__));
extern void *sbrk(intptr_t __delta) __attribute__ ((__nothrow__));
extern long int syscall(long int __sysno, ...) __attribute__ ((__nothrow__));
extern int lockf(int __fd, int __cmd, __off_t __len);
extern int fdatasync(int __fildes);
int getch();
int kbhit();
long Clock();
void ttycbreak();
void ttynorm();
char *strlwr(char *);
void breakHandler(int);
typedef unsigned char boolean;
typedef unsigned char byte;
typedef byte *byteptr;
typedef char *string;
typedef unsigned short word16;
typedef unsigned long word32;
typedef word16 unit;
typedef short signedunit;
typedef unit *unitptr;
extern short global_precision;
boolean mp_addc(register unitptr r1, register unitptr r2, register boolean carry);
boolean mp_subb(register unitptr r1, register unitptr r2, register boolean borrow);
boolean mp_rotate_left(register unitptr r1, register boolean carry);
void mp_shift_right_bits(register unitptr r1, register short bits);
short mp_compare(register unitptr r1, register unitptr r2);
boolean mp_inc(register unitptr r);
boolean mp_dec(register unitptr r);
void mp_neg(register unitptr r);
void mp_init(register unitptr r, word16 value);
short significance(register unitptr r);
int mp_udiv(register unitptr remainder, register unitptr quotient, register unitptr dividend, register unitptr divisor);
int mp_recip(register unitptr quotient, register unitptr divisor);
int mp_div(register unitptr remainder, register unitptr quotient, register unitptr dividend, register unitptr divisor);
word16 mp_shortdiv(register unitptr quotient, register unitptr dividend, register word16 divisor);
int mp_mod(register unitptr remainder, register unitptr dividend, register unitptr divisor);
word16 mp_shortmod(register unitptr dividend, register word16 divisor);
int mp_mult(register unitptr prod, register unitptr multiplicand, register unitptr multiplier);
int countbits(unitptr r);
int stage_peasant_modulus(unitptr n);
int stage_merritt_modulus(unitptr n);
int stage_upton_modulus(unitptr n);
int stage_smith_modulus(unitptr n);
int peasant_modmult(register unitptr prod, unitptr multiplicand, register unitptr multiplier);
int merritt_modmult(register unitptr prod, unitptr multiplicand, register unitptr multiplier);
int upton_modmult(register unitptr prod, unitptr multiplicand, register unitptr multiplier);
int smith_modmult(register unitptr prod, unitptr multiplicand, register unitptr multiplier);
int mp_modexp(register unitptr expout, register unitptr expin, register unitptr exponent, register unitptr modulus);
int mp_modexp_crt(unitptr expout, unitptr expin, unitptr p, unitptr q, unitptr ep, unitptr eq, unitptr u);
struct IdeaCfbContext {
    byte oldcipher[8];
    byte iv[8];
    word16 key[(6 * 8 + 4)];
    int bufleft;
};
struct IdeaRandContext {
    byte outbuf[8];
    word16 key[(6 * 8 + 4)];
    int bufleft;
    byte internalbuf[8];
};
void ideaCfbReinit(struct IdeaCfbContext *context, byte const *iv);
void ideaCfbInit(struct IdeaCfbContext *context, byte const (key[16]));
void ideaCfbSync(struct IdeaCfbContext *context);
void ideaCfbDestroy(struct IdeaCfbContext *context);
void ideaCfbEncrypt(struct IdeaCfbContext *context, byte const *src, byte * dest, int count);
void ideaCfbDecrypt(struct IdeaCfbContext *context, byte const *src, byte * dest, int count);
void ideaRandInit(struct IdeaRandContext *context, byte const (key[16]), byte const (seed[8]));
byte ideaRandByte(struct IdeaRandContext *c);
void ideaRandWash(struct IdeaRandContext *c, struct IdeaCfbContext *cfb);
void ideaRandState(struct IdeaRandContext *c, byte key[16], byte seed[8]);
int cryptRandOpen(struct IdeaCfbContext *);
byte cryptRandByte(void);
void cryptRandInit(struct IdeaCfbContext *);
int cryptRandWriteFile(char const *, struct IdeaCfbContext *, unsigned);
void cryptRandSave(struct IdeaCfbContext *);
unsigned trueRandEvent(int event);
void trueRandFlush(void);
void trueRandConsume(unsigned count);
void trueRandAccumLater(unsigned bitcount);
void trueRandAccum(unsigned count);
int trueRandByte(void);
int getstring(char *strbuf, unsigned maxlen, int echo);
boolean legal_ctb(byte ctb);
int signfile(boolean nested, boolean separate_signature, char *mcguffin, char *infile, char *outfile, char lit_mode, char *literalfile);
int get_header_info_from_file(char *infile, byte * header, int count);
int encryptfile(char **mcguffin, char *infile, char *outfile, boolean attempt_compression);
int idea_encryptfile(char *infile, char *outfile, boolean attempt_compression);
int make_literal(char *infile, char *outfile, char lit_mode, char *literalfile);
int decryptfile(char *infile, char *outfile);
int check_signaturefile(char *infile, char *outfile, boolean strip_signature, char *preserved_name);
int idea_decryptfile(char *infile, char *outfile);
int decompress_file(char *infile, char *outfile);
int strip_literal(char *infile, char *outfile, char *preserved_name, char *lit_mode);
void write_mpi(unitptr n, FILE * f, struct IdeaCfbContext *cfb);
int read_mpi(unitptr r, FILE * f, boolean adjust_precision, struct IdeaCfbContext *cfb);
void CToPascal(char *s);
void PascalToC(char *s);
int seedfile_exists(void);
void create_seedfile(void);
char *cdate(word32 * tstamp);
char *ctdate(word32 * tstamp);
word32 get_timestamp(byte * timestamp);
word32 getpastlength(byte ctb, FILE * f);
void write_ctb_len(FILE * f, byte ctb_type, word32 length, boolean big);
int version_error(int val, int checkval);
int version_byte_error(int val);
int check_key_sig(FILE * fkey, long fpkey, int keypktlen, char *keyuserid, FILE * fsig, long fpsig, char *keyfile, char *siguserid, byte * xtimestamp, byte * sigclass);
int squish_file(char *infile, char *outfile);
int do_sign(char *keyfile, long fp, int pktlen, byte * userid, byte * keyID, char *sigguffin, boolean batchmode);
int signkey(char *keyguffin, char *sigguffin, char *keyfile);
extern int compromise(byte * keyID, char *keyfile);
void showKeyHash(unitptr n, unitptr e);
int GetHashedPassPhrase(char *hash, boolean noecho);
boolean file_exists(char *filename);
boolean file_ok_write(char *filename);
int wipefile(char *filename);
char *file_tail(char *filename);
boolean no_extension(char *filename);
void drop_extension(char *filename);
void default_extension(char *filename, char *extension);
void force_extension(char *filename, char *extension);
boolean getyesno(char default_answer);
char *maybe_force_extension(char *filename, char *extension);
char *buildfilename(char *result, char *fname);
char *buildsysfilename(char *result, char *fname);
int build_path(char *path, char *fileName, char *origPath);
void file_to_canon(char *filename);
void file_from_canon(char *filename);
int copyfile(FILE * f, FILE * g, word32 longcount);
int copyfilepos(FILE * f, FILE * g, word32 longcount, word32 fpos);
int copyfile_to_canon(FILE * f, FILE * g, word32 longcount);
int copyfile_from_canon(FILE * f, FILE * g, word32 longcount);
int copyfiles_by_name(char *srcFile, char *destFile);
int make_canonical(char *srcFile, char *destFile);
int rename2(char *srcFile, char *destFile);
int readPhantomInput(char *filename);
int writePhantomOutput(char *filename);
word32 fsize(FILE * f);
int is_text_file(char *filename);
FILE *fopenbin(char *, char *);
FILE *fopentxt(char *, char *);
void *xmalloc(unsigned);
char *tempfile(int);
void rmtemp(char *);
char *savetemp(char *, char *);
char *ck_dup_output(char *, boolean, boolean);
void cleanup_tmpf(void);
int savetempbak(char *, char *);
extern int write_error(FILE * f);
extern void settmpdir(char *path);
extern void setoutdir(char *filename);
extern boolean is_tempfile(char *path);
extern boolean has_extension(char *filename, char *extension);
extern char const *const manual_dirs[];
unsigned manuals_missing(void);
char *keyIDstring(byte * keyID);
char *key2IDstring(unitptr n);
extern char const blankkeyID[];
int dokeygen(char *numstr, char *numstr2, char *username);
int dokeyedit(char *mcguffin, char *ringfile);
int extract_from_keyring(char *mcguffin, char *keyfile, char *ringfile, boolean transflag);
int view_keyring(char *mcguffin, char *ringfile, boolean show_signatures, boolean show_hashes);
int dokeycheck(char *mcguffin, char *ringfile, int options);
int remove_sigs(char *mcguffin, char *ringfile);
int remove_from_keyring(byte * keyID, char *mcguffin, char *ringfile, boolean secring_too);
void extract_keyID(byteptr keyID, unitptr n);
void writekeyID(unitptr n, FILE * f);
int getpublickey(int flags, char *keyfile, long *file_position, int *pktlen, byte * keyID, byte * timestamp, byte * userid, unitptr n, unitptr e);
int getsecretkey(int flags, char *keyfile, byte * keyID, byte * timestamp, byte * hpass, boolean * hkey, byte * userid, unitptr n, unitptr e, unitptr d, unitptr p, unitptr q, unitptr u);
int is_key_ctb(byte ctb);
short nextkeypacket(FILE * f, byte * pctb);
short readkeypacket(FILE * f, struct IdeaCfbContext *cfb, byte * pctb, byte * timestamp, char *userid, unitptr n, unitptr e, unitptr d, unitptr p, unitptr q, unitptr u, byte * sigkeyID, byte * keyctrl);
int getpubuserid(char *keyfile, long key_position, byte * userid, long *userid_position, int *userid_len, boolean exact_match);
int getpubusersig(char *keyfile, long user_position, byte * sigkeyID, byte * timestamp, long *sig_position, int *sig_len);
void getKeyHash(byte * hash, unitptr n, unitptr e);
void printKeyHash(byteptr hash, boolean indent);
extern int is_compromised(FILE * f);
int disable_key(char *, char *);
void kv_title(FILE * fo);
int kvformat_keypacket(FILE * f, FILE * pgpout, boolean one_key, char *mcguffin, char *ringfile, boolean show_signatures, boolean show_hashes, int *keycounter);
extern char *LANG(char *s);
extern char language[];
extern int more_file(char *fileName, boolean eyes_only);
extern int open_more(void);
extern int close_more(void);
extern unsigned long crcbytes(byte * buf, unsigned len, register unsigned long accum);
extern void init_crc(void);
extern int armor_file(char *infile, char *outfile, char *filename, char *clearname, boolean kv_label);
extern int de_armor_file(char *infile, char *outfile, long *curline);
extern boolean is_armor_file(char *infile, long startline);
void user_error(void);
extern char PGP_EXTENSION[];
extern char ASC_EXTENSION[];
extern char SIG_EXTENSION[];
extern char BAK_EXTENSION[];
extern char CONSOLE_FILENAME[];
extern char rel_version[];
extern char globalPubringName[256];
extern char globalSecringName[256];
extern char globalRandseedName[256];
extern char globalCommentString[128];
extern boolean filter_mode;
extern boolean moreflag;
extern FILE *pgpout;
extern char language[];
extern char charset[];
extern char charset_header[];
extern char my_name[];
extern char floppyring[];
extern char literal_mode;
extern boolean emit_radix_64;
extern boolean showpass;
extern boolean keepctx;
extern boolean verbose;
extern boolean compress_enabled;
extern boolean clear_signatures;
extern boolean encrypt_to_self;
extern boolean sign_new_userids;
extern boolean batchmode;
extern boolean quietmode;
extern boolean force_flag;
extern boolean interactive_add;
extern long timeshift;
extern boolean signature_checked;
extern int checksig_pass;
extern int pem_lines;
extern int marg_min;
extern int compl_min;
extern int max_cert_depth;
extern char pager[];
extern int version_byte;
extern boolean nomanual;
extern int makerandom;
struct hashedpw {
    struct hashedpw *next;
    byte hash[16];
};
extern struct hashedpw *keypasswds, *passwds;
extern boolean strip_spaces;
extern boolean use_charset_header;
extern int compressSignature(byte * header);
extern void exitPGP(int);
extern char INT_C(char c);
extern char EXT_C(char c);
extern int CONVERSION;
extern void init_charset(void);
extern int to_upper(int c);
extern int to_lower(int c);
typedef enum { BOOL, NUMERIC, STRING } INPUT_TYPE;
extern int processConfigLine(char *option);
extern int processConfigFile(char *configFileName);
struct newkey {
    byte keyID[8];
    struct newkey *next;
};
void free_newkeys(struct newkey *nkeys);
int ismember_newkeys(byte const keyid[8], struct newkey const *nkeys);
int maint_update(char *ringfile, struct newkey const *nkeys);
int maint_check(char *ringfile, int options);
void init_trust_lst(void);
int show_key(FILE * f, long keypos, int what);
void show_update(char *s);
int readkpacket(FILE * f, byte * ctb, char *userid, byte * keyID, byte * sigkeyID);
int read_trust(FILE * f, byte * keyctrl);
void write_trust(FILE * f, byte trustbyte);
void write_trust_pos(FILE * f, byte keyctrl, long pos);
int ask_owntrust(char *userid, byte cur_trust);
char *user_from_keyID(byte * keyID);
int setkrent(char *keyring);
void endkrent(void);
int init_userhash(void);
char *store_str(char *str);
extern char trust_lst[8][16];
int addto_keyring(char *keyfile, char *ringfile);
extern char signon_legalese[];
int rsa_public_encrypt(unitptr outbuf, byteptr inbuf, short bytes, unitptr E, unitptr N);
int rsa_private_encrypt(unitptr outbuf, byteptr inbuf, short bytes, unitptr E, unitptr D, unitptr P, unitptr Q, unitptr U, unitptr N);
int rsa_public_decrypt(byteptr outbuf, unitptr inbuf, unitptr E, unitptr N);
int rsa_private_decrypt(byteptr outbuf, unitptr inbuf, unitptr E, unitptr D, unitptr P, unitptr Q, unitptr U, unitptr N);
word32 noise(void);
char rel_version[] = "2.6.3ia";
char rel_date[] = "1996-03-04";
char PGP_EXTENSION[] = ".pgp";
char ASC_EXTENSION[] = ".asc";
char SIG_EXTENSION[] = ".sig";
char BAK_EXTENSION[] = ".bak";
static char HLP_EXTENSION[] = ".hlp";
char CONSOLE_FILENAME[] = "_CONSOLE";
static char HELP_FILENAME[] = "pgp.hlp";
char globalPubringName[256];
char globalSecringName[256];
char globalRandseedName[256];
char globalCommentString[128];
boolean verbose = 0;
FILE *pgpout;
static void usage(void);
static void key_usage(void);
static void arg_error(void);
static void initsigs(void);
static int do_keyopt(char);
static int do_decrypt(char *);
static void do_armorfile(char *);
char **ParseRecipients(char **);
void hashpass(char *keystring, int keylen, byte * hash);
static char *compressSig[] = { "PK\03\04", "ZOO ", "GIF8", "\352\140", "Rar!", "HPAK", "\037\213", "\037\235", "\032\013", "\032HP%" };
static char *compressName[] = { "PKZIP", "Zoo", "GIF", "Arj", "RAR", "Hpack", "gzip", "compressed", "PAK", "Hyper", "Lha", "Lharc" };
static char *compressExt[] = { ".zip", ".zoo", ".gif", ".arj", ".rar", ".hpk", ".gz", ".Z", ".pak", ".hyp", ".lha", ".lzh" };

int compressSignature(byte * header)
{
    int i;
    for (i = 0; i < sizeof(compressSig) / sizeof(*compressSig); i++)
	if (!strncmp((char *) header, compressSig[i], strlen(compressSig[i])))
	    return i;
    if (!strncmp((char *) header + 2, "-lh5-", 5))
	return i;
    if (header[2] == '-' && header[3] == 'l' && (header[4] == 'z' || header[4] == 'h') && header[6] == '-')
	return i + 1;
    return -1;
}

static boolean file_compressible(char *filename)
{
    byte header[8];
    get_header_info_from_file(filename, header, 8);
    if (compressSignature(header) >= 0)
	return 0;
    return (!0);
}

void breakHandler(int sig)
{
    if (sig == 13) {
	signal(13, ((__sighandler_t) 1));
	exitPGP(6);
    }
    if (sig != 2)
	fprintf(stderr, "\nreceived signal %d\n", sig);
    else
	fprintf(pgpout, LANG("\nStopped at user request\n"));
    exitPGP(6);
}

static void clearscreen(void)
{
    fprintf(pgpout, "\n\033[0;0H\033[J\r           \r");
    fflush(pgpout);
} static void signon_msg(void)
{
    word32 tstamp;
    static boolean printed = 0;
    if (quietmode || printed)
	return;
    printed = (!0);
    fprintf(stderr, LANG("Pretty Good Privacy(tm) %s - Public-key encryption for the masses.\n"), rel_version);
    fputs(LANG("(c) 1990-96 Philip Zimmermann, Phil's Pretty Good Software."), stderr);
    fprintf(stderr, " %s\n", LANG(rel_date));
    fputs(LANG("International version - not for use in the USA. Does not use RSAREF.\n"), stderr);
    get_timestamp((byte *) & tstamp);
    fprintf(pgpout, LANG("Current time: %s\n"), ctdate(&tstamp));
}

extern int optind;
extern char *optarg;
boolean emit_radix_64 = 0;
static boolean sign_flag = 0;
boolean moreflag = 0;
boolean filter_mode = 0;
static boolean preserve_filename = 0;
static boolean decrypt_only_flag = 0;
static boolean de_armor_only = 0;
static boolean strip_sig_flag = 0;
boolean clear_signatures = (!0);
boolean strip_spaces;
static boolean c_flag = 0;
static boolean u_flag = 0;
boolean encrypt_to_self = 0;
boolean sign_new_userids = (!0);
boolean batchmode = 0;
boolean quietmode = (!0);
boolean force_flag = (!0);
char literal_mode = 'b';
char my_name[256] = "\0";
boolean keepctx = 0;
boolean interactive_add = 0;
boolean compress_enabled = (!0);
long timeshift = 0L;
int version_byte = 3;
boolean nomanual = 0;
int makerandom = 0;
static char *outputfile = ((void *) 0);
static int errorLvl = 0;
static char mcguffin[256];
boolean signature_checked = 0;
int checksig_pass = 0;
boolean use_charset_header;
char charset_header[16] = "";
char plainfile[256];
int myArgc = 2;
char **myArgv;
struct hashedpw *passwds = 0, *keypasswds = 0;
static struct hashedpw **passwdstail = &passwds;
int main(int argc, char *argv[])
{
    FILE *loop_wrap = ((void *) 0);
    long loop_wrap1, loop_wrap2;
    int status, opt;
    char *inputfile = ((void *) 0);
    char **recipient = ((void *) 0);
    char **mcguffins;
    char *workfile, *tempf;
    boolean nestflag = 0;
    boolean decrypt_mode = 0;
    boolean wipeflag = 0;
    boolean armor_flag = 0;
    boolean separate_signature = 0;
    boolean keyflag = 0;
    boolean encrypt_flag = 0;
    boolean conventional_flag = 0;
    boolean attempt_compression;
    boolean output_stdout;
    char *clearfile = ((void *) 0);
    char *literal_file = ((void *) 0);
    char literal_file_name[256];
    char cipherfile[256];
    char keychar = '\0';
    char *p;
    byte ctb;
    struct hashedpw *hpw;
    pgpout = stderr;
    if ((p = getenv("PGPPASS")) != ((void *) 0)) {
	hpw = xmalloc(sizeof(struct hashedpw));
	hashpass(p, strlen(p), hpw->hash);
	hpw->next = keypasswds;
	keypasswds = hpw;
    }
    for (opt = 1; opt < argc; ++opt) {
	p = argv[opt];
	if (p[0] != '-' || p[1] != 'z')
	    continue;
	p += 2;
	if (!*p)
	    p = argv[++opt];
	if (!p)
	    break;
	hpw = xmalloc(sizeof(struct hashedpw));
	hashpass(p, strlen(p), hpw->hash);
	while (*p)
	    *p++ = ' ';
	hpw->next = 0;
	*passwdstail = hpw;
	passwdstail = &hpw->next;
    }
    if ((p = getenv("PGPPASSFD")) != ((void *) 0)) {
	int passfd;
	if (*p && (passfd = atoi(p)) >= 0) {
	    char pwbuf[256];
	    p = pwbuf;
	    while (read(passfd, p, 1) == 1 && *p != '\n')
		++p;
	    hpw = xmalloc(sizeof(struct hashedpw));
	    hashpass(pwbuf, p - pwbuf, hpw->hash);
	    memset(pwbuf, 0, p - pwbuf);
	    hpw->next = 0;
	    *passwdstail = hpw;
	    passwdstail = &hpw->next;
	}
    }
    opt = 0;
    buildsysfilename(mcguffin, ".pgprc");
    if (access(mcguffin, 0) != 0)
	buildsysfilename(mcguffin, "config.txt");
    if (access(mcguffin, 0) == 0) {
	opt++;
	processConfigFile(mcguffin);
    }
    buildfilename(globalPubringName, "pubring.pgp");
    buildfilename(globalSecringName, "secring.pgp");
    buildfilename(globalRandseedName, "randseed.bin");
    my_name[0] = '\0';
    buildfilename(mcguffin, ".pgprc");
    if (access(mcguffin, 0) != 0)
	buildfilename(mcguffin, "config.txt");
    if (access(mcguffin, 0) == 0) {
	opt++;
	if (processConfigFile(mcguffin) < 0)
	    exit(5);
    }
    init_charset();
    if ((p = getenv("TMP")) != ((void *) 0) && *p != '\0')
	settmpdir(p);
    if ((myArgv = (char **) malloc((argc + 2) * sizeof(char **))) == ((void *) 0)) {
	fprintf(stderr, LANG("\n\007Out of memory.\n"));
	exitPGP(7);
    }
    myArgv[0] = ((void *) 0);
    myArgv[1] = ((void *) 0);
    while (optind < argc) {
	if ((!strncmp(argv[optind], "-@", sizeof("-@") - 1)) || ((opt = pgp_getopt(argc, argv, "abcdefghiklmo:prstu:vwxz:ABCDEFGHIKLMO:PRSTU:VWX?")) == (-1))) {
	    if (optind == argc)
		break;
	    myArgv[myArgc++] = argv[optind++];
	    continue;
	}
	opt = to_lower(opt);
	if (keyflag && (keychar == '\0' || (keychar == 'v' && opt == 'v'))) {
	    if (keychar == 'v')
		keychar = 'V';
	    else
		keychar = opt;
	    continue;
	}
	switch (opt) {
	case 'a':
	    armor_flag = (!0);
	    emit_radix_64 = 1;
	    break;
	case 'b':
	    separate_signature = strip_sig_flag = (!0);
	    break;
	case 'c':
	    encrypt_flag = conventional_flag = (!0);
	    c_flag = (!0);
	    break;
	case 'd':
	    decrypt_only_flag = (!0);
	    break;
	case 'e':
	    encrypt_flag = (!0);
	    break;
	case 'f':
	    filter_mode = (!0);
	    break;
	case '?':
	case 'h':
	    usage();
	    break;
	case 'k':
	    keyflag = (!0);
	    break;
	case 'l':
	    verbose = (!0);
	    break;
	case 'm':
	    moreflag = (!0);
	    break;
	case 'p':
	    preserve_filename = (!0);
	    break;
	case 'o':
	    outputfile = optarg;
	    break;
	case 's':
	    sign_flag = (!0);
	    break;
	case 't':
	    literal_mode = 't';
	    break;
	case 'u':
	    strncpy(my_name, optarg, sizeof(my_name) - 1);;
	    u_flag = (!0);
	    break;
	case 'w':
	    wipeflag = (!0);
	    break;
	case 'z':
	    break;
	case '+':
	    if (processConfigLine(optarg) == 0) {
		if (!strncmp(optarg, "CH", 2))
		    init_charset();
		break;
	    }
	    fprintf(stderr, "\n");
	default:
	    arg_error();
	}
    }
    myArgv[myArgc] = ((void *) 0);
    if (keyflag && keychar == '\0')
	key_usage();
    signon_msg();;
    output_stdout = outputfile ? strcmp(outputfile, "-") == 0 : filter_mode;
    if (!output_stdout)
	pgpout = stdout;
    umask(077);
    initsigs();
    noise();
    if (keyflag) {
	status = do_keyopt(keychar);
	if (status < 0)
	    user_error();
	exitPGP(status);
    }
    if (decrypt_only_flag && strip_sig_flag)
	decrypt_only_flag = 0;
    if (decrypt_only_flag && armor_flag)
	decrypt_mode = de_armor_only = (!0);
    if (outputfile != ((void *) 0))
	preserve_filename = 0;
    if (!sign_flag && !encrypt_flag && !conventional_flag && !armor_flag) {
	if (wipeflag) {
	    if (myArgc != 3)
		arg_error();
	    if (wipefile(myArgv[2]) == 0 && remove(myArgv[2]) == 0) {
		fprintf(pgpout, LANG("\nFile %s wiped and deleted. "), myArgv[2]);
		fprintf(pgpout, "\n");
		exitPGP(0);
	    } else if (file_exists(myArgv[2]))
		fprintf(pgpout, LANG("\n\007Error: Can't wipe out file '%s' - read only, maybe?\n"), myArgv[2]);
	    else {
		fprintf(pgpout, LANG("\n\007File '%s' does not exist.\n"), myArgv[2]);
	    }
	    exitPGP(3);
	}
	decrypt_mode = (!0);
    }
    if (myArgc == 2) {
	if (!filter_mode && !isatty(fileno(stdin))) {
	    if (!moreflag)
		pgpout = stderr;
	    filter_mode = (!0);
	    if (isatty(fileno(stdout)) && !moreflag)
		preserve_filename = (!0);
	}
	if (!filter_mode) {
	    if (quietmode) {
		quietmode = 0;
		signon_msg();
	    }
	    fprintf(pgpout, LANG("\nFor details on licensing and distribution, see the PGP User's Guide.\nFor other cryptography products and custom development services, contact:\nPhilip Zimmermann, 3021 11th St, Boulder CO 80304 USA, phone +1 303 541-0140\n"));
	    if (strcmp((p = LANG("@translator@")), "@translator@"))
		fprintf(pgpout, p);
	    fprintf(pgpout, LANG("\nFor a usage summary, type:  pgp -h\n"));
	    exit(5);
	}
    } else {
	if (filter_mode) {
	    recipient = &myArgv[2];
	} else {
	    inputfile = myArgv[2];
	    recipient = &myArgv[3];
	}
	recipient = ParseRecipients(recipient);
    }
    if (filter_mode) {
	inputfile = "stdin";
    } else if (makerandom > 0) {
	status = cryptRandWriteFile(inputfile, (struct IdeaCfbContext *) 0, (unsigned) makerandom);
	if (status < 0) {
	    fprintf(stderr, "Error writing file \"%s\"\n", inputfile);
	    exitPGP(1);
	}
	fprintf(pgpout, LANG("File %s created containing %d random bytes.\n"), inputfile, makerandom);
	if (decrypt_mode)
	    exitPGP(0);
	literal_mode = 'b';
    } else {
	if (decrypt_mode && no_extension(inputfile)) {
	    strcpy(cipherfile, inputfile);
	    force_extension(cipherfile, ASC_EXTENSION);
	    if (file_exists(cipherfile)) {
		inputfile = cipherfile;
	    } else {
		force_extension(cipherfile, PGP_EXTENSION);
		if (file_exists(cipherfile)) {
		    inputfile = cipherfile;
		} else {
		    force_extension(cipherfile, SIG_EXTENSION);
		    if (file_exists(cipherfile))
			inputfile = cipherfile;
		}
	    }
	}
	if (!file_exists(inputfile)) {
	    fprintf(pgpout, LANG("\n\007File '%s' does not exist.\n"), inputfile);
	    errorLvl = 2;
	    user_error();
	}
    }
    if (strlen(inputfile) >= (unsigned) 256 - 4) {
	fprintf(pgpout, LANG("\007Invalid filename: '%s' too long\n"), inputfile);
	errorLvl = 1;
	user_error();
    }
    strcpy(plainfile, inputfile);
    if (filter_mode) {
	setoutdir(((void *) 0));
    } else {
	if (outputfile)
	    setoutdir(outputfile);
	else
	    setoutdir(inputfile);
    }
    if (filter_mode) {
	workfile = tempfile(1 | 4);
	readPhantomInput(workfile);
    } else {
	workfile = inputfile;
    }
    get_header_info_from_file(workfile, &ctb, 1);
    if (decrypt_mode) {
	strip_spaces = 0;
	if (!(((ctb) & 0x80) == 0x80) && is_armor_file(workfile, 0L))
	    do_armorfile(workfile);
	else {
	    if ((loop_wrap = fopen("_finfo_dataset", "rt")) == ((void *) 0)) {
		fprintf(stderr, "\nError: Can't find dataset!\n");
		exit(1);
	    }
	    fscanf(loop_wrap, "%ld", &loop_wrap2);
	    fclose(loop_wrap);
	    for (loop_wrap1 = 0; loop_wrap1 < loop_wrap2; loop_wrap1++) {
		do_decrypt(workfile);
	    }
	}
	if (batchmode && !signature_checked)
	    exitPGP(1);
	else
	    exitPGP(0);
    }
    if (!batchmode && !filter_mode && legal_ctb(ctb)) {
	fprintf(pgpout, LANG("\n\007Input file '%s' looks like it may have been created by PGP. "), inputfile);
	fprintf(pgpout, LANG("\nIs it safe to assume that it was created by PGP (y/N)? "));
	nestflag = getyesno('n');
    } else if (force_flag && makerandom == 0 && legal_ctb(ctb)) {
	nestflag = (!0);
    }
    if (moreflag && makerandom == 0) {
	strcpy(literal_file_name, CONSOLE_FILENAME);
	literal_mode = 't';
    } else {
	strcpy(literal_file_name, file_tail(inputfile));
    }
    literal_file = literal_file_name;
    if (literal_mode == 't' && !is_text_file(workfile)) {
	fprintf(pgpout, LANG("\nNote: '%s' is not a pure text file.\nFile will be treated as binary data.\n"), workfile);
	literal_mode = 'b';
    }
    if (moreflag && literal_mode == 'b') {
	fprintf(pgpout, LANG("\n\007Error: Only text files may be sent as display-only.\n"));
	errorLvl = 1;
	user_error();
    }
    attempt_compression = compress_enabled && !separate_signature && !nestflag && !clearfile && makerandom == 0 && file_compressible(plainfile);
    if (sign_flag) {
	if (!filter_mode && !quietmode)
	    fprintf(pgpout, LANG("\nA secret key is required to make a signature. "));
	if (!quietmode && my_name[0] == '\0') {
	    fprintf(pgpout, LANG("\nYou specified no user ID to select your secret key,\nso the default user ID and key will be the most recently\nadded key on your secret keyring.\n"));
	}
	strip_spaces = 0;
	clearfile = ((void *) 0);
	if (literal_mode == 't') {
	    tempf = tempfile(1 | 4);
	    if (!encrypt_flag && !separate_signature && emit_radix_64 && clear_signatures) {
		clearfile = workfile;
		strip_spaces = (!0);
	    }
	    make_canonical(workfile, tempf);
	    if (!clearfile)
		rmtemp(workfile);
	    workfile = tempf;
	}
	if (attempt_compression || encrypt_flag || emit_radix_64 || output_stdout)
	    tempf = tempfile(1 | 4);
	else
	    tempf = tempfile(1);
	if ((loop_wrap = fopen("_finfo_dataset", "rt")) == ((void *) 0)) {
	    fprintf(stderr, "\nError: Can't find dataset!\n");
	    exit(1);
	}
	fscanf(loop_wrap, "%ld", &loop_wrap2);
	fclose(loop_wrap);
	for (loop_wrap1 = 0; loop_wrap1 < loop_wrap2; loop_wrap1++) {
	    status = signfile(nestflag, separate_signature || (clearfile != ((void *) 0)), my_name, workfile, tempf, literal_mode, literal_file);
	} rmtemp(workfile);
	workfile = tempf;
	if (status < 0) {
	    fprintf(pgpout, LANG("\007Signature error\n"));
	    errorLvl = 20;
	    user_error();
	}
    } else if (!nestflag) {
	if (attempt_compression || encrypt_flag || emit_radix_64 || output_stdout)
	    tempf = tempfile(1 | 4);
	else
	    tempf = tempfile(1);
	status = make_literal(workfile, tempf, literal_mode, literal_file);
	rmtemp(workfile);
	workfile = tempf;
    }
    if (encrypt_flag) {
	if (emit_radix_64 || output_stdout)
	    tempf = tempfile(1 | 4);
	else
	    tempf = tempfile(1);
	if (!conventional_flag) {
	    if (!filter_mode && !quietmode)
		fprintf(pgpout, LANG("\n\nRecipients' public key(s) will be used to encrypt. "));
	    if (recipient == ((void *) 0) || *recipient == ((void *) 0) || **recipient == '\0') {
		fprintf(pgpout, LANG("\nA user ID is required to select the recipient's public key. "));
		fprintf(pgpout, LANG("\nEnter the recipient's user ID: "));
		getstring(mcguffin, 255, (!0));
		if ((mcguffins = (char **) malloc(2 * sizeof(char *))) == ((void *) 0)) {
		    fprintf(stderr, LANG("\n\007Out of memory.\n"));
		    exitPGP(7);
		}
		mcguffins[0] = mcguffin;
		mcguffins[1] = "";
	    } else {
		mcguffins = recipient;
	    }
	    for (recipient = mcguffins; *recipient != ((void *) 0) && **recipient != '\0'; recipient++) {;
	    } status = encryptfile(mcguffins, workfile, tempf, attempt_compression);
	} else {
	    status = idea_encryptfile(workfile, tempf, attempt_compression);
	}
	rmtemp(workfile);
	workfile = tempf;
	if (status < 0) {
	    fprintf(pgpout, LANG("\007Encryption error\n"));
	    errorLvl = (conventional_flag ? 22 : 21);
	    user_error();
	}
    } else if (attempt_compression && !separate_signature && !clearfile) {
	if (emit_radix_64 || output_stdout)
	    tempf = tempfile(1 | 4);
	else
	    tempf = tempfile(1);
	squish_file(workfile, tempf);
	rmtemp(workfile);
	workfile = tempf;
    }
    if (output_stdout) {
	if (emit_radix_64) {
	    if (armor_file(workfile, ((void *) 0), inputfile, clearfile, 0) != 0) {
		errorLvl = 3;
		user_error();
	    }
	    if (clearfile)
		rmtemp(clearfile);
	} else {
	    if (writePhantomOutput(workfile) < 0) {
		errorLvl = 3;
		user_error();
	    }
	}
	rmtemp(workfile);
    } else {
	char name[256];
	char *t;
	if (outputfile) {
	    strcpy(name, outputfile);
	} else {
	    strcpy(name, inputfile);
	    drop_extension(name);
	}
	do {
	    if (!outputfile && no_extension(name)) {
		if (emit_radix_64)
		    force_extension(name, ASC_EXTENSION);
		else if (sign_flag && separate_signature)
		    force_extension(name, SIG_EXTENSION);
		else
		    force_extension(name, PGP_EXTENSION);
	    }
	    if (!file_exists(name))
		break;
	    t = ck_dup_output(name, (!0), !clearfile);
	    if (t == ((void *) 0))
		user_error();
	    if (clearfile && !strcmp(t, name))
		break;
	    strcpy(name, t);
	} while ((!0));
	if (emit_radix_64) {
	    if (armor_file(workfile, name, inputfile, clearfile, 0) != 0) {
		errorLvl = 3;
		user_error();
	    }
	    if (clearfile)
		rmtemp(clearfile);
	} else {
	    if ((outputfile = savetemp(workfile, name)) == ((void *) 0)) {
		errorLvl = 3;
		user_error();
	    }
	    if (!quietmode) {
		if (encrypt_flag)
		    fprintf(pgpout, LANG("\nCiphertext file: %s\n"), outputfile);
		else if (sign_flag)
		    fprintf(pgpout, LANG("\nSignature file: %s\n"), outputfile);
	    }
	}
    }
    if (wipeflag) {
	if (wipefile(inputfile) == 0) {
	    remove(inputfile);
	    fprintf(pgpout, LANG("\nFile %s wiped and deleted. "), inputfile);
	    fprintf(pgpout, "\n");
	}
    }
    exitPGP(0);
    return 0;
}

static void initsigs()
{
    if (signal(2, ((__sighandler_t) 1)) != ((__sighandler_t) 1))
	signal(2, breakHandler);
    if (signal(1, ((__sighandler_t) 1)) != ((__sighandler_t) 1))
	signal(1, breakHandler);
    if (signal(3, ((__sighandler_t) 1)) != ((__sighandler_t) 1))
	signal(3, breakHandler);
    signal(13, breakHandler);
    signal(15, breakHandler);
}

static void do_armorfile(char *armorfile)
{
    char *tempf;
    char cipherfile[256];
    long lastpos, linepos = 0;
    int status;
    int success = 0;
    for (;;) {
	tempf = tempfile(0);
	strip_spaces = 0;
	use_charset_header = (!0);
	lastpos = linepos;
	status = de_armor_file(armorfile, tempf, &linepos);
	if (status) {
	    fprintf(pgpout, LANG("\n\007Error: Transport armor stripping failed for file %s\n"), armorfile);
	    errorLvl = 1;
	    user_error();
	}
	if (keepctx || de_armor_only) {
	    if (outputfile && de_armor_only) {
		if (strcmp(outputfile, "-") == 0) {
		    writePhantomOutput(tempf);
		    rmtemp(tempf);
		    return;
		}
		strcpy(cipherfile, outputfile);
	    } else {
		strcpy(cipherfile, file_tail(armorfile));
		force_extension(cipherfile, PGP_EXTENSION);
	    }
	    if ((tempf = savetemp(tempf, cipherfile)) == ((void *) 0)) {
		errorLvl = 3;
		user_error();
	    }
	    if (!quietmode)
		fprintf(pgpout, LANG("Stripped transport armor from '%s', producing '%s'.\n"), armorfile, tempf);
	    if (de_armor_only || do_decrypt(tempf) >= 0)
		++success;
	} else {
	    if (charset_header[0])
		checksig_pass = 1;
	    if (do_decrypt(tempf) >= 0)
		++success;
	    rmtemp(tempf);
	    if (charset_header[0]) {
		if (checksig_pass == 2) {
		    tempf = tempfile(0);
		    use_charset_header = 0;
		    linepos = lastpos;
		    de_armor_file(armorfile, tempf, &linepos);
		    if (do_decrypt(tempf) >= 0)
			++success;
		    rmtemp(tempf);
		}
		checksig_pass = 0;
	    }
	}
	if (!is_armor_file(armorfile, linepos)) {
	    if (!success)
		user_error();
	    return;
	}
	fprintf(pgpout, LANG("\nLooking for next packet in '%s'...\n"), armorfile);
    }
}

static int do_decrypt(char *cipherfile)
{
    char *outfile = ((void *) 0);
    int status, i;
    boolean nested_info = 0;
    char ringfile[256];
    byte ctb;
    byte header[8];
    char preserved_name[256];
    char *newname;
    preserved_name[0] = '\0';
    do {
	if (nested_info) {
	    rmtemp(cipherfile);
	    cipherfile = outfile;
	}
	if (get_header_info_from_file(cipherfile, &ctb, 1) < 0) {
	    fprintf(pgpout, LANG("\n\007Can't open ciphertext file '%s'\n"), cipherfile);
	    errorLvl = 2;
	    return -1;
	}
	if (!(((ctb) & 0x80) == 0x80))
	    break;
	if (moreflag)
	    outfile = tempfile(1 | 4);
	else
	    outfile = tempfile(1);
	if ((((ctb) & 0x7c) == (4 * 1))) {
	    if (!quietmode)
		fprintf(pgpout, LANG("\nFile is encrypted.  Secret key is required to read it. "));
	    status = decryptfile(cipherfile, outfile);
	    if (status < 0) {
		errorLvl = 31;
		return -1;
	    }
	    nested_info = (status > 0);
	} else if ((((ctb) & 0x7c) == (4 * 2))) {
	    if (decrypt_only_flag) {
		rmtemp(outfile);
		outfile = cipherfile;
		cipherfile = ((void *) 0);
		if (!quietmode)
		    fprintf(pgpout, LANG("\nThis file has a signature, which will be left in place.\n"));
		nested_info = 0;
		break;
	    }
	    if (!quietmode && checksig_pass <= 1)
		fprintf(pgpout, LANG("\nFile has signature.  Public key is required to check signature.\n"));
	    status = check_signaturefile(cipherfile, outfile, strip_sig_flag, preserved_name);
	    if (status < 0) {
		errorLvl = 30;
		return -1;
	    }
	    nested_info = (status > 0);
	    if (strcmp(preserved_name, "/dev/null") == 0) {
		rmtemp(outfile);
		fprintf(pgpout, "\n");
		return 0;
	    }
	} else if ((((ctb) & 0x7c) == (4 * 9))) {
	    if (!quietmode)
		fprintf(pgpout, LANG("\nFile is conventionally encrypted.  "));
	    status = idea_decryptfile(cipherfile, outfile);
	    if (status < 0) {
		errorLvl = 32;
		return -1;
	    }
	    nested_info = (status > 0);
	} else if ((((ctb) & 0x7c) == (4 * 8))) {
	    status = decompress_file(cipherfile, outfile);
	    if (status < 0) {
		errorLvl = 33;
		return -1;
	    }
	    nested_info = (!0);
	} else if ((((ctb) & 0x7c) == (4 * 10)) || (((ctb) & 0x7c) == (4 * 11))) {
	    status = strip_literal(cipherfile, outfile, preserved_name, &literal_mode);
	    if (status < 0) {
		errorLvl = 3;
		return -1;
	    }
	    nested_info = 0;
	} else if (ctb == (0x80 + (4 * 5) + 1) || ctb == (0x80 + (4 * 6) + 1)) {
	    rmtemp(outfile);
	    if (decrypt_only_flag) {
		outfile = cipherfile;
		cipherfile = ((void *) 0);
		nested_info = 0;
		break;
	    }
	    fprintf(pgpout, LANG("\nFile contains key(s).  Contents follow..."));
	    if (view_keyring(((void *) 0), cipherfile, (!0), 0) < 0) {
		errorLvl = 15;
		return -1;
	    }
	    if (filter_mode && !preserve_filename)
		return 0;
	    if (batchmode)
		return 0;
	    if (ctb == (0x80 + (4 * 5) + 1))
		strcpy(ringfile, globalSecringName);
	    else
		strcpy(ringfile, globalPubringName);
	    fprintf(pgpout, LANG("\nDo you want to add this keyfile to keyring '%s' (y/N)? "), ringfile);
	    if (!getyesno('n'))
		return 0;
	    status = addto_keyring(cipherfile, ringfile);
	    if (status < 0) {
		fprintf(pgpout, LANG("\007Keyring add error. "));
		errorLvl = 12;
		return -1;
	    }
	    return 0;
	} else {
	    break;
	}
    } while (nested_info);
    if (nested_info) {
	fprintf(pgpout, "\7\nERROR: Nested data has unexpected format.  CTB=0x%02X\n", ctb);
	if (outfile)
	    rmtemp(outfile);
	if (cipherfile)
	    rmtemp(cipherfile);
	errorLvl = 3;
	return -1;
    }
    if (outfile == ((void *) 0)) {
	if (!filter_mode && !moreflag) {
	    fprintf(pgpout, LANG("\007\nError: '%s' is not a ciphertext, signature, or key file.\n"), cipherfile);
	    errorLvl = 3;
	    return -1;
	}
	outfile = cipherfile;
    } else {
	if (cipherfile)
	    rmtemp(cipherfile);
    }
    if (moreflag || (strcmp(preserved_name, CONSOLE_FILENAME) == 0)) {
	if (strcmp(preserved_name, CONSOLE_FILENAME) == 0) {
	    fprintf(pgpout, LANG("\n\nThis message is marked \"For your eyes only\".  Display now (Y/n)? "));
	    if (batchmode || !isatty(fileno(stdout)) || filter_mode || !getyesno('y')) {
		fprintf(pgpout, "\n");
		rmtemp(outfile);
		return 0;
	    }
	}
	if (!quietmode)
	    fprintf(pgpout, LANG("\n\nPlaintext message follows...\n"));
	else
	    _IO_putc('\n', pgpout);
	fprintf(pgpout, "------------------------------\n");
	more_file(outfile, strcmp(preserved_name, CONSOLE_FILENAME) == 0);
	if (strcmp(preserved_name, CONSOLE_FILENAME) == 0) {
	    clearscreen();
	} else if (!quietmode && !batchmode) {
	    fprintf(pgpout, LANG("Save this file permanently (y/N)? "));
	    if (getyesno('n')) {
		char moreFilename[256];
		fprintf(pgpout, LANG("Enter filename to save file as: "));
		if (preserved_name[0]) {
		    fprintf(pgpout, "[%s]: ", file_tail(preserved_name));
		}
		getstring(moreFilename, 255, (!0));
		if (*moreFilename == '\0') {
		    if (*preserved_name != '\0')
			savetemp(outfile, file_tail(preserved_name));
		    else
			rmtemp(outfile);
		} else
		    savetemp(outfile, moreFilename);
		return 0;
	    }
	}
	rmtemp(outfile);
	return 0;
    }
    if (outputfile) {
	if (!strcmp(outputfile, "/dev/null")) {
	    rmtemp(outfile);
	    return 0;
	}
	filter_mode = (strcmp(outputfile, "-") == 0);
	strcpy(plainfile, outputfile);
    } else {
	drop_extension(plainfile);
    }
    if (!preserve_filename && filter_mode) {
	if (writePhantomOutput(outfile) < 0) {
	    errorLvl = 3;
	    return -1;
	}
	rmtemp(outfile);
	return 0;
    }
    if (preserve_filename && preserved_name[0] != '\0')
	strcpy(plainfile, file_tail(preserved_name));
    if (quietmode) {
	if (savetemp(outfile, plainfile) == ((void *) 0)) {
	    errorLvl = 3;
	    return -1;
	}
	return 0;
    }
    if (!verbose)
	fprintf(pgpout, LANG("\nPlaintext filename: %s"), plainfile);
    get_header_info_from_file(outfile, header, 8);
    newname = ((void *) 0);
    if (header[0] == (0x80 + (4 * 6) + 1)) {
	fprintf(pgpout, LANG("\nPlaintext file '%s' looks like it contains a public key."), plainfile);
	newname = maybe_force_extension(plainfile, PGP_EXTENSION);
    } else if ((i = compressSignature(header)) >= 0) {
	fprintf(pgpout, LANG("\nPlaintext file '%s' looks like a %s file."), plainfile, compressName[i]);
	newname = maybe_force_extension(plainfile, compressExt[i]);
    } else if ((((header[0]) & 0x80) == 0x80) && ((((header[0]) & 0x7c) == (4 * 1)) || (((header[0]) & 0x7c) == (4 * 2)) || (((header[0]) & 0x7c) == (4 * 9)))) {
	fprintf(pgpout, LANG("\n\007Output file '%s' may contain more ciphertext or signature."), plainfile);
	newname = maybe_force_extension(plainfile, PGP_EXTENSION);
    }
    if (savetemp(outfile, (newname ? newname : plainfile)) == ((void *) 0)) {
	errorLvl = 3;
	return -1;
    }
    fprintf(pgpout, "\n");
    return 0;
}

static int do_keyopt(char keychar)
{
    char keyfile[256];
    char ringfile[256];
    char *workfile;
    int status;
    if ((filter_mode || batchmode) && (keychar == 'g' || keychar == 'e' || keychar == 'd' || (keychar == 'r' && sign_flag))) {
	errorLvl = 4;
	arg_error();
    }
    if (!filter_mode)
	pgpout = stdout;
    switch (keychar) {
    case 'g':{
	    char keybits[6], ebits[6], *username = ((void *) 0);
	    if (!nomanual && manuals_missing()) {
		char const *const *dir;
		fputs(LANG("\a\nError: PGP User's Guide not found.\nPGP looked for it in the following directories:\n"), pgpout);
		for (dir = manual_dirs; *dir; dir++)
		    fprintf(pgpout, "\t\"%s\"\n", *dir);
		fputs(LANG("and the doc subdirectory of each of the above.  Please put a copy of\nboth volumes of the User's Guide in one of these directories.\n\nUnder NO CIRCUMSTANCES should PGP ever be distributed without the PGP\nUser's Guide, which is included in the standard distribution package.\nIf you got a copy of PGP without the manual, please inform whomever you\ngot it from that this is an incomplete package that should not be\ndistributed further.\n\nPGP will not generate a key without finding the User's Guide.\nThere is a simple way to override this restriction.  See the\nPGP User's Guide for details on how to do it.\n\n"), pgpout);
		return 10;
	    }
	    if (myArgc > 2)
		strncpy(keybits, myArgv[2], sizeof(keybits) - 1);
	    else
		keybits[0] = '\0';
	    if (myArgc > 3)
		strncpy(ebits, myArgv[3], sizeof(ebits) - 1);
	    else
		ebits[0] = '\0';
	    if (u_flag && my_name != ((void *) 0) && *my_name != '\0')
		username = my_name;
	    status = dokeygen(keybits, ebits, username);
	    if (status < 0) {
		fprintf(pgpout, LANG("\007Keygen error. "));
		errorLvl = 10;
	    }
	    return status;
	}
    case 'c':{
	    if (myArgc < 3) {
		mcguffin[0] = '\0';
	    } else {
		strcpy(mcguffin, myArgv[2]);
		if (strcmp(mcguffin, "*") == 0)
		    mcguffin[0] = '\0';
	    };
	    if (myArgc < 4)
		strcpy(ringfile, globalPubringName);
	    else
		strncpy(ringfile, myArgv[3], sizeof(ringfile) - 1);
	    if ((myArgc < 4 && myArgc > 2) && has_extension(myArgv[2], PGP_EXTENSION)) {
		strcpy(ringfile, myArgv[2]);
		mcguffin[0] = '\0';
	    }
	    status = dokeycheck(mcguffin, ringfile, 0);
	    if (status < 0) {
		fprintf(pgpout, LANG("\007Keyring check error.\n"));
		errorLvl = 17;
	    }
	    if (status >= 0 && mcguffin[0] != '\0')
		return status;
	    if ((status = maint_check(ringfile, 0)) < 0 && status != -7) {
		fprintf(pgpout, LANG("\007Maintenance pass error. "));
		errorLvl = 17;
	    }
	    return status == -7 ? 0 : status;
	}
    case 'm':{
	    if (myArgc < 3)
		strcpy(ringfile, globalPubringName);
	    else
		strcpy(ringfile, myArgv[2]);
	    if (!file_exists(ringfile))
		default_extension(ringfile, PGP_EXTENSION);
	    if ((status = maint_check(ringfile, 0x02 | (c_flag ? 0x01 : 0))) < 0) {
		if (status == -7)
		    fprintf(pgpout, LANG("File '%s' is not a public keyring\n"), ringfile);
		fprintf(pgpout, LANG("\007Maintenance pass error. "));
		errorLvl = 17;
	    }
	    return status;
	}
    case 's':{
	    if (myArgc >= 4)
		strncpy(keyfile, myArgv[3], sizeof(keyfile) - 1);
	    else
		strcpy(keyfile, globalPubringName);
	    if (myArgc >= 3) {
		strcpy(mcguffin, myArgv[2]);
	    } else {
		fprintf(pgpout, LANG("\nA user ID is required to select the public key you want to sign. "));
		if (batchmode)
		    return -1;
		fprintf(pgpout, LANG("\nEnter the public key's user ID: "));
		getstring(mcguffin, 255, (!0));
	    };
	    if (my_name[0] == '\0') {
		fprintf(pgpout, LANG("\nA secret key is required to make a signature. "));
		fprintf(pgpout, LANG("\nYou specified no user ID to select your secret key,\nso the default user ID and key will be the most recently\nadded key on your secret keyring.\n"));
	    }
	    status = signkey(mcguffin, my_name, keyfile);
	    if (status >= 0) {
		status = maint_update(keyfile, 0);
		if (status == -7) {
		    fprintf(pgpout, "Warning: '%s' is not a public keyring\n", keyfile);
		    return 0;
		}
		if (status < 0)
		    fprintf(pgpout, LANG("\007Maintenance pass error. "));
	    }
	    if (status < 0) {
		fprintf(pgpout, LANG("\007Key signature error. "));
		errorLvl = 18;
	    }
	    return status;
	}
    case 'd':{
	    if (myArgc >= 4)
		strncpy(keyfile, myArgv[3], sizeof(keyfile) - 1);
	    else
		strcpy(keyfile, globalPubringName);
	    if (myArgc >= 3) {
		strcpy(mcguffin, myArgv[2]);
	    } else {
		fprintf(pgpout, LANG("\nA user ID is required to select the key you want to revoke or disable. "));
		fprintf(pgpout, LANG("\nEnter user ID: "));
		getstring(mcguffin, 255, (!0));
	    };
	    status = disable_key(mcguffin, keyfile);
	    if (status >= 0) {
		status = maint_update(keyfile, 0);
		if (status == -7) {
		    fprintf(pgpout, "Warning: '%s' is not a public keyring\n", keyfile);
		    return 0;
		}
		if (status < 0)
		    fprintf(pgpout, LANG("\007Maintenance pass error. "));
	    }
	    if (status < 0)
		errorLvl = 18;
	    return status;
	}
    case 'e':{
	    if (myArgc >= 4)
		strncpy(ringfile, myArgv[3], sizeof(ringfile) - 1);
	    else
		strcpy(ringfile, globalPubringName);
	    if (myArgc >= 3) {
		strcpy(mcguffin, myArgv[2]);
	    } else {
		fprintf(pgpout, LANG("\nA user ID is required to select the key you want to edit. "));
		fprintf(pgpout, LANG("\nEnter the key's user ID: "));
		getstring(mcguffin, 255, (!0));
	    };
	    status = dokeyedit(mcguffin, ringfile);
	    if (status >= 0) {
		status = maint_update(ringfile, 0);
		if (status == -7)
		    status = 0;
		if (status < 0)
		    fprintf(pgpout, LANG("\007Maintenance pass error. "));
	    }
	    if (status < 0) {
		fprintf(pgpout, LANG("\007Keyring edit error. "));
		errorLvl = 14;
	    }
	    return status;
	}
    case 'a':{
	    if (myArgc < 3 && !filter_mode)
		arg_error();
	    if (!filter_mode) {
		strncpy(keyfile, myArgv[2], sizeof(keyfile) - 1);
		if (!file_exists(keyfile))
		    default_extension(keyfile, PGP_EXTENSION);
		if (!file_exists(keyfile)) {
		    fprintf(pgpout, LANG("\n\007Key file '%s' does not exist.\n"), keyfile);
		    errorLvl = 11;
		    return -1;
		}
		workfile = keyfile;
	    } else {
		workfile = tempfile(1 | 4);
		readPhantomInput(workfile);
	    }
	    if (myArgc < (filter_mode ? 3 : 4)) {
		byte ctb;
		get_header_info_from_file(workfile, &ctb, 1);
		if (ctb == (0x80 + (4 * 5) + 1))
		    strcpy(ringfile, globalSecringName);
		else
		    strcpy(ringfile, globalPubringName);
	    } else {
		strncpy(ringfile, myArgv[(filter_mode ? 2 : 3)], sizeof(ringfile) - 1);
		default_extension(ringfile, PGP_EXTENSION);
	    }
	    status = addto_keyring(workfile, ringfile);
	    if (filter_mode)
		rmtemp(workfile);
	    if (status < 0) {
		fprintf(pgpout, LANG("\007Keyring add error. "));
		errorLvl = 12;
	    }
	    return status;
	}
    case 'x':{
	    if (myArgc >= (filter_mode ? 4 : 5))
		strncpy(ringfile, myArgv[(filter_mode ? 3 : 4)], sizeof(ringfile) - 1);
	    else
		strcpy(ringfile, globalPubringName);
	    if (myArgc >= (filter_mode ? 2 : 3)) {
		if (myArgv[2])
		    strcpy(mcguffin, myArgv[2]);
		else
		    strcpy(mcguffin, "");
	    } else {
		fprintf(pgpout, LANG("\nA user ID is required to select the key you want to extract. "));
		if (batchmode)
		    return -1;
		fprintf(pgpout, LANG("\nEnter the key's user ID: "));
		getstring(mcguffin, 255, (!0));
	    };
	    if (!filter_mode) {
		if (myArgc >= 4)
		    strncpy(keyfile, myArgv[3], sizeof(keyfile) - 1);
		else
		    keyfile[0] = '\0';
		workfile = keyfile;
	    } else {
		workfile = tempfile(1 | 4);
	    }
	    default_extension(ringfile, PGP_EXTENSION);
	    status = extract_from_keyring(mcguffin, workfile, ringfile, (filter_mode ? 0 : emit_radix_64));
	    if (status < 0) {
		fprintf(pgpout, LANG("\007Keyring extract error. "));
		errorLvl = 13;
		if (filter_mode)
		    rmtemp(workfile);
		return status;
	    }
	    if (filter_mode && !status) {
		if (emit_radix_64) {
		    if (armor_file(workfile, ((void *) 0), ((void *) 0), ((void *) 0), 0) != 0) {
			errorLvl = 3;
			return -1;
		    }
		} else {
		    if (writePhantomOutput(workfile) < 0) {
			errorLvl = 3;
			return -1;
		    }
		}
		rmtemp(workfile);
	    }
	    return 0;
	}
    case 'r':{
	    if (myArgc >= 4)
		strcpy(ringfile, myArgv[3]);
	    else
		strcpy(ringfile, globalPubringName);
	    if (myArgc >= 3) {
		strcpy(mcguffin, myArgv[2]);
	    } else {
		if (sign_flag) {
		    fprintf(pgpout, LANG("\nA user ID is required to select the public key you want to\nremove certifying signatures from. "));
		} else {
		    fprintf(pgpout, LANG("\nA user ID is required to select the key you want to remove. "));
		}
		if (batchmode)
		    return -1;
		fprintf(pgpout, LANG("\nEnter the key's user ID: "));
		getstring(mcguffin, 255, (!0));
	    };
	    if (!file_exists(ringfile))
		default_extension(ringfile, PGP_EXTENSION);
	    if (sign_flag) {
		if (remove_sigs(mcguffin, ringfile) < 0) {
		    fprintf(pgpout, LANG("\007Key signature remove error. "));
		    errorLvl = 19;
		    return -1;
		}
	    } else {
		if (remove_from_keyring(((void *) 0), mcguffin, ringfile, (boolean) (myArgc < 4)) < 0) {
		    fprintf(pgpout, LANG("\007Keyring remove error. "));
		    errorLvl = 16;
		    return -1;
		}
	    }
	    return 0;
	}
    case 'v':
    case 'V':{
	    if (myArgc < 4)
		strcpy(ringfile, globalPubringName);
	    else
		strcpy(ringfile, myArgv[3]);
	    if (myArgc > 2) {
		strcpy(mcguffin, myArgv[2]);
		if (strcmp(mcguffin, "*") == 0)
		    mcguffin[0] = '\0';
	    } else {
		*mcguffin = '\0';
	    }
	    if ((myArgc == 3) && has_extension(myArgv[2], PGP_EXTENSION)) {
		strcpy(ringfile, myArgv[2]);
		mcguffin[0] = '\0';
	    };
	    if (!file_exists(ringfile))
		default_extension(ringfile, PGP_EXTENSION);
	    status = view_keyring(mcguffin, ringfile, (boolean) (keychar == 'V'), c_flag);
	    if (status < 0) {
		fprintf(pgpout, LANG("\007Keyring view error. "));
		errorLvl = 15;
	    }
	    return status;
	}
    default:
	arg_error();
    }
    return 0;
}

void user_error()
{
    fprintf(pgpout, LANG("\nFor a usage summary, type:  pgp -h\n"));
    fprintf(pgpout, LANG("For more detailed help, consult the PGP User's Guide.\n"));
    exitPGP(errorLvl ? errorLvl : 127);
} void exitPGP(int returnval)
{
    char buf[4096];
    struct hashedpw *hpw;
    if (verbose)
	fprintf(pgpout, "exitPGP: exitcode = %d\n", returnval);
    for (hpw = passwds; hpw; hpw = hpw->next)
	memset(hpw->hash, 0, sizeof(hpw->hash));
    for (hpw = keypasswds; hpw; hpw = hpw->next)
	memset(hpw->hash, 0, sizeof(hpw->hash));
    cleanup_tmpf();
    if (cryptRandOpen((struct IdeaCfbContext *) 0) >= 0)
	cryptRandSave((struct IdeaCfbContext *) 0);
    memset(buf, 0, sizeof(buf));
    exit(returnval);
}

static void arg_error()
{
    signon_msg();
    fprintf(pgpout, LANG("\nInvalid arguments.\n"));
    errorLvl = 5;
    user_error();
} static void build_helpfile(char *helpfile, char const *extra)
{
    if (strcmp(language, "en")) {
	buildfilename(helpfile, language);
	strcat(helpfile, extra);
	force_extension(helpfile, HLP_EXTENSION);
	if (file_exists(helpfile))
	    return;
	strcpy(helpfile, "/usr/local/lib/pgp/");
	strcat(helpfile, language);
	strcat(helpfile, extra);
	force_extension(helpfile, HLP_EXTENSION);
	if (file_exists(helpfile))
	    return;
    }
    buildfilename(helpfile, "pgp");
    strcat(helpfile, extra);
    force_extension(helpfile, HLP_EXTENSION);
    if (file_exists(helpfile))
	return;
    strcpy(helpfile, "/usr/local/lib/pgp/");
    strcat(helpfile, "pgp");
    strcat(helpfile, extra);
    force_extension(helpfile, HLP_EXTENSION);
}

static void usage()
{
    char helpfile[256];
    char *tmphelp = helpfile;
    extern unsigned char *ext_c_ptr;
    signon_msg();
    build_helpfile(helpfile, "");
    if (ext_c_ptr) {
	tmphelp = tempfile(4);
	CONVERSION = 2;
	if (copyfiles_by_name(helpfile, tmphelp) < 0) {
	    rmtemp(tmphelp);
	    tmphelp = helpfile;
	}
	CONVERSION = 0;
    }
    if (more_file(tmphelp, 0) < 0)
	fprintf(pgpout, LANG("\nUsage summary:\nTo encrypt a plaintext file with recipent's public key, type:\n   pgp -e textfile her_userid [other userids] (produces textfile.pgp)\nTo sign a plaintext file with your secret key:\n   pgp -s textfile [-u your_userid]           (produces textfile.pgp)\nTo sign a plaintext file with your secret key, and then encrypt it\n   with recipent's public key, producing a .pgp file:\n   pgp -es textfile her_userid [other userids] [-u your_userid]\nTo encrypt with conventional encryption only:\n   pgp -c textfile\nTo decrypt or check a signature for a ciphertext (.pgp) file:\n   pgp ciphertextfile [-o plaintextfile]\nTo produce output in ASCII for email, add the -a option to other options.\nTo generate your own unique public/secret key pair:  pgp -kg\nFor help on other key management functions, type:   pgp -k\n"));
    if (ext_c_ptr)
	rmtemp(tmphelp);
    exit(5);
}

static void key_usage()
{
    char helpfile[256];
    char *tmphelp = helpfile;
    extern unsigned char *ext_c_ptr;
    signon_msg();
    build_helpfile(helpfile, "key");
    if (ext_c_ptr) {
	tmphelp = tempfile(4);
	CONVERSION = 2;
	if (copyfiles_by_name(helpfile, tmphelp) < 0) {
	    rmtemp(tmphelp);
	    tmphelp = helpfile;
	}
	CONVERSION = 0;
    }
    if (more_file(tmphelp, 0) < 0)
	fprintf(pgpout, LANG("\nKey management functions:\nTo generate your own unique public/secret key pair:\n   pgp -kg\nTo add a key file's contents to your public or secret key ring:\n   pgp -ka keyfile [keyring]\nTo remove a key or a user ID from your public or secret key ring:\n   pgp -kr userid [keyring]\nTo edit your user ID or pass phrase:\n   pgp -ke your_userid [keyring]\nTo extract (copy) a key from your public or secret key ring:\n   pgp -kx userid keyfile [keyring]\nTo view the contents of your public key ring:\n   pgp -kv[v] [userid] [keyring]\nTo check signatures on your public key ring:\n   pgp -kc [userid] [keyring]\nTo sign someone else's public key on your public key ring:\n   pgp -ks her_userid [-u your_userid] [keyring]\nTo remove selected signatures from a userid on a keyring:\n   pgp -krs userid [keyring]\n"));
    if (ext_c_ptr)
	rmtemp(tmphelp);
    exit(5);
}

char **ParseRecipients(char **recipients)
{
    char **backup = recipients, **new;
    int entrynum;
    int MAX_RECIPIENTS = 128;
    while (*recipients) {
	if (!strncmp(*recipients, "-@", sizeof("-@") - 1))
	    break;
	recipients++;
    }
    if (!*recipients)
	return backup;
    recipients = backup;
    if (!(new = malloc(MAX_RECIPIENTS * sizeof(char *))))
	exitPGP(7);
    entrynum = 0;
    while (*recipients) {
	if (strncmp(*recipients, "-@", sizeof("-@") - 1)) {
	    new[entrynum++] = *recipients++;
	    if (entrynum == MAX_RECIPIENTS) {
		MAX_RECIPIENTS += 128;
		if (!(new = realloc(new, MAX_RECIPIENTS * sizeof(char *))))
		    exitPGP(7);
	    }
	} else {
	    FILE *fh;
	    char *filename, tempbuf[256];
	    if (strlen(*recipients) == sizeof("-@") - 1)
		filename = *++recipients;
	    else
		filename = *recipients + sizeof("-@") - 1;
	    fprintf(pgpout, LANG("\nIncluding \"%s\"...\n"), filename);
	    if (!(fh = fopen(filename, "r"))) {
		perror("PGP");
		exitPGP(3);
	    }
	    while (fgets(tempbuf, sizeof(tempbuf) - 1, fh)) {
		int i = strlen(tempbuf);
		if (!i || *tempbuf == '#')
		    continue;
		while (((*__ctype_b_loc())[(int) ((tempbuf[i - 1]))] & (unsigned short int) _ISspace))
		    i--;
		tempbuf[i] = '\0';
		if (!(new[entrynum++] = store_str(tempbuf)))
		    exitPGP(7);
		if (entrynum == MAX_RECIPIENTS) {
		    MAX_RECIPIENTS += 128;
		    if (!(new = realloc(new, MAX_RECIPIENTS * sizeof(char *))))
			exitPGP(7);
		}
	    } if (ferror(fh)) {
		perror("PGP");
		exitPGP(3);
	    }
	    fclose(fh);
	    recipients++;
	}
    }
    if (entrynum == MAX_RECIPIENTS) {
	if (!(new = realloc(new, (MAX_RECIPIENTS + 1) * sizeof(char *))))
	    exitPGP(7);
    }
    new[entrynum] = ((void *) 0);
    return new;
}
