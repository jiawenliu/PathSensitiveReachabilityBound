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
gs_id gs_next_ids(uint count);
void memflip8x8(const byte * inp, int line_size, byte * outp, int dist);
int bytes_compare(const byte * str1, uint len1, const byte * str2, uint len2);
typedef struct string_match_params_s {
    int any_substring;
    int any_char;
    int quote_next;
    bool ignore_case;
} string_match_params;
bool string_match(const byte * str, uint len, const byte * pstr, uint plen, const string_match_params * psmp);
typedef struct gs_param_list_s gs_param_list;
typedef const char *gs_param_name;
typedef struct gs_param_string_s {
    const byte *data;
    uint size;
    bool persistent;
} gs_param_string;
typedef struct gs_param_int_array_s {
    const int *data;
    uint size;
    bool persistent;
} gs_param_int_array;
typedef struct gs_param_float_array_s {
    const float *data;
    uint size;
    bool persistent;
} gs_param_float_array;
typedef struct gs_param_string_array_s {
    const gs_param_string *data;
    uint size;
    bool persistent;
} gs_param_string_array;
typedef struct gs_param_collection_s {
    gs_param_list *list;
    uint size;
} gs_param_collection;
typedef gs_param_collection gs_param_dict;
typedef gs_param_collection gs_param_array;
typedef struct gs_param_list_procs_s {
    int (*xmit_null) (gs_param_list *, gs_param_name);
    int (*xmit_bool) (gs_param_list *, gs_param_name, bool *);
    int (*xmit_int) (gs_param_list *, gs_param_name, int *);
    int (*xmit_long) (gs_param_list *, gs_param_name, long *);
    int (*xmit_float) (gs_param_list *, gs_param_name, float *);
    int (*xmit_string) (gs_param_list *, gs_param_name, gs_param_string *);
    int (*xmit_name) (gs_param_list *, gs_param_name, gs_param_string *);
    int (*xmit_int_array) (gs_param_list *, gs_param_name, gs_param_int_array *);
    int (*xmit_float_array) (gs_param_list *, gs_param_name, gs_param_float_array *);
    int (*xmit_string_array) (gs_param_list *, gs_param_name, gs_param_string_array *);
    int (*xmit_name_array) (gs_param_list *, gs_param_name, gs_param_string_array *);
    int (*begin_xmit_dict) (gs_param_list *, gs_param_name, gs_param_dict *, bool);
    int (*end_xmit_dict) (gs_param_list *, gs_param_name, gs_param_dict *);
    bool(*requested) (const gs_param_list *, gs_param_name);
    int (*get_policy) (gs_param_list *, gs_param_name);
    int (*signal_error) (gs_param_list *, gs_param_name, int);
    int (*commit) (gs_param_list *);
} gs_param_list_procs;
struct gs_param_list_s {
    const gs_param_list_procs *procs;
};
typedef struct gs_c_param_s gs_c_param;
typedef struct gs_c_param_list_s {
    const gs_param_list_procs *procs;
    gs_memory_t *memory;
    gs_c_param *head;
    uint count;
} gs_c_param_list;
void gs_c_param_list_write(gs_c_param_list *, gs_memory_t *);
void gs_c_param_list_read(gs_c_param_list *);
void gs_c_param_list_release(gs_c_param_list *);
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
typedef struct gx_device_s gx_device;
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
typedef enum { gs_cap_butt = 0, gs_cap_round = 1, gs_cap_square = 2, gs_cap_triangle = 3 } gs_line_cap;
typedef enum { gs_join_miter = 0, gs_join_round = 1, gs_join_bevel = 2, gs_join_none = 3, gs_join_triangle = 4 } gs_line_join;
typedef struct gx_dash_params_s {
    float *pattern;
    uint pattern_size;
    float offset;
    bool adapt;
    float pattern_length;
    bool init_ink_on;
    int init_index;
    float init_dist_left;
} gx_dash_params;
typedef struct gx_line_params_s {
    float half_width;
    gs_line_cap cap;
    gs_line_join join;
    float miter_limit;
    float miter_check;
    float dot_length;
    float dot_length_absolute;
    gx_dash_params dash;
} gx_line_params;
int gx_set_miter_limit(gx_line_params *, floatp);
int gx_set_dash(gx_dash_params *, const float *, uint, floatp, gs_memory_t *);
int gx_set_dot_length(gx_line_params *, floatp, bool);
typedef struct stream_s stream;
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
int pwrite(stream * s, const void *ptr, uint count);
int pputs(stream * s, const char *str);
const char *pprintg1(stream * s, const char *format, floatp v);
const char *pprintg2(stream * s, const char *format, floatp v1, floatp v2);
const char *pprintg4(stream * s, const char *format, floatp v1, floatp v2, floatp v3, floatp v4);
const char *pprintd1(stream * s, const char *format, int v);
const char *pprintd2(stream * s, const char *format, int v1, int v2);
const char *pprintld1(stream * s, const char *format, long v);
const char *pprints1(stream * s, const char *format, const char *str);
const char *pprints2(stream * s, const char *format, const char *str1, const char *str2);
typedef struct gx_device_bbox_s {
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
    gs_fixed_rect bbox;
    gx_color_index white;
} gx_device_bbox;
extern const gs_memory_struct_type_t st_device_bbox;
void gx_device_bbox_init(gx_device_bbox * dev, gx_device * target);
void gx_device_bbox_bbox(gx_device_bbox * dev, gs_rect * pbbox);
typedef enum { gs_color_select_all = -1, gs_color_select_texture = 0, gs_color_select_source = 1 } gs_color_select_t;
typedef struct gs_matrix_fixed_s {
    float xx, xy, yx, yy, tx, ty;
    fixed tx_fixed, ty_fixed;
    bool txy_fixed_valid;
} gs_matrix_fixed;
int gs_point_transform2fixed(const gs_matrix_fixed *, floatp, floatp, gs_fixed_point *);
int gs_distance_transform2fixed(const gs_matrix_fixed *, floatp, floatp, gs_fixed_point *);
typedef struct {
    long l;
    fixed f;
} coeff1;
typedef struct {
    coeff1 xx, xy, yx, yy;
    int skewed;
    int shift;
    int max_bits;
    fixed round;
} fixed_coeff;
typedef struct gx_transfer_map_s gx_transfer_map;
typedef float (*gs_mapping_proc) (floatp, const gx_transfer_map *);
typedef struct gs_halftone_s gs_halftone;
typedef struct gx_transfer_colored_s {
    gx_transfer_map *red;
    gx_transfer_map *green;
    gx_transfer_map *blue;
    gx_transfer_map *gray;
} gx_transfer_colored;
typedef union gx_transfer_s {
    gx_transfer_map *indexed[4];
    gx_transfer_colored colored;
} gx_transfer;
struct gs_imager_state_s {
    gs_memory_t *memory;
    gx_line_params line_params;
    gs_matrix_fixed ctm;
    gs_logical_operation_t log_op;
    gx_color_value alpha;
    bool overprint;
    float flatness;
    gs_fixed_point fill_adjust;
    bool stroke_adjust;
    bool accurate_curves;
    gs_halftone *halftone;
    gs_int_point screen_phase[2];
    gx_device_halftone *dev_ht;
    struct gx_ht_cache_s *ht_cache;
    struct gs_cie_render_s *cie_render;
    gx_transfer_map *black_generation;
    gx_transfer_map *undercolor_removal;
    gx_transfer set_transfer;
    gx_transfer effective_transfer;
    struct gx_cie_joint_caches_s *cie_joint_caches;
    const struct gx_color_map_procs_s *cmap_procs;
    struct gx_pattern_cache_s *pattern_cache;
};
int gs_imager_state_initialize(gs_imager_state * pis, gs_memory_t * mem);
void gs_imager_state_release(gs_imager_state * pis);
typedef struct gx_device_vector_s gx_device_vector;
typedef enum { gx_path_type_none = 0, gx_path_type_fill = 1, gx_path_type_stroke = 2, gx_path_type_clip = 4, gx_path_type_winding_number = 0, gx_path_type_even_odd = 8, gx_path_type_rule = gx_path_type_winding_number | gx_path_type_even_odd } gx_path_type_t;
typedef enum { gx_rect_x_first, gx_rect_y_first } gx_rect_direction_t;
typedef struct gx_device_vector_procs_s {
    int (*beginpage) (gx_device_vector * vdev);
    int (*setlinewidth) (gx_device_vector * vdev, floatp width);
    int (*setlinecap) (gx_device_vector * vdev, gs_line_cap cap);
    int (*setlinejoin) (gx_device_vector * vdev, gs_line_join join);
    int (*setmiterlimit) (gx_device_vector * vdev, floatp limit);
    int (*setdash) (gx_device_vector * vdev, const float *pattern, uint count, floatp offset);
    int (*setflat) (gx_device_vector * vdev, floatp flatness);
    int (*setlogop) (gx_device_vector * vdev, gs_logical_operation_t lop, gs_logical_operation_t diff);
    int (*setfillcolor) (gx_device_vector * vdev, const gx_drawing_color * pdc);
    int (*setstrokecolor) (gx_device_vector * vdev, const gx_drawing_color * pdc);
    int (*dopath) (gx_device_vector * vdev, const gx_path * ppath, gx_path_type_t type);
    int (*dorect) (gx_device_vector * vdev, fixed x0, fixed y0, fixed x1, fixed y1, gx_path_type_t type);
    int (*beginpath) (gx_device_vector * vdev, gx_path_type_t type);
    int (*moveto) (gx_device_vector * vdev, floatp x0, floatp y0, floatp x, floatp y, bool first);
    int (*lineto) (gx_device_vector * vdev, floatp x0, floatp y0, floatp x, floatp y);
    int (*curveto) (gx_device_vector * vdev, floatp x0, floatp y0, floatp x1, floatp y1, floatp x2, floatp y2, floatp x3, floatp y3);
    int (*closepath) (gx_device_vector * vdev, floatp x0, floatp y0, floatp x_start, floatp y_start);
    int (*endpath) (gx_device_vector * vdev, gx_path_type_t type);
} gx_device_vector_procs;
int gdev_vector_setflat(gx_device_vector * vdev, floatp flatness);
int gdev_vector_dopath(gx_device_vector * vdev, const gx_path * ppath, gx_path_type_t type);
int gdev_vector_dorect(gx_device_vector * vdev, fixed x0, fixed y0, fixed x1, fixed y1, gx_path_type_t type);
struct gx_device_vector_s {
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
    gs_memory_t *v_memory;
    const gx_device_vector_procs *vec_procs;
    char fname[80 + 1];
    FILE *file;
    stream *strm;
    byte *strmbuf;
    uint strmbuf_size;
    gs_imager_state state;
    float dash_pattern[11];
    gx_drawing_color fill_color, stroke_color;
    gs_id no_clip_path_id;
    gs_id clip_path_id;
    gs_point scale;
    bool in_page;
    gx_device_bbox *bbox_device;
    gx_color_index black, white;
};
extern const gs_memory_struct_type_t st_device_vector;
void gdev_vector_init(gx_device_vector * vdev);
void gdev_vector_reset(gx_device_vector * vdev);
int gdev_vector_open_file_bbox(gx_device_vector * vdev, uint strmbuf_size, bool bbox);
stream *gdev_vector_stream(gx_device_vector * vdev);
int gdev_vector_update_log_op(gx_device_vector * vdev, gs_logical_operation_t lop);
int gdev_vector_update_fill_color(gx_device_vector * vdev, const gx_drawing_color * pdcolor);
int gdev_vector_prepare_fill(gx_device_vector * vdev, const gs_imager_state * pis, const gx_fill_params * params, const gx_drawing_color * pdcolor);
int gdev_vector_prepare_stroke(gx_device_vector * vdev, const gs_imager_state * pis, const gx_stroke_params * params, const gx_drawing_color * pdcolor, floatp scale);
int gdev_vector_write_polygon(gx_device_vector * vdev, const gs_fixed_point * points, uint count, bool close, gx_path_type_t type);
int gdev_vector_write_rectangle(gx_device_vector * vdev, fixed x0, fixed y0, fixed x1, fixed y1, bool close, gx_rect_direction_t dir);
int gdev_vector_write_clip_path(gx_device_vector * vdev, const gx_clip_path * pcpath);
int gdev_vector_update_clip_path(gx_device_vector * vdev, const gx_clip_path * pcpath);
void gdev_vector_close_file(gx_device_vector * vdev);
typedef struct gdev_vector_image_enum_s {
    gs_memory_t *memory;
    void *default_info;
    void *bbox_info;
    int width, height;
    int num_planes;
    int bits_per_pixel;
    uint bits_per_row;
    int y;
} gdev_vector_image_enum_t;
extern const gs_memory_struct_type_t st_vector_image_enum;
int gdev_vector_begin_image(gx_device_vector * vdev, const gs_imager_state * pis, const gs_image_t * pim, gs_image_format_t format, const gs_int_rect * prect, const gx_drawing_color * pdcolor, const gx_clip_path * pcpath, gs_memory_t * mem, gdev_vector_image_enum_t * pie);
int gdev_vector_end_image(gx_device_vector * vdev, gdev_vector_image_enum_t * pie, bool draw_last, gx_color_index pad);
int gdev_vector_put_params(gx_device * dev, gs_param_list * plist);
int gdev_vector_get_params(gx_device * dev, gs_param_list * plist);
int gdev_vector_fill_rectangle(gx_device * dev, int x, int y, int width, int height, gx_color_index color);
int gdev_vector_fill_path(gx_device * dev, const gs_imager_state * pis, gx_path * ppath, const gx_fill_params * params, const gx_drawing_color * pdcolor, const gx_clip_path * pcpath);
int gdev_vector_stroke_path(gx_device * dev, const gs_imager_state * pis, gx_path * ppath, const gx_stroke_params * params, const gx_drawing_color * pdcolor, const gx_clip_path * pcpath);
int gdev_vector_fill_trapezoid(gx_device * dev, const gs_fixed_edge * left, const gs_fixed_edge * right, fixed ybot, fixed ytop, bool swap_axes, const gx_drawing_color * pdcolor, gs_logical_operation_t lop);
int gdev_vector_fill_parallelogram(gx_device * dev, fixed px, fixed py, fixed ax, fixed ay, fixed bx, fixed by, const gx_drawing_color * pdcolor, gs_logical_operation_t lop);
int gdev_vector_fill_triangle(gx_device * dev, fixed px, fixed py, fixed ax, fixed ay, fixed bx, fixed by, const gx_drawing_color * pdcolor, gs_logical_operation_t lop);
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
typedef struct psdf_image_params_s {
    bool AntiAlias;
    bool AutoFilter;
    int Depth;
    bool Downsample;
    enum psdf_downsample_type { ds_Average, ds_Subsample } DownsampleType;
    bool Encode;
    const char *Filter;
    int Resolution;
    const stream_template *filter_template;
} psdf_image_params;
extern const stream_template s_CFE_template;
typedef struct psdf_distiller_params_s {
    bool ASCII85EncodePages;
    enum psdf_auto_rotate_pages { arp_None, arp_All, arp_PageByPage } AutoRotatePages;
    bool CompressPages;
    long ImageMemory;
    bool LZWEncodePages;
    bool PreserveHalftoneInfo;
    bool PreserveOPIComments;
    bool PreserveOverprintSettings;
    enum psdf_transfer_function_info { tfi_Preserve, tfi_Apply, tfi_Remove } TransferFunctionInfo;
    enum psdf_ucr_and_bg_info { ucrbg_Preserve, ucrbg_Remove } UCRandBGInfo;
    bool UseFlateCompression;
    psdf_image_params ColorImage;
    enum psdf_color_conversion_strategy { ccs_LeaveColorUnchanged, ccs_UseDeviceDependentColor, ccs_UseDeviceIndependentColor } ColorConversionStrategy;
    bool ConvertCMYKImagesToRGB;
    bool ConvertImagesToIndexed;
    psdf_image_params GrayImage;
    psdf_image_params MonoImage;
    gs_param_string_array AlwaysEmbed;
    gs_param_string_array NeverEmbed;
    bool EmbedAllFonts;
    bool SubsetFonts;
    int MaxSubsetPct;
} psdf_distiller_params;
typedef struct gx_device_psdf_s {
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
    gs_memory_t *v_memory;
    const gx_device_vector_procs *vec_procs;
    char fname[80 + 1];
    FILE *file;
    stream *strm;
    byte *strmbuf;
    uint strmbuf_size;
    gs_imager_state state;
    float dash_pattern[11];
    gx_drawing_color fill_color, stroke_color;
    gs_id no_clip_path_id;
    gs_id clip_path_id;
    gs_point scale;
    bool in_page;
    gx_device_bbox *bbox_device;
    gx_color_index black, white;
    psdf_distiller_params params;
} gx_device_psdf;
extern const gs_memory_struct_type_t st_device_psdf;
int gdev_psdf_get_params(gx_device * dev, gs_param_list * plist);
int gdev_psdf_put_params(gx_device * dev, gs_param_list * plist);
int psdf_put_bool_param(gs_param_list * plist, gs_param_name param_name, bool * pval, int ecode);
int psdf_put_int_param(gs_param_list * plist, gs_param_name param_name, int *pval, int ecode);
int psdf_setlinewidth(gx_device_vector * vdev, floatp width);
int psdf_setlinecap(gx_device_vector * vdev, gs_line_cap cap);
int psdf_setlinejoin(gx_device_vector * vdev, gs_line_join join);
int psdf_setmiterlimit(gx_device_vector * vdev, floatp limit);
int psdf_setdash(gx_device_vector * vdev, const float *pattern, uint count, floatp offset);
int psdf_setflat(gx_device_vector * vdev, floatp flatness);
int psdf_setlogop(gx_device_vector * vdev, gs_logical_operation_t lop, gs_logical_operation_t diff);
int psdf_setfillcolor(gx_device_vector * vdev, const gx_drawing_color * pdc);
int psdf_setstrokecolor(gx_device_vector * vdev, const gx_drawing_color * pdc);
int psdf_dorect(gx_device_vector * vdev, fixed x0, fixed y0, fixed x1, fixed y1, gx_path_type_t type);
int psdf_beginpath(gx_device_vector * vdev, gx_path_type_t type);
int psdf_moveto(gx_device_vector * vdev, floatp x0, floatp y0, floatp x, floatp y, bool first);
int psdf_lineto(gx_device_vector * vdev, floatp x0, floatp y0, floatp x, floatp y);
int psdf_curveto(gx_device_vector * vdev, floatp x0, floatp y0, floatp x1, floatp y1, floatp x2, floatp y2, floatp x3, floatp y3);
int psdf_closepath(gx_device_vector * vdev, floatp x0, floatp y0, floatp x_start, floatp y_start);
int psdf_set_color(gx_device_vector * vdev, const gx_drawing_color * pdc, const char *rgs);
typedef enum { resourceFont, resourceEncoding, resourceFontDescriptor, resourceColorSpace, resourceXObject, num_resource_types } pdf_resource_type;
typedef struct pdf_resource_s pdf_resource;
struct pdf_resource_s {
    pdf_resource *next;
    pdf_resource *prev;
    gs_id rid;
    long id;
};
typedef struct pdf_font_s pdf_font;
struct pdf_font_s {
    pdf_font *next;
    pdf_resource *prev;
    gs_id rid;
    long id;
    gs_const_string fname;
};
typedef struct pdf_outline_node_s {
    long id, parent_id, prev_id, first_id, last_id;
    int count;
    gs_string action_string;
} pdf_outline_node;
typedef struct pdf_outline_level_s {
    pdf_outline_node first;
    pdf_outline_node last;
    int left;
} pdf_outline_level;
typedef struct pdf_bead_s {
    long id, article_id, prev_id, next_id;
    char dest[80];
    gs_rect rect;
} pdf_bead;
typedef struct pdf_article_s pdf_article;
struct pdf_article_s {
    pdf_article *next;
    gs_string title;
    long id;
    pdf_bead first;
    pdf_bead last;
};
typedef struct pdf_named_dest_s pdf_named_dest;
struct pdf_named_dest_s {
    pdf_named_dest *next;
    gs_string key;
    char dest[80];
};
typedef struct pdf_text_state_s {
    float character_spacing;
    pdf_font *font;
    float size;
    float word_spacing;
    float horizontal_scaling;
} pdf_text_state;
typedef enum { NoMarks = 0, ImageB = 1, ImageC = 2, ImageI = 4, Text = 8 } pdf_procset;
typedef enum { pdf_in_none, pdf_in_stream, pdf_in_text } pdf_context;
typedef struct gx_device_pdf_s {
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
    gs_memory_t *v_memory;
    const gx_device_vector_procs *vec_procs;
    char fname[80 + 1];
    FILE *file;
    stream *strm;
    byte *strmbuf;
    uint strmbuf_size;
    gs_imager_state state;
    float dash_pattern[11];
    gx_drawing_color fill_color, stroke_color;
    gs_id no_clip_path_id;
    gs_id clip_path_id;
    gs_point scale;
    bool in_page;
    gx_device_bbox *bbox_device;
    gx_color_index black, white;
    psdf_distiller_params params;
    float CompatibilityLevel;
    bool DoThumbnails;
    long FirstObjectNumber;
    bool binary_ok;
    char tfname[80 + 1];
    FILE *tfile;
    long next_id;
    long root_id;
    long info_id;
    long pages_id;
    long outlines_id;
    int next_page;
    long contents_ids[300];
    int next_contents_id;
    pdf_context context;
    long contents_length_id;
    long contents_pos;
    pdf_procset procsets;
    float flatness;
    gx_line_params line_params;
    long *page_ids;
    int num_page_ids;
    int pages_referenced;
    pdf_resource *resources[num_resource_types];
    pdf_resource *annots;
    pdf_resource *last_resource;
    gs_string catalog_string;
    gs_string pages_string;
    gs_string page_string;
    pdf_outline_level outline_levels[8];
    int outline_depth;
    int closed_outline_depth;
    int outlines_open;
    pdf_article *articles;
    pdf_named_dest *named_dests;
    pdf_text_state text_state;
} gx_device_pdf;
void pdf_initialize_ids(gx_device_pdf * pdev);
void pdf_open_document(gx_device_pdf * pdev);
long pdf_obj_ref(gx_device_pdf * pdev);
long pdf_open_obj(gx_device_pdf * pdev, long id);
int pdf_end_obj(gx_device_pdf * pdev);
int pdf_set_color(gx_device_pdf * pdev, gx_color_index color, gx_drawing_color * pdcolor, const char *rgs);
void pdf_set_scale(gx_device_pdf * pdev);
int pdf_open_contents(gx_device_pdf * pdev, pdf_context context);
int pdf_close_contents(gx_device_pdf * pdev, bool last);
int pdf_begin_aside(gx_device_pdf * pdev, pdf_resource ** plist, const gs_memory_struct_type_t * pst, pdf_resource ** ppres);
int pdf_begin_resource(gx_device_pdf * pdev, pdf_resource_type type, pdf_resource ** ppres);
pdf_resource *pdf_find_resource_by_gs_id(gx_device_pdf * pdev, pdf_resource_type type, gs_id rid);
int pdf_end_aside(gx_device_pdf * pdev);
int pdf_end_resource(gx_device_pdf * pdev);
void pdf_reset_page(gx_device_pdf * pdev);
long pdf_page_id(gx_device_pdf * pdev, int page_num);
int pdf_open_page(gx_device_pdf * pdev, pdf_context context);
int pdf_write_saved_string(gx_device_pdf * pdev, gs_string * pstr);
int pdf_write_default_info(gx_device_pdf * pdev);
int pdf_put_clip_path(gx_device_pdf * pdev, const gx_clip_path * pcpath);
bool pdf_key_eq(const gs_param_string * pcs, const char *str);
int pdfmark_process(gx_device_pdf * pdev, const gs_param_string_array * pma);
int pdfmark_close_outline(gx_device_pdf * pdev);
int pdfmark_write_article(gx_device_pdf * pdev, const pdf_bead * pbead);
int pdfshow_process(gx_device_pdf * pdev, const gs_param_dict * ptd);
extern const byte scan_char_array[4 + 256];
static gs_ptr_type_t pdf_article_enum_ptrs(void *vptr, uint size, uint index, const void **pep)
{
    switch (index) {
    default:
	return 0;
    case 0:
	do {
	    *pep = (const void *) (((pdf_article *) vptr)->next);
	    return (&ptr_struct_procs);
	} while (0);
    }
}

static void pdf_article_reloc_ptrs(void *vptr, uint size, gc_state_t * gcst)
{;
    ((pdf_article *) vptr)->next = gs_reloc_struct_ptr((const void *) ((const pdf_article *) vptr)->next, gcst);
} static const gs_memory_struct_type_t st_pdf_article = { sizeof(pdf_article), "pdf_article", 0, 0, pdf_article_enum_ptrs, pdf_article_reloc_ptrs, 0 };

static gs_ptr_type_t pdf_named_dest_enum_ptrs(void *vptr, uint size, uint index, const void **pep)
{
    switch (index) {
    default:
	return 0;
    case 0:
	do {
	    *pep = (const void *) (((pdf_named_dest *) vptr)->next);
	    return (&ptr_struct_procs);
	} while (0);
    }
}

static void pdf_named_dest_reloc_ptrs(void *vptr, uint size, gc_state_t * gcst)
{;
    ((pdf_named_dest *) vptr)->next = gs_reloc_struct_ptr((const void *) ((const pdf_named_dest *) vptr)->next, gcst);
} static const gs_memory_struct_type_t st_pdf_named_dest = { sizeof(pdf_named_dest), "pdf_named_dest", 0, 0, pdf_named_dest_enum_ptrs, pdf_named_dest_reloc_ptrs, 0 };

typedef struct pdfmark_name_s {
    const char *mname;
    int (*proc) (gx_device_pdf * pdev, const gs_param_string * pairs, uint count, const gs_matrix * pctm);
} pdfmark_name;
static int pdfmark_ANN(gx_device_pdf * pdev, const gs_param_string * pairs, uint count, const gs_matrix * pctm);
static int pdfmark_LNK(gx_device_pdf * pdev, const gs_param_string * pairs, uint count, const gs_matrix * pctm);
static int pdfmark_OUT(gx_device_pdf * pdev, const gs_param_string * pairs, uint count, const gs_matrix * pctm);
static int pdfmark_ARTICLE(gx_device_pdf * pdev, const gs_param_string * pairs, uint count, const gs_matrix * pctm);
static int pdfmark_DEST(gx_device_pdf * pdev, const gs_param_string * pairs, uint count, const gs_matrix * pctm);
static int pdfmark_PS(gx_device_pdf * pdev, const gs_param_string * pairs, uint count, const gs_matrix * pctm);
static int pdfmark_PAGES(gx_device_pdf * pdev, const gs_param_string * pairs, uint count, const gs_matrix * pctm);
static int pdfmark_PAGE(gx_device_pdf * pdev, const gs_param_string * pairs, uint count, const gs_matrix * pctm);
static int pdfmark_DOCINFO(gx_device_pdf * pdev, const gs_param_string * pairs, uint count, const gs_matrix * pctm);
static int pdfmark_DOCVIEW(gx_device_pdf * pdev, const gs_param_string * pairs, uint count, const gs_matrix * pctm);
static const pdfmark_name mark_names[] = { {"ANN", pdfmark_ANN}, {"LNK", pdfmark_LNK}, {"OUT", pdfmark_OUT}, {"ARTICLE", pdfmark_ARTICLE}, {"DEST", pdfmark_DEST}, {"PS", pdfmark_PS}, {"PAGES", pdfmark_PAGES}, {"PAGE", pdfmark_PAGE}, {"DOCINFO", pdfmark_DOCINFO}, {"DOCVIEW", pdfmark_DOCVIEW}, {0, 0} };

bool pdf_key_eq(const gs_param_string * pcs, const char *str)
{
    return (strlen(str) == pcs->size && !strncmp(str, (const char *) pcs->data, pcs->size));
} int pdfmark_process(gx_device_pdf * pdev, const gs_param_string_array * pma)
{
    const gs_param_string *pts = &pma->data[pma->size - 1];
    gs_matrix ctm;
    int i;
    if (pma->size & 1 || sscanf((const char *) pts[-1].data, "[%g %g %g %g %g %g]", &ctm.xx, &ctm.xy, &ctm.yx, &ctm.yy, &ctm.tx, &ctm.ty) != 6)
	return ((-15));
    gs_matrix_scale(&ctm, 1.0 / pdev->scale.x, 1.0 / pdev->scale.y, &ctm);
    ctm.tx /= pdev->scale.x;
    ctm.ty /= pdev->scale.y;
    for (i = 0; mark_names[i].mname != 0; ++i)
	if (pdf_key_eq(pts, mark_names[i].mname))
	    return (*mark_names[i].proc) (pdev, pma->data, pma->size - 2, &ctm);
    return 0;
}

static bool pdfmark_find_key(const char *key, const gs_param_string * pairs, uint count, gs_param_string * pstr)
{
    uint i;
    for (i = 0; i < count; i += 2)
	if (pdf_key_eq(&pairs[i], key)) {
	    *pstr = pairs[i + 1];
	    return ((bool) 1);
	}
    pstr->data = 0;
    pstr->size = 0;
    return ((bool) 0);
}

static long pdfmark_page_id(gx_device_pdf * pdev, int *ppage, const gs_param_string * pnstr)
{
    int page = pdev->next_page + 1;
    if (pnstr->data == 0);
    else if (pdf_key_eq(pnstr, "/Next"))
	++page;
    else if (pdf_key_eq(pnstr, "/Prev"))
	--page;
    else if (sscanf((const char *) pnstr->data, "%d", &page) != 1)
	page = 0;
    *ppage = page;
    return pdf_page_id(pdev, page);
}

static int pdfmark_make_dest(char dstr[80], gx_device_pdf * pdev, const gs_param_string * pairs, uint count)
{
    gs_param_string page_string, view_string;
    int page;
    bool present = pdfmark_find_key("Page", pairs, count, &page_string) | pdfmark_find_key("View", pairs, count, &view_string);
    long page_id = pdfmark_page_id(pdev, &page, &page_string);
    int len;
    if (view_string.size == 0)
	(view_string).data = (const byte *) ("[/XYZ 0 0 1]"), (view_string).size = strlen((const char *) (view_string).data), (view_string).persistent = ((bool) 1);
    if (page_id == 0)
	strcpy(dstr, "[null ");
    else
	sprintf(dstr, "[%ld 0 R ", page_id);
    len = strlen(dstr);
    if (len + view_string.size > 80)
	return ((-13));
    if (view_string.data[0] != '[' || view_string.data[view_string.size - 1] != ']')
	return ((-15));
    memcpy(dstr + len, view_string.data + 1, view_string.size - 1);
    dstr[len + view_string.size - 1] = 0;
    return present;
}

static void pdfmark_write_pair(stream * s, const gs_param_string * pair)
{
    spputc(s, '/');
    pwrite(s, pair->data, pair->size);
    spputc(s, ' ');
    pwrite(s, pair[1].data, pair[1].size);
    spputc(s, '\n');
} static int pdfmark_scan_rect(gs_rect * prect, const gs_param_string * str, const gs_matrix * pctm)
{
    uint size = str->size;
    double v[4];
    char chars[100 + 3];
    int end_check;
    if (str->size > 100)
	return ((-13));
    memcpy(chars, str->data, size);
    strcpy(chars + size, " 0");
    if (sscanf(chars, "[%lg %lg %lg %lg]%d", &v[0], &v[1], &v[2], &v[3], &end_check) != 5)
	return ((-15));
    gs_point_transform(v[0], v[1], pctm, &prect->p);
    gs_point_transform(v[2], v[3], pctm, &prect->q);
    return 0;
}

static void pdfmark_write_rect(stream * s, const char *key, const gs_rect * prect)
{
    pprints1(s, "/%s ", key);
    pprintg4(s, "[%g %g %g %g]\n", prect->p.x, prect->p.y, prect->q.x, prect->q.y);
} static int pdfmark_annot(gx_device_pdf * pdev, const gs_param_string * pairs, uint count, const gs_matrix * pctm, const char *subtype)
{
    stream *s = pdev->strm;
    pdf_resource *pres;
    int code = pdf_begin_aside(pdev, &pdev->annots, ((void *) 0), &pres);
    bool subtype_present = ((bool) 0);
    bool add_dest = ((bool) 0);
    bool dest_present = ((bool) 0);
    uint i;
    if (code < 0)
	return code;
    pres->rid = pdev->next_page;
    pputs(s, "<< /Type /Annot\n");
    for (i = 0; i < count; i += 2) {
	const gs_param_string *pair = &pairs[i];
	long src_pg;
	if (pdf_key_eq(pair, "SrcPg") && sscanf((const char *) pair[1].data, "%ld", &src_pg) == 1)
	    pres->rid = src_pg - 1;
	else if (pdf_key_eq(pair, "Page") || pdf_key_eq(pair, "View"))
	    add_dest = ((bool) 1);
	else if (pdf_key_eq(pair, "Action")) {
	    const byte *astr = pair[1].data;
	    const uint asize = pair[1].size;
	    uint i;
	    byte chr;
	    pputs(s, "/A ");
	    for (i = 0; i < asize; ++i)
		if (asize - i > 8 && !memcmp(astr + i, "/Subtype", 8) && (&scan_char_array[4])[chr = astr[i + 8]] > 100) {
		    pputs(s, "/S");
		    i += 7;
		} else
		    spputc(s, astr[i]);
	    spputc(s, '\n');
	} else if (pdf_key_eq(pair, "Rect")) {
	    gs_rect rect;
	    code = pdfmark_scan_rect(&rect, pair + 1, pctm);
	    if (code < 0)
		return code;
	    pdfmark_write_rect(s, "Rect", &rect);
	} else {
	    pdfmark_write_pair(s, pair);
	    if (pdf_key_eq(pair, "Dest"))
		dest_present = ((bool) 1);
	    else if (pdf_key_eq(pair, "Subtype"))
		subtype_present = ((bool) 1);
	}
    }
    if (add_dest && !dest_present) {
	char dest[80];
	int code = pdfmark_make_dest(dest, pdev, pairs, count);
	if (code >= 0)
	    pprints1(s, "/Dest %s\n", dest);
    }
    if (!subtype_present)
	pprints1(s, "/Subtype /%s ", subtype);
    pputs(s, ">>\n");
    pdf_end_aside(pdev);
    return 0;
}

static int pdfmark_ANN(gx_device_pdf * pdev, const gs_param_string * pairs, uint count, const gs_matrix * pctm)
{
    return pdfmark_annot(pdev, pairs, count, pctm, "Text");
}

static int pdfmark_LNK(gx_device_pdf * pdev, const gs_param_string * pairs, uint count, const gs_matrix * pctm)
{
    return pdfmark_annot(pdev, pairs, count, pctm, "Link");
}

static bool pdf_key_member(const gs_param_string * pcs, const char **keys)
{
    const char **pkey;
    for (pkey = keys; *pkey != 0; ++pkey)
	if (pdf_key_eq(pcs, *pkey))
	    return ((bool) 1);
    return ((bool) 0);
}

static int pdfmark_save_edited_pairs(const gx_device_pdf * pdev, const gs_param_string * pairs, uint count, const char **skip_keys, const gs_param_string * add_pairs, uint add_count, gs_string * pstr)
{
    uint i, size;
    byte *data;
    byte *next;
    for (i = 0, size = 0; i < count; i += 2)
	if (!pdf_key_member(&pairs[i], skip_keys))
	    size += pairs[i].size + pairs[i + 1].size + 3;
    for (i = 0; i < add_count; i += 2)
	size += add_pairs[i].size + add_pairs[i + 1].size + 3;
    if (pstr->data == 0)
	data = (*(pdev->v_memory)->procs.alloc_string) (pdev->v_memory, size, "pdfmark_save_pairs");
    else
	data = (*(pdev->v_memory)->procs.resize_string) (pdev->v_memory, pstr->data, pstr->size, size, "pdfmark_save_pairs");
    if (data == 0)
	return ((-25));
    next = data;
    for (i = 0; i < count; i += 2)
	if (!pdf_key_member(&pairs[i], skip_keys)) {
	    uint len;
	    *next++ = '/';
	    memcpy(next, pairs[i].data, len = pairs[i].size);
	    next += len;
	    *next++ = ' ';
	    memcpy(next, pairs[i + 1].data, len = pairs[i + 1].size);
	    next += len;
	    *next++ = '\n';
	}
    for (i = 0; i < add_count; i += 2) {
	uint len;
	*next++ = '/';
	memcpy(next, add_pairs[i].data, len = add_pairs[i].size);
	next += len;
	*next++ = ' ';
	memcpy(next, add_pairs[i + 1].data, len = add_pairs[i + 1].size);
	next += len;
	*next++ = '\n';
    }
    pstr->data = data;
    pstr->size = size;
    return 0;
}
static const char *no_skip_pairs[] = { 0 };

static int pdfmark_write_outline(gx_device_pdf * pdev, pdf_outline_node * pnode, long next_id)
{
    stream *s = pdev->strm;
    pdf_close_contents(pdev, ((bool) 0));
    pdf_open_obj(pdev, pnode->id);
    pputs(s, "<< ");
    pdf_write_saved_string(pdev, &pnode->action_string);
    if (pnode->count)
	pprintd1(s, "/Count %d ", pnode->count);
    pprintld1(s, "/Parent %ld 0 R\n", pnode->parent_id);
    if (pnode->prev_id)
	pprintld1(s, "/Prev %ld 0 R\n", pnode->prev_id);
    if (next_id)
	pprintld1(s, "/Next %ld 0 R\n", next_id);
    if (pnode->first_id)
	pprintld1(s, pprintld1(s, "/First %ld 0 R /Last %ld 0 R\n", pnode->first_id), pnode->last_id);
    pputs(s, ">>\n");
    pdf_end_obj(pdev);
    return 0;
}

static void pdfmark_adjust_parent_count(pdf_outline_level * plevel)
{
    pdf_outline_level *parent = plevel - 1;
    int count = plevel->last.count;
    if (count > 0) {
	if (parent->last.count < 0)
	    parent->last.count -= count;
	else
	    parent->last.count += count;
    }
}

int pdfmark_close_outline(gx_device_pdf * pdev)
{
    int depth = pdev->outline_depth;
    pdf_outline_level *plevel = &pdev->outline_levels[depth];
    int code;
    code = pdfmark_write_outline(pdev, &plevel->last, 0);
    if (code < 0)
	return code;
    if (depth > 0) {
	plevel[-1].last.last_id = plevel->last.id;
	pdfmark_adjust_parent_count(plevel);
	--plevel;
	if (plevel->last.count < 0)
	    pdev->closed_outline_depth--;
	pdev->outline_depth--;
    }
    return 0;
}

static int pdfmark_OUT(gx_device_pdf * pdev, const gs_param_string * pairs, uint count, const gs_matrix * pctm)
{
    int depth = pdev->outline_depth;
    pdf_outline_level *plevel = &pdev->outline_levels[depth];
    int sub_count = 0;
    uint i;
    pdf_outline_node node;
    int code;
    for (i = 0; i < count; i += 2) {
	const gs_param_string *pair = &pairs[i];
	if (pdf_key_eq(pair, "Count"))
	    sscanf((const char *) pair[1].data, "%d", &sub_count);
    } if (sub_count != 0 && depth == 8 - 1)
	return ((-13));
    node.action_string.data = 0; {
	static const char *skip_out[] = { "Count", 0 };
	code = pdfmark_save_edited_pairs(pdev, pairs, count, skip_out, ((void *) 0), 0, &node.action_string);
	if (code < 0)
	    return code;
    }
    if (pdev->outlines_id == 0)
	pdev->outlines_id = pdf_obj_ref(pdev);
    node.id = pdf_obj_ref(pdev);
    node.parent_id = (depth == 0 ? pdev->outlines_id : plevel[-1].last.id);
    node.prev_id = plevel->last.id;
    node.first_id = node.last_id = 0;
    node.count = sub_count;
    if (plevel->first.id == 0) {
	if (depth > 0)
	    plevel[-1].last.first_id = node.id;
	node.prev_id = 0;
	plevel->first = node;
    } else {
	if (depth > 0)
	    pdfmark_adjust_parent_count(plevel);
	pdfmark_write_outline(pdev, &plevel->last, node.id);
    }
    plevel->last = node;
    plevel->left--;
    if (!pdev->closed_outline_depth)
	pdev->outlines_open++;
    if (sub_count != 0) {
	pdev->outline_depth++;
	++plevel;
	plevel->left = (sub_count > 0 ? sub_count : -sub_count);
	plevel->first.id = 0;
	if (sub_count < 0)
	    pdev->closed_outline_depth++;
    } else {
	while ((depth = pdev->outline_depth) > 0 && pdev->outline_levels[depth].left == 0)
	    pdfmark_close_outline(pdev);
    }
    return 0;
}

int pdfmark_write_article(gx_device_pdf * pdev, const pdf_bead * pbead)
{
    stream *s = pdev->strm;
    pdf_open_obj(pdev, pbead->id);
    pprintld1(s, pprintld1(s, pprintld1(s, "<<\n/T %ld 0 R\n/V %ld 0 R\n/N %ld 0 R\n", pbead->article_id), pbead->prev_id), pbead->next_id);
    pprints1(s, "/Dest %s\n", pbead->dest);
    pdfmark_write_rect(s, "R", &pbead->rect);
    pputs(s, ">>\n");
    return pdf_end_obj(pdev);
}

static int pdfmark_ARTICLE(gx_device_pdf * pdev, const gs_param_string * pairs, uint count, const gs_matrix * pctm)
{
    gs_param_string title;
    gs_param_string rectstr;
    gs_rect rect;
    long bead_id;
    pdf_article *part;
    int code;
    if (!pdfmark_find_key("Title", pairs, count, &title) || !pdfmark_find_key("Rect", pairs, count, &rectstr))
	return ((-15));
    if ((code = pdfmark_scan_rect(&rect, &rectstr, pctm)) < 0)
	return code;
    pdf_close_contents(pdev, ((bool) 0));
    bead_id = pdf_obj_ref(pdev);
    for (part = pdev->articles; part != 0; part = part->next)
	if (!bytes_compare(part->title.data, part->title.size, title.data, title.size))
	    break;
    if (part == 0) {
	stream *s = pdev->strm;
	byte *str;
	part = (pdf_article *) (*(pdev->v_memory)->procs.alloc_struct) (pdev->v_memory, &st_pdf_article, "pdfmark_ARTICLE");
	str = (*(pdev->v_memory)->procs.alloc_string) (pdev->v_memory, title.size, "article title");
	if (part == 0 || str == 0)
	    return ((-25));
	part->next = pdev->articles;
	pdev->articles = part;
	memcpy(str, title.data, title.size);
	part->title.data = str;
	part->title.size = title.size;
	part->id = pdf_open_obj(pdev, 0);
	part->first.id = part->last.id = 0;
	pprintld1(s, "<< /F %ld 0 R >>\n", bead_id);
	pdf_end_obj(pdev);
    }
    if (part->last.id == 0) {
	part->first.next_id = bead_id;
	part->last.id = part->first.id;
    } else {
	part->last.next_id = bead_id;
	pdfmark_write_article(pdev, &part->last);
    }
    part->last.prev_id = part->last.id;
    part->last.id = bead_id;
    part->last.article_id = part->id;
    part->last.next_id = 0;
    part->last.rect = rect;
    pdfmark_make_dest(part->last.dest, pdev, pairs, count);
    if (part->first.id == 0) {
	part->first = part->last;
	part->last.id = 0;
    }
    return 0;
}

static int pdfmark_DEST(gx_device_pdf * pdev, const gs_param_string * pairs, uint count, const gs_matrix * pctm)
{
    char dest[80];
    gs_param_string key;
    pdf_named_dest *pnd;
    byte *str;
    if (!pdfmark_find_key("Dest", pairs, count, &key) || !pdfmark_make_dest(dest, pdev, pairs, count))
	return ((-15));
    pnd = (pdf_named_dest *) (*(pdev->v_memory)->procs.alloc_struct) (pdev->v_memory, &st_pdf_named_dest, "pdfmark_DEST");
    str = (*(pdev->v_memory)->procs.alloc_string) (pdev->v_memory, key.size, "named_dest key");
    if (pnd == 0 || str == 0)
	return ((-25));
    pnd->next = pdev->named_dests;
    memcpy(str, key.data, key.size);
    pnd->key.data = str;
    pnd->key.size = key.size;
    strcpy(pnd->dest, dest);
    pdev->named_dests = pnd;
    return 0;
}

static int pdfmark_write_ps(gx_device_pdf * pdev, const gs_param_string * psource)
{
    stream *s = pdev->strm;
    long length_id = pdf_obj_ref(pdev);
    long start_pos, length;
    pprintld1(s, " /Length %ld 0 R >> stream\n", length_id);
    start_pos = stell(s);
    if (psource->size < 2 || psource->data[0] != '(' || psource->data[psource->size - 1] != ')')
	(lprintf_file_and_line(gs_stderr, "gdevpdfm.c", 618), fprintf(gs_stderr, "bad PS passthrough: %s\n", psource->data));
    else {
	pwrite(s, psource->data + 1, psource->size - 2);
    }
    pputs(s, "\n");
    length = stell(s) - start_pos;
    pputs(s, "endstream\n");
    pdf_end_obj(pdev);
    pdf_open_obj(pdev, length_id);
    pprintld1(s, "%ld\n", length);
    pdf_end_obj(pdev);
    return 0;
}

static int pdfmark_PS(gx_device_pdf * pdev, const gs_param_string * pairs, uint count, const gs_matrix * pctm)
{
    stream *s = pdev->strm;
    gs_param_string source;
    gs_param_string level1;
    if (!pdfmark_find_key("DataSource", pairs, count, &source))
	return ((-15));
    pdfmark_find_key("Level1", pairs, count, &level1);
    if (level1.data == 0 && source.size <= 100) {
	int code = pdf_open_contents(pdev, pdf_in_stream);
	if (code < 0)
	    return code;
	pwrite(s, source.data, source.size);
	pputs(s, " PS\n");
    } else {
	pdf_resource *pres;
	int code = pdf_begin_resource(pdev, resourceXObject, &pres);
	if (code < 0)
	    return code;
	pputs(s, " /Subtype /PS");
	if (level1.data != 0) {
	    long level1_id = pdf_obj_ref(pdev);
	    pprintld1(s, " /Level1 %ld 0 R", level1_id);
	    pdfmark_write_ps(pdev, &source);
	    pdf_open_obj(pdev, level1_id);
	    pputs(s, "<<");
	    pdfmark_write_ps(pdev, &level1);
	} else
	    pdfmark_write_ps(pdev, &source);
	code = pdf_open_contents(pdev, pdf_in_stream);
	if (code < 0)
	    return code;
	pprintld1(s, "/R%ld Do\n", pres->id);
    }
    return 0;
}

static int pdfmark_PAGES(gx_device_pdf * pdev, const gs_param_string * pairs, uint count, const gs_matrix * pctm)
{
    return pdfmark_save_edited_pairs(pdev, pairs, count, no_skip_pairs, ((void *) 0), 0, &pdev->pages_string);
} static int pdfmark_PAGE(gx_device_pdf * pdev, const gs_param_string * pairs, uint count, const gs_matrix * pctm)
{
    return pdfmark_save_edited_pairs(pdev, pairs, count, no_skip_pairs, ((void *) 0), 0, &pdev->page_string);
} static int pdfmark_DOCINFO(gx_device_pdf * pdev, const gs_param_string * pairs, uint count, const gs_matrix * pctm)
{
    stream *s = pdev->strm;
    long info_id;
    uint i;
    if (pdev->context != pdf_in_none && pdev->next_contents_id == 300)
	return ((-13));
    pdf_close_contents(pdev, ((bool) 0));
    pdf_open_page(pdev, pdf_in_none);
    info_id = pdf_open_obj(pdev, 0);
    pputs(s, "<<\n");
    for (i = 0; i < count; i += 2)
	if (!pdf_key_eq(&pairs[i], "CreationDate") && !pdf_key_eq(&pairs[i], "Producer"))
	    pdfmark_write_pair(s, &pairs[i]);
    pdf_write_default_info(pdev);
    pputs(s, ">>\n");
    pdf_end_obj(pdev);
    pdev->info_id = info_id;
    return 0;
}

static int pdfmark_DOCVIEW(gx_device_pdf * pdev, const gs_param_string * pairs, uint count, const gs_matrix * pctm)
{
    char dest[80];
    if (pdfmark_make_dest(dest, pdev, pairs, count)) {
	gs_param_string add_dest[2];
	static const char *skip_dest[] = { "Page", "View", 0 };
	(add_dest[0]).data = (const byte *) ("OpenAction"), (add_dest[0]).size = strlen((const char *) (add_dest[0]).data), (add_dest[0]).persistent = ((bool) 1);
	(add_dest[1]).data = (const byte *) (dest), (add_dest[1]).size = strlen((const char *) (add_dest[1]).data), (add_dest[1]).persistent = ((bool) 1);
	return pdfmark_save_edited_pairs(pdev, pairs, count, skip_dest, add_dest, 2, &pdev->catalog_string);
    } else
	return pdfmark_save_edited_pairs(pdev, pairs, count, no_skip_pairs, ((void *) 0), 0, &pdev->catalog_string);
}
