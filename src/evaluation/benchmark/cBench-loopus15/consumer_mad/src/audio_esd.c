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
typedef __ssize_t ssize_t;
typedef __typeof__(((int *) 0) - ((int *) 0)) ptrdiff_t;
typedef __typeof__(sizeof(int)) size_t;
typedef int wchar_t;
typedef __gid_t gid_t;
typedef __uid_t uid_t;
typedef __off_t off_t;
typedef __useconds_t useconds_t;
typedef __pid_t pid_t;
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
struct option {
    const char *name;
    int has_arg;
    int *flag;
    int val;
};
extern int getopt(int argc, char *const *argv, const char *shortopts);
extern int getopt_long(int argc, char *const *argv, const char *shortopts, const struct option *longopts, int *longind);
extern int getopt_long_only(int argc, char *const *argv, const char *shortopts, const struct option *longopts, int *longind);
extern int _getopt_internal(int argc, char *const *argv, const char *shortopts, const struct option *longopts, int *longind, int long_only);
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
extern int *__errno_location(void) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
enum { AU_PVTYPE_LONG = 1, AU_PVTYPE_DOUBLE = 2, AU_PVTYPE_PTR = 3 };
typedef struct _AUpvlist *AUpvlist;
__attribute__ ((visibility("default")))
AUpvlist AUpvnew(int maxItems);
__attribute__ ((visibility("default")))
int AUpvgetmaxitems(AUpvlist);
__attribute__ ((visibility("default")))
int AUpvfree(AUpvlist);
__attribute__ ((visibility("default")))
int AUpvsetparam(AUpvlist, int item, int param);
__attribute__ ((visibility("default")))
int AUpvsetvaltype(AUpvlist, int item, int type);
__attribute__ ((visibility("default")))
int AUpvsetval(AUpvlist, int item, void *val);
__attribute__ ((visibility("default")))
int AUpvgetparam(AUpvlist, int item, int *param);
__attribute__ ((visibility("default")))
int AUpvgetvaltype(AUpvlist, int item, int *type);
__attribute__ ((visibility("default")))
int AUpvgetval(AUpvlist, int item, void *val);
typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;
__extension__ typedef long long int int64_t;
typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;
typedef unsigned int uint32_t;
__extension__ typedef unsigned long long int uint64_t;
typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;
__extension__ typedef long long int int_least64_t;
typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;
__extension__ typedef unsigned long long int uint_least64_t;
typedef signed char int_fast8_t;
typedef int int_fast16_t;
typedef int int_fast32_t;
__extension__ typedef long long int int_fast64_t;
typedef unsigned char uint_fast8_t;
typedef unsigned int uint_fast16_t;
typedef unsigned int uint_fast32_t;
__extension__ typedef unsigned long long int uint_fast64_t;
typedef unsigned int uintptr_t;
__extension__ typedef long long int intmax_t;
__extension__ typedef unsigned long long int uintmax_t;
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
typedef __mode_t mode_t;
typedef __nlink_t nlink_t;
typedef __id_t id_t;
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;
typedef __key_t key_t;
typedef __time_t time_t;
typedef __clockid_t clockid_t;
typedef __timer_t timer_t;
typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
typedef unsigned int u_int8_t __attribute__ ((__mode__(__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__(__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__(__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__(__DI__)));
typedef int register_t __attribute__ ((__mode__(__word__)));
typedef int __sig_atomic_t;
typedef struct {
    unsigned long int __val[(1024 / (8 * sizeof(unsigned long int)))];
} __sigset_t;
typedef __sigset_t sigset_t;
struct timespec {
    __time_t tv_sec;
    long int tv_nsec;
};
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
typedef struct _AFvirtualfile AFvirtualfile;
typedef struct _AFfilesetup *AFfilesetup;
typedef struct _AFfilehandle *AFfilehandle;
typedef void (*AFerrfunc) (long, const char *);
typedef int64_t AFframecount;
typedef int64_t AFfileoffset;
enum { AF_DEFAULT_TRACK = 1001 };
enum { AF_DEFAULT_INST = 2001 };
enum { AF_NUM_UNLIMITED = 99999 };
enum { AF_BYTEORDER_BIGENDIAN = 501, AF_BYTEORDER_LITTLEENDIAN = 502 };
enum { AF_FILE_UNKNOWN = -1, AF_FILE_RAWDATA = 0, AF_FILE_AIFFC = 1, AF_FILE_AIFF = 2, AF_FILE_NEXTSND = 3, AF_FILE_WAVE = 4, AF_FILE_BICSF = 5, AF_FILE_IRCAM = AF_FILE_BICSF, AF_FILE_MPEG1BITSTREAM = 6, AF_FILE_SOUNDDESIGNER1 = 7, AF_FILE_SOUNDDESIGNER2 = 8, AF_FILE_AVR = 9, AF_FILE_IFF_8SVX = 10, AF_FILE_SAMPLEVISION = 11, AF_FILE_VOC = 12, AF_FILE_NIST_SPHERE = 13, AF_FILE_SOUNDFONT2 = 14, AF_FILE_CAF = 15, AF_FILE_FLAC = 16 };
enum { AF_LOOP_MODE_NOLOOP = 0, AF_LOOP_MODE_FORW = 1, AF_LOOP_MODE_FORWBAKW = 2 };
enum { AF_SAMPFMT_TWOSCOMP = 401, AF_SAMPFMT_UNSIGNED = 402, AF_SAMPFMT_FLOAT = 403, AF_SAMPFMT_DOUBLE = 404 };
enum { AF_INST_LOOP_OFF = 0, AF_INST_LOOP_CONTINUOUS = 1, AF_INST_LOOP_SUSTAIN = 3 };
enum { AF_INST_MIDI_BASENOTE = 301, AF_INST_NUMCENTS_DETUNE = 302, AF_INST_MIDI_LONOTE = 303, AF_INST_MIDI_HINOTE = 304, AF_INST_MIDI_LOVELOCITY = 305, AF_INST_MIDI_HIVELOCITY = 306, AF_INST_NUMDBS_GAIN = 307, AF_INST_SUSLOOPID = 308, AF_INST_RELLOOPID = 309, AF_INST_SAMP_STARTFRAME = 310, AF_INST_SAMP_ENDFRAME = 311, AF_INST_SAMP_MODE = 312, AF_INST_TRACKID = 313, AF_INST_NAME = 314, AF_INST_SAMP_RATE = 315, AF_INST_PRESETID = 316, AF_INST_PRESET_NAME = 317 };
enum { AF_MISC_UNRECOGNIZED = 0, AF_MISC_COPY = 201, AF_MISC_AUTH = 202, AF_MISC_NAME = 203, AF_MISC_ANNO = 204, AF_MISC_APPL = 205, AF_MISC_MIDI = 206, AF_MISC_PCMMAP = 207, AF_MISC_NeXT = 208, AF_MISC_IRCAM_PEAKAMP = 209, AF_MISC_IRCAM_COMMENT = 210, AF_MISC_COMMENT = 210, AF_MISC_ICMT = AF_MISC_COMMENT, AF_MISC_ICRD = 211, AF_MISC_ISFT = 212 };
enum { AF_COMPRESSION_UNKNOWN = -1, AF_COMPRESSION_NONE = 0, AF_COMPRESSION_G722 = 501, AF_COMPRESSION_G711_ULAW = 502, AF_COMPRESSION_G711_ALAW = 503, AF_COMPRESSION_APPLE_ACE2 = 504, AF_COMPRESSION_APPLE_ACE8 = 505, AF_COMPRESSION_APPLE_MAC3 = 506, AF_COMPRESSION_APPLE_MAC6 = 507, AF_COMPRESSION_G726 = 517, AF_COMPRESSION_G728 = 518, AF_COMPRESSION_DVI_AUDIO = 519, AF_COMPRESSION_IMA = AF_COMPRESSION_DVI_AUDIO, AF_COMPRESSION_GSM = 520, AF_COMPRESSION_FS1016 = 521, AF_COMPRESSION_DV = 522, AF_COMPRESSION_MS_ADPCM = 523, AF_COMPRESSION_FLAC = 530, AF_COMPRESSION_ALAC = 540 };
enum { AF_QUERYTYPE_INSTPARAM = 500, AF_QUERYTYPE_FILEFMT = 501, AF_QUERYTYPE_COMPRESSION = 502, AF_QUERYTYPE_COMPRESSIONPARAM = 503, AF_QUERYTYPE_MISC = 504, AF_QUERYTYPE_INST = 505, AF_QUERYTYPE_MARK = 506, AF_QUERYTYPE_LOOP = 507 };
enum { AF_QUERY_NAME = 600, AF_QUERY_DESC = 601, AF_QUERY_LABEL = 602, AF_QUERY_TYPE = 603, AF_QUERY_DEFAULT = 604, AF_QUERY_ID_COUNT = 605, AF_QUERY_IDS = 606, AF_QUERY_IMPLEMENTED = 613, AF_QUERY_TYPE_COUNT = 607, AF_QUERY_TYPES = 608, AF_QUERY_NATIVE_SAMPFMT = 609, AF_QUERY_NATIVE_SAMPWIDTH = 610, AF_QUERY_SQUISHFAC = 611, AF_QUERY_MAX_NUMBER = 612, AF_QUERY_SUPPORTED = 613 };
enum { AF_QUERY_TRACKS = 620, AF_QUERY_CHANNELS = 621, AF_QUERY_SAMPLE_SIZES = 622, AF_QUERY_SAMPLE_FORMATS = 623, AF_QUERY_COMPRESSION_TYPES = 624 };
enum { AF_QUERY_VALUE_COUNT = 650, AF_QUERY_VALUES = 651 };
enum { AF_BAD_NOT_IMPLEMENTED = 0, AF_BAD_FILEHANDLE = 1, AF_BAD_OPEN = 3, AF_BAD_CLOSE = 4, AF_BAD_READ = 5, AF_BAD_WRITE = 6, AF_BAD_LSEEK = 7, AF_BAD_NO_FILEHANDLE = 8, AF_BAD_ACCMODE = 10, AF_BAD_NOWRITEACC = 11, AF_BAD_NOREADACC = 12, AF_BAD_FILEFMT = 13, AF_BAD_RATE = 14, AF_BAD_CHANNELS = 15, AF_BAD_SAMPCNT = 16, AF_BAD_WIDTH = 17, AF_BAD_SEEKMODE = 18, AF_BAD_NO_LOOPDATA = 19, AF_BAD_MALLOC = 20, AF_BAD_LOOPID = 21, AF_BAD_SAMPFMT = 22, AF_BAD_FILESETUP = 23, AF_BAD_TRACKID = 24, AF_BAD_NUMTRACKS = 25, AF_BAD_NO_FILESETUP = 26, AF_BAD_LOOPMODE = 27, AF_BAD_INSTID = 28, AF_BAD_NUMLOOPS = 29, AF_BAD_NUMMARKS = 30, AF_BAD_MARKID = 31, AF_BAD_MARKPOS = 32, AF_BAD_NUMINSTS = 33, AF_BAD_NOAESDATA = 34, AF_BAD_MISCID = 35, AF_BAD_NUMMISC = 36, AF_BAD_MISCSIZE = 37, AF_BAD_MISCTYPE = 38, AF_BAD_MISCSEEK = 39, AF_BAD_STRLEN = 40, AF_BAD_RATECONV = 45, AF_BAD_SYNCFILE = 46, AF_BAD_CODEC_CONFIG = 47, AF_BAD_CODEC_STATE = 48, AF_BAD_CODEC_LICENSE = 49, AF_BAD_CODEC_TYPE = 50, AF_BAD_COMPRESSION = AF_BAD_CODEC_CONFIG, AF_BAD_COMPTYPE = AF_BAD_CODEC_TYPE, AF_BAD_INSTPTYPE = 51, AF_BAD_INSTPID = 52, AF_BAD_BYTEORDER = 53, AF_BAD_FILEFMT_PARAM = 54, AF_BAD_COMP_PARAM = 55, AF_BAD_DATAOFFSET = 56, AF_BAD_FRAMECNT = 57, AF_BAD_QUERYTYPE = 58, AF_BAD_QUERY = 59, AF_WARNING_CODEC_RATE = 60, AF_WARNING_RATECVT = 61, AF_BAD_HEADER = 62, AF_BAD_FRAME = 63, AF_BAD_LOOPCOUNT = 64, AF_BAD_DMEDIA_CALL = 65, AF_BAD_AIFF_HEADER = 108, AF_BAD_AIFF_FORM = 109, AF_BAD_AIFF_SSND = 110, AF_BAD_AIFF_CHUNKID = 111, AF_BAD_AIFF_COMM = 112, AF_BAD_AIFF_INST = 113, AF_BAD_AIFF_MARK = 114, AF_BAD_AIFF_SKIP = 115, AF_BAD_AIFF_LOOPMODE = 116 };
enum { AF_ERR_NOT_IMPLEMENTED = 0 + 3000, AF_ERR_BAD_FILEHANDLE = 1 + 3000, AF_ERR_BAD_READ = 5 + 3000, AF_ERR_BAD_WRITE = 6 + 3000, AF_ERR_BAD_LSEEK = 7 + 3000, AF_ERR_BAD_ACCMODE = 10 + 3000, AF_ERR_NO_WRITEACC = 11 + 3000, AF_ERR_NO_READACC = 12 + 3000, AF_ERR_BAD_FILEFMT = 13 + 3000, AF_ERR_BAD_RATE = 14 + 3000, AF_ERR_BAD_CHANNELS = 15 + 3000, AF_ERR_BAD_SAMPCNT = 16 + 3000, AF_ERR_BAD_WIDTH = 17 + 3000, AF_ERR_BAD_SEEKMODE = 18 + 3000, AF_ERR_BAD_LOOPID = 21 + 3000, AF_ERR_BAD_SAMPFMT = 22 + 3000, AF_ERR_BAD_FILESETUP = 23 + 3000, AF_ERR_BAD_TRACKID = 24 + 3000, AF_ERR_BAD_NUMTRACKS = 25 + 3000, AF_ERR_BAD_LOOPMODE = 27 + 3000, AF_ERR_BAD_INSTID = 28 + 3000, AF_ERR_BAD_NUMLOOPS = 29 + 3000, AF_ERR_BAD_NUMMARKS = 30 + 3000, AF_ERR_BAD_MARKID = 31 + 3000, AF_ERR_BAD_MARKPOS = 32 + 3000, AF_ERR_BAD_NUMINSTS = 33 + 3000, AF_ERR_BAD_NOAESDATA = 34 + 3000, AF_ERR_BAD_MISCID = 35 + 3000, AF_ERR_BAD_NUMMISC = 36 + 3000, AF_ERR_BAD_MISCSIZE = 37 + 3000, AF_ERR_BAD_MISCTYPE = 38 + 3000, AF_ERR_BAD_MISCSEEK = 39 + 3000, AF_ERR_BAD_STRLEN = 40 + 3000, AF_ERR_BAD_RATECONV = 45 + 3000, AF_ERR_BAD_SYNCFILE = 46 + 3000, AF_ERR_BAD_CODEC_CONFIG = 47 + 3000, AF_ERR_BAD_CODEC_TYPE = 50 + 3000, AF_ERR_BAD_INSTPTYPE = 51 + 3000, AF_ERR_BAD_INSTPID = 52 + 3000, AF_ERR_BAD_BYTEORDER = 53 + 3000, AF_ERR_BAD_FILEFMT_PARAM = 54 + 3000, AF_ERR_BAD_COMP_PARAM = 55 + 3000, AF_ERR_BAD_DATAOFFSET = 56 + 3000, AF_ERR_BAD_FRAMECNT = 57 + 3000, AF_ERR_BAD_QUERYTYPE = 58 + 3000, AF_ERR_BAD_QUERY = 59 + 3000, AF_ERR_BAD_HEADER = 62 + 3000, AF_ERR_BAD_FRAME = 63 + 3000, AF_ERR_BAD_LOOPCOUNT = 64 + 3000, AF_ERR_BAD_AIFF_HEADER = 66 + 3000, AF_ERR_BAD_AIFF_FORM = 67 + 3000, AF_ERR_BAD_AIFF_SSND = 68 + 3000, AF_ERR_BAD_AIFF_CHUNKID = 69 + 3000, AF_ERR_BAD_AIFF_COMM = 70 + 3000, AF_ERR_BAD_AIFF_INST = 71 + 3000, AF_ERR_BAD_AIFF_MARK = 72 + 3000, AF_ERR_BAD_AIFF_SKIP = 73 + 3000, AF_ERR_BAD_AIFF_LOOPMODE = 74 + 3000 };
__attribute__ ((visibility("default")))
AFerrfunc afSetErrorHandler(AFerrfunc efunc);
__attribute__ ((visibility("default")))
AUpvlist afQuery(int querytype, int arg1, int arg2, int arg3, int arg4);
__attribute__ ((visibility("default")))
long afQueryLong(int querytype, int arg1, int arg2, int arg3, int arg4);
__attribute__ ((visibility("default")))
double afQueryDouble(int querytype, int arg1, int arg2, int arg3, int arg4);
__attribute__ ((visibility("default")))
void *afQueryPointer(int querytype, int arg1, int arg2, int arg3, int arg4);
__attribute__ ((visibility("default")))
AFfilesetup afNewFileSetup(void);
__attribute__ ((visibility("default")))
void afFreeFileSetup(AFfilesetup);
__attribute__ ((visibility("default")))
int afIdentifyFD(int);
__attribute__ ((visibility("default")))
int afIdentifyNamedFD(int, const char *filename, int *implemented);
__attribute__ ((visibility("default")))
AFfilehandle afOpenFile(const char *filename, const char *mode, AFfilesetup setup);
__attribute__ ((visibility("default")))
AFfilehandle afOpenVirtualFile(AFvirtualfile * vfile, const char *mode, AFfilesetup setup);
__attribute__ ((visibility("default")))
AFfilehandle afOpenFD(int fd, const char *mode, AFfilesetup setup);
__attribute__ ((visibility("default")))
AFfilehandle afOpenNamedFD(int fd, const char *mode, AFfilesetup setup, const char *filename);
__attribute__ ((visibility("default")))
void afSaveFilePosition(AFfilehandle file);
__attribute__ ((visibility("default")))
void afRestoreFilePosition(AFfilehandle file);
__attribute__ ((visibility("default")))
int afSyncFile(AFfilehandle file);
__attribute__ ((visibility("default")))
int afCloseFile(AFfilehandle file);
__attribute__ ((visibility("default")))
void afInitFileFormat(AFfilesetup, int format);
__attribute__ ((visibility("default")))
int afGetFileFormat(AFfilehandle, int *version);
__attribute__ ((visibility("default")))
void afInitTrackIDs(AFfilesetup, const int *trackids, int trackCount);
__attribute__ ((visibility("default")))
int afGetTrackIDs(AFfilehandle, int *trackids);
__attribute__ ((visibility("default")))
int afReadFrames(AFfilehandle, int track, void *buffer, int frameCount);
__attribute__ ((visibility("default")))
int afWriteFrames(AFfilehandle, int track, const void *buffer, int frameCount);
__attribute__ ((visibility("default")))
AFframecount afSeekFrame(AFfilehandle, int track, AFframecount frameoffset);
__attribute__ ((visibility("default")))
AFframecount afTellFrame(AFfilehandle, int track);
__attribute__ ((visibility("default")))
AFfileoffset afGetTrackBytes(AFfilehandle, int track);
__attribute__ ((visibility("default")))
float afGetFrameSize(AFfilehandle, int track, int expand3to4);
__attribute__ ((visibility("default")))
float afGetVirtualFrameSize(AFfilehandle, int track, int expand3to4);
__attribute__ ((visibility("default")))
void afInitAESChannelData(AFfilesetup, int track);
__attribute__ ((visibility("default")))
void afInitAESChannelDataTo(AFfilesetup, int track, int willBeData);
__attribute__ ((visibility("default")))
int afGetAESChannelData(AFfilehandle, int track, unsigned char buf[24]);
__attribute__ ((visibility("default")))
void afSetAESChannelData(AFfilehandle, int track, unsigned char buf[24]);
__attribute__ ((visibility("default")))
void afInitByteOrder(AFfilesetup, int track, int byteOrder);
__attribute__ ((visibility("default")))
int afGetByteOrder(AFfilehandle, int track);
__attribute__ ((visibility("default")))
int afSetVirtualByteOrder(AFfilehandle, int track, int byteOrder);
__attribute__ ((visibility("default")))
int afGetVirtualByteOrder(AFfilehandle, int track);
__attribute__ ((visibility("default")))
void afInitChannels(AFfilesetup, int track, int nchannels);
__attribute__ ((visibility("default")))
int afGetChannels(AFfilehandle, int track);
__attribute__ ((visibility("default")))
int afSetVirtualChannels(AFfilehandle, int track, int channelCount);
__attribute__ ((visibility("default")))
int afGetVirtualChannels(AFfilehandle, int track);
__attribute__ ((visibility("default")))
void afSetChannelMatrix(AFfilehandle, int track, double *matrix);
__attribute__ ((visibility("default")))
void afInitSampleFormat(AFfilesetup, int track, int sampleFormat, int sampleWidth);
__attribute__ ((visibility("default")))
void afGetSampleFormat(AFfilehandle file, int track, int *sampleFormat, int *sampleWidth);
__attribute__ ((visibility("default")))
int afSetVirtualSampleFormat(AFfilehandle, int track, int sampleFormat, int sampleWidth);
__attribute__ ((visibility("default")))
void afGetVirtualSampleFormat(AFfilehandle, int track, int *sampleFormat, int *sampleWidth);
__attribute__ ((visibility("default")))
void afInitRate(AFfilesetup, int track, double rate);
__attribute__ ((visibility("default")))
double afGetRate(AFfilehandle, int track);
__attribute__ ((visibility("default")))
void afInitCompression(AFfilesetup, int track, int compression);
__attribute__ ((visibility("default")))
int afGetCompression(AFfilehandle, int track);
__attribute__ ((visibility("default")))
void afInitPCMMapping(AFfilesetup filesetup, int track, double slope, double intercept, double minClip, double maxClip);
__attribute__ ((visibility("default")))
void afGetPCMMapping(AFfilehandle file, int track, double *slope, double *intercept, double *minClip, double *maxClip);
__attribute__ ((visibility("default")))
int afSetTrackPCMMapping(AFfilehandle file, int track, double slope, double intercept, double minClip, double maxClip);
__attribute__ ((visibility("default")))
int afSetVirtualPCMMapping(AFfilehandle file, int track, double slope, double intercept, double minClip, double maxClip);
__attribute__ ((visibility("default")))
void afGetVirtualPCMMapping(AFfilehandle file, int track, double *slope, double *intercept, double *minClip, double *maxClip);
__attribute__ ((visibility("default")))
void afInitDataOffset(AFfilesetup, int track, AFfileoffset offset);
__attribute__ ((visibility("default")))
AFfileoffset afGetDataOffset(AFfilehandle, int track);
__attribute__ ((visibility("default")))
void afInitFrameCount(AFfilesetup, int track, AFframecount frameCount);
__attribute__ ((visibility("default")))
AFframecount afGetFrameCount(AFfilehandle file, int track);
__attribute__ ((visibility("default")))
void afInitLoopIDs(AFfilesetup, int instid, const int *ids, int nids);
__attribute__ ((visibility("default")))
int afGetLoopIDs(AFfilehandle, int instid, int loopids[]);
__attribute__ ((visibility("default")))
void afSetLoopMode(AFfilehandle, int instid, int loop, int mode);
__attribute__ ((visibility("default")))
int afGetLoopMode(AFfilehandle, int instid, int loopid);
__attribute__ ((visibility("default")))
int afSetLoopCount(AFfilehandle, int instid, int loop, int count);
__attribute__ ((visibility("default")))
int afGetLoopCount(AFfilehandle, int instid, int loopid);
__attribute__ ((visibility("default")))
void afSetLoopStart(AFfilehandle, int instid, int loopid, int markerid);
__attribute__ ((visibility("default")))
int afGetLoopStart(AFfilehandle, int instid, int loopid);
__attribute__ ((visibility("default")))
void afSetLoopEnd(AFfilehandle, int instid, int loopid, int markerid);
__attribute__ ((visibility("default")))
int afGetLoopEnd(AFfilehandle, int instid, int loopid);
__attribute__ ((visibility("default")))
int afSetLoopStartFrame(AFfilehandle, int instid, int loop, AFframecount startFrame);
__attribute__ ((visibility("default")))
AFframecount afGetLoopStartFrame(AFfilehandle, int instid, int loop);
__attribute__ ((visibility("default")))
int afSetLoopEndFrame(AFfilehandle, int instid, int loop, AFframecount startFrame);
__attribute__ ((visibility("default")))
AFframecount afGetLoopEndFrame(AFfilehandle, int instid, int loop);
__attribute__ ((visibility("default")))
void afSetLoopTrack(AFfilehandle, int instid, int loopid, int trackid);
__attribute__ ((visibility("default")))
int afGetLoopTrack(AFfilehandle, int instid, int loopid);
__attribute__ ((visibility("default")))
void afInitMarkIDs(AFfilesetup, int trackid, const int *ids, int nids);
__attribute__ ((visibility("default")))
int afGetMarkIDs(AFfilehandle file, int trackid, int markids[]);
__attribute__ ((visibility("default")))
void afSetMarkPosition(AFfilehandle file, int trackid, int markid, AFframecount markpos);
__attribute__ ((visibility("default")))
AFframecount afGetMarkPosition(AFfilehandle file, int trackid, int markid);
__attribute__ ((visibility("default")))
void afInitMarkName(AFfilesetup, int trackid, int marker, const char *name);
__attribute__ ((visibility("default")))
void afInitMarkComment(AFfilesetup, int trackid, int marker, const char *comment);
__attribute__ ((visibility("default")))
char *afGetMarkName(AFfilehandle file, int trackid, int markid);
__attribute__ ((visibility("default")))
char *afGetMarkComment(AFfilehandle file, int trackid, int markid);
__attribute__ ((visibility("default")))
void afInitInstIDs(AFfilesetup, const int *ids, int nids);
__attribute__ ((visibility("default")))
int afGetInstIDs(AFfilehandle file, int *instids);
__attribute__ ((visibility("default")))
void afGetInstParams(AFfilehandle file, int instid, AUpvlist pvlist, int nparams);
__attribute__ ((visibility("default")))
void afSetInstParams(AFfilehandle file, int instid, AUpvlist pvlist, int nparams);
__attribute__ ((visibility("default")))
long afGetInstParamLong(AFfilehandle file, int instid, int param);
__attribute__ ((visibility("default")))
void afSetInstParamLong(AFfilehandle file, int instid, int param, long value);
__attribute__ ((visibility("default")))
void afInitMiscIDs(AFfilesetup, const int *ids, int nids);
__attribute__ ((visibility("default")))
int afGetMiscIDs(AFfilehandle, int *ids);
__attribute__ ((visibility("default")))
void afInitMiscType(AFfilesetup, int miscellaneousid, int type);
__attribute__ ((visibility("default")))
int afGetMiscType(AFfilehandle, int miscellaneousid);
__attribute__ ((visibility("default")))
void afInitMiscSize(AFfilesetup, int miscellaneousid, int size);
__attribute__ ((visibility("default")))
int afGetMiscSize(AFfilehandle, int miscellaneousid);
__attribute__ ((visibility("default")))
int afWriteMisc(AFfilehandle, int miscellaneousid, const void *buf, int bytes);
__attribute__ ((visibility("default")))
int afReadMisc(AFfilehandle, int miscellaneousid, void *buf, int bytes);
__attribute__ ((visibility("default")))
int afSeekMisc(AFfilehandle, int miscellaneousid, int offset);
enum esd_proto { ESD_PROTO_CONNECT, ESD_PROTO_LOCK, ESD_PROTO_UNLOCK, ESD_PROTO_STREAM_PLAY, ESD_PROTO_STREAM_REC, ESD_PROTO_STREAM_MON, ESD_PROTO_SAMPLE_CACHE, ESD_PROTO_SAMPLE_FREE, ESD_PROTO_SAMPLE_PLAY, ESD_PROTO_SAMPLE_LOOP, ESD_PROTO_SAMPLE_STOP, ESD_PROTO_SAMPLE_KILL, ESD_PROTO_STANDBY, ESD_PROTO_RESUME, ESD_PROTO_SAMPLE_GETID, ESD_PROTO_STREAM_FILT, ESD_PROTO_SERVER_INFO, ESD_PROTO_ALL_INFO, ESD_PROTO_SUBSCRIBE, ESD_PROTO_UNSUBSCRIBE, ESD_PROTO_STREAM_PAN, ESD_PROTO_SAMPLE_PAN, ESD_PROTO_STANDBY_MODE, ESD_PROTO_MAX };
typedef int esd_format_t;
typedef int esd_proto_t;
typedef unsigned char octet;
int esd_open_sound(const char *host);
int esd_send_auth(int sock);
int esd_lock(int esd);
int esd_unlock(int esd);
int esd_standby(int esd);
int esd_resume(int esd);
int esd_play_stream(esd_format_t format, int rate, const char *host, const char *name);
int esd_play_stream_fallback(esd_format_t format, int rate, const char *host, const char *name);
int esd_monitor_stream(esd_format_t format, int rate, const char *host, const char *name);
int esd_record_stream(esd_format_t format, int rate, const char *host, const char *name);
int esd_record_stream_fallback(esd_format_t format, int rate, const char *host, const char *name);
int esd_filter_stream(esd_format_t format, int rate, const char *host, const char *name);
int esd_sample_cache(int esd, esd_format_t format, int rate, int length, const char *name);
int esd_confirm_sample_cache(int esd);
int esd_sample_getid(int esd, const char *name);
int esd_sample_free(int esd, int sample);
int esd_sample_play(int esd, int sample);
int esd_sample_loop(int esd, int sample);
int esd_sample_stop(int esd, int sample);
int esd_sample_kill(int esd, int sample);
int esd_close(int esd);
typedef struct esd_server_info {
    int version;
    esd_format_t format;
    int rate;
} esd_server_info_t;
typedef struct esd_player_info {
    struct esd_player_info *next;
    esd_server_info_t *server;
    int source_id;
    char name[(128)];
    int rate;
    int left_vol_scale;
    int right_vol_scale;
    esd_format_t format;
} esd_player_info_t;
typedef struct esd_sample_info {
    struct esd_sample_info *next;
    esd_server_info_t *server;
    int sample_id;
    char name[(128)];
    int rate;
    int left_vol_scale;
    int right_vol_scale;
    esd_format_t format;
    int length;
} esd_sample_info_t;
typedef struct esd_info {
    esd_server_info_t *server;
    esd_player_info_t *player_list;
    esd_sample_info_t *sample_list;
} esd_info_t;
enum esd_standby_mode { ESM_ERROR, ESM_ON_STANDBY, ESM_ON_AUTOSTANDBY, ESM_RUNNING };
typedef int esd_standby_mode_t;
typedef int esd_new_player_callback_t(esd_player_info_t *);
typedef int esd_old_player_callback_t(esd_player_info_t *);
typedef int esd_new_sample_callback_t(esd_sample_info_t *);
typedef int esd_old_sample_callback_t(esd_sample_info_t *);
typedef struct esd_update_info_callbacks {
    esd_new_player_callback_t *esd_new_player_callback;
    esd_old_player_callback_t *esd_old_player_callback;
    esd_new_sample_callback_t *esd_new_sample_callback;
    esd_old_sample_callback_t *esd_old_sample_callback;
} esd_update_info_callbacks_t;
void esd_print_server_info(esd_server_info_t * server_info);
void esd_print_player_info(esd_player_info_t * player_info);
void esd_print_sample_info(esd_sample_info_t * sample_info);
void esd_print_all_info(esd_info_t * all_info);
esd_server_info_t *esd_get_server_info(int esd);
void esd_free_server_info(esd_server_info_t * server_info);
esd_info_t *esd_get_all_info(int esd);
esd_info_t *esd_subscribe_all_info(int esd);
esd_info_t *esd_update_info(int esd, esd_info_t * info, esd_update_info_callbacks_t * callbacks);
esd_info_t *esd_unsubscribe_info(int esd);
void esd_free_all_info(esd_info_t * info);
int esd_set_stream_pan(int esd, int stream_id, int left_scale, int right_scale);
int esd_set_default_sample_pan(int esd, int sample_id, int left_scale, int right_scale);
esd_standby_mode_t esd_get_standby_mode(int esd);
int esd_send_file(int esd, AFfilehandle au_file, int frame_length);
int esd_play_file(const char *name_prefix, const char *filename, int fallback);
int esd_file_cache(int esd, const char *name_prefix, const char *filename);
extern esd_format_t esd_audio_format;
extern int esd_audio_rate;
extern char *esd_audio_device;
const char *esd_audio_devices(void);
int esd_audio_open(void);
void esd_audio_close(void);
void esd_audio_pause(void);
int esd_audio_write(void *buffer, int buf_size);
int esd_audio_read(void *buffer, int buf_size);
void esd_audio_flush(void);
extern char const mad_version[];
extern char const mad_copyright[];
extern char const mad_author[];
extern char const mad_build[];
typedef signed int mad_fixed_t;
typedef signed int mad_fixed64hi_t;
typedef unsigned int mad_fixed64lo_t;
typedef mad_fixed_t mad_sample_t;
mad_fixed_t mad_f_abs(mad_fixed_t);
struct mad_bitptr {
    unsigned char const *byte;
    unsigned short cache;
    unsigned short left;
};
void mad_bit_init(struct mad_bitptr *, unsigned char const *);
unsigned int mad_bit_length(struct mad_bitptr const *, struct mad_bitptr const *);
unsigned char const *mad_bit_nextbyte(struct mad_bitptr const *);
void mad_bit_skip(struct mad_bitptr *, unsigned int);
unsigned long mad_bit_read(struct mad_bitptr *, unsigned int);
void mad_bit_write(struct mad_bitptr *, unsigned int, unsigned long);
unsigned short mad_bit_crc(struct mad_bitptr, unsigned int, unsigned short);
typedef struct {
    signed long seconds;
    unsigned long fraction;
} mad_timer_t;
extern mad_timer_t const mad_timer_zero;
enum mad_units { MAD_UNITS_HOURS = -2, MAD_UNITS_MINUTES = -1, MAD_UNITS_SECONDS = 0, MAD_UNITS_DECISECONDS = 10, MAD_UNITS_CENTISECONDS = 100, MAD_UNITS_MILLISECONDS = 1000, MAD_UNITS_8000_HZ = 8000, MAD_UNITS_11025_HZ = 11025, MAD_UNITS_12000_HZ = 12000, MAD_UNITS_16000_HZ = 16000, MAD_UNITS_22050_HZ = 22050, MAD_UNITS_24000_HZ = 24000, MAD_UNITS_32000_HZ = 32000, MAD_UNITS_44100_HZ = 44100, MAD_UNITS_48000_HZ = 48000, MAD_UNITS_24_FPS = 24, MAD_UNITS_25_FPS = 25, MAD_UNITS_30_FPS = 30, MAD_UNITS_48_FPS = 48, MAD_UNITS_50_FPS = 50, MAD_UNITS_60_FPS = 60, MAD_UNITS_75_FPS = 75, MAD_UNITS_23_976_FPS = -24, MAD_UNITS_24_975_FPS = -25, MAD_UNITS_29_97_FPS = -30, MAD_UNITS_47_952_FPS = -48, MAD_UNITS_49_95_FPS = -50, MAD_UNITS_59_94_FPS = -60 };
int mad_timer_compare(mad_timer_t, mad_timer_t);
void mad_timer_negate(mad_timer_t *);
mad_timer_t mad_timer_abs(mad_timer_t);
void mad_timer_set(mad_timer_t *, unsigned long, unsigned long, unsigned long);
void mad_timer_add(mad_timer_t *, mad_timer_t);
void mad_timer_multiply(mad_timer_t *, signed long);
signed long mad_timer_count(mad_timer_t, enum mad_units);
unsigned long mad_timer_fraction(mad_timer_t, unsigned long);
void mad_timer_string(mad_timer_t, char *, char const *, enum mad_units, enum mad_units, unsigned long);
enum mad_error { MAD_ERROR_NONE = 0x0000, MAD_ERROR_BUFLEN = 0x0001, MAD_ERROR_BUFPTR = 0x0002, MAD_ERROR_NOMEM = 0x0031, MAD_ERROR_LOSTSYNC = 0x0101, MAD_ERROR_BADLAYER = 0x0102, MAD_ERROR_BADBITRATE = 0x0103, MAD_ERROR_BADSAMPLERATE = 0x0104, MAD_ERROR_BADEMPHASIS = 0x0105, MAD_ERROR_BADCRC = 0x0201, MAD_ERROR_BADBITALLOC = 0x0211, MAD_ERROR_BADSCALEFACTOR = 0x0221, MAD_ERROR_BADFRAMELEN = 0x0231, MAD_ERROR_BADBIGVALUES = 0x0232, MAD_ERROR_BADBLOCKTYPE = 0x0233, MAD_ERROR_BADSCFSI = 0x0234, MAD_ERROR_BADDATAPTR = 0x0235, MAD_ERROR_BADPART3LEN = 0x0236, MAD_ERROR_BADHUFFTABLE = 0x0237, MAD_ERROR_BADHUFFDATA = 0x0238, MAD_ERROR_BADSTEREO = 0x0239 };
struct mad_stream {
    unsigned char const *buffer;
    unsigned char const *bufend;
    unsigned long skiplen;
    int sync;
    unsigned long freerate;
    unsigned char const *this_frame;
    unsigned char const *next_frame;
    struct mad_bitptr ptr;
    struct mad_bitptr anc_ptr;
    unsigned int anc_bitlen;
    unsigned char (*main_data)[(511 + 2048 + 8)];
    unsigned int md_len;
    int options;
    enum mad_error error;
};
enum { MAD_OPTION_IGNORECRC = 0x0001, MAD_OPTION_HALFSAMPLERATE = 0x0002 };
void mad_stream_init(struct mad_stream *);
void mad_stream_finish(struct mad_stream *);
void mad_stream_buffer(struct mad_stream *, unsigned char const *, unsigned long);
void mad_stream_skip(struct mad_stream *, unsigned long);
int mad_stream_sync(struct mad_stream *);
char const *mad_stream_errorstr(struct mad_stream const *);
enum mad_layer { MAD_LAYER_I = 1, MAD_LAYER_II = 2, MAD_LAYER_III = 3 };
enum mad_mode { MAD_MODE_SINGLE_CHANNEL = 0, MAD_MODE_DUAL_CHANNEL = 1, MAD_MODE_JOINT_STEREO = 2, MAD_MODE_STEREO = 3 };
enum mad_emphasis { MAD_EMPHASIS_NONE = 0, MAD_EMPHASIS_50_15_US = 1, MAD_EMPHASIS_CCITT_J_17 = 3 };
struct mad_header {
    enum mad_layer layer;
    enum mad_mode mode;
    int mode_extension;
    enum mad_emphasis emphasis;
    unsigned long bitrate;
    unsigned int samplerate;
    unsigned short crc_check;
    unsigned short crc_target;
    int flags;
    int private_bits;
    mad_timer_t duration;
};
struct mad_frame {
    struct mad_header header;
    int options;
    mad_fixed_t sbsample[2][36][32];
    mad_fixed_t(*overlap)[2][32][18];
};
enum { MAD_FLAG_NPRIVATE_III = 0x0007, MAD_FLAG_INCOMPLETE = 0x0008, MAD_FLAG_PROTECTION = 0x0010, MAD_FLAG_COPYRIGHT = 0x0020, MAD_FLAG_ORIGINAL = 0x0040, MAD_FLAG_PADDING = 0x0080, MAD_FLAG_I_STEREO = 0x0100, MAD_FLAG_MS_STEREO = 0x0200, MAD_FLAG_FREEFORMAT = 0x0400, MAD_FLAG_LSF_EXT = 0x1000, MAD_FLAG_MC_EXT = 0x2000, MAD_FLAG_MPEG_2_5_EXT = 0x4000 };
enum { MAD_PRIVATE_HEADER = 0x0100, MAD_PRIVATE_III = 0x001f };
void mad_header_init(struct mad_header *);
int mad_header_decode(struct mad_header *, struct mad_stream *);
void mad_frame_init(struct mad_frame *);
void mad_frame_finish(struct mad_frame *);
int mad_frame_decode(struct mad_frame *, struct mad_stream *);
void mad_frame_mute(struct mad_frame *);
struct mad_pcm {
    unsigned int samplerate;
    unsigned short channels;
    unsigned short length;
    mad_fixed_t samples[2][1152];
};
struct mad_synth {
    mad_fixed_t filter[2][2][2][16][8];
    unsigned int phase;
    struct mad_pcm pcm;
};
enum { MAD_PCM_CHANNEL_SINGLE = 0 };
enum { MAD_PCM_CHANNEL_DUAL_1 = 0, MAD_PCM_CHANNEL_DUAL_2 = 1 };
enum { MAD_PCM_CHANNEL_STEREO_LEFT = 0, MAD_PCM_CHANNEL_STEREO_RIGHT = 1 };
void mad_synth_init(struct mad_synth *);
void mad_synth_mute(struct mad_synth *);
void mad_synth_frame(struct mad_synth *, struct mad_frame const *);
enum mad_decoder_mode { MAD_DECODER_MODE_SYNC = 0, MAD_DECODER_MODE_ASYNC };
enum mad_flow { MAD_FLOW_CONTINUE = 0x0000, MAD_FLOW_STOP = 0x0010, MAD_FLOW_BREAK = 0x0011, MAD_FLOW_IGNORE = 0x0020 };
struct mad_decoder {
    enum mad_decoder_mode mode;
    int options;
    struct {
	long pid;
	int in;
	int out;
    } async;
    struct {
	struct mad_stream stream;
	struct mad_frame frame;
	struct mad_synth synth;
    } *sync;
    void *cb_data;
    enum mad_flow (*input_func) (void *, struct mad_stream *);
    enum mad_flow (*header_func) (void *, struct mad_header const *);
    enum mad_flow (*filter_func) (void *, struct mad_stream const *, struct mad_frame *);
    enum mad_flow (*output_func) (void *, struct mad_header const *, struct mad_pcm *);
    enum mad_flow (*error_func) (void *, struct mad_stream *, struct mad_frame *);
    enum mad_flow (*message_func) (void *, void *, unsigned int *);
};
void mad_decoder_init(struct mad_decoder *, void *, enum mad_flow (*)(void *, struct mad_stream *), enum mad_flow (*)(void *, struct mad_header const *), enum mad_flow (*)(void *, struct mad_stream const *, struct mad_frame *), enum mad_flow (*)(void *, struct mad_header const *, struct mad_pcm *), enum mad_flow (*)(void *, struct mad_stream *, struct mad_frame *), enum mad_flow (*)(void *, void *, unsigned int *));
int mad_decoder_finish(struct mad_decoder *);
int mad_decoder_run(struct mad_decoder *, enum mad_decoder_mode);
int mad_decoder_message(struct mad_decoder *, void *, unsigned int *);
enum audio_command { AUDIO_COMMAND_INIT, AUDIO_COMMAND_CONFIG, AUDIO_COMMAND_PLAY, AUDIO_COMMAND_STOP, AUDIO_COMMAND_FINISH };
enum audio_mode { AUDIO_MODE_ROUND, AUDIO_MODE_DITHER };
struct audio_stats {
    unsigned long clipped_samples;
    mad_fixed_t peak_clipping;
    mad_fixed_t peak_sample;
};
union audio_control {
    enum audio_command command;
    struct audio_init {
	enum audio_command command;
	char const *path;
    } init;
    struct audio_config {
	enum audio_command command;
	unsigned int channels;
	unsigned int speed;
	unsigned int precision;
    } config;
    struct audio_play {
	enum audio_command command;
	unsigned int nsamples;
	mad_fixed_t const *samples[2];
	enum audio_mode mode;
	struct audio_stats *stats;
    } play;
    struct audio_stop {
	enum audio_command command;
	int flush;
    } stop;
    struct audio_finish {
	enum audio_command command;
    } finish;
};
struct audio_dither {
    mad_fixed_t error[3];
    mad_fixed_t random;
};
extern char const *audio_error;
typedef int audio_ctlfunc_t(union audio_control *);
audio_ctlfunc_t *audio_output(char const **);
audio_ctlfunc_t audio_oss;
audio_ctlfunc_t audio_esd;
audio_ctlfunc_t audio_empeg;
audio_ctlfunc_t audio_sun;
audio_ctlfunc_t audio_win32;
audio_ctlfunc_t audio_raw;
audio_ctlfunc_t audio_cdda;
audio_ctlfunc_t audio_aiff;
audio_ctlfunc_t audio_wave;
audio_ctlfunc_t audio_snd;
audio_ctlfunc_t audio_hex;
audio_ctlfunc_t audio_null;
void audio_control_init(union audio_control *, enum audio_command);
signed long audio_linear_round(unsigned int, mad_fixed_t, struct audio_stats *);
signed long audio_linear_dither(unsigned int, mad_fixed_t, struct audio_dither *, struct audio_stats *);
unsigned char audio_mulaw_round(mad_fixed_t, struct audio_stats *);
unsigned char audio_mulaw_dither(mad_fixed_t, struct audio_dither *, struct audio_stats *);
typedef unsigned int audio_pcmfunc_t(unsigned char *, unsigned int, mad_fixed_t const *, mad_fixed_t const *, enum audio_mode, struct audio_stats *);
audio_pcmfunc_t audio_pcm_u8;
audio_pcmfunc_t audio_pcm_s8;
audio_pcmfunc_t audio_pcm_s16le;
audio_pcmfunc_t audio_pcm_s16be;
audio_pcmfunc_t audio_pcm_s24le;
audio_pcmfunc_t audio_pcm_s24be;
audio_pcmfunc_t audio_pcm_s32le;
audio_pcmfunc_t audio_pcm_s32be;
audio_pcmfunc_t audio_pcm_mulaw;
static char const *host;
static int esd;
static audio_pcmfunc_t *audio_pcm;
static int init(struct audio_init *init)
{
    host = init->path;
    if (host && *host == 0)
	host = 0;
    esd = esd_open_sound(host);
    if (esd < 0) {
	audio_error = ":esd_open_sound";
	return -1;
    }
    return 0;
}

static int config(struct audio_config *config)
{
    unsigned int bitdepth;
    esd_format_t format = (0x0000) | (0x1000);
    extern char const *argv0;
    int result = 0;
    bitdepth = config->precision & ~7;
    if (bitdepth == 0 || bitdepth > 16)
	bitdepth = 16;
    switch (config->precision = bitdepth) {
    case 8:
	audio_pcm = audio_pcm_u8;
	format |= (0x0000);
	break;
    case 16:
	audio_pcm = audio_pcm_s16le;
	format |= (0x0001);
	break;
    }
    format |= (config->channels == 2) ? (0x0020) : (0x0010);
    if (esd_close(esd) < 0) {
	audio_error = ":esd_close";
	result = -1;
    }
    esd = esd_play_stream_fallback(format, config->speed, host, argv0);
    if (esd < 0 && result == 0) {
	audio_error = ":esd_play_stream_fallback";
	result = -1;
    }
    return result;
}

static int output(unsigned char const *ptr, unsigned int len)
{
    while (len) {
	int wrote;
	wrote = write(esd, ptr, len);
	if (wrote == -1) {
	    if ((*__errno_location()) == 4)
		continue;
	    else {
		audio_error = ":write";
		return -1;
	    }
	}
	ptr += wrote;
	len -= wrote;
    }
    return 0;
}

static int play(struct audio_play *play)
{
    unsigned char data[(1152 * 3) * 2 * 2];
    unsigned int len;
    len = audio_pcm(data, play->nsamples, play->samples[0], play->samples[1], play->mode, play->stats);
    return output(data, len);
}

static int stop(struct audio_stop *stop)
{
    return 0;
}

static int finish(struct audio_finish *finish)
{
    if (esd_close(esd) < 0) {
	audio_error = ":esd_close";
	return -1;
    }
    return 0;
}

int audio_esd(union audio_control *control)
{
    audio_error = 0;
    switch (control->command) {
    case AUDIO_COMMAND_INIT:
	return init(&control->init);
    case AUDIO_COMMAND_CONFIG:
	return config(&control->config);
    case AUDIO_COMMAND_PLAY:
	return play(&control->play);
    case AUDIO_COMMAND_STOP:
	return stop(&control->stop);
    case AUDIO_COMMAND_FINISH:
	return finish(&control->finish);
    }
    return 0;
}
