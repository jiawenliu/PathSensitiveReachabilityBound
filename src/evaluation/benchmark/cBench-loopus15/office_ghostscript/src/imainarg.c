typedef unsigned char byte;
typedef unsigned char uchar;
typedef unsigned short ushort;
typedef unsigned int uint;
typedef unsigned long ulong;
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
typedef __uid_t uid_t;
typedef __off_t off_t;
typedef __pid_t pid_t;
typedef __id_t id_t;
typedef __ssize_t ssize_t;
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;
typedef __key_t key_t;
typedef __time_t time_t;
typedef __clockid_t clockid_t;
typedef __timer_t timer_t;
typedef __typeof__(((int *) 0) - ((int *) 0)) ptrdiff_t;
typedef __typeof__(sizeof(int)) size_t;
typedef int wchar_t;
typedef unsigned long int ulong_;
typedef unsigned short int ushort_;
typedef unsigned int uint_;
typedef int int8_t __attribute__ ((__mode__(__QI__)));
typedef int int16_t __attribute__ ((__mode__(__HI__)));
typedef int int32_t __attribute__ ((__mode__(__SI__)));
typedef int int64_t __attribute__ ((__mode__(__DI__)));
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
typedef int bool;
typedef const char *ptr_ord_t;
typedef double floatp;
typedef const char *client_name_t;
typedef ushort bits16;
typedef uint bits32;
extern const char *gs_product;
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
int unlink(const char *);
extern FILE *gs_stdin, *gs_stdout, *gs_stderr;
typedef ulong gs_id;
typedef struct gs_string_s {
    byte *data;
    uint size;
} gs_string;
typedef struct gs_const_string_s {
    const byte *data;
    uint size;
} gs_const_string;
typedef struct gs_point_s {
    double x, y;
} gs_point;
typedef struct gs_int_point_s {
    int x, y;
} gs_int_point;
typedef struct gs_log2_scale_point_s {
    int x, y;
} gs_log2_scale_point;
typedef struct gs_rect_s {
    gs_point p, q;
} gs_rect;
typedef struct gs_int_rect_s {
    gs_int_point p, q;
} gs_int_rect;
typedef struct gs_memory_struct_type_s gs_memory_struct_type_t;
typedef const gs_memory_struct_type_t *gs_memory_type_ptr_t;
typedef client_name_t struct_name_t;
uint gs_struct_type_size(gs_memory_type_ptr_t);
struct_name_t gs_struct_type_name(gs_memory_type_ptr_t);
typedef struct gc_state_s gc_state_t;
typedef struct gs_ptr_procs_s {
    void (*unmark) (void *, gc_state_t *);
    bool(*mark) (void *, gc_state_t *);
    void *(*reloc) (const void *, gc_state_t *);
} gs_ptr_procs_t;
typedef const gs_ptr_procs_t *gs_ptr_type_t;
extern const gs_ptr_procs_t ptr_struct_procs;
extern const gs_ptr_procs_t ptr_string_procs;
extern const gs_ptr_procs_t ptr_const_string_procs;
typedef struct gs_gc_root_s gs_gc_root_t;
struct gs_gc_root_s {
    gs_gc_root_t *next;
    gs_ptr_type_t ptype;
    void **p;
};
typedef struct gs_memory_status_s {
    ulong allocated;
    ulong used;
} gs_memory_status_t;
struct gs_memory_s;
typedef struct gs_memory_s gs_memory_t;
typedef struct gs_memory_procs_s {
    byte *(*alloc_bytes) (gs_memory_t * mem, uint nbytes, client_name_t cname);
    byte *(*alloc_bytes_immovable) (gs_memory_t * mem, uint nbytes, client_name_t cname);
    void *(*alloc_struct) (gs_memory_t * mem, gs_memory_type_ptr_t pstype, client_name_t cname);
    void *(*alloc_struct_immovable) (gs_memory_t * mem, gs_memory_type_ptr_t pstype, client_name_t cname);
    byte *(*alloc_byte_array) (gs_memory_t * mem, uint num_elements, uint elt_size, client_name_t cname);
    byte *(*alloc_byte_array_immovable) (gs_memory_t * mem, uint num_elements, uint elt_size, client_name_t cname);
    void *(*alloc_struct_array) (gs_memory_t * mem, uint num_elements, gs_memory_type_ptr_t pstype, client_name_t cname);
    void *(*alloc_struct_array_immovable) (gs_memory_t * mem, uint num_elements, gs_memory_type_ptr_t pstype, client_name_t cname);
    void *(*resize_object) (gs_memory_t * mem, void *obj, uint new_num_elements, client_name_t cname);
    uint(*object_size) (gs_memory_t * mem, const void *obj);
    gs_memory_type_ptr_t(*object_type) (gs_memory_t * mem, const void *obj);
    void (*free_object) (gs_memory_t * mem, void *data, client_name_t cname);
    byte *(*alloc_string) (gs_memory_t * mem, uint nbytes, client_name_t cname);
    byte *(*alloc_string_immovable) (gs_memory_t * mem, uint nbytes, client_name_t cname);
    byte *(*resize_string) (gs_memory_t * mem, byte * data, uint old_num, uint new_num, client_name_t cname);
    void (*free_string) (gs_memory_t * mem, byte * data, uint nbytes, client_name_t cname);
    void (*register_root) (gs_memory_t * mem, gs_gc_root_t * root, gs_ptr_type_t ptype, void **pp, client_name_t cname);
    void (*unregister_root) (gs_memory_t * mem, gs_gc_root_t * root, client_name_t cname);
    void (*status) (gs_memory_t * mem, gs_memory_status_t * status);
    void (*enable_free) (gs_memory_t * mem, bool enable);
} gs_memory_procs_t;
void gs_ignore_free_object(gs_memory_t * mem, void *data, client_name_t cname);
void gs_ignore_free_string(gs_memory_t * mem, byte * data, uint nbytes, client_name_t cname);
struct gs_memory_s {
    gs_memory_procs_t procs;
};
extern gs_memory_t gs_memory_default;
extern char gs_debug[128];
extern FILE *gs_debug_out;
extern void eprintf_program_name(FILE *, const char *);
extern void lprintf_file_and_line(FILE *, const char *, int);
void debug_dump_bytes(const byte * from, const byte * to, const char *msg);
void debug_dump_bitmap(const byte * from, uint raster, uint height, const char *msg);
void debug_print_string(const byte * str, uint len);
typedef struct gs_imager_state_s gs_imager_state;
typedef struct gs_state_s gs_state;
typedef struct ref_s ref;
typedef ushort ref_packed;
typedef enum { t__invalid, t_boolean, t_dictionary, t_file, t_array, t_mixedarray, t_shortarray, t_unused_array_, t_struct, t_astruct, t_fontID, t_integer, t_mark, t_name, t_null, t_operator, t_real, t_save, t_string, t_device, t_oparray, t_next_index } ref_type;
typedef struct attr_print_mask_s {
    ushort mask;
    ushort value;
    char print;
} attr_print_mask;
typedef struct dict_s dict;
typedef struct name_s name;
typedef struct stream_s stream;
typedef struct gx_device_s gx_device;
typedef struct obj_header_s obj_header_t;
typedef int (*op_proc_p) (ref *);
struct tas_s {
    ushort type_attrs;
    ushort rsize;
};
struct ref_s {
    struct tas_s tas;
    union v {
	long intval;
	ushort boolval;
	float realval;
	ulong saveid;
	byte *bytes;
	const byte *const_bytes;
	ref *refs;
	const ref *const_refs;
	name *pname;
	const name *const_pname;
	dict *pdict;
	const dict *const_pdict;
	const ref_packed *packed;
	op_proc_p opproc;
	struct stream_s *pfile;
	struct gx_device_s *pdevice;
	obj_header_t *pstruct;
    } value;
};
void gp_init(void);
void gp_exit(int exit_status, int code);
void gp_do_exit(int exit_status);
const char *gp_strerror(int);
void gp_get_realtime(long ptm[2]);
void gp_get_usertime(long ptm[2]);
void gp_init_console(void);
void gp_console_puts(const char *, uint);
int gp_make_console_current(gx_device *);
int gp_make_graphics_current(gx_device *);
const char *gp_getenv_display(void);
FILE *gp_open_printer(char *fname, int binary_mode);
void gp_close_printer(FILE * pfile, const char *fname);
extern const char gp_file_name_list_separator;
extern const char gp_scratch_file_name_prefix[];
extern const char gp_null_file_name[];
extern const char gp_current_directory_name[];
extern const char gp_fmode_binary_suffix[];
extern const char gp_fmode_rb[];
extern const char gp_fmode_wb[];
FILE *gp_open_scratch_file(const char *prefix, char *fname, const char *mode);
FILE *gp_fopen(const char *fname, const char *mode);
bool gp_file_name_is_absolute(const char *fname, uint len);
const char *gp_file_name_concat_string(const char *prefix, uint plen, const char *fname, uint len);
struct file_enum_s;
typedef struct file_enum_s file_enum;
file_enum *gp_enumerate_files_init(const char *pat, uint patlen, gs_memory_t * memory);
uint gp_enumerate_files_next(file_enum * pfen, char *ptr, uint maxlen);
void gp_enumerate_files_close(file_enum * pfen);
typedef struct arg_source_s {
    bool is_file;
    union _u {
	const char *str;
	FILE *file;
    } u;
} arg_source;
typedef struct arg_list_s {
    bool expand_ats;
    FILE *(*arg_fopen) (const char *fname, void *fopen_data);
    void *fopen_data;
    const char **argp;
    int argn;
    int depth;
    char cstr[512 + 1];
    arg_source sources[10];
} arg_list;
void arg_init(arg_list * pal, const char **argv, int argc, FILE * (*arg_fopen) (const char *fname, void *fopen_data), void *fopen_data);
void arg_push_string(arg_list * pal, const char *str);
void arg_finit(arg_list * pal);
const char *arg_next(arg_list * pal);
char *arg_copy(const char *str, gs_memory_t * mem);
extern long gs_buildtime;
extern const char *gs_copyright;
extern const char *gs_product;
extern long gs_revision;
extern long gs_revisiondate;
extern long gs_serialnumber;
extern const char *gs_doc_directory;
extern const char *gs_lib_default_path;
extern const char *gs_init_file;
extern byte gs_alloc_fill_alloc, gs_alloc_fill_block, gs_alloc_fill_collected, gs_alloc_fill_deleted, gs_alloc_fill_free;
extern void gs_alloc_memset(void *, int, ulong);
typedef struct struct_shared_procs_s struct_shared_procs_t;
struct gs_memory_struct_type_s {
    uint ssize;
    struct_name_t sname;
    const struct_shared_procs_t *shared;
    void (*clear_marks) (void *pre, uint size);
    gs_ptr_type_t(*enum_ptrs) (void *ptr, uint size, uint index, const void **pep);
    void (*reloc_ptrs) (void *ptr, uint size, gc_state_t * gcst);
    void (*finalize) (void *ptr);
};
gs_ptr_type_t gs_no_struct_enum_ptrs(void *ptr, uint size, uint index, const void **pep);
void gs_no_struct_reloc_ptrs(void *ptr, uint size, gc_state_t * gcst);
void *gs_reloc_struct_ptr(const void *, gc_state_t *);
void gs_reloc_string(gs_string *, gc_state_t *);
void gs_reloc_const_string(gs_const_string *, gc_state_t *);
extern const gs_memory_struct_type_t st_free;
extern const gs_memory_struct_type_t st_bytes;
typedef struct gs_pattern_instance_s gs_pattern_instance;
typedef struct gs_paint_color_s {
    float values[4];
} gs_paint_color;
typedef struct gs_client_color_s {
    gs_paint_color paint;
    gs_pattern_instance *pattern;
} gs_client_color;
extern const gs_memory_struct_type_t st_client_color;
int imod(int m, int n);
int igcd(int x, int y);
typedef gs_id gx_bitmap_id;
typedef struct gx_bitmap_s {
    byte *data;
    int raster;
    gs_int_point size;
    gx_bitmap_id id;
} gx_bitmap;
typedef struct gx_tile_bitmap_s {
    byte *data;
    int raster;
    gs_int_point size;
    gx_bitmap_id id;
    ushort rep_width, rep_height;
} gx_tile_bitmap;
typedef struct gx_strip_bitmap_s {
    byte *data;
    int raster;
    gs_int_point size;
    gx_bitmap_id id;
    ushort rep_width, rep_height;
    ushort rep_shift;
    ushort shift;
} gx_strip_bitmap;
typedef struct gx_ht_tile_s gx_ht_tile;
struct gx_ht_tile_s {
    gx_strip_bitmap tiles;
    int level;
    uint index;
};
typedef unsigned long gx_color_index;
typedef struct gx_device_color_s gx_device_color;
typedef struct gx_device_halftone_s gx_device_halftone;
typedef struct gx_color_tile_s gx_color_tile;
typedef struct gx_device_color_procs_s gx_device_color_procs;
typedef const gx_device_color_procs *gx_device_color_type;
struct gx_device_color_s {
    gx_device_color_type type;
    union _c {
	gx_color_index pure;
	struct _bin {
	    const gx_device_halftone *b_ht;
	    gx_color_index color[2];
	    uint b_level;
	    gx_ht_tile *b_tile;
	} binary;
	struct _col {
	    const gx_device_halftone *c_ht;
	    byte c_base[4];
	    uint c_level[4];
	    ushort alpha;
	} colored;
	struct _pat {
	    gx_color_tile *p_tile;
	} pattern;
    } colors;
    gs_int_point phase;
    struct _mask {
	gs_client_color ccolor;
	gx_bitmap_id id;
	gx_color_tile *m_tile;
    } mask;
};
extern const gx_device_color_procs *gx_dc_type_none;
extern const gx_device_color_procs *gx_dc_type_null;
extern const gx_device_color_procs *gx_dc_type_pure;
extern const gx_device_color_procs *gx_dc_type_ht_binary;
extern const gx_device_color_procs *gx_dc_type_ht_colored;
struct gs_matrix_s {
    float xx, xy, yx, yy, tx, ty;
};
typedef struct gs_matrix_s gs_matrix;
void gs_make_identity(gs_matrix *);
int gs_make_translation(floatp, floatp, gs_matrix *), gs_make_scaling(floatp, floatp, gs_matrix *), gs_make_rotation(floatp, gs_matrix *);
int gs_matrix_multiply(const gs_matrix *, const gs_matrix *, gs_matrix *), gs_matrix_invert(const gs_matrix *, gs_matrix *), gs_matrix_translate(const gs_matrix *, floatp, floatp, gs_matrix *), gs_matrix_scale(const gs_matrix *, floatp, floatp, gs_matrix *), gs_matrix_rotate(const gs_matrix *, floatp, gs_matrix *);
int gs_point_transform(floatp, floatp, const gs_matrix *, gs_point *), gs_point_transform_inverse(floatp, floatp, const gs_matrix *, gs_point *), gs_distance_transform(floatp, floatp, const gs_matrix *, gs_point *), gs_distance_transform_inverse(floatp, floatp, const gs_matrix *, gs_point *), gs_points_bbox(const gs_point[4], gs_rect *), gs_bbox_transform_only(const gs_rect *, const gs_matrix *, gs_point[4]), gs_bbox_transform(const gs_rect *, const gs_matrix *, gs_rect *), gs_bbox_transform_inverse(const gs_rect *, const gs_matrix *, gs_rect *);
typedef struct gs_color_space_s gs_color_space;
typedef enum { gs_image_format_chunky = 0, gs_image_format_component_planar = 1, gs_image_format_bit_planar = 2 } gs_image_format_t;
typedef struct gs_image_s {
    int Width;
    int Height;
    gs_matrix ImageMatrix;
    int BitsPerComponent;
    const gs_color_space *ColorSpace;
    float Decode[8];
    bool Interpolate;
    bool ImageMask;
    bool adjust;
    bool CombineWithColor;
} gs_image_t;
void gs_image_t_init_gray(gs_image_t * pim), gs_image_t_init_color(gs_image_t * pim), gs_image_t_init_mask(gs_image_t * pim, bool write_1s);
typedef enum { rop2_0 = 0, rop2_S = 0xc, rop2_D = 0xa, rop2_1 = 0xf, rop2_default = rop2_S } gs_rop2_t;
typedef enum { rop3_0 = 0, rop3_T = 0xf0, rop3_S = 0xcc, rop3_D = 0xaa, rop3_1 = 0xff, rop3_default = rop3_T | rop3_S } gs_rop3_t;
typedef uint gs_logical_operation_t;
typedef unsigned rop_operand;
typedef rop_operand(*rop_proc) (rop_operand D, rop_operand S, rop_operand T);
typedef enum { rop_usage_none = 0, rop_usage_D = 1, rop_usage_S = 2, rop_usage_DS = 3, rop_usage_T = 4, rop_usage_DT = 5, rop_usage_ST = 6, rop_usage_DST = 7 } rop_usage_t;
typedef ulong gx_xglyph;
struct gx_xfont_procs_s;
typedef struct gx_xfont_procs_s gx_xfont_procs;
struct gx_xfont_s;
typedef struct gx_xfont_s gx_xfont;
typedef unsigned short gx_color_value;
typedef long fixed;
typedef ulong ufixed;
typedef struct gs_fixed_point_s {
    fixed x, y;
} gs_fixed_point;
typedef struct gs_fixed_rect_s {
    gs_fixed_point p, q;
} gs_fixed_rect;
typedef struct gx_path_s gx_path;
typedef struct gx_clip_path_s gx_clip_path;
typedef struct gx_fill_params_s gx_fill_params;
typedef struct gx_stroke_params_s gx_stroke_params;
typedef gx_device_color gx_drawing_color;
typedef enum { go_text, go_graphics } graphics_object_type;
typedef struct gs_fixed_edge_s {
    gs_fixed_point start;
    gs_fixed_point end;
} gs_fixed_edge;
typedef struct gx_device_color_info_s {
    int num_components;
    int depth;
    gx_color_value max_gray;
    gx_color_value max_color;
    gx_color_value dither_grays;
    gx_color_value dither_colors;
} gx_device_color_info;
typedef struct gx_device_procs_s gx_device_procs;
typedef struct gx_page_device_procs_s {
    int (*install) (gx_device * dev, gs_state * pgs);
    int (*begin_page) (gx_device * dev, gs_state * pgs);
    int (*end_page) (gx_device * dev, int reason, gs_state * pgs);
} gx_page_device_procs;
int gx_default_install(gx_device * dev, gs_state * pgs);
int gx_default_begin_page(gx_device * dev, gs_state * pgs);
int gx_default_end_page(gx_device * dev, int reason, gs_state * pgs);
typedef struct gs_param_list_s gs_param_list;
struct gx_device_procs_s {
    int (*open_device) (gx_device * dev);
    void (*get_initial_matrix) (gx_device * dev, gs_matrix * pmat);
    int (*sync_output) (gx_device * dev);
    int (*output_page) (gx_device * dev, int num_copies, int flush);
    int (*close_device) (gx_device * dev);
    gx_color_index(*map_rgb_color) (gx_device * dev, gx_color_value red, gx_color_value green, gx_color_value blue);
    int (*map_color_rgb) (gx_device * dev, gx_color_index color, gx_color_value rgb[3]);
    int (*fill_rectangle) (gx_device * dev, int x, int y, int width, int height, gx_color_index color);
    int (*tile_rectangle) (gx_device * dev, const gx_tile_bitmap * tile, int x, int y, int width, int height, gx_color_index color0, gx_color_index color1, int phase_x, int phase_y);
    int (*copy_mono) (gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height, gx_color_index color0, gx_color_index color1);
    int (*copy_color) (gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height);
    int (*draw_line) (gx_device * dev, int x0, int y0, int x1, int y1, gx_color_index color);
    int (*get_bits) (gx_device * dev, int y, byte * data, byte ** actual_data);
    int (*get_params) (gx_device * dev, gs_param_list * plist);
    int (*put_params) (gx_device * dev, gs_param_list * plist);
    gx_color_index(*map_cmyk_color) (gx_device * dev, gx_color_value cyan, gx_color_value magenta, gx_color_value yellow, gx_color_value black);
    gx_xfont_procs *(*get_xfont_procs) (gx_device * dev);
    gx_device *(*get_xfont_device) (gx_device * dev);
    gx_color_index(*map_rgb_alpha_color) (gx_device * dev, gx_color_value red, gx_color_value green, gx_color_value blue, gx_color_value alpha);
    gx_device *(*get_page_device) (gx_device * dev);
    int (*get_alpha_bits) (gx_device * dev, graphics_object_type type);
    int (*copy_alpha) (gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height, gx_color_index color, int depth);
    int (*get_band) (gx_device * dev, int y, int *band_start);
    int (*copy_rop) (gx_device * dev, const byte * sdata, int sourcex, uint sraster, gx_bitmap_id id, const gx_color_index * scolors, const gx_tile_bitmap * texture, const gx_color_index * tcolors, int x, int y, int width, int height, int phase_x, int phase_y, gs_logical_operation_t lop);
    int (*fill_path) (gx_device * dev, const gs_imager_state * pis, gx_path * ppath, const gx_fill_params * params, const gx_drawing_color * pdcolor, const gx_clip_path * pcpath);
    int (*stroke_path) (gx_device * dev, const gs_imager_state * pis, gx_path * ppath, const gx_stroke_params * params, const gx_drawing_color * pdcolor, const gx_clip_path * pcpath);
    int (*fill_mask) (gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height, const gx_drawing_color * pdcolor, int depth, gs_logical_operation_t lop, const gx_clip_path * pcpath);
    int (*fill_trapezoid) (gx_device * dev, const gs_fixed_edge * left, const gs_fixed_edge * right, fixed ybot, fixed ytop, bool swap_axes, const gx_drawing_color * pdcolor, gs_logical_operation_t lop);
    int (*fill_parallelogram) (gx_device * dev, fixed px, fixed py, fixed ax, fixed ay, fixed bx, fixed by, const gx_drawing_color * pdcolor, gs_logical_operation_t lop);
    int (*fill_triangle) (gx_device * dev, fixed px, fixed py, fixed ax, fixed ay, fixed bx, fixed by, const gx_drawing_color * pdcolor, gs_logical_operation_t lop);
    int (*draw_thin_line) (gx_device * dev, fixed fx0, fixed fy0, fixed fx1, fixed fy1, const gx_drawing_color * pdcolor, gs_logical_operation_t lop);
    int (*begin_image) (gx_device * dev, const gs_imager_state * pis, const gs_image_t * pim, gs_image_format_t format, const gs_int_rect * prect, const gx_drawing_color * pdcolor, const gx_clip_path * pcpath, gs_memory_t * memory, void **pinfo);
    int (*image_data) (gx_device * dev, void *info, const byte ** planes, int data_x, uint raster, int height);
    int (*end_image) (gx_device * dev, void *info, bool draw_last);
    int (*strip_tile_rectangle) (gx_device * dev, const gx_strip_bitmap * tiles, int x, int y, int width, int height, gx_color_index color0, gx_color_index color1, int phase_x, int phase_y);
    int (*strip_copy_rop) (gx_device * dev, const byte * sdata, int sourcex, uint sraster, gx_bitmap_id id, const gx_color_index * scolors, const gx_strip_bitmap * textures, const gx_color_index * tcolors, int x, int y, int width, int height, int phase_x, int phase_y, gs_logical_operation_t lop);
    void (*get_clipping_box) (gx_device * dev, gs_fixed_rect * pbox);
};
typedef struct gx_device_memory_s gx_device_memory;
int gx_default_make_buffer_device(gx_device_memory *, gx_device *, gs_memory_t *, bool);
int gx_copy_mono_unaligned(gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height, gx_color_index color0, gx_color_index color1);
int gx_copy_color_unaligned(gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height);
int gx_copy_alpha_unaligned(gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height, gx_color_index color, int depth);
struct gx_device_s {
    int params_size;
    const gx_device_procs *static_procs;
    const char *dname;
    gs_memory_t *memory;
    gs_memory_type_ptr_t stype;
    bool is_open;
    int max_fill_band;
    gx_device_color_info color_info;
    int width;
    int height;
    float MediaSize[2];
    float ImagingBBox[4];
    bool ImagingBBox_set;
    float HWResolution[2];
    float MarginsHWResolution[2];
    float Margins[2];
    float HWMargins[4];
    long PageCount;
    long ShowpageCount;
    bool IgnoreNumCopies;
    gx_page_device_procs page_procs;
    gx_device_procs std_procs;
};
extern const gs_memory_struct_type_t st_device;
void gx_device_finalize(void *ptr);
gx_device *gx_device_enum_ptr(gx_device *);
gx_device *gx_device_reloc_ptr(gx_device *, gc_state_t *);
typedef gx_color_index(*dev_proc_map_rgb_color_t) (gx_device * dev, gx_color_value red, gx_color_value green, gx_color_value blue);
typedef int (*dev_proc_map_color_rgb_t) (gx_device * dev, gx_color_index color, gx_color_value rgb[3]);
typedef struct gx_device_forward_s {
    int params_size;
    const gx_device_procs *static_procs;
    const char *dname;
    gs_memory_t *memory;
    gs_memory_type_ptr_t stype;
    bool is_open;
    int max_fill_band;
    gx_device_color_info color_info;
    int width;
    int height;
    float MediaSize[2];
    float ImagingBBox[4];
    bool ImagingBBox_set;
    float HWResolution[2];
    float MarginsHWResolution[2];
    float Margins[2];
    float HWMargins[4];
    long PageCount;
    long ShowpageCount;
    bool IgnoreNumCopies;
    gx_page_device_procs page_procs;
    gx_device_procs std_procs;
    gx_device *target;
} gx_device_forward;
extern const gs_memory_struct_type_t st_device_forward;
typedef struct gx_device_null_s gx_device_null;
struct gx_device_null_s {
    int params_size;
    const gx_device_procs *static_procs;
    const char *dname;
    gs_memory_t *memory;
    gs_memory_type_ptr_t stype;
    bool is_open;
    int max_fill_band;
    gx_device_color_info color_info;
    int width;
    int height;
    float MediaSize[2];
    float ImagingBBox[4];
    bool ImagingBBox_set;
    float HWResolution[2];
    float MarginsHWResolution[2];
    float Margins[2];
    float HWMargins[4];
    long PageCount;
    long ShowpageCount;
    bool IgnoreNumCopies;
    gx_page_device_procs page_procs;
    gx_device_procs std_procs;
    gx_device *target;
};
extern gx_device_null gs_null_device;
extern const gs_memory_struct_type_t st_device_null;
void gs_make_null_device(gx_device_null *, gs_memory_t *);
uint gx_device_raster(const gx_device * dev, bool pad_to_word);
int gx_device_adjust_resolution(gx_device * dev, int actual_width, int actual_height, int fit);
void gx_device_set_margins(gx_device * dev, const float *margins, bool move_origin);
void gx_device_set_width_height(gx_device * dev, int width, int height);
void gx_device_set_resolution(gx_device * dev, floatp x_dpi, floatp y_dpi);
void gx_device_set_media_size(gx_device * dev, floatp media_width, floatp media_height);
int gx_default_open_device(gx_device * dev);
void gx_default_get_initial_matrix(gx_device * dev, gs_matrix * pmat);
void gx_upright_get_initial_matrix(gx_device * dev, gs_matrix * pmat);
int gx_default_sync_output(gx_device * dev);
int gx_default_output_page(gx_device * dev, int num_copies, int flush);
int gx_default_close_device(gx_device * dev);
gx_color_index gx_default_w_b_map_rgb_color(gx_device * dev, gx_color_value red, gx_color_value green, gx_color_value blue);
int gx_default_w_b_map_color_rgb(gx_device * dev, gx_color_index color, gx_color_value rgb[3]);
int gx_default_tile_rectangle(gx_device * dev, const gx_tile_bitmap * tile, int x, int y, int width, int height, gx_color_index color0, gx_color_index color1, int phase_x, int phase_y);
int gx_default_copy_mono(gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height, gx_color_index color0, gx_color_index color1);
int gx_default_copy_color(gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height);
int gx_default_draw_line(gx_device * dev, int x0, int y0, int x1, int y1, gx_color_index color);
int gx_default_get_bits(gx_device * dev, int y, byte * data, byte ** actual_data);
int gx_default_get_params(gx_device * dev, gs_param_list * plist);
int gx_default_put_params(gx_device * dev, gs_param_list * plist);
gx_color_index gx_default_map_cmyk_color(gx_device * dev, gx_color_value cyan, gx_color_value magenta, gx_color_value yellow, gx_color_value black);
gx_xfont_procs *gx_default_get_xfont_procs(gx_device * dev);
gx_device *gx_default_get_xfont_device(gx_device * dev);
gx_color_index gx_default_map_rgb_alpha_color(gx_device * dev, gx_color_value red, gx_color_value green, gx_color_value blue, gx_color_value alpha);
gx_device *gx_default_get_page_device(gx_device * dev);
gx_device *gx_page_device_get_page_device(gx_device * dev);
int gx_default_get_alpha_bits(gx_device * dev, graphics_object_type type);
int gx_no_copy_alpha(gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height, gx_color_index color, int depth);
int gx_default_copy_alpha(gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height, gx_color_index color, int depth);
int gx_default_get_band(gx_device * dev, int y, int *band_start);
int gx_no_copy_rop(gx_device * dev, const byte * sdata, int sourcex, uint sraster, gx_bitmap_id id, const gx_color_index * scolors, const gx_tile_bitmap * texture, const gx_color_index * tcolors, int x, int y, int width, int height, int phase_x, int phase_y, gs_logical_operation_t lop);
extern int (*gx_default_copy_rop_proc) (gx_device * dev, const byte * sdata, int sourcex, uint sraster, gx_bitmap_id id, const gx_color_index * scolors, const gx_tile_bitmap * texture, const gx_color_index * tcolors, int x, int y, int width, int height, int phase_x, int phase_y, gs_logical_operation_t lop);
int gx_default_copy_rop(gx_device * dev, const byte * sdata, int sourcex, uint sraster, gx_bitmap_id id, const gx_color_index * scolors, const gx_tile_bitmap * texture, const gx_color_index * tcolors, int x, int y, int width, int height, int phase_x, int phase_y, gs_logical_operation_t lop);
int gx_default_fill_path(gx_device * dev, const gs_imager_state * pis, gx_path * ppath, const gx_fill_params * params, const gx_drawing_color * pdcolor, const gx_clip_path * pcpath);
int gx_default_stroke_path(gx_device * dev, const gs_imager_state * pis, gx_path * ppath, const gx_stroke_params * params, const gx_drawing_color * pdcolor, const gx_clip_path * pcpath);
int gx_default_fill_mask(gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height, const gx_drawing_color * pdcolor, int depth, gs_logical_operation_t lop, const gx_clip_path * pcpath);
int gx_default_fill_trapezoid(gx_device * dev, const gs_fixed_edge * left, const gs_fixed_edge * right, fixed ybot, fixed ytop, bool swap_axes, const gx_drawing_color * pdcolor, gs_logical_operation_t lop);
int gx_default_fill_parallelogram(gx_device * dev, fixed px, fixed py, fixed ax, fixed ay, fixed bx, fixed by, const gx_drawing_color * pdcolor, gs_logical_operation_t lop);
int gx_default_fill_triangle(gx_device * dev, fixed px, fixed py, fixed ax, fixed ay, fixed bx, fixed by, const gx_drawing_color * pdcolor, gs_logical_operation_t lop);
int gx_default_draw_thin_line(gx_device * dev, fixed fx0, fixed fy0, fixed fx1, fixed fy1, const gx_drawing_color * pdcolor, gs_logical_operation_t lop);
int gx_default_begin_image(gx_device * dev, const gs_imager_state * pis, const gs_image_t * pim, gs_image_format_t format, const gs_int_rect * prect, const gx_drawing_color * pdcolor, const gx_clip_path * pcpath, gs_memory_t * memory, void **pinfo);
int gx_default_image_data(gx_device * dev, void *info, const byte ** planes, int data_x, uint raster, int height);
int gx_default_end_image(gx_device * dev, void *info, bool draw_last);
int gx_default_strip_tile_rectangle(gx_device * dev, const gx_strip_bitmap * tiles, int x, int y, int width, int height, gx_color_index color0, gx_color_index color1, int phase_x, int phase_y);
int gx_no_strip_copy_rop(gx_device * dev, const byte * sdata, int sourcex, uint sraster, gx_bitmap_id id, const gx_color_index * scolors, const gx_strip_bitmap * textures, const gx_color_index * tcolors, int x, int y, int width, int height, int phase_x, int phase_y, gs_logical_operation_t lop);
extern int (*gx_default_strip_copy_rop_proc) (gx_device * dev, const byte * sdata, int sourcex, uint sraster, gx_bitmap_id id, const gx_color_index * scolors, const gx_strip_bitmap * textures, const gx_color_index * tcolors, int x, int y, int width, int height, int phase_x, int phase_y, gs_logical_operation_t lop);
int gx_default_strip_copy_rop(gx_device * dev, const byte * sdata, int sourcex, uint sraster, gx_bitmap_id id, const gx_color_index * scolors, const gx_strip_bitmap * textures, const gx_color_index * tcolors, int x, int y, int width, int height, int phase_x, int phase_y, gs_logical_operation_t lop);
void gx_default_get_clipping_box(gx_device * dev, gs_fixed_rect * pbox);
void gx_get_largest_clipping_box(gx_device * dev, gs_fixed_rect * pbox);
gx_color_index gx_default_b_w_map_rgb_color(gx_device * dev, gx_color_value red, gx_color_value green, gx_color_value blue);
int gx_default_b_w_map_color_rgb(gx_device * dev, gx_color_index color, gx_color_value rgb[3]);
gx_color_index gx_default_gray_map_rgb_color(gx_device * dev, gx_color_value red, gx_color_value green, gx_color_value blue);
int gx_default_gray_map_color_rgb(gx_device * dev, gx_color_index color, gx_color_value rgb[3]);
gx_color_index gx_default_rgb_map_rgb_color(gx_device * dev, gx_color_value red, gx_color_value green, gx_color_value blue);
int gx_default_rgb_map_color_rgb(gx_device * dev, gx_color_index color, gx_color_value rgb[3]);
gx_color_index gx_default_cmyk_map_cmyk_color(gx_device * dev, gx_color_value cyan, gx_color_value magenta, gx_color_value yellow, gx_color_value black);
void gx_forward_get_initial_matrix(gx_device * dev, gs_matrix * pmat);
int gx_forward_sync_output(gx_device * dev);
int gx_forward_output_page(gx_device * dev, int num_copies, int flush);
gx_color_index gx_forward_map_rgb_color(gx_device * dev, gx_color_value red, gx_color_value green, gx_color_value blue);
int gx_forward_map_color_rgb(gx_device * dev, gx_color_index color, gx_color_value rgb[3]);
int gx_forward_tile_rectangle(gx_device * dev, const gx_tile_bitmap * tile, int x, int y, int width, int height, gx_color_index color0, gx_color_index color1, int phase_x, int phase_y);
int gx_forward_get_bits(gx_device * dev, int y, byte * data, byte ** actual_data);
int gx_forward_get_params(gx_device * dev, gs_param_list * plist);
int gx_forward_put_params(gx_device * dev, gs_param_list * plist);
gx_color_index gx_forward_map_cmyk_color(gx_device * dev, gx_color_value cyan, gx_color_value magenta, gx_color_value yellow, gx_color_value black);
gx_xfont_procs *gx_forward_get_xfont_procs(gx_device * dev);
gx_device *gx_forward_get_xfont_device(gx_device * dev);
gx_color_index gx_forward_map_rgb_alpha_color(gx_device * dev, gx_color_value red, gx_color_value green, gx_color_value blue, gx_color_value alpha);
gx_device *gx_forward_get_page_device(gx_device * dev);
int gx_forward_get_alpha_bits(gx_device * dev, graphics_object_type type);
int gx_forward_get_band(gx_device * dev, int y, int *band_start);
extern int (*gx_forward_copy_rop_proc) (gx_device * dev, const byte * sdata, int sourcex, uint sraster, gx_bitmap_id id, const gx_color_index * scolors, const gx_tile_bitmap * texture, const gx_color_index * tcolors, int x, int y, int width, int height, int phase_x, int phase_y, gs_logical_operation_t lop);
int gx_forward_fill_path(gx_device * dev, const gs_imager_state * pis, gx_path * ppath, const gx_fill_params * params, const gx_drawing_color * pdcolor, const gx_clip_path * pcpath);
int gx_forward_stroke_path(gx_device * dev, const gs_imager_state * pis, gx_path * ppath, const gx_stroke_params * params, const gx_drawing_color * pdcolor, const gx_clip_path * pcpath);
int gx_forward_fill_mask(gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height, const gx_drawing_color * pdcolor, int depth, gs_logical_operation_t lop, const gx_clip_path * pcpath);
int gx_forward_fill_trapezoid(gx_device * dev, const gs_fixed_edge * left, const gs_fixed_edge * right, fixed ybot, fixed ytop, bool swap_axes, const gx_drawing_color * pdcolor, gs_logical_operation_t lop);
int gx_forward_fill_parallelogram(gx_device * dev, fixed px, fixed py, fixed ax, fixed ay, fixed bx, fixed by, const gx_drawing_color * pdcolor, gs_logical_operation_t lop);
int gx_forward_fill_triangle(gx_device * dev, fixed px, fixed py, fixed ax, fixed ay, fixed bx, fixed by, const gx_drawing_color * pdcolor, gs_logical_operation_t lop);
int gx_forward_draw_thin_line(gx_device * dev, fixed fx0, fixed fy0, fixed fx1, fixed fy1, const gx_drawing_color * pdcolor, gs_logical_operation_t lop);
int gx_forward_begin_image(gx_device * dev, const gs_imager_state * pis, const gs_image_t * pim, gs_image_format_t format, const gs_int_rect * prect, const gx_drawing_color * pdcolor, const gx_clip_path * pcpath, gs_memory_t * memory, void **pinfo);
int gx_forward_image_data(gx_device * dev, void *info, const byte ** planes, int data_x, uint raster, int height);
int gx_forward_end_image(gx_device * dev, void *info, bool draw_last);
int gx_forward_strip_tile_rectangle(gx_device * dev, const gx_strip_bitmap * tiles, int x, int y, int width, int height, gx_color_index color0, gx_color_index color1, int phase_x, int phase_y);
extern int (*gx_forward_strip_copy_rop_proc) (gx_device * dev, const byte * sdata, int sourcex, uint sraster, gx_bitmap_id id, const gx_color_index * scolors, const gx_strip_bitmap * textures, const gx_color_index * tcolors, int x, int y, int width, int height, int phase_x, int phase_y, gs_logical_operation_t lop);
void gx_forward_get_clipping_box(gx_device * dev, gs_fixed_rect * pbox);
void gx_device_set_procs(gx_device *);
void gx_device_fill_in_procs(gx_device *);
void gx_device_forward_fill_in_procs(gx_device_forward *);
void gx_device_forward_color_procs(gx_device_forward *);
void gx_device_no_output(gs_state *);
void gx_set_device_only(gs_state *, gx_device *);
int gs_closedevice(gx_device *);
typedef struct gx_device_type_s {
    gs_memory_type_ptr_t stype;
    int (*initialize) (gx_device *);
} gx_device_type;
int gdev_initialize(gx_device *);
struct gx_device_memory_s {
    int params_size;
    const gx_device_procs *static_procs;
    const char *dname;
    gs_memory_t *memory;
    gs_memory_type_ptr_t stype;
    bool is_open;
    int max_fill_band;
    gx_device_color_info color_info;
    int width;
    int height;
    float MediaSize[2];
    float ImagingBBox[4];
    bool ImagingBBox_set;
    float HWResolution[2];
    float MarginsHWResolution[2];
    float Margins[2];
    float HWMargins[4];
    long PageCount;
    long ShowpageCount;
    bool IgnoreNumCopies;
    gx_page_device_procs page_procs;
    gx_device_procs std_procs;
    gx_device *target;
    gs_matrix initial_matrix;
    uint raster;
    bool foreign_bits;
    byte *base;
    byte **line_ptrs;
    gs_memory_t *bitmap_memory;
    gs_const_string palette;
    struct _c24 {
	gx_color_index rgb;
	bits32 rgbr, gbrg, brgb;
    } color24;
    gs_log2_scale_point log2_scale;
    int log2_alpha_bits;
    int mapped_x;
    int mapped_y;
    int mapped_height;
    int mapped_start;
    gx_color_index save_color;
};
extern const gs_memory_struct_type_t st_device_memory;
ulong gdev_mem_data_size(const gx_device_memory *, int, int);
int gdev_mem_max_height(const gx_device_memory *, int, ulong);
const gx_device_memory *gdev_mem_device_for_bits(int);
const gx_device_memory *gdev_mem_word_device_for_bits(int);
void gs_make_mem_mono_device(gx_device_memory * mdev, gs_memory_t * mem, gx_device * target);
void gs_make_mem_device(gx_device_memory * mdev, const gx_device_memory * mdproto, gs_memory_t * mem, int page_device, gx_device * target);
void gs_make_mem_abuf_device(gx_device_memory * adev, gs_memory_t * mem, gx_device * target, const gs_log2_scale_point * pscale, int alpha_bits, int mapped_x);
void gs_make_mem_alpha_device(gx_device_memory * adev, gs_memory_t * mem, gx_device * target, int alpha_bits);
void gdev_mem_mono_set_inverted(gx_device_memory * mdev, bool black_is_1);
bool gs_device_is_memory(const gx_device *);
bool gs_device_is_abuf(const gx_device *);
int gs_flushpage(gs_state *);
int gs_copypage(gs_state *);
int gs_output_page(gs_state *, int, int);
int gs_copyscanlines(gx_device *, int, byte *, uint, int *, uint *);
const gx_device *gs_getdevice(int);
int gs_copydevice(gx_device **, const gx_device *, gs_memory_t *);
int gs_makewordimagedevice(gx_device ** pnew_dev, const gs_matrix * pmat, uint width, uint height, const byte * colors, int num_colors, bool word_oriented, bool page_device, gs_memory_t * mem);
int gs_initialize_wordimagedevice(gx_device_memory * new_dev, const gs_matrix * pmat, uint width, uint height, const byte * colors, int colors_size, bool word_oriented, bool page_device, gs_memory_t * mem);
void gs_nulldevice(gs_state *);
int gs_setdevice(gs_state *, gx_device *);
int gs_setdevice_no_erase(gs_state *, gx_device *);
gx_device *gs_currentdevice(const gs_state *);
const char *gs_devicename(const gx_device *);
void gs_deviceinitialmatrix(gx_device *, gs_matrix *);
int gs_getdeviceparams(gx_device *, gs_param_list *);
int gs_putdeviceparams(gx_device *, gs_param_list *);
int gs_closedevice(gx_device *);
typedef struct stream_state_s stream_state;
typedef struct stream_template_s stream_template;
typedef struct stream_cursor_read_s {
    const byte *ptr;
    const byte *limit;
    byte *_skip;
} stream_cursor_read;
typedef struct stream_cursor_write_s {
    const byte *_skip;
    byte *ptr;
    byte *limit;
} stream_cursor_write;
typedef union stream_cursor_s {
    stream_cursor_read r;
    stream_cursor_write w;
} stream_cursor;
int s_no_report_error(stream_state *, const char *);
struct stream_state_s {
    const stream_template *template;
    gs_memory_t *memory;
    int (*report_error) (stream_state *, const char *);
};
extern const gs_memory_struct_type_t st_stream_state;
typedef struct {
    int (*available) (stream *, long *);
    int (*seek) (stream *, long);
    void (*reset) (stream *);
    int (*flush) (stream *);
    int (*close) (stream *);
    int (*process) (stream_state *, stream_cursor_read *, stream_cursor_write *, bool);
    int (*switch_mode) (stream *, bool);
} stream_procs;
struct stream_s {
    const stream_template *template;
    gs_memory_t *memory;
    int (*report_error) (stream_state *, const char *);
    stream_cursor cursor;
    byte *cbuf;
    uint bsize;
    uint cbsize;
    short end_status;
    byte foreign;
    byte modes;
    gs_string cbuf_string;
    long position;
    stream_procs procs;
    stream *strm;
    int is_temp;
    int inline_temp;
    stream_state *state;
    ushort read_id;
    ushort write_id;
    stream *prev, *next;
    int save_count;
    FILE *file;
    uint file_modes;
    int (*save_close) (stream *);
};
int savailable(stream *, long *);
int sclose(stream *);
int sswitch(stream *, bool);
int spgetcc(stream *, bool);
int sgets(stream *, byte *, uint, uint *);
int sungetc(stream *, byte);
int spskip(stream *, long, long *);
int s_process_read_buf(stream *);
int spputc(stream *, byte);
int sputs(stream *, const byte *, uint, uint *);
int s_process_write_buf(stream *, bool);
long stell(stream *);
int spseek(stream *, long);
stream *s_alloc(gs_memory_t *, client_name_t);
stream_state *s_alloc_state(gs_memory_t *, gs_memory_type_ptr_t, client_name_t);
void sread_string(stream *, const byte *, uint), swrite_string(stream *, byte *, uint);
void sread_file(stream *, FILE *, byte *, uint), swrite_file(stream *, FILE *, byte *, uint), sappend_file(stream *, FILE *, byte *, uint);
void s_std_init(stream *, byte *, uint, const stream_procs *, int);
void s_disable(stream *);
int s_std_null(stream *);
void s_std_read_reset(stream *), s_std_write_reset(stream *);
int s_std_read_flush(stream *), s_std_write_flush(stream *), s_std_noavailable(stream *, long *), s_std_noseek(stream *, long), s_std_close(stream *), s_std_switch_mode(stream *, bool);
int s_filter_write_flush(stream *), s_filter_close(stream *);
extern const char *gs_error_names[];
typedef struct gs_ref_memory_s gs_ref_memory_t;
typedef ref *s_ptr;
typedef const ref *const_s_ptr;
typedef struct ref_stack_block_s {
    ref next;
    ref used;
} ref_stack_block;
typedef struct ref_stack_s ref_stack;
struct ref_stack_s {
    s_ptr p;
    s_ptr bot;
    s_ptr top;
    ref current;
    uint extension_size;
    uint extension_used;
    ref max_stack;
    uint requested;
    uint bot_guard;
    uint top_guard;
    uint block_size;
    uint body_size;
    ref guard_value;
    int underflow_error;
    int overflow_error;
    bool allow_expansion;
    gs_ref_memory_t *memory;
};
void ref_stack_init(ref_stack *, ref *, uint, uint, ref *, gs_ref_memory_t *);
int ref_stack_set_max_count(ref_stack *, long);
uint ref_stack_count(const ref_stack *);
ref *ref_stack_index(const ref_stack *, long);
uint ref_stack_counttomark(const ref_stack *);
int ref_stack_store(const ref_stack *, ref *, uint, uint, int, bool, client_name_t);
void ref_stack_pop(ref_stack *, uint);
int ref_stack_pop_block(ref_stack *);
int ref_stack_extend(ref_stack *, uint);
int ref_stack_push(ref_stack *, uint);
void ref_stack_cleanup(ref_stack *);
typedef s_ptr es_ptr;
typedef const_s_ptr const_es_ptr;
extern ref_stack e_stack;
extern ref *esfile;
void pop_estack(uint);
typedef enum { i_vm_foreign = 0, i_vm_system, i_vm_global, i_vm_local, i_vm_max = i_vm_local } i_vm_space;
typedef union vm_spaces_s {
    gs_ref_memory_t *indexed[4];
    struct _ssn {
	gs_ref_memory_t *foreign;
	gs_ref_memory_t *system;
	gs_ref_memory_t *global;
	gs_ref_memory_t *local;
    } named;
} vm_spaces;
void gs_reclaim(vm_spaces * pspaces, bool global);
typedef enum { avm_foreign = (i_vm_foreign << 2), avm_system = (i_vm_system << 2), avm_global = (i_vm_global << 2), avm_local = (i_vm_local << 2), avm_max = avm_local } avm_space;
typedef struct gs_memory_gc_status_s {
    long vm_threshold;
    long max_vm;
    int *psignal;
    int signal_value;
    bool enabled;
    long requested;
} gs_memory_gc_status_t;
void gs_memory_gc_status(const gs_ref_memory_t *, gs_memory_gc_status_t *);
void gs_memory_set_gc_status(gs_ref_memory_t *, const gs_memory_gc_status_t *);
void ialloc_reset(gs_ref_memory_t *);
void ialloc_reset_free(gs_ref_memory_t *);
void ialloc_set_limit(gs_ref_memory_t *);
int gs_alloc_ref_array(gs_ref_memory_t * mem, ref * paref, uint attrs, uint num_refs, client_name_t cname);
int gs_resize_ref_array(gs_ref_memory_t * mem, ref * paref, uint new_num_refs, client_name_t cname);
void gs_free_ref_array(gs_ref_memory_t * mem, ref * paref, client_name_t cname);
int gs_alloc_string_ref(gs_ref_memory_t * mem, ref * psref, uint attrs, uint nbytes, client_name_t cname);
extern const gs_ptr_procs_t ptr_ref_procs;
typedef struct gs_dual_memory_s gs_dual_memory_t;
struct gs_dual_memory_s {
    gs_ref_memory_t *current;
    vm_spaces spaces;
    uint current_space;
    int save_level;
    int (*reclaim) (gs_dual_memory_t *, int);
    uint test_mask;
    uint new_mask;
};
extern gs_dual_memory_t gs_imemory;
void ialloc_init(gs_memory_t *, uint, bool);
void ialloc_reset_requested(gs_dual_memory_t *);
void ialloc_validate_spaces(const gs_dual_memory_t *);
extern uint imemory_space(gs_ref_memory_t *);
void ialloc_set_space(gs_dual_memory_t *, uint);
struct stream_template_s {
    gs_memory_type_ptr_t stype;
    int (*init) (stream_state *);
    int (*process) (stream_state *, stream_cursor_read *, stream_cursor_write *, bool);
    uint min_in_size;
    uint min_out_size;
    void (*release) (stream_state *);
    void (*set_defaults) (stream_state *);
    int (*reinit) (stream_state *);
};
int stream_move(stream_cursor_read *, stream_cursor_write *);
typedef enum { hex_ignore_garbage = 0, hex_ignore_whitespace = 1, hex_ignore_leading_whitespace = 2 } hex_syntax;
int s_hex_process(stream_cursor_read *, stream_cursor_write *, int *, hex_syntax);
extern const stream_template s_BCPE_template;
extern const stream_template s_TBCPE_template;
typedef struct stream_BCPD_state_s {
    const stream_template *template;
    gs_memory_t *memory;
    int (*report_error) (stream_state *, const char *);
    int (*signal_interrupt) (stream_state *);
    int (*request_status) (stream_state *);
    bool escaped;
    int matched;
    int copy_count;
    const byte *copy_ptr;
} stream_BCPD_state;
extern const stream_template s_BCPD_template;
extern const stream_template s_TBCPD_template;
typedef struct stream_exE_state_s {
    const stream_template *template;
    gs_memory_t *memory;
    int (*report_error) (stream_state *, const char *);
    ushort cstate;
} stream_exE_state;
extern const stream_template s_exE_template;
typedef struct stream_PFBD_state_s stream_PFBD_state;
typedef struct stream_exD_state_s {
    const stream_template *template;
    gs_memory_t *memory;
    int (*report_error) (stream_state *, const char *);
    ushort cstate;
    stream_PFBD_state *pfb_state;
    int binary;
    int lenIV;
    int odd;
    long record_left;
    int skip;
} stream_exD_state;
extern const stream_template s_exD_template;
extern const stream_template s_Null_template;
struct stream_PFBD_state_s {
    const stream_template *template;
    gs_memory_t *memory;
    int (*report_error) (stream_state *, const char *);
    int binary_to_hex;
    int record_type;
    ulong record_left;
};
extern const stream_template s_PFBD_template;
typedef struct stream_SFD_state_s {
    const stream_template *template;
    gs_memory_t *memory;
    int (*report_error) (stream_state *, const char *);
    long count;
    gs_const_string eod;
    uint match;
    uint copy_count;
    uint copy_ptr;
} stream_SFD_state;
extern const stream_template s_SFD_template;
typedef s_ptr os_ptr;
typedef const_s_ptr const_os_ptr;
extern ref_stack o_stack;
extern const stream_template s_A85E_template;
typedef struct stream_A85D_state_s {
    const stream_template *template;
    gs_memory_t *memory;
    int (*report_error) (stream_state *, const char *);
    int odd;
    ulong word;
} stream_A85D_state;
extern const stream_template s_A85D_template;
extern const stream_template s_AXE_template;
typedef struct stream_AXD_state_s {
    const stream_template *template;
    gs_memory_t *memory;
    int (*report_error) (stream_state *, const char *);
    int odd;
} stream_AXD_state;
extern const stream_template s_AXD_template;
typedef struct stream_PSSD_state_s {
    const stream_template *template;
    gs_memory_t *memory;
    int (*report_error) (stream_state *, const char *);
    bool from_string;
    int depth;
} stream_PSSD_state;
extern const stream_template s_PSSD_template;
extern const stream_template s_PSSE_template;
typedef struct scanner_state_s scanner_state;
typedef struct dynamic_area_s {
    gs_string str;
    byte *base;
    byte *next;
    byte *limit;
    bool is_dynamic;
    byte buf[(255 + 2)];
    gs_memory_t *memory;
} dynamic_area;
typedef dynamic_area *da_ptr;
typedef struct scan_binary_state_s {
    int num_format;
    int (*cont) (stream *, ref *, scanner_state *);
    ref bin_array;
    uint index;
    uint max_array_index;
    uint min_string_index;
    uint top_size;
    uint size;
} scan_binary_state;
struct scanner_state_s {
    uint s_pstack;
    uint s_pdepth;
    bool s_from_string;
    enum { scanning_none, scanning_binary, scanning_comment, scanning_name, scanning_string } s_scan_type;
    dynamic_area s_da;
    union sss_ {
	scan_binary_state binary;
	struct sns_ {
	    int s_name_type;
	    bool s_try_number;
	} s_name;
	stream_state st;
	stream_A85D_state a85d;
	stream_AXD_state axd;
	stream_PSSD_state pssd;
    } s_ss;
};
extern const gs_memory_struct_type_t st_scanner_state;
int scan_token(stream * s, ref * pref, scanner_state * pstate);
int scan_string_token(ref * pstr, ref * pref);
int scan_handle_refill(const ref * fop, scanner_state * pstate, bool save, bool push_file, int (*cont) (os_ptr));
extern int (*scan_dsc_proc) (const byte *, uint);
extern int (*scan_comment_proc) (const byte *, uint);
void gs_exit_with_code(int exit_status, int code);
void gs_exit(int exit_status);
extern int gs_exit_status;
typedef struct gs_main_instance_s gs_main_instance;
gs_main_instance *gs_main_instance_default(void);
void gs_get_real_stdio(FILE * stdfiles[3]);
void gs_main_init0(gs_main_instance * minst, FILE * in, FILE * out, FILE * err, int max_lib_paths);
void gs_main_init1(gs_main_instance * minst);
void gs_main_init2(gs_main_instance * minst);
void gs_main_add_lib_path(gs_main_instance * minst, const char *path);
void gs_main_set_lib_paths(gs_main_instance * minst);
int gs_main_lib_open(gs_main_instance * minst, const char *fname, ref * pfile);
int gs_main_run_file(gs_main_instance * minst, const char *fname, int user_errors, int *pexit_code, ref * perror_object);
int gs_main_run_string(gs_main_instance * minst, const char *str, int user_errors, int *pexit_code, ref * perror_object);
int gs_main_run_string_with_length(gs_main_instance * minst, const char *str, uint length, int user_errors, int *pexit_code, ref * perror_object);
int gs_main_run_file_open(gs_main_instance * minst, const char *file_name, ref * pfref);
int gs_main_run_string_begin(gs_main_instance * minst, int user_errors, int *pexit_code, ref * perror_object);
int gs_main_run_string_continue(gs_main_instance * minst, const char *str, uint length, int user_errors, int *pexit_code, ref * perror_object);
int gs_main_run_string_end(gs_main_instance * minst, int user_errors, int *pexit_code, ref * perror_object);
int gs_push_boolean(gs_main_instance * minst, bool value);
int gs_push_integer(gs_main_instance * minst, long value);
int gs_push_real(gs_main_instance * minst, floatp value);
int gs_push_string(gs_main_instance * minst, byte * chars, uint length, bool read_only);
int gs_pop_boolean(gs_main_instance * minst, bool * result);
int gs_pop_integer(gs_main_instance * minst, long *result);
int gs_pop_real(gs_main_instance * minst, float *result);
int gs_pop_string(gs_main_instance * minst, gs_string * result);
void gs_debug_dump_stack(int code, ref * perror_object);
void gs_main_finit(gs_main_instance * minst, int exit_status, int code);
int gs_interpret(ref * pref, int user_errors, int *pexit_code, ref * perror_object);
int gs_main_init_with_args(gs_main_instance * minst, int argc, char *argv[]);
void gs_main_run_start(gs_main_instance * minst);
typedef struct gs_file_path_s {
    ref container;
    ref list;
    const char *env;
    const char *final;
    uint count;
} gs_file_path;
struct gs_main_instance_s {
    FILE *fstdin;
    FILE *fstdout;
    FILE *fstderr;
    uint memory_chunk_size;
    ulong name_table_size;
    int init_done;
    int user_errors;
    bool search_here_first;
    bool run_start;
    gs_file_path lib_path;
};
extern const gs_main_instance gs_main_instance_init_values;
typedef struct name_table_s name_table;
extern const uint name_max_string;
name_table *name_init(ulong, gs_memory_t *);
const name_table *the_name_table(void);
gs_memory_t *name_memory(void);
int name_ref(const byte * ptr, uint size, ref * pnref, int enterflag);
void name_string_ref(const ref * pnref, ref * psref);
int name_enter_string(const char *str, ref * pnref);
int name_from_string(const ref * psref, ref * pnref);
void name_invalidate_value_cache(const ref *);
uint name_index(const ref *);
name *name_index_ptr(uint nidx);
void name_index_ref(uint nidx, ref * pnref);
uint name_next_valid_index(uint);
bool name_mark_index(uint);
void *name_ref_sub_table(const ref *);
void *name_index_ptr_sub_table(uint, name *);
int alloc_save_change(gs_dual_memory_t *, const ref * pcont, ref_packed * ptr, client_name_t cname);
int alloc_save_level(const gs_dual_memory_t *);
int zget_stdin(stream **);
int zget_stdout(stream **);
int zget_stderr(stream **);
extern bool gs_stdin_is_interactive;
extern stream *invalid_file_entry;
int file_switch_to_read(const ref *);
int file_switch_to_write(const ref *);
extern const uint file_default_buffer_size;
FILE *lib_fopen(const char *);
int lib_file_open(const char *, uint, byte *, uint, uint *, ref *);
int file_read_string(const byte *, uint, ref *);
int filter_open(const char *, uint, ref *, const stream_procs *, const stream_template *, const stream_state *);
void make_stream_file(ref *, stream *, const char *);
int file_close_finish(stream *);
int file_close_disable(stream *);
int file_close_file(stream *);
int file_close(ref *);
stream *file_alloc_stream(gs_memory_t *, client_name_t);
void file_save(void);
int zreadline_from(stream *, byte *, uint, uint *, bool *);
void initial_enter_name(const char *, const ref *);
void initial_remove_name(const char *);
extern const int gs_interp_max_op_num_args;
extern const int gs_interp_num_special_ops;
void gs_interp_make_oper(ref * opref, op_proc_p, int index);
int gs_errorname(int, ref *);
int gs_errorinfo_put_string(const char *);
void gs_interp_init(void);
void gs_interp_reset(void);
void refcpy_to_new(ref * to, const ref * from, uint size);
int refcpy_to_old(ref * aref, uint index, const ref * from, uint size, client_name_t cname);
void refset_null(ref * to, uint size);
bool obj_eq(const ref *, const ref *);
bool obj_ident_eq(const ref *, const ref *);
int obj_cvp(const ref * op, byte * str, uint len, uint * prlen, const byte ** pchars, bool full_print);
int array_get(const ref *, long, ref *);
void packed_get(const ref_packed *, ref *);
int refs_check_space(const ref * refs, uint size, uint space);
int string_to_ref(const char *, ref *, gs_ref_memory_t *, client_name_t);
char *ref_to_string(const ref *, gs_memory_t *, client_name_t);
int num_params(const ref *, int, float *);
int real_param(const ref *, float *);
int int_param(const ref *, int, int *);
void make_reals(ref *, const float *, int);
int read_matrix(const ref *, gs_matrix *);
int write_matrix(ref *, const gs_matrix *);
extern int zflush(os_ptr);
extern int zflushpage(os_ptr);
extern char *getenv(const char *);
static void fpputs(const char *str)
{
    fprintf(gs_stdout, "%s\n", str);
} extern const char *gs_doc_directory;

extern const char *gs_lib_default_path;
extern ref gs_emulator_name_array[];
extern long gs_malloc_limit;
static int swproc(gs_main_instance *, const char *, arg_list *);
static void argproc(gs_main_instance *, const char *);
static int esc_strlen(const char *);
static void esc_strcat(char *, const char *);
static void runarg(gs_main_instance *, const char *, const char *, const char *, bool, bool);
static void run_string(gs_main_instance *, const char *, bool);
static void run_finish(int, int, ref *);
static void print_help(gs_main_instance *);
static void print_revision(void);
static void print_version(void);
static void print_usage(void);
static void print_devices(void);
static void print_emulators(void);
static void print_paths(gs_main_instance *);
static void print_help_trailer(void);
static FILE *gs_main_arg_fopen(const char *fname, void *vminst)
{
    gs_main_set_lib_paths((gs_main_instance *) vminst);
    return lib_fopen(fname);
}

int gs_main_init_with_args(gs_main_instance * minst, int argc, char *argv[])
{
    const char *arg;
    arg_list args;
    FILE *stdfiles[3];
    gs_get_real_stdio(stdfiles);
    arg_init(&args, (const char **) argv, argc, gs_main_arg_fopen, (void *) minst);
    gs_main_init0(minst, stdfiles[0], stdfiles[1], stdfiles[2], 25); {
	char *lib = getenv("GS_LIB");
	if (lib != 0) {
	    int len = strlen(lib);
	    char *path = (void *) (*(&gs_memory_default)->procs.alloc_byte_array) (&gs_memory_default, len + 1, 1, "GS_LIB");
	    strcpy(path, lib);
	    minst->lib_path.env = path;
	}
    } minst->lib_path.final = gs_lib_default_path;
    gs_main_set_lib_paths(minst); {
	int i;
	bool helping = ((bool) 0);
	for (i = 1; i < argc; ++i)
	    if (!strcmp(argv[i], "--")) {
		helping = ((bool) 0);
		break;
	    } else if (!strcmp(argv[i], "--help")) {
		print_help(minst);
		helping = ((bool) 1);
	    } else if (!strcmp(argv[i], "--version")) {
		print_version();
		fpputs("");
		helping = ((bool) 1);
	    }
	if (helping)
	    gs_exit(0);
    }
    minst->run_start = ((bool) 1); {
	const char *opts = getenv("GS_OPTIONS");
	if (opts != 0)
	    arg_push_string(&args, opts);
    }
    while ((arg = arg_next(&args)) != 0) {
	switch (*arg) {
	case '-':
	    if (swproc(minst, arg, &args) < 0)
		fprintf(gs_stdout, "Unknown switch %s - ignoring\n", arg);
	    break;
	default:
	    argproc(minst, arg);
	}
    }
    gs_main_init2(minst);
    return 0;
}

void gs_main_run_start(gs_main_instance * minst)
{
    run_string(minst, "systemdict /start get exec", ((bool) 1));
} static int swproc(gs_main_instance * minst, const char *arg, arg_list * pal)
{
    char sw = arg[1];
    ref vtrue;
    ((&vtrue)->value.boolval = (1), ((&vtrue)->tas.type_attrs = ((t_boolean) << 8) + (0)));
    arg += 2;
    switch (sw) {
    default:
	return -1;
    case 0:
	minst->run_start = ((bool) 0);
	swproc(minst, "-dNOPAUSE", pal);
	gs_main_init2(minst);
	run_string(minst, ".runstdin", ((bool) 1));
	break;
    case '-':
    case '+':
	pal->expand_ats = ((bool) 0);
    case '@':{
	    const char *psarg = arg_next(pal);
	    if (psarg == 0) {
		fprintf(gs_stdout, "Usage: gs ... -%c file.ps arg1 ... argn\n", sw);
		arg_finit(pal);
		gs_exit(1);
	    }
	    psarg = arg_copy(psarg, &gs_memory_default);
	    gs_main_init2(minst);
	    run_string(minst, "userdict/ARGUMENTS[", ((bool) 0));
	    while ((arg = arg_next(pal)) != 0)
		runarg(minst, "", arg_copy(arg, &gs_memory_default), "", ((bool) 1), ((bool) 0));
	    runarg(minst, "]put", psarg, ".runfile", ((bool) 1), ((bool) 1));
	    return 0;
	}
    case 'A':
	switch (*arg) {
	case 0:
	    gs_debug['@'] = 1;
	    break;
	case '-':
	    gs_debug['@'] = 0;
	    break;
	default:
	    fpputs("-A may only be followed by -");
	    gs_exit(1);
	}
	break;
    case 'c':{
	    bool ats = pal->expand_ats;
	    gs_main_init2(minst);
	    pal->expand_ats = ((bool) 0);
	    while ((arg = arg_next(pal)) != 0) {
		char *sarg;
		if (arg[0] == '@' || (arg[0] == '-' && !((*__ctype_b_loc())[(int) ((arg[1]))] & (unsigned short int) _ISdigit)))
		    break;
		sarg = arg_copy(arg, &gs_memory_default);
		runarg(minst, "", sarg, ".runstring", ((bool) 0), ((bool) 0));
	    }
	    if (arg != 0)
		arg_push_string(pal, arg_copy(arg, &gs_memory_default));
	    pal->expand_ats = ats;
	    break;
	}
    case 'E':
	switch (*arg) {
	case 0:
	    gs_debug['#'] = 1;
	    break;
	case '-':
	    gs_debug['#'] = 0;
	    break;
	default:
	    fpputs("-E may only be followed by -");
	    gs_exit(1);
	}
	break;
    case 'f':
	if (*arg != 0)
	    argproc(minst, arg);
	break;
    case 'g':{
	    long width, height;
	    ref value;
	    gs_main_init1(minst);
	    if (sscanf((const char *) arg, "%ldx%ld", &width, &height) != 2) {
		fpputs("-g must be followed by <width>x<height>");
		gs_exit(1);
	    }
	    ((&value)->value.intval = (width), ((&value)->tas.type_attrs = ((t_integer) << 8) + (0)));
	    initial_enter_name("DEVICEWIDTH", &value);
	    ((&value)->value.intval = (height), ((&value)->tas.type_attrs = ((t_integer) << 8) + (0)));
	    initial_enter_name("DEVICEHEIGHT", &value);
	    initial_enter_name("FIXEDMEDIA", &vtrue);
	    break;
	}
    case 'h':
    case '?':
	print_help(minst);
	gs_exit(0);
    case 'I':
	gs_main_add_lib_path(minst, arg_copy(arg, &gs_memory_default));
	break;
    case 'K':{
	    long msize = 0;
	    sscanf((const char *) arg, "%ld", &msize);
	    if (msize <= 0 || msize > (~(-1L << ((1 << 2) * 8 - 1))) >> 10) {
		fprintf(gs_stdout, "-K<numK> must have 1 <= numK <= %ld\n", (~(-1L << ((1 << 2) * 8 - 1))) >> 10);
		gs_exit(1);
	    }
	    gs_malloc_limit = msize << 10;
	}
	break;
    case 'M':{
	    unsigned msize = 0;
	    sscanf((const char *) arg, "%u", &msize);
	    minst->memory_chunk_size = msize << 10;
	} break;
    case 'N':{
	    unsigned nsize = 0;
	    sscanf((const char *) arg, "%d", &nsize);
	    minst->name_table_size = (ulong) nsize << 10;
	} break;
    case 'P':
	if (!strcmp(arg, ""))
	    minst->search_here_first = ((bool) 1);
	else if (!strcmp(arg, "-"))
	    minst->search_here_first = ((bool) 0);
	else {
	    fpputs("Only -P or -P- is allowed.");
	    gs_exit(1);
	}
	break;
    case 'q':
	gs_main_init1(minst);
	initial_enter_name("QUIET", &vtrue);
	break;
    case 'r':{
	    float xres, yres;
	    ref value;
	    gs_main_init1(minst);
	    switch (sscanf((const char *) arg, "%fx%f", &xres, &yres)) {
	    default:
		fpputs("-r must be followed by <res> or <xres>x<yres>");
		gs_exit(1);
	    case 1:
		yres = xres;
	    case 2:
		((&value)->value.realval = (xres), ((&value)->tas.type_attrs = ((t_real) << 8) + (0)));
		initial_enter_name("DEVICEXRESOLUTION", &value);
		((&value)->value.realval = (yres), ((&value)->tas.type_attrs = ((t_real) << 8) + (0)));
		initial_enter_name("DEVICEYRESOLUTION", &value);
		initial_enter_name("FIXEDRESOLUTION", &vtrue);
	    }
	    break;
	}
    case 'D':
    case 'd':
    case 'S':
    case 's':{
	    char *adef = arg_copy(arg, &gs_memory_default);
	    char *eqp = strchr(adef, '=');
	    bool isd = (sw == 'D' || sw == 'd');
	    ref value;
	    if (eqp == ((void *) 0))
		eqp = strchr(adef, '#');
	    gs_main_init1(minst);
	    if (eqp == adef) {
		fpputs("Usage: -dname, -dname=token, -sname=string");
		gs_exit(1);
	    }
	    if (eqp == ((void *) 0)) {
		if (isd)
		    ((&value)->value.boolval = (1), ((&value)->tas.type_attrs = ((t_boolean) << 8) + (0)));
		else
		    ((&value)->value.bytes = ((byte *) ((void *) 0)), ((&value)->tas.type_attrs = ((t_string) << 8) + ((0x20 + 0x40))), ((&value)->tas.rsize = (0)));
	    } else {
		int code;
		uint space = (((&gs_imemory))->current_space);
		*eqp++ = 0;
		ialloc_set_space((&gs_imemory), avm_system);
		if (isd) {
		    stream astream;
		    scanner_state state;
		    sread_string(&astream, (const byte *) eqp, strlen(eqp));
		    ((&state)->s_scan_type = scanning_none, (&state)->s_pstack = 0, (&state)->s_from_string = ((bool) 0));
		    code = scan_token(&astream, &value, &state);
		    if (code) {
			fpputs("-dname= must be followed by a valid token");
			gs_exit(1);
		    }
		    if ((((&value)->tas.type_attrs & ((((1 << 6) - (1)) << 8) + (0x80))) == (((t_name) << 8) + (0x80)))) {
			ref nsref;
			name_string_ref(&value, &nsref);
			if ((((&(nsref))->tas.rsize) == (4) && !strncmp((const char *) (nsref).value.const_bytes, "null", (4))))
			    (((&value)->tas.type_attrs = ((t_null) << 8) + (0)));
			else if ((((&(nsref))->tas.rsize) == (4) && !strncmp((const char *) (nsref).value.const_bytes, "true", (4))))
			    ((&value)->value.boolval = (1), ((&value)->tas.type_attrs = ((t_boolean) << 8) + (0)));
			else if ((((&(nsref))->tas.rsize) == (5) && !strncmp((const char *) (nsref).value.const_bytes, "false", (5))))
			    ((&value)->value.boolval = (0), ((&value)->tas.type_attrs = ((t_boolean) << 8) + (0)));
			else {
			    fpputs("-dvar=name requires name=null, true, or false");
			    gs_exit(1);
			}
		    }
		} else {
		    int len = strlen(eqp);
		    char *str = (void *) (*(&gs_memory_default)->procs.alloc_byte_array) (&gs_memory_default, (uint) len, 1, "-s");
		    if (str == 0) {
			(eprintf_program_name(gs_stderr, gs_product), lprintf_file_and_line(gs_stderr, "imainarg.c", 433), fprintf(gs_stderr, "Out of memory!\n"));
			gs_exit(1);
		    }
		    memcpy(str, eqp, len);
		    ((&value)->value.const_bytes = ((const byte *) str), ((&value)->tas.type_attrs = ((t_string) << 8) + ((0x20 + 0x40) | avm_foreign)), ((&value)->tas.rsize = (len)));
		} ialloc_set_space((&gs_imemory), space);
	    } initial_enter_name(adef, &value);
	    break;
	}
    case 'u':
	if (!*arg) {
	    fpputs("-u requires a name to undefine.");
	    gs_exit(1);
	}
	gs_main_init1(minst);
	initial_remove_name(arg);
	break;
    case 'v':
	print_revision();
	gs_exit(0);
    case 'X':
	gs_main_init2(minst); {
	    int xec;
	    ref xeo;
	    gs_main_run_string_begin(minst, 1, &xec, &xeo);
	    gs_main_run_string_continue(minst, "\216\003abc", strlen("\216\003abc"), 1, &xec, &xeo);
	    gs_main_run_string_continue(minst, "== flush\n", strlen("== flush\n"), 1, &xec, &xeo);
	    gs_main_run_string_end(minst, 1, &xec, &xeo);
	} gs_exit(0);
    case 'Z':{
	    byte value = (*arg == '-' ? (++arg, 0) : 0xff);
	    while (*arg)
		gs_debug[*arg++ & 127] = value;
	}
	break;
    }
    return 0;
}

static int esc_strlen(const char *str)
{
    return strlen(str) * 2 + 2;
}

static void esc_strcat(char *dest, const char *src)
{
    char *d = dest + strlen(dest);
    const char *p;
    static const char *hex = "0123456789abcdef";
    *d++ = '<';
    for (p = src; *p; p++) {
	byte c = (byte) * p;
	*d++ = hex[c >> 4];
	*d++ = hex[c & 0xf];
    }
    *d++ = '>';
    *d = 0;
}

static void argproc(gs_main_instance * minst, const char *arg)
{
    runarg(minst, "", arg, ".runfile", ((bool) 1), ((bool) 1));
} static void runarg(gs_main_instance * minst, const char *pre, const char *arg, const char *post, bool init, bool flush)
{
    int len = strlen(pre) + esc_strlen(arg) + strlen(post) + 1;
    char *line;
    if (init)
	gs_main_init2(minst);
    line = (void *) (*(&gs_memory_default)->procs.alloc_byte_array) (&gs_memory_default, len, 1, "argproc");
    if (line == 0) {
	(eprintf_program_name(gs_stderr, gs_product), lprintf_file_and_line(gs_stderr, "imainarg.c", 527), fprintf(gs_stderr, "Out of memory!\n"));
	gs_exit(1);
    }
    strcpy(line, pre);
    esc_strcat(line, arg);
    strcat(line, post);
    run_string(minst, line, flush);
}

static void run_string(gs_main_instance * minst, const char *str, bool flush)
{
    int exit_code;
    ref error_object;
    int code = gs_main_run_string(minst, str, minst->user_errors, &exit_code, &error_object);
    if (flush || code != 0) {
	zflush((o_stack.p));
	zflushpage((o_stack.p));
    }
    run_finish(code, exit_code, &error_object);
}

static void run_finish(int code, int exit_code, ref * perror_object)
{
    switch (code) {
    case 0:
	break;
    case (-101):
	gs_exit(0);
    case (-100):
	(eprintf_program_name(gs_stderr, gs_product), fprintf(gs_stderr, "Unrecoverable error, exit code %d\n", exit_code));
	gs_exit(exit_code);
    default:
	gs_debug_dump_stack(code, perror_object);
	gs_exit_with_code(255, code);
    }
}

static const char help_usage1[] = "Usage: gs [switches] [file1.ps file2.ps ...]\nMost frequently used switches: (you can use # in place of =)\n -dNOPAUSE           no pause after page   | -q       `quiet', fewer messages\n -g<width>x<height>  page size in pixels   | -r<res>  pixels/inch resolution\n";
static const char help_usage2[] = " -sDEVICE=<devname>  select device         | -dBATCH  exit after last file\n -sOutputFile=<file> select output file: - for stdout, |command for pipe,\n                                         embed %d or %ld for page #\n";
static const char help_trailer[] = "For more information, see %s%suse.txt.\nReport bugs to %s; use the form in bug-form.txt.\n";
static const char help_devices[] = "Available devices:";
static const char help_emulators[] = "Input formats:";
static const char help_paths[] = "Search path:";
static void print_help(gs_main_instance * minst)
{
    print_revision();
    print_usage();
    print_emulators();
    print_devices();
    print_paths(minst);
    print_help_trailer();
} static void print_revision(void)
{
    fprintf(gs_stdout, "%s ", gs_product);
    print_version();
    fprintf(gs_stdout, " (%d-%d-%d)\n%s\n", (int) (gs_revisiondate / 10000), (int) (gs_revisiondate / 100 % 100), (int) (gs_revisiondate % 100), gs_copyright);
} static void print_version(void)
{
    fprintf(gs_stdout, "%d.%02d", (int) (gs_revision / 100), (int) (gs_revision % 100));
} static void print_usage(void)
{
    fprintf(gs_stdout, "%s", help_usage1);
    fprintf(gs_stdout, "%s", help_usage2);
} static void print_devices(void)
{
    fprintf(gs_stdout, "%s", help_devices); {
	int i;
	int pos = 100;
	const gx_device *pdev;
	for (i = 0; (pdev = gs_getdevice(i)) != 0; i++) {
	    const char *dname = gs_devicename(pdev);
	    int len = strlen(dname);
	    if (pos + 1 + len > 76)
		fprintf(gs_stdout, "\n  "), pos = 2;
	    fprintf(gs_stdout, " %s", dname);
	    pos += 1 + len;
	}
    }
    fprintf(gs_stdout, "\n");
}

static void print_emulators(void)
{
    fprintf(gs_stdout, "%s", help_emulators); {
	const ref *pes;
	for (pes = gs_emulator_name_array; pes->value.const_bytes != 0; pes++)
	    fprintf(gs_stdout, " %s", pes->value.const_bytes);
    }
    fprintf(gs_stdout, "\n");
}

static void print_paths(gs_main_instance * minst)
{
    fprintf(gs_stdout, "%s", help_paths);
    gs_main_set_lib_paths(minst); {
	uint count = ((&minst->lib_path.list)->tas.rsize);
	uint i;
	int pos = 100;
	char fsepr[3];
	fsepr[0] = ' ', fsepr[1] = gp_file_name_list_separator, fsepr[2] = 0;
	for (i = 0; i < count; ++i) {
	    const ref *prdir = minst->lib_path.list.value.refs + i;
	    uint len = ((prdir)->tas.rsize);
	    const char *sepr = (i == count - 1 ? "" : fsepr);
	    if (1 + pos + strlen(sepr) + len > 76)
		fprintf(gs_stdout, "\n  "), pos = 2;
	    fprintf(gs_stdout, " "); {
		const char *p = (const char *) prdir->value.bytes;
		uint j;
		for (j = len; j; j--)
		    fprintf(gs_stdout, "%c", *p++);
	    }
	    fprintf(gs_stdout, sepr);
	    pos += 1 + len + strlen(sepr);
	}
    }
    fprintf(gs_stdout, "\n");
}

static void print_help_trailer(void)
{
    fprintf(gs_stdout, help_trailer, gs_doc_directory, gp_file_name_concat_string(gs_doc_directory, strlen(gs_doc_directory), "use.txt", 7), "ghost@aladdin.com");
}
