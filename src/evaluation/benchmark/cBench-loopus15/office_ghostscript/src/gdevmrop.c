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
extern const byte byte_reverse_bits[256];
extern const byte byte_right_mask[9];
extern const byte byte_count_bits[256];
extern const byte byte_bit_run_length_0[256], byte_bit_run_length_1[256], byte_bit_run_length_2[256], byte_bit_run_length_3[256], byte_bit_run_length_4[256], byte_bit_run_length_5[256], byte_bit_run_length_6[256], byte_bit_run_length_7[256];
extern const byte *byte_bit_run_length[8];
extern const byte *byte_bit_run_length_neg[8];
typedef enum { rop2_0 = 0, rop2_S = 0xc, rop2_D = 0xa, rop2_1 = 0xf, rop2_default = rop2_S } gs_rop2_t;
typedef enum { rop3_0 = 0, rop3_T = 0xf0, rop3_S = 0xcc, rop3_D = 0xaa, rop3_1 = 0xff, rop3_default = rop3_T | rop3_S } gs_rop3_t;
typedef uint gs_logical_operation_t;
typedef unsigned rop_operand;
typedef rop_operand(*rop_proc) (rop_operand D, rop_operand S, rop_operand T);
typedef enum { rop_usage_none = 0, rop_usage_D = 1, rop_usage_S = 2, rop_usage_DS = 3, rop_usage_T = 4, rop_usage_DT = 5, rop_usage_ST = 6, rop_usage_DST = 7 } rop_usage_t;
typedef enum { gs_color_select_all = -1, gs_color_select_texture = 0, gs_color_select_source = 1 } gs_color_select_t;
typedef struct obj_header_s obj_header_t;
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
typedef struct gx_device_s gx_device;
typedef struct gx_rop_source_s {
    const byte *sdata;
    int sourcex;
    uint sraster;
    gx_bitmap_id id;
    gx_color_index scolors[2];
    bool use_scolors;
} gx_rop_source_t;
extern const gx_rop_source_t gx_rop_no_source_0;
struct gx_device_color_procs_s {
    int (*load) (gx_device_color * pdevc, const gs_imager_state * pis, gx_device * dev, gs_color_select_t select);
    int (*fill_rectangle) (const gx_device_color * pdevc, int x, int y, int w, int h, gx_device * dev, gs_logical_operation_t lop, const gx_rop_source_t * source);
    int (*fill_masked) (const gx_device_color * pdevc, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int w, int h, gx_device * dev, gs_logical_operation_t lop, bool invert);
    gs_ptr_type_t(*enum_ptrs) (void *ptr, uint size, uint index, const void **pep);
    void (*reloc_ptrs) (void *ptr, uint size, gc_state_t * gcst);
};
int gx_dc_default_fill_masked(const gx_device_color * pdevc, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int w, int h, gx_device * dev, gs_logical_operation_t lop, bool invert);
extern const gs_memory_struct_type_t st_device_color;
extern const gx_device_color_procs gx_dc_procs_none, gx_dc_procs_null, gx_dc_procs_pure, gx_dc_procs_ht_binary, gx_dc_procs_ht_colored;
void gx_set_device_color_1(gs_state * pgs);
int gx_remap_color(gs_state *);
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
int gx_copy_rop_unaligned(gx_device * dev, const byte * sdata, int sourcex, uint sraster, gx_bitmap_id id, const gx_color_index * scolors, const gx_tile_bitmap * texture, const gx_color_index * tcolors, int x, int y, int width, int height, int phase_x, int phase_y, gs_logical_operation_t lop);
int gx_strip_copy_rop_unaligned(gx_device * dev, const byte * sdata, int sourcex, uint sraster, gx_bitmap_id id, const gx_color_index * scolors, const gx_strip_bitmap * textures, const gx_color_index * tcolors, int x, int y, int width, int height, int phase_x, int phase_y, gs_logical_operation_t lop);
int gx_real_default_copy_rop(gx_device * dev, const byte * sdata, int sourcex, uint sraster, gx_bitmap_id id, const gx_color_index * scolors, const gx_tile_bitmap * texture, const gx_color_index * tcolors, int x, int y, int width, int height, int phase_x, int phase_y, gs_logical_operation_t lop);
int gx_forward_copy_rop(gx_device * dev, const byte * sdata, int sourcex, uint sraster, gx_bitmap_id id, const gx_color_index * scolors, const gx_tile_bitmap * texture, const gx_color_index * tcolors, int x, int y, int width, int height, int phase_x, int phase_y, gs_logical_operation_t lop);
int gx_real_default_strip_copy_rop(gx_device * dev, const byte * sdata, int sourcex, uint sraster, gx_bitmap_id id, const gx_color_index * scolors, const gx_strip_bitmap * textures, const gx_color_index * tcolors, int x, int y, int width, int height, int phase_x, int phase_y, gs_logical_operation_t lop);
int gx_forward_strip_copy_rop(gx_device * dev, const byte * sdata, int sourcex, uint sraster, gx_bitmap_id id, const gx_color_index * scolors, const gx_strip_bitmap * textures, const gx_color_index * tcolors, int x, int y, int width, int height, int phase_x, int phase_y, gs_logical_operation_t lop);
extern const rop_proc rop_proc_table[256];
extern const byte rop_usage_table[256];
typedef struct gx_device_rop_texture_s gx_device_rop_texture;
struct gx_device_rop_texture_s {
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
    gs_logical_operation_t log_op;
    const gx_device_color *texture;
};
extern const gs_memory_struct_type_t st_device_rop_texture;
void gx_make_rop_texture_device(gx_device_rop_texture * rsdev, gx_device * target, gs_logical_operation_t lop, const gx_device_color * texture);
static gs_rop3_t gs_transparent_rop(gs_logical_operation_t lop);
void gs_roplib_init(gs_memory_t * mem)
{
    gx_default_copy_rop_proc = gx_real_default_copy_rop;
    gx_forward_copy_rop_proc = gx_forward_copy_rop;
    gx_default_strip_copy_rop_proc = gx_real_default_strip_copy_rop;
    gx_forward_strip_copy_rop_proc = gx_forward_strip_copy_rop;
} int mem_mono_strip_copy_rop(gx_device * dev, const byte * sdata, int sourcex, uint sraster, gx_bitmap_id id, const gx_color_index * scolors, const gx_strip_bitmap * textures, const gx_color_index * tcolors, int x, int y, int width, int height, int phase_x, int phase_y, gs_logical_operation_t lop)
{
    gs_rop3_t rop = gs_transparent_rop(lop);
    gx_strip_bitmap no_texture;
    bool invert;
    uint draster = ((gx_device_memory *) dev)->raster;
    uint traster;
    int line_count;
    byte *drow;
    const byte *srow;
    int ty;
    if (((gx_device_memory *) dev)->palette.data == 0)
	gdev_mem_mono_set_inverted(((gx_device_memory *) dev), (*((dev)->std_procs.map_rgb_color)) (dev, (gx_color_value) 0, (gx_color_value) 0, (gx_color_value) 0) != 0);
    invert = ((gx_device_memory *) dev)->palette.data[0] != 0;
    if (invert)
	rop = byte_reverse_bits[rop] ^ 0xff;
    if (scolors != 0) {
	switch ((int) ((scolors[1] << 1) + scolors[0])) {
	case 0:
	    rop = ((((rop) & (rop3_1 - rop3_S)) << 2) | ((rop) & ~rop3_S));
	    break;
	case 1:
	    rop = ((((rop) & rop3_S) >> 2) | (((rop) & (rop3_1 - rop3_S)) << 2) | ((rop) & ~rop3_1));
	    break;
	case 2:
	    break;
	case 3:
	    rop = ((((rop) & rop3_S) >> 2) | ((rop) & ~(rop3_1 - rop3_S)));
	    break;
	}
    }
    if (tcolors != 0) {
	switch ((int) ((tcolors[1] << 1) + tcolors[0])) {
	case 0:
	    rop = ((((rop) & (rop3_1 - rop3_T)) << 4) | ((rop) & ~rop3_T));
	    break;
	case 1:
	    rop = ((((rop) & rop3_T) >> 4) | (((rop) & (rop3_1 - rop3_T)) << 4) | ((rop) & ~rop3_1));
	    break;
	case 2:
	    break;
	case 3:
	    rop = ((((rop) & rop3_T) >> 4) | ((rop) & ~(rop3_1 - rop3_T)));
	    break;
	}
    }
    {
	gx_color_index color0, color1;
	switch (rop_usage_table[rop]) {
	case rop_usage_none:
	    return (*((dev)->std_procs.fill_rectangle)) (dev, x, y, width, height, (gx_color_index) (rop & 1));
	case rop_usage_D:
	    if (rop == rop3_D)
		return 0;
	    if ((x | y) < 0) {
		if (x < 0)
		    width += x, x = 0;
		if (y < 0)
		    height += y, y = 0;
	    }
	    if (x > dev->width - width)
		width = dev->width - x;
	    if (y > dev->height - height)
		height = dev->height - y;
	    if (width <= 0 || height <= 0)
		return 0;
	    sdata = ((gx_device_memory *) dev)->base;
	    sourcex = x;
	    sraster = 0;
	    goto no_T;
	case rop_usage_S:
	    if (rop == rop3_S)
		color0 = 0, color1 = 1;
	    else
		color0 = 1, color1 = 0;
	  do_copy:return (*((dev)->std_procs.copy_mono)) (dev, sdata, sourcex, sraster, id, x, y, width, height, color0, color1);
	case rop_usage_DS:
	    switch ((uint) rop) {
	    case rop3_D & ((rop3_S) ^ rop3_1):
		color0 = ((unsigned long) (-1)), color1 = 0;
		goto do_copy;;
	    case rop3_D | rop3_S:
		color0 = ((unsigned long) (-1)), color1 = 1;
		goto do_copy;;
	    case rop3_D & rop3_S:
		color0 = 0, color1 = ((unsigned long) (-1));
		goto do_copy;;
	    case rop3_D | ((rop3_S) ^ rop3_1):
		color0 = 1, color1 = ((unsigned long) (-1));
		goto do_copy;;
	    default:;
	    }
	    if ((x | y) < 0) {
		if (x < 0)
		    width += x, sourcex -= x, x = 0;
		if (y < 0)
		    height += y, sdata -= y * sraster, id = 0L, y = 0;
	    }
	    if (x > dev->width - width)
		width = dev->width - x;
	    if (y > dev->height - height)
		height = dev->height - y;
	    if (width <= 0 || height <= 0)
		return 0;
	  no_T:no_texture.data = ((gx_device_memory *) dev)->base;
	    no_texture.raster = 0;
	    no_texture.size.x = width;
	    no_texture.size.y = height;
	    no_texture.rep_width = no_texture.rep_height = 1;
	    no_texture.rep_shift = no_texture.shift = 0;
	    textures = &no_texture;
	    break;
	case rop_usage_T:
	    if (rop == rop3_T)
		color0 = 0, color1 = 1;
	    else
		color0 = 1, color1 = 0;
	  do_tile:return (*((dev)->std_procs.strip_tile_rectangle)) (dev, textures, x, y, width, height, color0, color1, phase_x, phase_y);
	case rop_usage_DT:
	    switch ((uint) rop) {
	    case rop3_D & ((rop3_T) ^ rop3_1):
		color0 = ((unsigned long) (-1)), color1 = 0;
		goto do_tile;;
	    case rop3_D | rop3_T:
		color0 = ((unsigned long) (-1)), color1 = 1;
		goto do_tile;;
	    case rop3_D & rop3_T:
		color0 = 0, color1 = ((unsigned long) (-1));
		goto do_tile;;
	    case rop3_D | ((rop3_T) ^ rop3_1):
		color0 = 1, color1 = ((unsigned long) (-1));
		goto do_tile;;
	    default:;
	    }
	    if ((x | y) < 0) {
		if (x < 0)
		    width += x, x = 0;
		if (y < 0)
		    height += y, y = 0;
	    }
	    if (x > dev->width - width)
		width = dev->width - x;
	    if (y > dev->height - height)
		height = dev->height - y;
	    if (width <= 0 || height <= 0)
		return 0;
	    sdata = ((gx_device_memory *) dev)->base;
	    sourcex = x;
	    sraster = 0;
	    break;
	default:
	    if ((x | y) < 0) {
		if (x < 0)
		    width += x, sourcex -= x, x = 0;
		if (y < 0)
		    height += y, sdata -= y * sraster, id = 0L, y = 0;
	    }
	    if (x > dev->width - width)
		width = dev->width - x;
	    if (y > dev->height - height)
		height = dev->height - y;
	    if (width <= 0 || height <= 0)
		return 0;
	}
    }
    line_count = height;
    srow = sdata;
    drow = ((((gx_device_memory *) dev))->line_ptrs[y]);
    traster = textures->raster;
    ty = y + phase_y;
    for (; line_count-- > 0; drow += draster, srow += sraster, ++ty) {
	int sx = sourcex;
	int dx = x;
	int w = width;
	const byte *trow = textures->data + (ty % textures->rep_height) * traster;
	int xoff = ((textures)->shift == 0 ? (phase_x) : (phase_x) + (ty) / (textures)->rep_height * (textures)->rep_shift);
	int nw;
	for (; w > 0; sx += nw, dx += nw, w -= nw) {
	    int dbit = dx & 7;
	    int sbit = sx & 7;
	    int sskew = sbit - dbit;
	    int tx = (dx + xoff) % textures->rep_width;
	    int tbit = tx & 7;
	    int tskew = tbit - dbit;
	    int left = nw = (((w) < (textures->size.x - tx)) ? (w) : (textures->size.x - tx));
	    byte lmask = 0xff >> dbit;
	    byte rmask = 0xff << (~(dbit + nw - 1) & 7);
	    byte mask = lmask;
	    int nx = 8 - dbit;
	    byte *dptr = drow + (dx >> 3);
	    const byte *sptr = srow + (sx >> 3);
	    const byte *tptr = trow + (tx >> 3);
	    if (sskew < 0)
		--sptr, sskew += 8;
	    if (tskew < 0)
		--tptr, tskew += 8;
	    for (; left > 0; left -= nx, mask = 0xff, nx = 8, ++dptr, ++sptr, ++tptr) {
		byte dbyte = *dptr;
		byte sbyte = (sskew ? (sptr[0] << sskew) + (sptr[1] >> (8 - sskew)) : *sptr);
		byte tbyte = (tskew ? (tptr[0] << tskew) + (tptr[1] >> (8 - tskew)) : *tptr);
		byte result = (*rop_proc_table[rop]) (dbyte, sbyte, tbyte);
		if (left <= nx)
		    mask &= rmask;
		*dptr = (mask == 0xff ? result : (result & mask) | (dbyte & ~mask));
	    }
	}
    }
    return 0;
}

int mem_gray_strip_copy_rop(gx_device * dev, const byte * sdata, int sourcex, uint sraster, gx_bitmap_id id, const gx_color_index * scolors, const gx_strip_bitmap * textures, const gx_color_index * tcolors, int x, int y, int width, int height, int phase_x, int phase_y, gs_logical_operation_t lop)
{
    gx_color_index scolors2[2];
    const gx_color_index *real_scolors = scolors;
    gx_color_index tcolors2[2];
    const gx_color_index *real_tcolors = tcolors;
    gx_strip_bitmap texture2;
    const gx_strip_bitmap *real_texture = textures;
    long tdata;
    int depth = dev->color_info.depth;
    int log2_depth = depth >> 1;
    gx_color_index max_pixel = (1 << depth) - 1;
    int code;
    if (scolors) {
	if ((scolors[0] | scolors[1]) & ~max_pixel)
	    return ((-15));
	scolors2[0] = scolors[0] & 1;
	scolors2[1] = scolors[1] & 1;
	real_scolors = scolors2;
    }
    if (textures) {
	texture2 = *textures;
	texture2.size.x <<= log2_depth;
	texture2.rep_width <<= log2_depth;
	texture2.shift <<= log2_depth;
	texture2.rep_shift <<= log2_depth;
	real_texture = &texture2;
    }
    if (tcolors) {
	if (tcolors[0] != tcolors[1])
	    return ((-15));
	if (tcolors[0] != 0 && tcolors[0] != max_pixel) {
	    real_tcolors = 0;
	    *(byte *) & tdata = (byte) tcolors[0] << (8 - depth);
	    texture2.data = (byte *) & tdata;
	    texture2.raster = (1 << 2);
	    texture2.size.x = texture2.rep_width = depth;
	    texture2.size.y = texture2.rep_height = 1;
	    texture2.id = 0L;
	    texture2.shift = texture2.rep_shift = 0;
	    real_texture = &texture2;
	} else {
	    tcolors2[0] = tcolors2[1] = tcolors[0] & 1;
	    real_tcolors = tcolors2;
	}
    }
    dev->width <<= log2_depth;
    code = mem_mono_strip_copy_rop(dev, sdata, (real_scolors == ((void *) 0) ? sourcex << log2_depth : sourcex), sraster, id, real_scolors, real_texture, real_tcolors, x << log2_depth, y, width << log2_depth, height, phase_x << log2_depth, phase_y, lop);
    dev->width >>= log2_depth;
    return code;
}

int mem_gray8_rgb24_strip_copy_rop(gx_device * dev, const byte * sdata, int sourcex, uint sraster, gx_bitmap_id id, const gx_color_index * scolors, const gx_strip_bitmap * textures, const gx_color_index * tcolors, int x, int y, int width, int height, int phase_x, int phase_y, gs_logical_operation_t lop)
{
    gs_rop3_t rop = ((gs_rop3_t) ((lop) & 0xff));
    gx_color_index const_source = ((unsigned long) (-1));
    gx_color_index const_texture = ((unsigned long) (-1));
    uint draster = ((gx_device_memory *) dev)->raster;
    int line_count;
    byte *drow;
    int depth = dev->color_info.depth;
    int bpp = depth >> 3;
    gx_color_index all_ones = ((gx_color_index) 1 << depth) - 1;
    gx_color_index strans = (lop & 0x100 ? all_ones : ((unsigned long) (-1)));
    gx_color_index ttrans = (lop & 0x200 ? all_ones : ((unsigned long) (-1)));
    if (scolors != 0 && scolors[0] == scolors[1]) {
	const_source = scolors[0];
	if (const_source == 0)
	    rop = ((((rop) & (rop3_1 - rop3_S)) << 2) | ((rop) & ~rop3_S));
	else if (const_source == all_ones)
	    rop = ((((rop) & rop3_S) >> 2) | ((rop) & ~(rop3_1 - rop3_S)));
    } else if (!(((((rop) << 2) ^ (rop)) & rop3_S) != 0))
	const_source = 0;
    if (tcolors != 0 && tcolors[0] == tcolors[1]) {
	const_texture = tcolors[0];
	if (const_texture == 0)
	    rop = ((((rop) & (rop3_1 - rop3_T)) << 4) | ((rop) & ~rop3_T));
	else if (const_texture == all_ones)
	    rop = ((((rop) & rop3_T) >> 4) | ((rop) & ~(rop3_1 - rop3_T)));
    } else if (!(((((rop) << 4) ^ (rop)) & rop3_T) != 0))
	const_texture = 0;
    if (const_source == ((unsigned long) (-1))) {
	if ((x | y) < 0) {
	    if (x < 0)
		width += x, sourcex -= x, x = 0;
	    if (y < 0)
		height += y, sdata -= y * sraster, id = 0L, y = 0;
	}
	if (x > dev->width - width)
	    width = dev->width - x;
	if (y > dev->height - height)
	    height = dev->height - y;
	if (width <= 0 || height <= 0)
	    return 0;
    } else {
	if ((x | y) < 0) {
	    if (x < 0)
		width += x, x = 0;
	    if (y < 0)
		height += y, y = 0;
	}
	if (x > dev->width - width)
	    width = dev->width - x;
	if (y > dev->height - height)
	    height = dev->height - y;
	if (width <= 0 || height <= 0)
	    return 0;
    }
    line_count = height;
    drow = ((((gx_device_memory *) dev))->line_ptrs[y]) + x * bpp;
    if (const_texture != ((unsigned long) (-1))) {
	if (const_source != ((unsigned long) (-1))) {
	    for (; line_count-- > 0; drow += draster) {
		byte *dptr = drow;
		int left = width;
		if (bpp == 1)
		    for (; left > 0; ++dptr, --left) {
			if ((byte) const_source == strans || (byte) const_texture == ttrans)
			    continue;
			*dptr = (*rop_proc_table[rop]) (*dptr, (byte) const_source, (byte) const_texture);
		} else
		    for (; left > 0; dptr += 3, --left) {
			if (const_source == strans || const_texture == ttrans)
			    continue; {
			    gx_color_index d_pixel = (((gx_color_index) (dptr)[0] << 16) | ((gx_color_index) (dptr)[1] << 8) | (dptr)[2]);
			    d_pixel = (*rop_proc_table[rop]) (d_pixel, const_source, const_texture);
			    (dptr)[0] = (byte) ((d_pixel) >> 16), (dptr)[1] = (byte) ((uint) (d_pixel) >> 8), (dptr)[2] = (byte) (d_pixel);
			    };
		    }
	    }
	} else {
	    const byte *srow = sdata;
	    for (; line_count-- > 0; drow += draster, srow += sraster) {
		byte *dptr = drow;
		int left = width;
		if (scolors) {
		    int sx = sourcex;
		    if (bpp == 1)
			for (; left > 0; ++dptr, ++sx, --left) {
			    byte s_pixel = (((srow)[(sx) >> 3] & (0x80 >> ((sx) & 7))) ? (byte) scolors[1] : (byte) scolors[0]);
			    if (s_pixel == strans || (byte) const_texture == ttrans)
				continue;
			    *dptr = (*rop_proc_table[rop]) (*dptr, s_pixel, (byte) const_texture);
		    } else
			for (; left > 0; dptr += 3, ++sx, --left) {
			    bits32 s_pixel = (((srow)[(sx) >> 3] & (0x80 >> ((sx) & 7))) ? scolors[1] : scolors[0]);
			    if (s_pixel == strans || const_texture == ttrans)
				continue; {
				gx_color_index d_pixel = (((gx_color_index) (dptr)[0] << 16) | ((gx_color_index) (dptr)[1] << 8) | (dptr)[2]);
				d_pixel = (*rop_proc_table[rop]) (d_pixel, s_pixel, const_texture);
				(dptr)[0] = (byte) ((d_pixel) >> 16), (dptr)[1] = (byte) ((uint) (d_pixel) >> 8), (dptr)[2] = (byte) (d_pixel);
				};
			}
		} else if (bpp == 1) {
		    const byte *sptr = srow + sourcex;
		    for (; left > 0; ++dptr, ++sptr, --left) {
			byte s_pixel = *sptr;
			if (s_pixel == strans || (byte) const_texture == ttrans)
			    continue;
			*dptr = (*rop_proc_table[rop]) (*dptr, s_pixel, (byte) const_texture);
		    }
		} else {
		    const byte *sptr = srow + sourcex * 3;
		    for (; left > 0; dptr += 3, sptr += 3, --left) {
			bits32 s_pixel = (((gx_color_index) (sptr)[0] << 16) | ((gx_color_index) (sptr)[1] << 8) | (sptr)[2]);
			if (s_pixel == strans || const_texture == ttrans)
			    continue; {
			    gx_color_index d_pixel = (((gx_color_index) (dptr)[0] << 16) | ((gx_color_index) (dptr)[1] << 8) | (dptr)[2]);
			    d_pixel = (*rop_proc_table[rop]) (d_pixel, s_pixel, const_texture);
			    (dptr)[0] = (byte) ((d_pixel) >> 16), (dptr)[1] = (byte) ((uint) (d_pixel) >> 8), (dptr)[2] = (byte) (d_pixel);
			    };
		    }
		}
	    }
	}
    } else if (const_source != ((unsigned long) (-1))) {
	uint traster = textures->raster;
	int ty = y + phase_y;
	for (; line_count-- > 0; drow += draster, ++ty) {
	    int dx = x, w = width, nw;
	    byte *dptr = drow;
	    const byte *trow = textures->data + (ty % textures->size.y) * traster;
	    int xoff = ((textures)->shift == 0 ? (phase_x) : (phase_x) + (ty) / (textures)->rep_height * (textures)->rep_shift);
	    for (; w > 0; dx += nw, w -= nw) {
		int tx = (dx + xoff) % textures->rep_width;
		int left = nw = (((w) < (textures->size.x - tx)) ? (w) : (textures->size.x - tx));
		const byte *tptr = trow;
		if (tcolors) {
		    if (bpp == 1)
			for (; left > 0; ++dptr, ++tx, --left) {
			    byte t_pixel = (((tptr)[(tx) >> 3] & (0x80 >> ((tx) & 7))) ? (byte) tcolors[1] : (byte) tcolors[0]);
			    if ((byte) const_source == strans || t_pixel == ttrans)
				continue;
			    *dptr = (*rop_proc_table[rop]) (*dptr, (byte) const_source, t_pixel);
		    } else
			for (; left > 0; dptr += 3, ++tx, --left) {
			    bits32 t_pixel = (((tptr)[(tx) >> 3] & (0x80 >> ((tx) & 7))) ? tcolors[1] : tcolors[0]);
			    if (const_source == strans || t_pixel == ttrans)
				continue; {
				gx_color_index d_pixel = (((gx_color_index) (dptr)[0] << 16) | ((gx_color_index) (dptr)[1] << 8) | (dptr)[2]);
				d_pixel = (*rop_proc_table[rop]) (d_pixel, const_source, t_pixel);
				(dptr)[0] = (byte) ((d_pixel) >> 16), (dptr)[1] = (byte) ((uint) (d_pixel) >> 8), (dptr)[2] = (byte) (d_pixel);
				};
			}
		} else if (bpp == 1) {
		    tptr += tx;
		    for (; left > 0; ++dptr, ++tptr, --left) {
			byte t_pixel = *tptr;
			if ((byte) const_source == strans || t_pixel == ttrans)
			    continue;
			*dptr = (*rop_proc_table[rop]) (*dptr, (byte) const_source, t_pixel);
		    }
		} else {
		    tptr += tx * 3;
		    for (; left > 0; dptr += 3, tptr += 3, --left) {
			bits32 t_pixel = (((gx_color_index) (tptr)[0] << 16) | ((gx_color_index) (tptr)[1] << 8) | (tptr)[2]);
			if (const_source == strans || t_pixel == ttrans)
			    continue; {
			    gx_color_index d_pixel = (((gx_color_index) (dptr)[0] << 16) | ((gx_color_index) (dptr)[1] << 8) | (dptr)[2]);
			    d_pixel = (*rop_proc_table[rop]) (d_pixel, const_source, t_pixel);
			    (dptr)[0] = (byte) ((d_pixel) >> 16), (dptr)[1] = (byte) ((uint) (d_pixel) >> 8), (dptr)[2] = (byte) (d_pixel);
			    };
		    }
		}
	    }
	}
    } else {
	uint traster = textures->raster;
	int ty = y + phase_y;
	const byte *srow = sdata;
	for (; line_count-- > 0; drow += draster, srow += sraster, ++ty) {
	    int sx = sourcex;
	    int dx = x;
	    int w = width;
	    int nw;
	    byte *dptr = drow;
	    const byte *trow = textures->data + (ty % textures->size.y) * traster;
	    int xoff = ((textures)->shift == 0 ? (phase_x) : (phase_x) + (ty) / (textures)->rep_height * (textures)->rep_shift);
	    for (; w > 0; dx += nw, w -= nw) {
		int tx = (dx + xoff) % textures->rep_width;
		int left = nw = (((w) < (textures->size.x - tx)) ? (w) : (textures->size.x - tx));
		const byte *tptr = trow;
		if (bpp == 1) {
		    const byte *sptr = srow + sx;
		    tptr += tx;
		    for (; left > 0; ++dptr, ++sptr, ++tptr, ++sx, ++tx, --left) {
			byte s_pixel = (scolors ? (((srow)[(sx) >> 3] & (0x80 >> ((sx) & 7))) ? (byte) scolors[1] : (byte) scolors[0]) : *sptr);
			byte t_pixel = (tcolors ? (((tptr)[(tx) >> 3] & (0x80 >> ((tx) & 7))) ? (byte) tcolors[1] : (byte) tcolors[0]) : *tptr);
			if (s_pixel == strans || t_pixel == ttrans)
			    continue;
			*dptr = (*rop_proc_table[rop]) (*dptr, s_pixel, t_pixel);
		    }
		} else {
		    const byte *sptr = srow + sx * 3;
		    tptr += tx * 3;
		    for (; left > 0; dptr += 3, sptr += 3, tptr += 3, ++sx, ++tx, --left) {
			bits32 s_pixel = (scolors ? (((srow)[(sx) >> 3] & (0x80 >> ((sx) & 7))) ? scolors[1] : scolors[0]) : (((gx_color_index) (sptr)[0] << 16) | ((gx_color_index) (sptr)[1] << 8) | (sptr)[2]));
			bits32 t_pixel = (tcolors ? (((tptr)[(tx) >> 3] & (0x80 >> ((tx) & 7))) ? tcolors[1] : tcolors[0]) : (((gx_color_index) (tptr)[0] << 16) | ((gx_color_index) (tptr)[1] << 8) | (tptr)[2]));
			if (s_pixel == strans || t_pixel == ttrans)
			    continue; {
			    gx_color_index d_pixel = (((gx_color_index) (dptr)[0] << 16) | ((gx_color_index) (dptr)[1] << 8) | (dptr)[2]);
			    d_pixel = (*rop_proc_table[rop]) (d_pixel, s_pixel, t_pixel);
			    (dptr)[0] = (byte) ((d_pixel) >> 16), (dptr)[1] = (byte) ((uint) (d_pixel) >> 8), (dptr)[2] = (byte) (d_pixel);
			    };
		    }
		}
	    }
	}
    }
    return 0;
}

int gx_real_default_copy_rop(gx_device * dev, const byte * sdata, int sourcex, uint sraster, gx_bitmap_id id, const gx_color_index * scolors, const gx_tile_bitmap * texture, const gx_color_index * tcolors, int x, int y, int width, int height, int phase_x, int phase_y, gs_logical_operation_t lop)
{
    const gx_strip_bitmap *textures;
    gx_strip_bitmap tiles;
    if (texture == 0)
	textures = 0;
    else {
	*(gx_tile_bitmap *) & tiles = *texture;
	tiles.rep_shift = tiles.shift = 0;
	textures = &tiles;
    }
    return (*((dev)->std_procs.strip_copy_rop)) (dev, sdata, sourcex, sraster, id, scolors, textures, tcolors, x, y, width, height, phase_x, phase_y, lop);
}

int gx_real_default_strip_copy_rop(gx_device * dev, const byte * sdata, int sourcex, uint sraster, gx_bitmap_id id, const gx_color_index * scolors, const gx_strip_bitmap * textures, const gx_color_index * tcolors, int x, int y, int width, int height, int phase_x, int phase_y, gs_logical_operation_t lop)
{
    int depth = dev->color_info.depth;
    const gx_device_memory *mdproto = gdev_mem_device_for_bits(depth);
    gx_device_memory mdev;
    uint draster = gx_device_raster(dev, ((bool) 1));
    bool uses_d = (((((gs_transparent_rop(lop)) << 1) ^ (gs_transparent_rop(lop))) & rop3_D) != 0);
    byte *row;
    int code;
    int py;
    if (mdproto == 0)
	return ((-15));
    if (sdata == 0) {
	if ((x | y) < 0) {
	    if (x < 0)
		width += x, x = 0;
	    if (y < 0)
		height += y, y = 0;
	}
	if (x > dev->width - width)
	    width = dev->width - x;
	if (y > dev->height - height)
	    height = dev->height - y;
	if (width <= 0 || height <= 0)
	    return 0;
    } else {
	if ((x | y) < 0) {
	    if (x < 0)
		width += x, sourcex -= x, x = 0;
	    if (y < 0)
		height += y, sdata -= y * sraster, id = 0L, y = 0;
	}
	if (x > dev->width - width)
	    width = dev->width - x;
	if (y > dev->height - height)
	    height = dev->height - y;
	if (width <= 0 || height <= 0)
	    return 0;
    }
    gs_make_mem_device(&mdev, mdproto, 0, -1, dev);
    mdev.width = width;
    mdev.height = 1;
    mdev.bitmap_memory = &gs_memory_default;
    code = (*((&mdev)->std_procs.open_device)) ((gx_device *) & mdev);
    if (code < 0)
	return code;
    row = (void *) (*(&gs_memory_default)->procs.alloc_byte_array) (&gs_memory_default, 1, draster, "copy_rop buffer");
    if (row == 0) {
	(*((&mdev)->std_procs.close_device)) ((gx_device *) & mdev);
	return ((-25));
    }
    for (py = y; py < y + height; ++py) {
	byte *data;
	if (uses_d) {
	    code = (*((dev)->std_procs.get_bits)) (dev, py, row, &data);
	    if (code < 0)
		break;
	    code = (*((&mdev)->std_procs.copy_color)) ((gx_device *) & mdev, data, x, draster, 0L, 0, 0, width, 1);
	    if (code < 0)
		return code;
	}
	code = (*((&mdev)->std_procs.strip_copy_rop)) ((gx_device *) & mdev, sdata + (py - y) * sraster, sourcex, sraster, 0L, scolors, textures, tcolors, 0, 0, width, 1, phase_x + x, phase_y + py, lop);
	if (code < 0)
	    break;
	code = (*((&mdev)->std_procs.get_bits)) ((gx_device *) & mdev, 0, row, &data);
	if (code < 0)
	    break;
	code = (*((dev)->std_procs.copy_color)) (dev, data, 0, draster, 0L, x, py, width, 1);
	if (code < 0)
	    break;
    }
    (*(&gs_memory_default)->procs.free_object) (&gs_memory_default, row, "copy_rop buffer");
    (*((&mdev)->std_procs.close_device)) ((gx_device *) & mdev);
    return code;
}

int gx_forward_copy_rop(gx_device * dev, const byte * sdata, int sourcex, uint sraster, gx_bitmap_id id, const gx_color_index * scolors, const gx_tile_bitmap * texture, const gx_color_index * tcolors, int x, int y, int width, int height, int phase_x, int phase_y, gs_logical_operation_t lop)
{
    gx_device *tdev = ((gx_device_forward *) dev)->target;
    int (*proc) (gx_device * dev, const byte * sdata, int sourcex, uint sraster, gx_bitmap_id id, const gx_color_index * scolors, const gx_tile_bitmap * texture, const gx_color_index * tcolors, int x, int y, int width, int height, int phase_x, int phase_y, gs_logical_operation_t lop);
    if (tdev == 0)
	tdev = dev, proc = gx_default_copy_rop;
    else
	proc = ((tdev)->std_procs.copy_rop);
    return (*proc) (tdev, sdata, sourcex, sraster, id, scolors, texture, tcolors, x, y, width, height, phase_x, phase_y, lop);
}

int gx_forward_strip_copy_rop(gx_device * dev, const byte * sdata, int sourcex, uint sraster, gx_bitmap_id id, const gx_color_index * scolors, const gx_strip_bitmap * textures, const gx_color_index * tcolors, int x, int y, int width, int height, int phase_x, int phase_y, gs_logical_operation_t lop)
{
    gx_device *tdev = ((gx_device_forward *) dev)->target;
    int (*proc) (gx_device * dev, const byte * sdata, int sourcex, uint sraster, gx_bitmap_id id, const gx_color_index * scolors, const gx_strip_bitmap * textures, const gx_color_index * tcolors, int x, int y, int width, int height, int phase_x, int phase_y, gs_logical_operation_t lop);
    if (tdev == 0)
	tdev = dev, proc = gx_default_strip_copy_rop;
    else
	proc = ((tdev)->std_procs.strip_copy_rop);
    return (*proc) (tdev, sdata, sourcex, sraster, id, scolors, textures, tcolors, x, y, width, height, phase_x, phase_y, lop);
}

int gx_copy_rop_unaligned(gx_device * dev, const byte * sdata, int sourcex, uint sraster, gx_bitmap_id id, const gx_color_index * scolors, const gx_tile_bitmap * texture, const gx_color_index * tcolors, int x, int y, int width, int height, int phase_x, int phase_y, gs_logical_operation_t lop)
{
    const gx_strip_bitmap *textures;
    gx_strip_bitmap tiles;
    if (texture == 0)
	textures = 0;
    else {
	*(gx_tile_bitmap *) & tiles = *texture;
	tiles.rep_shift = tiles.shift = 0;
	textures = &tiles;
    }
    return gx_strip_copy_rop_unaligned(dev, sdata, sourcex, sraster, id, scolors, textures, tcolors, x, y, width, height, phase_x, phase_y, lop);
}

int gx_strip_copy_rop_unaligned(gx_device * dev, const byte * sdata, int sourcex, uint sraster, gx_bitmap_id id, const gx_color_index * scolors, const gx_strip_bitmap * textures, const gx_color_index * tcolors, int x, int y, int width, int height, int phase_x, int phase_y, gs_logical_operation_t lop)
{
    int (*copy_rop) (gx_device * dev, const byte * sdata, int sourcex, uint sraster, gx_bitmap_id id, const gx_color_index * scolors, const gx_strip_bitmap * textures, const gx_color_index * tcolors, int x, int y, int width, int height, int phase_x, int phase_y, gs_logical_operation_t lop) = ((dev)->std_procs.strip_copy_rop);
    int depth = (scolors == 0 ? dev->color_info.depth : 1);
    int step = sraster & ((1 << 2) - 1);
    if (sdata != 0) {
	uint offset = (uint) (sdata - (const byte *) 0) & ((1 << 2) - 1);
	if (depth == 24)
	    offset += (offset % 3) * ((1 << 2) * (3 - ((1 << 2) % 3)));
	sdata -= offset;
	sourcex += (offset << 3) / depth;
    }
    if (!step || sdata == 0 || (scolors != 0 && scolors[0] == scolors[1])) {
	return (*copy_rop) (dev, sdata, sourcex, sraster, id, scolors, textures, tcolors, x, y, width, height, phase_x, phase_y, lop);
    }
    {
	const byte *p = sdata;
	int d = sourcex;
	int dstep = (step << 3) / depth;
	int code = 0;
	int i;
	for (i = 0; i < height && code >= 0; ++i, p += sraster - step, d += dstep)
	    code = (*copy_rop) (dev, p, d, sraster, 0L, scolors, textures, tcolors, x, y + i, width, 1, phase_x, phase_y, lop);
	return code;
    }
}

static gs_ptr_type_t device_rop_texture_enum_ptrs(void *vptr, uint size, uint index, const void **pep)
{
    switch (index) {
    default:
	return (*st_device_forward.enum_ptrs) (vptr, size, index - (1), pep);
    case 0:
	do {
	    *pep = (const void *) (((gx_device_rop_texture *) vptr)->texture);
	    return (&ptr_struct_procs);
	} while (0);
    }
}

static void device_rop_texture_reloc_ptrs(void *vptr, uint size, gc_state_t * gcst)
{
    (*st_device_forward.reloc_ptrs) (vptr, size, gcst);
    ((gx_device_rop_texture *) vptr)->texture = gs_reloc_struct_ptr((const void *) ((const gx_device_rop_texture *) vptr)->texture, gcst);
} const gs_memory_struct_type_t st_device_rop_texture = { sizeof(gx_device_rop_texture), "gx_device_rop_texture", 0, 0, device_rop_texture_enum_ptrs, device_rop_texture_reloc_ptrs, 0 };

static int rop_texture_fill_rectangle(gx_device * dev, int x, int y, int width, int height, gx_color_index color);
static int rop_texture_copy_mono(gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height, gx_color_index color0, gx_color_index color1);
static int rop_texture_copy_color(gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height);
static const gx_device_rop_texture gs_rop_texture_device = { sizeof(gx_device_rop_texture), 0, "rop source", 0, 0, 0, 0, {(1 == 32 ? 4 : 1 > 1 ? 3 : 1), ((1 > 1) & (1 < 8) ? 8 : 1), (1 >= 8 ? 255 : 1), (1 >= 8 ? 255 : 1 > 1 ? 1 : 0), (1 >= 8 ? 5 : 2), (1 >= 8 ? 5 : 1 > 1 ? 2 : 0)}
, 0, 0, {(((0) * 72.0 + 0.5) - 0.5) / (1), (((0) * 72.0 + 0.5) - 0.5) / (1)}
, {0, 0, 0, 0}
, 0, {1, 1}
, {1, 1}
, {0, 0}
, {0, 0, 0, 0}
, 0, 0, 0, {gx_default_install, gx_default_begin_page, gx_default_end_page}
, {((void *) 0), gx_forward_get_initial_matrix, ((void *) 0), ((void *) 0), ((void *) 0), gx_forward_map_rgb_color, gx_forward_map_color_rgb, rop_texture_fill_rectangle, ((void *) 0), rop_texture_copy_mono, rop_texture_copy_color, ((void *) 0), ((void *) 0), gx_forward_get_params, gx_forward_put_params, gx_forward_map_cmyk_color, gx_forward_get_xfont_procs, gx_forward_get_xfont_device, gx_forward_map_rgb_alpha_color, gx_forward_get_page_device, ((void *) 0), gx_no_copy_alpha, gx_forward_get_band, gx_no_copy_rop, ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0), gx_forward_get_clipping_box}, 0, (rop3_default | (((bool) 0) ? 0x100 : 0) | (((bool) 0) ? 0x200 : 0) | (0 << 10)), ((void *) 0) };

void gx_make_rop_texture_device(gx_device_rop_texture * dev, gx_device * target, gs_logical_operation_t log_op, const gx_device_color * texture)
{
    *dev = gs_rop_texture_device;
    gx_device_fill_in_procs((gx_device *) dev);
    dev->color_info = target->color_info;
    dev->target = target;
    dev->log_op = log_op;
    dev->texture = texture;
} static int rop_texture_fill_rectangle(gx_device * dev, int x, int y, int w, int h, gx_color_index color)
{
    gx_rop_source_t source;
    source.sdata = ((void *) 0);
    source.sourcex = 0;
    source.sraster = 0;
    source.id = 0L;
    source.scolors[0] = source.scolors[1] = color;
    source.use_scolors = ((bool) 1);
    return (*(((gx_device_rop_texture *) dev)->texture)->type->fill_rectangle) (((gx_device_rop_texture *) dev)->texture, x, y, w, h, ((gx_device_rop_texture *) dev)->target, ((gx_device_rop_texture *) dev)->log_op, &source);
}

static int rop_texture_copy_mono(gx_device * dev, const byte * data, int sourcex, int raster, gx_bitmap_id id, int x, int y, int w, int h, gx_color_index color0, gx_color_index color1)
{
    gx_rop_source_t source;
    gs_logical_operation_t lop = ((gx_device_rop_texture *) dev)->log_op;
    source.sdata = data;
    source.sourcex = sourcex;
    source.sraster = raster;
    source.id = id;
    source.scolors[0] = color0;
    source.scolors[1] = color1;
    source.use_scolors = ((bool) 1);
    if (color0 == ((unsigned long) (-1)))
	lop = (((lop) & ~(rop3_1 - rop3_S)) | (rop3_D & ~rop3_S));
    else if (color1 == ((unsigned long) (-1)))
	lop = (((lop) & ~rop3_S) | (rop3_D & rop3_S));
    return (*(((gx_device_rop_texture *) dev)->texture)->type->fill_rectangle) (((gx_device_rop_texture *) dev)->texture, x, y, w, h, ((gx_device_rop_texture *) dev)->target, lop, &source);
}

static int rop_texture_copy_color(gx_device * dev, const byte * data, int sourcex, int raster, gx_bitmap_id id, int x, int y, int w, int h)
{
    gx_rop_source_t source;
    source.sdata = data;
    source.sourcex = sourcex;
    source.sraster = raster;
    source.id = id;
    source.scolors[0] = source.scolors[1] = ((unsigned long) (-1));
    source.use_scolors = ((bool) 1);
    return (*(((gx_device_rop_texture *) dev)->texture)->type->fill_rectangle) (((gx_device_rop_texture *) dev)->texture, x, y, w, h, ((gx_device_rop_texture *) dev)->target, ((gx_device_rop_texture *) dev)->log_op, &source);
}

static gs_rop3_t gs_transparent_rop(gs_logical_operation_t lop)
{
    gs_rop3_t rop = ((gs_rop3_t) ((lop) & 0xff));
    gs_rop3_t mask = (((lop & 0x100) && (((((rop) << 2) ^ (rop)) & rop3_S) != 0)) ? (((lop & 0x200) && (((((rop) << 4) ^ (rop)) & rop3_T) != 0)) ? ((rop3_S) ^ rop3_1) & ((rop3_T) ^ rop3_1) : ((rop3_S) ^ rop3_1)) : (((lop & 0x200) && (((((rop) << 4) ^ (rop)) & rop3_T) != 0)) ? ((((((rop) << 2) ^ (rop)) & rop3_S) != 0) ? ((((rop3_S) ^ rop3_1)) ^ rop3_1) | ((rop3_T) ^ rop3_1) : ((rop3_T) ^ rop3_1)) : rop3_1));
    return (rop & mask) | (rop3_D & ~mask);
}
