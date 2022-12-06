static char Rcs_Id[] = "$Id: correct.c,v 1.59 1995/08/05 23:19:43 geoff Exp $";
typedef __typeof__(((int *) 0) - ((int *) 0)) ptrdiff_t;
typedef __typeof__(sizeof(int)) size_t;
typedef int wchar_t;
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
typedef struct __locale_struct {
    struct locale_data *__locales[13];
    const unsigned short int *__ctype_b;
    const int *__ctype_tolower;
    const int *__ctype_toupper;
    const char *__names[13];
} *__locale_t;
typedef __locale_t locale_t;
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
struct dirent {
    __ino_t d_ino;
    __off_t d_off;
    unsigned short int d_reclen;
    unsigned char d_type;
    char d_name[256];
};
enum { DT_UNKNOWN = 0, DT_FIFO = 1, DT_CHR = 2, DT_DIR = 4, DT_BLK = 6, DT_REG = 8, DT_LNK = 10, DT_SOCK = 12, DT_WHT = 14 };
typedef struct __dirstream DIR;
extern DIR *opendir(__const char *__name) __attribute__ ((__nonnull__(1)));
extern DIR *fdopendir(int __fd);
extern int closedir(DIR * __dirp) __attribute__ ((__nonnull__(1)));
extern struct dirent *readdir(DIR * __dirp) __attribute__ ((__nonnull__(1)));
extern int readdir_r(DIR * __restrict __dirp, struct dirent *__restrict __entry, struct dirent **__restrict __result) __attribute__ ((__nonnull__(1, 2, 3)));
extern void rewinddir(DIR * __dirp) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern void seekdir(DIR * __dirp, long int __pos) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern long int telldir(DIR * __dirp) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int dirfd(DIR * __dirp) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int scandir(__const char *__restrict __dir, struct dirent ***__restrict __namelist, int (*__selector) (__const struct dirent *), int (*__cmp) (__const struct dirent **, __const struct dirent **)) __attribute__ ((__nonnull__(1, 2)));
extern int alphasort(__const struct dirent **__e1, __const struct dirent **__e2) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1, 2)));
extern __ssize_t getdirentries(int __fd, char *__restrict __buf, size_t __nbytes, __off_t * __restrict __basep) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2, 4)));
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
typedef unsigned char ichar_t;
struct dent {
    struct dent *next;
    char *word;
    long mask[(32 / 32)];
};
struct flagent {
    ichar_t *strip;
    ichar_t *affix;
    short flagbit;
    short stripl;
    short affl;
    short numconds;
    short flagflags;
    char conds[128 + 100];
};
union ptr_union {
    struct flagptr *fp;
    struct flagent *ent;
};
struct flagptr {
    union ptr_union pu;
    int numents;
};
struct strchartype {
    char *name;
    char *deformatter;
    char *suffixes;
};
struct hashheader {
    unsigned short magic;
    unsigned short compileoptions;
    short maxstringchars;
    short maxstringcharlen;
    short compoundmin;
    short compoundbit;
    int stringsize;
    int lstringsize;
    int tblsize;
    int stblsize;
    int ptblsize;
    int sortval;
    int nstrchars;
    int nstrchartype;
    int strtypestart;
    char nrchars[5];
    char texchars[13];
    char compoundflag;
    char defhardflag;
    char flagmarker;
    unsigned short sortorder[128 + 100];
    ichar_t lowerconv[128 + 100];
    ichar_t upperconv[128 + 100];
    char wordchars[128 + 100];
    char upperchars[128 + 100];
    char lowerchars[128 + 100];
    char boundarychars[128 + 100];
    char stringstarts[128];
    char stringchars[100][10 + 1];
    unsigned int stringdups[100];
    int dupnos[100];
    unsigned short magic2;
};
struct success {
    struct dent *dictent;
    struct flagent *prefix;
    struct flagent *suffix;
};
extern char *BC;
extern char *cd;
extern char *cl;
extern char *cm;
extern char *ho;
extern char *nd;
extern char *so;
extern char *se;
extern int sg;
extern char *ti;
extern char *te;
extern int li;
extern int co;
extern int contextsize;
extern char contextbufs[10][8192];
extern int contextoffset;
extern char *currentchar;
extern char ctoken[100 + 20];
extern ichar_t itoken[100 + 20];
extern char termcap[2048];
extern char termstr[2048];
extern char *termptr;
extern int numhits;
extern struct success hits[10];
extern char *hashstrings;
extern struct hashheader hashheader;
extern struct dent *hashtbl;
extern int hashsize;
extern char hashname[4096];
extern int aflag;
extern int cflag;
extern int lflag;
extern int incfileflag;
extern int nodictflag;
extern int uerasechar;
extern int ukillchar;
extern unsigned int laststringch;
extern int defdupchar;
extern int numpflags;
extern int numsflags;
extern struct flagptr pflagindex[128 + 100];
extern struct flagent *pflaglist;
extern struct flagptr sflagindex[128 + 100];
extern struct flagent *sflaglist;
extern struct strchartype *chartypes;
extern FILE *infile;
extern FILE *outfile;
extern FILE *infile1;
extern FILE *outfile1;
extern char *askfilename;
extern int changes;
extern int readonly;
extern int quit;
extern char possibilities[100][100 + 20];
extern int pcount;
extern int maxposslen;
extern int easypossibilities;
extern int Trynum;
extern ichar_t Try[128 + 100];
extern int minimenusize;
extern int eflag;
extern int dumpflag;
extern int fflag;
extern int sflag;
extern int vflag;
extern int xflag;
extern int deftflag;
extern int tflag;
extern int prefstringchar;
extern int terse;
extern char tempfile[4096];
extern int minword;
extern int sortit;
extern int compoundflag;
extern int tryhardflag;
extern char *currentfile;
extern int math_mode;
extern char LaTeX_Mode;
extern int addvheader(struct dent *ent);
extern void askmode(void);
extern void backup(void);
extern int cap_ok(ichar_t * word, struct success *hit, int len);
extern int casecmp(char *a, char *b, int canonical);
extern void chupcase(char *s);
extern void checkfile(void);
extern void checkline(FILE * ofile);
extern void chk_aff(ichar_t * word, ichar_t * ucword, int len, int ignoreflagbits, int allhits, int pfxopts, int sfxopts);
extern int combinecaps(struct dent *hdr, struct dent *newent);
extern int compoundgood(ichar_t * word, int pfxopts);
extern void copyout(char **cc, int cnt);
extern void correct(char *ctok, int ctokl, ichar_t * itok, int itokl, char **curchar);
extern char *do_regex_lookup(char *expr, int whence);
extern void done(int);
extern void dumpmode(void);
extern void erase(void);
extern int expand_pre(char *croot, ichar_t * rootword, long mask[], int option, char *extra);
extern int expand_suf(char *croot, ichar_t * rootword, long mask[], int crossonly, int option, char *extra);
extern int findfiletype(char *name, int searchnames, int *deformatter);
extern void flagpr(ichar_t * word, int preflag, int prestrip, int preadd, int sufflag, int sufadd);
extern void givehelp(int interactive);
extern int good(ichar_t * word, int ignoreflagbits, int allhits, int pfxopts, int sfxopts);
extern int hash(ichar_t * word, int hashtablesize);
extern int ichartostr(char *out, ichar_t * in, int outlen, int canonical);
extern char *ichartosstr(ichar_t * in, int canonical);
extern int ins_root_cap(ichar_t * word, ichar_t * pattern, int prestrip, int preadd, int sufstrip, int sufadd, struct dent *firstdent, struct flagent *pfxent, struct flagent *sufent);
extern void inverse(void);
extern int linit(void);
extern struct dent *lookup(ichar_t * word, int dotree);
extern void lowcase(ichar_t * string);
extern int makedent(char *lbuf, int lbuflen, struct dent *d);
extern void makepossibilities(ichar_t * word);
extern void move(int row, int col);
extern void normal(void);
extern char *printichar(int in);
extern int shellescape(char *buf);
extern char *skipoverword(char *bufp);
extern void stop(void);
extern int stringcharlen(char *bufp, int canonical);
extern int strtoichar(ichar_t * out, char *in, int outlen, int canonical);
extern ichar_t *strtosichar(char *in, int canonical);
extern void terminit(void);
extern void toutent(FILE * outfile, struct dent *hent, int onlykeep);
extern void treeinit(char *persdict, char *LibDict);
extern void treeinsert(char *word, int wordlen, int keep);
extern struct dent *treelookup(ichar_t * word);
extern void treeoutput(void);
extern void upcase(ichar_t * string);
extern long whatcap(ichar_t * word);
extern char *xgets(char *string, int size, FILE * stream);
extern void yyinit(void);
extern int yyopen(char *file);
extern int yyparse(void);
extern void myfree(void *area);
extern void *mymalloc(unsigned int);
extern void *myrealloc(void *area, unsigned int size, unsigned int oldsize);
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
extern char *index();
extern char *rindex();
extern int tgetent();
extern int tgetnum();
extern char *tgetstr();
extern char *tgoto();
extern char *tputs();
static char *Version_ID[] = { "@(#) International Ispell Version 3.1.20 10/10/95", "@(#) Copyright (c), 1983, by Pace Willisson", "@(#) International version Copyright (c) 1987, 1988, 1990-1995,", "@(#) by Geoff Kuenning, Granada Hills, CA.  All rights reserved.", "@(#)", "@(#) Redistribution and use in source and binary forms, with or without", "@(#) modification, are permitted provided that the following conditions", "@(#) are met:", "@(#)", "@(#) 1. Redistributions of source code must retain the above copyright", "@(#)    notice, this list of conditions and the following disclaimer.", "@(#) 2. Redistributions in binary form must reproduce the above", "@(#)    copyright notice, this list of conditions and the following", "@(#)    disclaimer in the documentation and/or other materials provided", "@(#)    with the distribution.", "@(#) 3. All modifications to the source code must be clearly marked as", "@(#)    such.  Binary redistributions based on modified source code", "@(#)    must be clearly marked as modified versions in the documentation", "@(#)    and/or other materials provided with the distribution.", "@(#) 4. All advertising materials mentioning features or use of this", "@(#)    software must display the following acknowledgment:", "@(#)      This product includes software developed by Geoff Kuenning and", "@(#)      other unpaid contributors.", "@(#) 5. The name of Geoff Kuenning may not be used to endorse or promote", "@(#)    products derived from this software without specific prior", "@(#)    written permission.", "@(#)", "@(#) THIS SOFTWARE IS PROVIDED BY GEOFF KUENNING AND CONTRIBUTORS ``AS", "@(#) IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT", "@(#) LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS", "@(#) FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL GEOFF", "@(#) KUENNING OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,", "@(#) INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES", "@(#) (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR", "@(#) SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)", "@(#) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,", "@(#) STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)", "@(#) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED", "@(#) OF THE POSSIBILITY OF SUCH DAMAGE.", ((void *) 0) };

static char RCS_Version_ID[] = "$Id: version.h,v 1.44 1995/10/11 05:03:28 geoff Exp $";
extern int cbench_print;
void givehelp(int interactive);
void checkfile(void);
void correct(char *ctok, int ctokl, ichar_t * itok, int itokl, char **curchar);
static void show_line(char *line, char *invstart, int invlen);
static int show_char(char **cp, int linew, int output, int maxw);
static int line_size(char *buf, char *bufend);
static void inserttoken(char *buf, char *start, char *tok, char **curchar);
static int posscmp(char *a, char *b);
int casecmp(char *a, char *b, int canonical);
void makepossibilities(ichar_t * word);
static int insert(ichar_t * word);
static void wrongcapital(ichar_t * word);
static void wrongletter(ichar_t * word);
static void extraletter(ichar_t * word);
static void missingletter(ichar_t * word);
static void missingspace(ichar_t * word);
int compoundgood(ichar_t * word, int pfxopts);
static void transposedletter(ichar_t * word);
static void tryveryhard(ichar_t * word);
static int ins_cap(ichar_t * word, ichar_t * pattern);
static int save_cap(ichar_t * word, ichar_t * pattern, ichar_t savearea[10][100 + 20]);
int ins_root_cap(ichar_t * word, ichar_t * pattern, int prestrip, int preadd, int sufstrip, int sufadd, struct dent *firstdent, struct flagent *pfxent, struct flagent *sufent);
static void save_root_cap(ichar_t * word, ichar_t * pattern, int prestrip, int preadd, int sufstrip, int sufadd, struct dent *firstdent, struct flagent *pfxent, struct flagent *sufent, ichar_t savearea[10][100 + 20], int *nsaved);
static char *getline(char *buf);
void askmode(void);
void copyout(char **cc, int cnt);
static void lookharder(char *string);
void givehelp(interactive)
int interactive;
{
    register FILE *helpout;
    if (interactive) {
	erase();
	helpout = outfile1;
    } else
	helpout = stderr;
    (void) fprintf(helpout, "Whenever a word is found that is not in the dictionary,\r\n");
    (void) fprintf(helpout, "it is printed on the first line of the screen.  If the dictionary\r\n");
    (void) fprintf(helpout, "contains any similar words, they are listed with a number\r\n");
    (void) fprintf(helpout, "next to each one.  You have the option of replacing the word\r\n");
    (void) fprintf(helpout, "completely, or choosing one of the suggested words.\r\n");
    (void) fprintf(helpout, "");
    (void) fprintf(helpout, "");
    (void) fprintf(helpout, "");
    (void) fprintf(helpout, "");
    (void) fprintf(helpout, "\r\nCommands are:\r\n\r\n");
    (void) fprintf(helpout, "R       Replace the misspelled word completely.\r\n");
    (void) fprintf(helpout, "Space   Accept the word this time only.\r\n");
    (void) fprintf(helpout, "A       Accept the word for the rest of this session.\r\n");
    (void) fprintf(helpout, "I       Accept the word, and put it in your private dictionary.\r\n");
    (void) fprintf(helpout, "U       Accept and add lowercase version to private dictionary.\r\n");
    (void) fprintf(helpout, "0-n     Replace with one of the suggested words.\r\n");
    (void) fprintf(helpout, "L       Look up words in system dictionary.\r\n");
    (void) fprintf(helpout, "X       Write the rest of this file, ignoring misspellings,\r\n        and start next file.\r\n");
    (void) fprintf(helpout, "Q       Quit immediately.  Asks for confirmation.\r\n        Leaves file unchanged.\r\n");
    (void) fprintf(helpout, "!       Shell escape.\r\n");
    (void) fprintf(helpout, "^L      Redraw screen.\r\n");
    (void) fprintf(helpout, "^Z      Suspend program.\r\n");
    (void) fprintf(helpout, "?       Show this help screen.\r\n");
    if (interactive) {
	(void) fprintf(helpout, "\r\n\r\n");
	(void) fprintf(helpout, "-- Type space to continue --");
	(void) fflush(helpout);
	while (getchar() != ' ');
    }
}

void checkfile()
{
    int bufno;
    int bufsize;
    int ch;
    for (bufno = 0; bufno < contextsize; bufno++)
	contextbufs[bufno][0] = '\0';
    for (;;) {
	for (bufno = contextsize; --bufno > 0;)
	    (void) strcpy(contextbufs[bufno], contextbufs[bufno - 1]);
	if (quit) {
	    while (fgets(contextbufs[0], sizeof contextbufs[0], infile) != ((void *) 0))
		(void) fputs(contextbufs[0], outfile);
	    break;
	}
	if (fgets(contextbufs[0], (sizeof contextbufs[0]) / 2, infile) == ((void *) 0))
	    break;
	bufsize = strlen(contextbufs[0]);
	if (bufsize == (sizeof contextbufs[0]) / 2 - 1) {
	    ch = (unsigned char) contextbufs[0][bufsize - 1];
	    while (bufsize < sizeof contextbufs[0] - 1 && ((hashheader.wordchars[((ichar_t) ch)]) || (hashheader.boundarychars[((ichar_t) ch)]) || (hashheader.stringstarts[(unsigned char) (ch)]))) {
		ch = _IO_getc(infile);
		if (ch == (-1))
		    break;
		contextbufs[0][bufsize++] = (char) ch;
		contextbufs[0][bufsize] = '\0';
	}}
	checkline(outfile);
}} void correct(ctok, ctokl, itok, itokl, curchar)

char *ctok;
int ctokl;
ichar_t *itok;
int itokl;
char **curchar;
{
    register int c;
    register int i;
    int col_ht;
    int ncols;
    char *start_l2;
    char *begintoken;
    begintoken = *curchar - strlen(ctok);
    if (strlen((char *) (itok)) <= minword)
	return;
  checkagain:if (good(itok, 0, 0, 0, 0) || compoundgood(itok, 0))
	return;
    erase();
    (void) printf("    %s", ctok);
    if (currentfile)
	(void) printf("              File: %s", currentfile);
    if (readonly)
	(void) printf(" %s", "[READONLY]");
    (void) printf("\r\n\r\n");
    makepossibilities(itok);
    col_ht = li - contextsize - 4 - minimenusize;
    ncols = co / (maxposslen + 8);
    if (pcount > ncols * col_ht)
	pcount = ncols * col_ht;
    for (i = 0; i < pcount; i++) {
	move(3 + contextsize + (i % col_ht), (maxposslen + 8) * (i / col_ht));
	if (i >= easypossibilities)
	    (void) printf("??: %s", possibilities[i]);
	else if (easypossibilities >= 10 && i < 10)
	    (void) printf("0%d: %s", i, possibilities[i]);
	else
	    (void) printf("%2d: %s", i, possibilities[i]);
    } move(2, 0);
    for (i = contextsize; --i > 0;)
	show_line(contextbufs[i], contextbufs[i], 0);
    start_l2 = contextbufs[0];
    if (line_size(contextbufs[0], *curchar) > co - (sg << 1) - 1) {
	start_l2 = begintoken - (co / 2);
	while (start_l2 < begintoken) {
	    i = line_size(start_l2, *curchar) + 1;
	    if (i + (sg << 1) <= co)
		break;
	    start_l2 += i - co;
	}
	if (start_l2 > begintoken)
	    start_l2 = begintoken;
	if (start_l2 < contextbufs[0])
	    start_l2 = contextbufs[0];
    }
    show_line(start_l2, begintoken, (int) strlen(ctok));
    if (minimenusize != 0) {
	move(li - 2, 0);
	(void) printf("[SP] <number> R)epl A)ccept I)nsert L)ookup U)ncap Q)uit e(X)it or ? for help\r\n");
    }
    for (;;) {
	(void) fflush(outfile1);
	switch (c = (getchar() & 0x7f)) {
	case 'Z' & 037:
	    stop();
	    erase();
	    goto checkagain;
	case ' ':
	    erase();
	    (void) fflush(outfile1);
	    return;
	case 'q':
	case 'Q':
	    if (changes) {
		(void) printf("Are you sure you want to throw away your changes? ");
		(void) fflush(outfile1);
		c = (getchar() & 0x7f);
	    } else
		c = 'y';
	    if (c == 'y' || c == 'Y') {
		erase();
		(void) fflush(outfile1);
		done(0);
	    }
	    goto checkagain;
	case 'i':
	case 'I':
	    treeinsert(ichartosstr(strtosichar(ctok, 0), 1), (100 + 4 * 20 + 4), 1);
	    erase();
	    (void) fflush(outfile1);
	    changes = 1;
	    return;
	case 'u':
	case 'U':
	    itok = strtosichar(ctok, 0);
	    lowcase(itok);
	    treeinsert(ichartosstr(itok, 1), (100 + 4 * 20 + 4), 1);
	    erase();
	    (void) fflush(outfile1);
	    changes = 1;
	    return;
	case 'a':
	case 'A':
	    treeinsert(ichartosstr(strtosichar(ctok, 0), 1), (100 + 4 * 20 + 4), 0);
	    erase();
	    (void) fflush(outfile1);
	    return;
	case 'L' & 037:
	    goto checkagain;
	case '?':
	    givehelp(1);
	    goto checkagain;
	case '!':{
		char buf[200];
		move(li - 1, 0);
		(void) putchar('!');
		if (getline(buf) == ((void *) 0)) {
		    (void) putchar(7);
		    erase();
		    (void) fflush(outfile1);
		    goto checkagain;
		}
		(void) printf("\r\n");
		(void) fflush(outfile1);
		(void) shellescape(buf);
		erase();
		goto checkagain;
	    }
	case 'r':
	case 'R':
	    move(li - 1, 0);
	    if (readonly) {
		(void) putchar(7);
		(void) printf("%s ", "[READONLY]");
	    }
	    (void) printf("Replace with: ");
	    if (getline(ctok) == ((void *) 0)) {
		(void) putchar(7);
		(void) ichartostr(ctok, itok, ctokl, 0);
	    } else {
		inserttoken(contextbufs[0], begintoken, ctok, curchar);
		if (strtoichar(itok, ctok, itokl, 0)) {
		    (void) putchar(7);
		    (void) printf("\r\nWord '%s' too long at line %d of %s, truncated\r\n", ctok, 488, "correct.c");
		}
		changes = 1;
	    } erase();
	    if (strlen((char *) (itok)) <= minword)
		return;
	    goto checkagain;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	    i = c - '0';
	    if (easypossibilities >= 10) {
		c = getchar() & 0x7f;
		if (c >= '0' && c <= '9')
		    i = i * 10 + c - '0';
		else if (c != '\r' && c != '\n') {
		    (void) putchar(7);
		    break;
		}
	    }
	    if (i < easypossibilities) {
		(void) strcpy(ctok, possibilities[i]);
		changes = 1;
		inserttoken(contextbufs[0], begintoken, ctok, curchar);
		erase();
		if (readonly) {
		    move(li - 1, 0);
		    (void) putchar(7);
		    (void) printf("%s", "[READONLY]");
		    (void) fflush(outfile1);
		    (void) sleep((unsigned) 2);
		}
		return;
	    }
	    (void) putchar(7);
	    break;
	case '\r':
	case '\n':
	    break;
	case 'l':
	case 'L':{
		char buf[100];
		move(li - 1, 0);
		(void) printf("Lookup string ('*' is wildcard): ");
		if (getline(buf) == ((void *) 0)) {
		    (void) putchar(7);
		    erase();
		    goto checkagain;
		}
		(void) printf("\r\n");
		(void) fflush(outfile1);
		lookharder(buf);
		erase();
		goto checkagain;
	    }
	case 'x':
	case 'X':
	    quit = 1;
	    erase();
	    (void) fflush(outfile1);
	    return;
	default:
	    (void) putchar(7);
	    break;
	}
    }
}

static void show_line(line, invstart, invlen)
char *line;
register char *invstart;
register int invlen;
{
    register int width;
    width = invlen ? (sg << 1) : 0;
    while (line < invstart && width < co - 1)
	width += show_char(&line, width, 1, invstart - line);
    if (invlen) {
	inverse();
	invstart += invlen;
	while (line < invstart && width < co - 1)
	    width += show_char(&line, width, 1, invstart - line);
	normal();
    }
    while (*line && width < co - 1)
	width += show_char(&line, width, 1, 0);
    (void) printf("\r\n");
} static int show_char(cp, linew, output, maxw)

register char **cp;
int linew;
int output;
int maxw;
{
    register int ch;
    register int i;
    int len;
    ichar_t ichar;
    register int width;
    ch = (unsigned char) **cp;
    if ((len = 1, (hashheader.stringstarts[(unsigned char) (*(*cp))]) && ((len = stringcharlen((*cp), (0))) > 0 ? 1 : (len = 1, 0))))
	ichar = 128 + laststringch;
    else
	ichar = ((ichar_t) (ch));
    if (!vflag && (hashheader.wordchars[(ichar)]) && len == 1) {
	if (output)
	    (void) putchar(ch);
	(*cp)++;
	return 1;
    }
    if (ch == '\t') {
	if (output)
	    (void) putchar('\t');
	(*cp)++;
	return 8 - (linew & 0x07);
    }
    width = 0;
    if (maxw != 0 && len > maxw)
	len = maxw;
    for (i = 0; i < len; i++) {
	ch = (unsigned char) *(*cp)++;
	if (ch > '\177') {
	    if (output) {
		(void) putchar('M');
		(void) putchar('-');
	    }
	    width += 2;
	    ch &= 0x7f;
	}
	if (ch < ' ' || ch == '\177') {
	    if (output) {
		(void) putchar('^');
		if (ch == '\177')
		    (void) putchar('?');
		else
		    (void) putchar(ch + 'A' - '\001');
	    }
	    width += 2;
	} else {
	    if (output)
		(void) putchar(ch);
	    width += 1;
    }} return width;
}

static int line_size(buf, bufend)
char *buf;
register char *bufend;
{
    register int width;
    for (width = 0; buf < bufend && *buf != '\0';)
	width += show_char(&buf, width, 0, bufend - buf);
    return width;
}

static void inserttoken(buf, start, tok, curchar)
char *buf;
char *start;
register char *tok;
char **curchar;
{
    char copy[8192];
    register char *p;
    register char *q;
    char *ew;
    (void) strcpy(copy, buf);
    for (p = buf, q = copy; p != start; p++, q++)
	*p = *q;
    q += *curchar - start;
    ew = skipoverword(tok);
    while (tok < ew)
	*p++ = *tok++;
    *curchar = p;
    if (*tok) {
	*p++ = *tok;
	*tok++ = '\0';
	while (*tok)
	    *p++ = *tok++;
    }
    while ((*p++ = *q++) != '\0');
}

static int posscmp(a, b)
char *a;
char *b;
{
    return casecmp(a, b, 0);
}

int casecmp(a, b, canonical)
char *a;
char *b;
int canonical;
{
    register ichar_t *ap;
    register ichar_t *bp;
    ichar_t inta[100 + 4 * 20 + 4];
    ichar_t intb[100 + 4 * 20 + 4];
    (void) strtoichar(inta, a, sizeof inta, canonical);
    (void) strtoichar(intb, b, sizeof intb, canonical);
    for (ap = inta, bp = intb; *ap != 0; ap++, bp++) {
	if (*ap != *bp) {
	    if (*bp == '\0')
		return hashheader.sortorder[*ap];
	    else if ((hashheader.lowerchars[(*ap)])) {
		if ((hashheader.lowerchars[(*bp)]) || (hashheader.upperconv[(*ap)]) != *bp)
		    return (int) hashheader.sortorder[*ap] - (int) hashheader.sortorder[*bp];
	    } else {
		if ((hashheader.upperchars[(*bp)]) || (hashheader.lowerconv[(*ap)]) != *bp)
		    return (int) hashheader.sortorder[*ap] - (int) hashheader.sortorder[*bp];
	}}
    } if (*bp != '\0')
	return -(int) hashheader.sortorder[*bp];
    for (ap = inta, bp = intb; *ap; ap++, bp++) {
	if (*ap != *bp) {
	    return (int) hashheader.sortorder[*ap] - (int) hashheader.sortorder[*bp];
	}
    } return 0;
}

void makepossibilities(word)
register ichar_t *word;
{
    register int i;
    for (i = 0; i < 100; i++)
	possibilities[i][0] = 0;
    pcount = 0;
    maxposslen = 0;
    easypossibilities = 0;
    wrongcapital(word);
    if (pcount < 100)
	missingletter(word);
    if (pcount < 100)
	transposedletter(word);
    if (pcount < 100)
	extraletter(word);
    if (pcount < 100)
	wrongletter(word);
    if ((compoundflag != 1) && pcount < 100)
	missingspace(word);
    easypossibilities = pcount;
    if (easypossibilities == 0 || tryhardflag)
	tryveryhard(word);
    if ((sortit || (pcount > easypossibilities)) && pcount) {
	if (easypossibilities > 0 && sortit)
	    qsort((char *) possibilities, (unsigned) easypossibilities, sizeof(possibilities[0]), (int (*)(const void *, const void *)) posscmp);
	if (pcount > easypossibilities)
	    qsort((char *) &possibilities[easypossibilities][0], (unsigned) (pcount - easypossibilities), sizeof(possibilities[0]), (int (*)(const void *, const void *)) posscmp);
    }
} static int insert(word)

register ichar_t *word;
{
    register int i;
    register char *realword;
    realword = ichartosstr(word, 0);
    for (i = 0; i < pcount; i++) {
	if (strcmp(possibilities[i], realword) == 0)
	    return (0);
    }
    (void) strcpy(possibilities[pcount++], realword);
    i = strlen(realword);
    if (i > maxposslen)
	maxposslen = i;
    if (pcount >= 100)
	return (-1);
    else
	return (0);
}

static void wrongcapital(word)
register ichar_t *word;
{
    ichar_t newword[100 + 20];
    if (good(word, 0, 1, 0, 0)) {
	(void) strcpy((char *) (newword), (char *) (word));
	upcase(newword);
	(void) ins_cap(newword, word);
    }
} static void wrongletter(word)

register ichar_t *word;
{
    register int i;
    register int j;
    register int n;
    ichar_t savechar;
    ichar_t newword[100 + 20];
    n = strlen((char *) (word));
    (void) strcpy((char *) (newword), (char *) (word));
    upcase(newword);
    for (i = 0; i < n; i++) {
	savechar = newword[i];
	for (j = 0; j < Trynum; ++j) {
	    if (Try[j] == savechar)
		continue;
	    else if ((hashheader.boundarychars[(Try[j])]) && (i == 0 || i == n - 1))
		continue;
	    newword[i] = Try[j];
	    if (good(newword, 0, 1, 0, 0)) {
		if (ins_cap(newword, word) < 0)
		    return;
	    }
	}
	newword[i] = savechar;
    }
}

static void extraletter(word)
register ichar_t *word;
{
    ichar_t newword[100 + 20];
    register ichar_t *p;
    register ichar_t *r;
    if (strlen((char *) (word)) < 2)
	return;
    (void) strcpy((char *) (newword), (char *) (word + 1));
    for (p = word, r = newword; *p != 0;) {
	if (good(newword, 0, 1, 0, 0)) {
	    if (ins_cap(newword, word) < 0)
		return;
	}
	*r++ = *p++;
    }
}

static void missingletter(word)
ichar_t *word;
{
    ichar_t newword[100 + 20 + 1];
    register ichar_t *p;
    register ichar_t *r;
    register int i;
    (void) strcpy((char *) (newword + 1), (char *) (word));
    for (p = word, r = newword; *p != 0;) {
	for (i = 0; i < Trynum; i++) {
	    if ((hashheader.boundarychars[(Try[i])]) && r == newword)
		continue;
	    *r = Try[i];
	    if (good(newword, 0, 1, 0, 0)) {
		if (ins_cap(newword, word) < 0)
		    return;
	    }
	}
	*r++ = *p++;
    }
    for (i = 0; i < Trynum; i++) {
	if ((hashheader.boundarychars[(Try[i])]))
	    continue;
	*r = Try[i];
	if (good(newword, 0, 1, 0, 0)) {
	    if (ins_cap(newword, word) < 0)
		return;
	}
    }
}

static void missingspace(word)
ichar_t *word;
{
    ichar_t firsthalf[10][100 + 20];
    int firstno;
    ichar_t *firstp;
    ichar_t newword[100 + 20 + 1];
    int nfirsthalf;
    int nsecondhalf;
    register ichar_t *p;
    ichar_t secondhalf[10][100 + 20];
    int secondno;
    nfirsthalf = strlen((char *) (word));
    if (nfirsthalf < 3 || nfirsthalf >= 100 + 20 - 1)
	return;
    (void) strcpy((char *) (newword + 1), (char *) (word));
    for (p = newword + 1; p[1] != '\0'; p++) {
	p[-1] = *p;
	*p = '\0';
	if (good(newword, 0, 1, 0, 0)) {
	    nfirsthalf = save_cap(newword, word, firsthalf);
	    if (good(p + 1, 0, 1, 0, 0)) {
		nsecondhalf = save_cap(p + 1, p + 1, secondhalf);
		for (firstno = 0; firstno < nfirsthalf; firstno++) {
		    firstp = &firsthalf[firstno][p - newword];
		    for (secondno = 0; secondno < nsecondhalf; secondno++) {
			*firstp = ' ';
			(void) strcpy((char *) (firstp + 1), (char *) (secondhalf[secondno]));
			if (insert(firsthalf[firstno]) < 0)
			    return;
			*firstp = '-';
			if (insert(firsthalf[firstno]) < 0)
			    return;
		    }
		}
	    }
	}
    }
}

int compoundgood(word, pfxopts)
ichar_t *word;
int pfxopts;
{
    ichar_t newword[100 + 20];
    register ichar_t *p;
    register ichar_t savech;
    long secondcap;
    if (compoundflag == 0)
	return 0;
    if (strlen((char *) (word)) < 2 * hashheader.compoundmin)
	return 0;
    (void) strcpy((char *) (newword), (char *) (word));
    p = newword + hashheader.compoundmin;
    for (; p[hashheader.compoundmin - 1] != 0; p++) {
	savech = *p;
	*p = 0;
	if (good(newword, 0, 0, pfxopts, (1 << 1))) {
	    *p = savech;
	    if (good(p, 0, 1, (1 << 1), 0) || compoundgood(p, (1 << 1))) {
		secondcap = whatcap(p);
		switch (whatcap(newword)) {
		case ((long) 0 << (((32) - 6) + 2)):
		case ((long) 2 << (((32) - 6) + 2)):
		case ((long) 3 << (((32) - 6) + 2)):
		    return secondcap == ((long) 0 << (((32) - 6) + 2));
		case ((long) 1 << (((32) - 6) + 2)):
		    return secondcap == ((long) 1 << (((32) - 6) + 2));
	    }}
	} else
	    *p = savech;
    }
    return 0;
}

static void transposedletter(word)
register ichar_t *word;
{
    ichar_t newword[100 + 20];
    register ichar_t *p;
    register ichar_t temp;
    (void) strcpy((char *) (newword), (char *) (word));
    for (p = newword; p[1] != 0; p++) {
	temp = *p;
	*p = p[1];
	p[1] = temp;
	if (good(newword, 0, 1, 0, 0)) {
	    if (ins_cap(newword, word) < 0)
		return;
	}
	temp = *p;
	*p = p[1];
	p[1] = temp;
    }
}

static void tryveryhard(word)
ichar_t *word;
{
    (void) good(word, 1, 0, 0, 0);
} static int ins_cap(word, pattern)

ichar_t *word;
ichar_t *pattern;
{
    int i;
    int nsaved;
    ichar_t savearea[10][100 + 20];
    nsaved = save_cap(word, pattern, savearea);
    for (i = 0; i < nsaved; i++) {
	if (insert(savearea[i]) < 0)
	    return -1;
    }
    return 0;
}

static int save_cap(word, pattern, savearea)
ichar_t *word;
ichar_t *pattern;
ichar_t savearea[10][100 + 20];
{
    int hitno;
    int nsaved;
    int preadd;
    int prestrip;
    int sufadd;
    int sufstrip;
    if (*word == 0)
	return 0;
    for (hitno = numhits, nsaved = 0; --hitno >= 0 && nsaved < 10;) {
	if (hits[hitno].prefix) {
	    prestrip = hits[hitno].prefix->stripl;
	    preadd = hits[hitno].prefix->affl;
	} else
	    prestrip = preadd = 0;
	if (hits[hitno].suffix) {
	    sufstrip = hits[hitno].suffix->stripl;
	    sufadd = hits[hitno].suffix->affl;
	} else
	    sufadd = sufstrip = 0;
	save_root_cap(word, pattern, prestrip, preadd, sufstrip, sufadd, hits[hitno].dictent, hits[hitno].prefix, hits[hitno].suffix, savearea, &nsaved);
    }
    return nsaved;
}

int ins_root_cap(word, pattern, prestrip, preadd, sufstrip, sufadd, firstdent, pfxent, sufent)
register ichar_t *word;
register ichar_t *pattern;
int prestrip;
int preadd;
int sufstrip;
int sufadd;
struct dent *firstdent;
struct flagent *pfxent;
struct flagent *sufent;
{
    int i;
    ichar_t savearea[10][100 + 20];
    int nsaved;
    nsaved = 0;
    save_root_cap(word, pattern, prestrip, preadd, sufstrip, sufadd, firstdent, pfxent, sufent, savearea, &nsaved);
    for (i = 0; i < nsaved; i++) {
	if (insert(savearea[i]) < 0)
	    return -1;
    }
    return 0;
}

static void save_root_cap(word, pattern, prestrip, preadd, sufstrip, sufadd, firstdent, pfxent, sufent, savearea, nsaved)
register ichar_t *word;
register ichar_t *pattern;
int prestrip;
int preadd;
int sufstrip;
int sufadd;
struct dent *firstdent;
struct flagent *pfxent;
struct flagent *sufent;
ichar_t savearea[10][100 + 20];
int *nsaved;
{
    register struct dent *dent;
    int firstisupper;
    ichar_t newword[100 + 4 * 20 + 4];
    register ichar_t *p;
    int len;
    int i;
    int limit;
    if (*nsaved >= 10)
	return;
    (void) strcpy((char *) (newword), (char *) (word));
    firstisupper = (hashheader.upperchars[(pattern[0])]);
    dent = firstdent;
    if ((dent->mask[(32 / 32) - 1] & (((long) 3 << (((32) - 6) + 2)) | ((long) 1 << (((32) - 6) + 4)))) == ((long) 1 << (((32) - 6) + 2))) {
	upcase(newword);
	(void) strcpy((char *) (savearea[*nsaved]), (char *) (newword));
	(*nsaved)++;
	return;
    }
    for (p = pattern; *p; p++) {
	if ((hashheader.lowerchars[(*p)]))
	    break;
    }
    if (*p == 0) {
	upcase(newword);
	(void) strcpy((char *) (savearea[*nsaved]), (char *) (newword));
	(*nsaved)++;
	return;
    }
    for (p = pattern + 1; *p; p++) {
	if ((hashheader.upperchars[(*p)]))
	    break;
    }
    if (*p == 0) {
	if (firstisupper) {
	    if (((dent->mask[(32 / 32) - 1]) & ((long) 3 << (((32) - 6) + 2))) == ((long) 2 << (((32) - 6) + 2)) || ((dent->mask[(32 / 32) - 1]) & ((long) 3 << (((32) - 6) + 2))) == ((long) 0 << (((32) - 6) + 2))) {
		lowcase(newword);
		newword[0] = (hashheader.upperconv[(newword[0])]);
		(void) strcpy((char *) (savearea[*nsaved]), (char *) (newword));
		(*nsaved)++;
		return;
	    }
	} else {
	    if (((dent->mask[(32 / 32) - 1]) & ((long) 3 << (((32) - 6) + 2))) == ((long) 0 << (((32) - 6) + 2))) {
		lowcase(newword);
		(void) strcpy((char *) (savearea[*nsaved]), (char *) (newword));
		(*nsaved)++;
		return;
	    }
	}
	while (dent->mask[(32 / 32) - 1] & ((long) 1 << (((32) - 6) + 4))) {
	    dent = dent->next;
	    if (((dent->mask[(32 / 32) - 1]) & ((long) 3 << (((32) - 6) + 2))) == ((long) 3 << (((32) - 6) + 2)) || !((pfxent == ((void *) 0) || ((dent->mask)[0] & ((long) 1 << (pfxent->flagbit)))) && (sufent == ((void *) 0) || ((dent->mask)[0] & ((long) 1 << (sufent->flagbit))))))
		continue;
	    if (firstisupper) {
		if (((dent->mask[(32 / 32) - 1]) & ((long) 3 << (((32) - 6) + 2))) == ((long) 2 << (((32) - 6) + 2))) {
		    lowcase(newword);
		    newword[0] = (hashheader.upperconv[(newword[0])]);
		    (void) strcpy((char *) (savearea[*nsaved]), (char *) (newword));
		    (*nsaved)++;
		    return;
		}
	    } else {
		if (((dent->mask[(32 / 32) - 1]) & ((long) 3 << (((32) - 6) + 2))) == ((long) 0 << (((32) - 6) + 2))) {
		    lowcase(newword);
		    (void) strcpy((char *) (savearea[*nsaved]), (char *) (newword));
		    (*nsaved)++;
		    return;
		}
	    }
	}
    }
    dent = firstdent;
    p = strtosichar(dent->word, 1);
    len = strlen((char *) (p));
    if (dent->mask[(32 / 32) - 1] & ((long) 1 << (((32) - 6) + 4)))
	dent = dent->next;
    for (;;) {
	if (((pfxent == ((void *) 0) || ((dent->mask)[0] & ((long) 1 << (pfxent->flagbit)))) && (sufent == ((void *) 0) || ((dent->mask)[0] & ((long) 1 << (sufent->flagbit)))))) {
	    if (((dent->mask[(32 / 32) - 1]) & ((long) 3 << (((32) - 6) + 2))) != ((long) 3 << (((32) - 6) + 2))) {
		lowcase(newword);
		if (firstisupper || ((dent->mask[(32 / 32) - 1]) & ((long) 3 << (((32) - 6) + 2))) == ((long) 2 << (((32) - 6) + 2)))
		    newword[0] = (hashheader.upperconv[(newword[0])]);
		(void) strcpy((char *) (savearea[*nsaved]), (char *) (newword));
		(*nsaved)++;
		if (*nsaved >= 10)
		    return;
	    } else {
		p = strtosichar(dent->word, 1);
		(void) memmove((char *) (newword + preadd), (char *) (p + prestrip), (len - prestrip - sufstrip) * sizeof(ichar_t));
		if ((hashheader.upperchars[(p[prestrip])])) {
		    for (i = 0; i < preadd; i++)
			newword[i] = (hashheader.upperconv[(newword[i])]);
		} else {
		    for (i = 0; i < preadd; i++)
			newword[i] = (hashheader.lowerconv[(newword[i])]);
		}
		limit = len + preadd + sufadd - prestrip - sufstrip;
		i = len + preadd - prestrip - sufstrip;
		p += len - sufstrip - 1;
		if ((hashheader.upperchars[(*p)])) {
		    for (p = newword + i; i < limit; i++, p++)
			*p = (hashheader.upperconv[(*p)]);
		} else {
		    for (p = newword + i; i < limit; i++, p++)
			*p = (hashheader.lowerconv[(*p)]);
		}
		(void) strcpy((char *) (savearea[*nsaved]), (char *) (newword));
		(*nsaved)++;
		if (*nsaved >= 10)
		    return;
	    }
	}
	if ((dent->mask[(32 / 32) - 1] & ((long) 1 << (((32) - 6) + 4))) == 0)
	    break;
	dent = dent->next;
    }
    return;
}

static char *getline(s)
register char *s;
{
    register char *p;
    register int c;
    p = s;
    for (;;) {
	(void) fflush(outfile1);
	c = (getchar() & 0x7f);
	if (c == '\\') {
	    (void) putchar('\\');
	    (void) fflush(outfile1);
	    c = (getchar() & 0x7f);
	    backup();
	    (void) putchar(c);
	    *p++ = (char) c;
	} else if (c == ('G' & 037))
	    return (((void *) 0));
	else if (c == '\n' || c == '\r') {
	    *p = 0;
	    return (s);
	} else if (c == uerasechar) {
	    if (p != s) {
		p--;
		backup();
		(void) putchar(' ');
		backup();
	    }
	} else if (c == ukillchar) {
	    while (p != s) {
		p--;
		backup();
		(void) putchar(' ');
		backup();
	}} else {
	    *p++ = (char) c;
	    (void) putchar(c);
}}} void askmode()
{
    int bufsize;
    int ch;
    register char *cp1;
    register char *cp2;
    ichar_t *itok;
    int hadnl;
    if (fflag) {
	if (freopen(askfilename, "w", outfile1) == ((void *) 0)) {
	    (void) fprintf(stderr, "Can't create %s\r\n", askfilename);
	    exit(1);
	}
    }
    if (cbench_print)
	printf("%s\n", Version_ID[0]);
    contextoffset = 0;
    while (1) {
	(void) fflush(outfile1);
	if (contextoffset == 0) {
	    if (xgets(contextbufs[0], (sizeof contextbufs[0]) / 2, infile1) == ((void *) 0))
		break;
	} else {
	    if (fgets(contextbufs[0], (sizeof contextbufs[0]) / 2, infile1) == ((void *) 0))
		break;
	}
	bufsize = strlen(contextbufs[0]);
	if (contextbufs[0][bufsize - 1] == '\n') {
	    hadnl = 1;
	    contextbufs[0][--bufsize] = '\0';
	} else
	    hadnl = 0;
	if (bufsize == (sizeof contextbufs[0]) / 2 - 1) {
	    ch = (unsigned char) contextbufs[0][bufsize - 1];
	    while (bufsize < sizeof contextbufs[0] - 1 && ((hashheader.wordchars[((ichar_t) ch)]) || (hashheader.boundarychars[((ichar_t) ch)]) || (hashheader.stringstarts[(unsigned char) (ch)]))) {
		ch = _IO_getc(infile1);
		if (ch == (-1))
		    break;
		contextbufs[0][bufsize++] = (char) ch;
		contextbufs[0][bufsize] = '\0';
	}}
	if (contextoffset != 0)
	    checkline(outfile1);
	else {
	    if (contextbufs[0][0] == '*' || contextbufs[0][0] == '@')
		treeinsert(ichartosstr(strtosichar(contextbufs[0] + 1, 0), 1), (100 + 4 * 20 + 4), contextbufs[0][0] == '*');
	    else if (contextbufs[0][0] == '&') {
		itok = strtosichar(contextbufs[0] + 1, 0);
		lowcase(itok);
		treeinsert(ichartosstr(itok, 1), (100 + 4 * 20 + 4), 1);
	    } else if (contextbufs[0][0] == '#') {
		treeoutput();
		math_mode = 0;
		LaTeX_Mode = 'P';
	    } else if (contextbufs[0][0] == '!')
		terse = 1;
	    else if (contextbufs[0][0] == '%')
		terse = 0;
	    else if (contextbufs[0][0] == '-') {
		math_mode = 0;
		LaTeX_Mode = 'P';
		tflag = 0;
	    } else if (contextbufs[0][0] == '+') {
		math_mode = 0;
		LaTeX_Mode = 'P';
		tflag = strcmp(&contextbufs[0][1], "nroff") != 0 && strcmp(&contextbufs[0][1], "troff") != 0;
	    } else if (contextbufs[0][0] == '~') {
		defdupchar = findfiletype(&contextbufs[0][1], 1, (int *) ((void *) 0));
		if (defdupchar < 0)
		    defdupchar = 0;
	    } else {
		if (contextbufs[0][0] == '^') {
		    for (cp1 = contextbufs[0], cp2 = contextbufs[0] + 1; (*cp1++ = *cp2++) != '\0';);
		    contextoffset++;
		    bufsize--;
		}
		checkline(outfile1);
	    }
	}
	if (hadnl)
	    contextoffset = 0;
	else
	    contextoffset += bufsize;
	if (sflag) {
	    stop();
	    if (fflag) {
		rewind(outfile1);
		(void) creat(askfilename, 0666);
	    }
	}
}} void copyout(cc, cnt)

register char **cc;
register int cnt;
{
    while (--cnt >= 0) {
	if (**cc == '\0')
	    break;
	if (!aflag && !lflag)
	    (void) _IO_putc(**cc, outfile);
	(*cc)++;
}} static void lookharder(string)

char *string;
{
    char cmd[150];
    char grepstr[100];
    register char *g;
    register char *s;
    register int wild = 0;
    static int look = -1;
    g = grepstr;
    for (s = string; *s != '\0'; s++) {
	if (*s == '*') {
	    wild++;
	    *g++ = '.';
	    *g++ = '*';
	} else
	    *g++ = *s;
    }
    *g = '\0';
    if (grepstr[0]) {
	if (!wild && look) {
	    (void) sprintf(cmd, "%s %s %s", "look -df", grepstr, "/usr/dict/words");
	    if (shellescape(cmd))
		return;
	    else
		look = 0;
	}
	if (!wild)
	    (void) strcat(grepstr, ".*");
	(void) sprintf(cmd, "%s ^%s$ %s", "/usr/bin/egrep -i", grepstr, "/usr/dict/words");
	(void) shellescape(cmd);
    }
}
