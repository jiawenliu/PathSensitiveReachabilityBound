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
typedef struct obj_header_data_s {
    union _f {
	struct _h {
	    unsigned large:1;
	} h;
	struct _l {
	    unsigned _:1, lmark:2, lsize:(((1 << 2) * 8 - 1) - 2);
	} l;
	struct _m {
	    unsigned _:1, smark:((1 << 2) * 8 - 1);
	} m;
	struct _b {
	    unsigned _:1, back:((1 << 2) * 8 - 1);
	} b;
    } f;
    uint size;
    union _t {
	gs_memory_type_ptr_t type;
	uint reloc;
    } t;
} obj_header_data_t;
struct obj_header_s {
    union _d {
	obj_header_data_t o;
	byte _pad[(((((4 - 1) | (4 - 1) | (4 - 1) | ((1 << 2) - 1) | ((1 << 1) - 1)) + 1)) & (((((4 - 1) | (4 - 1) | (4 - 1) | ((1 << 2) - 1) | ((1 << 1) - 1)) + 1)) - 1) ? ((sizeof(obj_header_data_t)) + (((((4 - 1) | (4 - 1) | (4 - 1) | ((1 << 2) - 1) | ((1 << 1) - 1)) + 1)) - 1)) / ((((4 - 1) | (4 - 1) | (4 - 1) | ((1 << 2) - 1) | ((1 << 1) - 1)) + 1)) * ((((4 - 1) | (4 - 1) | (4 - 1) | ((1 << 2) - 1) | ((1 << 1) - 1)) + 1)) : ((sizeof(obj_header_data_t)) + (((((4 - 1) | (4 - 1) | (4 - 1) | ((1 << 2) - 1) | ((1 << 1) - 1)) + 1)) - 1)) & -((((4 - 1) | (4 - 1) | (4 - 1) | ((1 << 2) - 1) | ((1 << 1) - 1)) + 1)))];
    }
    d;
};
typedef struct chunk_head_s {
    byte *dest;
    obj_header_t free;
} chunk_head_t;
extern const char *gs_error_names[];
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
struct name_s {
    ushort next_index;
    unsigned foreign_string:1;
    unsigned mark:1;
    unsigned string_size:(14 - 0);
    const byte *string_bytes;
    ref *pvalue;
};
typedef struct name_sub_table_s {
    name names[(1 << (7 + (0 / 2)))];
} name_sub_table;
struct name_table_s {
    uint free;
    uint sub_next;
    uint sub_count;
    uint max_sub_count;
    gs_memory_t *memory;
    uint hash[(1024 << (0 / 2))];
    name_sub_table *sub_tables[(uint) ((0x10000 << 0) - 1) / (1 << (7 + (0 / 2))) + 1];
};
void name_unmark_all(void);
void name_trace_finish(gc_state_t *);
typedef struct alloc_save_s alloc_save_t;
void name_restore(alloc_save_t *);
typedef enum { i_vm_foreign = 0, i_vm_system, i_vm_global, i_vm_local, i_vm_max = i_vm_local } i_vm_space;
typedef struct gs_ref_memory_s gs_ref_memory_t;
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
extern void alloc_save_init(gs_dual_memory_t *);
alloc_save_t *alloc_find_save(const gs_dual_memory_t *, ulong);
ulong alloc_save_state(gs_dual_memory_t *, void *);
void *alloc_save_client_data(const alloc_save_t *);
int alloc_save_level(const gs_dual_memory_t *);
alloc_save_t *alloc_save_current(const gs_dual_memory_t *);
bool alloc_is_since_save(const void *, const alloc_save_t *);
bool alloc_name_is_since_save(const ref *, const alloc_save_t *);
bool alloc_name_index_is_since_save(uint, const alloc_save_t *);
bool alloc_any_names_since_save(const alloc_save_t *);
bool alloc_restore_state_step(alloc_save_t *);
void alloc_forget_save(alloc_save_t *);
void alloc_restore_all(gs_dual_memory_t *);
int alloc_save_change(gs_dual_memory_t *, const ref * pcont, ref_packed * ptr, client_name_t cname);
extern gs_dual_memory_t gs_imemory;
void ialloc_init(gs_memory_t *, uint, bool);
void ialloc_reset_requested(gs_dual_memory_t *);
void ialloc_validate_spaces(const gs_dual_memory_t *);
extern uint imemory_space(gs_ref_memory_t *);
void ialloc_set_space(gs_dual_memory_t *, uint);
int alloc_save_change(gs_dual_memory_t *, const ref * pcont, ref_packed * ptr, client_name_t cname);
int alloc_save_level(const gs_dual_memory_t *);
const uint name_max_string = ((1 << (14 - 0)) - 1);
static const byte hash_permutation[256] = { 1, 87, 49, 12, 176, 178, 102, 166, 121, 193, 6, 84, 249, 230, 44, 163, 14, 197, 213, 181, 161, 85, 218, 80, 64, 239, 24, 226, 236, 142, 38, 200, 110, 177, 104, 103, 141, 253, 255, 50, 77, 101, 81, 18, 45, 96, 31, 222, 25, 107, 190, 70, 86, 237, 240, 34, 72, 242, 20, 214, 244, 227, 149, 235, 97, 234, 57, 22, 60, 250, 82, 175, 208, 5, 127, 199, 111, 62, 135, 248, 174, 169, 211, 58, 66, 154, 106, 195, 245, 171, 17, 187, 182, 179, 0, 243, 132, 56, 148, 75, 128, 133, 158, 100, 130, 126, 91, 13, 153, 246, 216, 219, 119, 68, 223, 78, 83, 88, 201, 99, 122, 11, 92, 32, 136, 114, 52, 10, 138, 30, 48, 183, 156, 35, 61, 26, 143, 74, 251, 94, 129, 162, 63, 152, 170, 7, 115, 167, 241, 206, 3, 150, 55, 59, 151, 220, 90, 53, 23, 131, 125, 173, 15, 238, 79, 95, 89, 16, 105, 137, 225, 224, 217, 160, 37, 123, 118, 73, 2, 157, 46, 116, 9, 145, 134, 228, 207, 212, 202, 215, 69, 229, 27, 188, 67, 124, 168, 252, 42, 4, 29, 108, 21, 247, 19, 205, 39, 203, 233, 40, 186, 147, 198, 192, 155, 33, 164, 191, 98, 204, 165, 180, 117, 76, 140, 36, 210, 172, 41, 54, 159, 8, 185, 232, 113, 196, 231, 47, 146, 120, 51, 65, 28, 144, 254, 221, 93, 189, 194, 139, 112, 43, 71, 109, 184, 209 };
static const byte nt_1char_names[128] = { 0, 0 + 1, 0 + 2, 0 + 3, 0 + 4, 0 + 5, 0 + 6, 0 + 7, 0 + 8, 0 + 8 + 1, 0 + 8 + 2, 0 + 8 + 3, 0 + 8 + 4, 0 + 8 + 5, 0 + 8 + 6, 0 + 8 + 7, 0 + 16, 0 + 16 + 1, 0 + 16 + 2, 0 + 16 + 3, 0 + 16 + 4, 0 + 16 + 5, 0 + 16 + 6, 0 + 16 + 7, 0 + 24, 0 + 24 + 1, 0 + 24 + 2, 0 + 24 + 3, 0 + 24 + 4, 0 + 24 + 5, 0 + 24 + 6, 0 + 24 + 7, 32, 32 + 1, 32 + 2, 32 + 3, 32 + 4, 32 + 5, 32 + 6, 32 + 7, 32 + 8, 32 + 8 + 1, 32 + 8 + 2, 32 + 8 + 3, 32 + 8 + 4, 32 + 8 + 5, 32 + 8 + 6, 32 + 8 + 7, 32 + 16, 32 + 16 + 1, 32 + 16 + 2, 32 + 16 + 3, 32 + 16 + 4, 32 + 16 + 5, 32 + 16 + 6, 32 + 16 + 7, 32 + 24, 32 + 24 + 1, 32 + 24 + 2, 32 + 24 + 3, 32 + 24 + 4, 32 + 24 + 5, 32 + 24 + 6, 32 + 24 + 7, 64, 64 + 1, 64 + 2, 64 + 3, 64 + 4, 64 + 5, 64 + 6, 64 + 7, 64 + 8, 64 + 8 + 1, 64 + 8 + 2, 64 + 8 + 3, 64 + 8 + 4, 64 + 8 + 5, 64 + 8 + 6, 64 + 8 + 7, 64 + 16, 64 + 16 + 1, 64 + 16 + 2, 64 + 16 + 3, 64 + 16 + 4, 64 + 16 + 5, 64 + 16 + 6, 64 + 16 + 7, 64 + 24, 64 + 24 + 1, 64 + 24 + 2, 64 + 24 + 3, 64 + 24 + 4, 64 + 24 + 5, 64 + 24 + 6, 64 + 24 + 7, 96, 96 + 1, 96 + 2, 96 + 3, 96 + 4, 96 + 5, 96 + 6, 96 + 7, 96 + 8, 96 + 8 + 1, 96 + 8 + 2, 96 + 8 + 3, 96 + 8 + 4, 96 + 8 + 5, 96 + 8 + 6, 96 + 8 + 7, 96 + 16, 96 + 16 + 1, 96 + 16 + 2, 96 + 16 + 3, 96 + 16 + 4, 96 + 16 + 5, 96 + 16 + 6, 96 + 16 + 7, 96 + 24, 96 + 24 + 1, 96 + 24 + 2, 96 + 24 + 3, 96 + 24 + 4, 96 + 24 + 5, 96 + 24 + 6, 96 + 24 + 7 };

static gs_ptr_type_t name_sub_enum_ptrs(void *ptr, uint size, uint index, const void **pep);
static void name_sub_reloc_ptrs(void *ptr, uint size, gc_state_t * gcst);
static const gs_memory_struct_type_t st_name_sub_table = { sizeof(name_sub_table), "name_sub_table", 0, 0, name_sub_enum_ptrs, name_sub_reloc_ptrs, 0 };

static gs_ptr_type_t name_table_enum_ptrs(void *ptr, uint size, uint index, const void **pep);
static void name_table_reloc_ptrs(void *ptr, uint size, gc_state_t * gcst);
static const gs_memory_struct_type_t st_name_table = { sizeof(name_table), "name_table", 0, 0, name_table_enum_ptrs, name_table_reloc_ptrs, 0 };

static name_table *the_nt;
static gs_gc_root_t the_nt_root;
static int name_alloc_sub(name_table *);
static void name_scan_sub(name_table *, uint, bool);
name_table *name_init(ulong count, gs_memory_t * mem)
{
    register int i;
    name_table *nt;
    if (count == 0)
	count = (uint) ((0x10000 << 0) - 1) + 1L;
    else if (count - 1 > (uint) ((0x10000 << 0) - 1))
	return 0;
    nt = (name_table *) (*(mem)->procs.alloc_struct) (mem, &st_name_table, "name_init(nt)");
    the_nt = nt;
    memset(nt, 0, sizeof(name_table));
    nt->max_sub_count = ((count - 1) | ((1 << (7 + (0 / 2))) - 1)) >> (7 + (0 / 2));
    nt->memory = mem;
    for (i = 0; i < 2 + 128; i += (1 << (7 + (0 / 2))))
	name_alloc_sub(nt);
    for (i = -1; i < 128; i++) {
	uint ncnt = 2 + i;
	uint nidx = (((ncnt) & (-(1 << (7 + (0 / 2))))) + (((ncnt) * 59) & ((1 << (7 + (0 / 2))) - 1)));
	register name *pname = ((nt)->sub_tables[(nidx) >> (7 + (0 / 2))]->names + ((nidx) & ((1 << (7 + (0 / 2))) - 1)));
	if (i < 0)
	    pname->string_bytes = nt_1char_names, pname->string_size = 0;
	else
	    pname->string_bytes = nt_1char_names + i, pname->string_size = 1;
	pname->foreign_string = 1;
	pname->mark = 1;
	pname->pvalue = ((ref *) 0);
    }
    nt->free = 0;
    name_trace_finish(((void *) 0));
    (*(mem)->procs.register_root) (mem, &the_nt_root, (&ptr_struct_procs), (void **) &the_nt, "name table");
    return nt;
}

const name_table *the_name_table(void)
{
    return the_nt;
}

gs_memory_t *name_memory(void)
{
    return the_nt->memory;
}

int name_ref(const byte * ptr, uint size, ref * pref, int enterflag)
{
    name_table *nt = the_nt;
    register name *pname;
    uint nidx;
    uint *phash; {
	uint hash;
	const byte *p = ptr;
	uint n = size;
	switch (size) {
	case 0:
	    nidx = (((1) & (-(1 << (7 + (0 / 2))))) + (((1) * 59) & ((1 << (7 + (0 / 2))) - 1)));
	    pname = ((nt)->sub_tables[(nidx) >> (7 + (0 / 2))]->names + ((nidx) & ((1 << (7 + (0 / 2))) - 1)));
	    goto mkn;
	case 1:
	    if (*p < 128) {
		hash = *p + 2;
		nidx = (((hash) & (-(1 << (7 + (0 / 2))))) + (((hash) * 59) & ((1 << (7 + (0 / 2))) - 1)));
		pname = ((nt)->sub_tables[(nidx) >> (7 + (0 / 2))]->names + ((nidx) & ((1 << (7 + (0 / 2))) - 1)));
		goto mkn;
	    }
	default:
	    hash = hash_permutation[*p++];
	    while (--n > 0)
		hash = (hash << 8) | hash_permutation[(byte) hash ^ *p++];
	}
	phash = nt->hash + (hash & ((1024 << (0 / 2)) - 1));
    }
    for (nidx = *phash; nidx != 0; nidx = ((pname)->next_index)) {
	pname = ((nt)->sub_tables[(nidx) >> (7 + (0 / 2))]->names + ((nidx) & ((1 << (7 + (0 / 2))) - 1)));
	if (pname->string_size == size && !memcmp(ptr, pname->string_bytes, size))
	    goto mkn;
    }
    if (enterflag < 0)
	return ((-21));
    if (size > ((1 << (14 - 0)) - 1))
	return ((-13));
    nidx = nt->free;
    if (nidx == 0) {
	int code = name_alloc_sub(nt);
	if (code < 0)
	    return code;
	nidx = nt->free;
    }
    pname = ((nt)->sub_tables[(nidx) >> (7 + (0 / 2))]->names + ((nidx) & ((1 << (7 + (0 / 2))) - 1)));
    if (enterflag == 1) {
	byte *cptr = (byte *) (*(nt->memory)->procs.alloc_string) (nt->memory, size, "name_ref(string)");
	if (cptr == 0)
	    return ((-25));
	memcpy(cptr, ptr, size);
	pname->string_bytes = cptr;
	pname->foreign_string = 0;
    } else {
	pname->string_bytes = ptr;
	pname->foreign_string = (enterflag == 0 ? 1 : 0);
    }
    pname->string_size = size;
    pname->pvalue = ((ref *) 0);
    nt->free = ((pname)->next_index);
    ((pname)->next_index = (*phash));
    *phash = nidx;
    do {
    } while (0);
  mkn:((pref)->value.pname = (pname), ((pref)->tas.type_attrs = ((t_name) << 8) + (avm_system)), ((pref)->tas.rsize = ((ushort) (nidx))));
    return 0;
}

void name_string_ref(const ref * pnref, ref * psref)
{
    name *pname = pnref->value.pname;
    const name_table *nt = the_nt;
    ((psref)->value.const_bytes = ((const byte *) pname->string_bytes), ((psref)->tas.type_attrs = ((t_string) << 8) + ((pname->foreign_string ? avm_foreign : imemory_space((gs_ref_memory_t *) nt->memory)) | (0x20 + 0x40))), ((psref)->tas.rsize = (pname->string_size)));
} int name_from_string(const ref * psref, ref * pnref)
{
    int exec = (((psref)->tas.type_attrs) & (0x80));
    int code = name_ref(psref->value.bytes, ((psref)->tas.rsize), pnref, 1);
    if (code < 0)
	return code;
    if (exec)
	((pnref)->tas.type_attrs |= (0x80));
    return code;
}

int name_enter_string(const char *str, ref * pref)
{
    return name_ref((const byte *) str, strlen(str), pref, 0);
} void name_invalidate_value_cache(const ref * pnref)
{
    pnref->value.pname->pvalue = ((ref *) 1);
} uint name_index(const ref * pnref)
{
    return ((pnref)->tas.rsize);
}

void name_index_ref(uint index, ref * pnref)
{
    ((pnref)->value.pname = (((the_nt)->sub_tables[(index) >> (7 + (0 / 2))]->names + ((index) & ((1 << (7 + (0 / 2))) - 1)))), ((pnref)->tas.type_attrs = ((t_name) << 8) + (avm_system)), ((pnref)->tas.rsize = ((ushort) (index))));;
} name *name_index_ptr(uint index)
{
    return ((the_nt)->sub_tables[(index) >> (7 + (0 / 2))]->names + ((index) & ((1 << (7 + (0 / 2))) - 1)));
}

uint name_next_valid_index(uint nidx)
{
    name_table *nt = the_nt;
    name_sub_table *sub = nt->sub_tables[nidx >> (7 + (0 / 2))];
    name *pname;
    do {
	++nidx;
	if ((nidx & ((1 << (7 + (0 / 2))) - 1)) == 0)
	    for (;; nidx += (1 << (7 + (0 / 2)))) {
		if ((nidx >> (7 + (0 / 2))) >= nt->sub_count)
		    return 0;
		sub = nt->sub_tables[nidx >> (7 + (0 / 2))];
		if (sub != 0)
		    break;
	    }
	pname = &sub->names[nidx & ((1 << (7 + (0 / 2))) - 1)];
    } while (pname->string_bytes == 0);
    return nidx;
}

void name_unmark_all(void)
{
    name_table *nt = the_nt;
    uint si;
    name_sub_table *sub;
    for (si = 0; si < nt->sub_count; ++si)
	if ((sub = nt->sub_tables[si]) != 0) {
	    uint i;
	    for (i = 0; i < (1 << (7 + (0 / 2))); ++i)
		sub->names[i].mark = 0;
	}
    {
	uint ncnt;
	for (ncnt = 1; ncnt <= 128; ++ncnt)
	    name_index_ptr((((ncnt) & (-(1 << (7 + (0 / 2))))) + (((ncnt) * 59) & ((1 << (7 + (0 / 2))) - 1))))->mark = 1;
    }
}

bool name_mark_index(uint nidx)
{
    name *pname = name_index_ptr(nidx);
    if (pname->mark)
	return ((bool) 0);
    pname->mark = 1;
    return ((bool) 1);
}

void *name_ref_sub_table(const ref * pnref)
{
    return pnref->value.pname - (((pnref)->tas.rsize) & ((1 << (7 + (0 / 2))) - 1));
}

void *name_index_ptr_sub_table(uint index, name * pname)
{
    return pname - (index & ((1 << (7 + (0 / 2))) - 1));
}

void name_trace_finish(gc_state_t * gcst)
{
    name_table *nt = the_nt;
    uint *phash = &nt->hash[0];
    uint i;
    for (i = 0; i < (1024 << (0 / 2)); phash++, i++) {
	uint prev = 0;
	name *pnprev;
	uint nidx = *phash;
	while (nidx != 0) {
	    name *pname = ((nt)->sub_tables[(nidx) >> (7 + (0 / 2))]->names + ((nidx) & ((1 << (7 + (0 / 2))) - 1)));
	    uint next = ((pname)->next_index);
	    if (pname->mark) {
		prev = nidx;
		pnprev = pname;
	    } else {
		do {
		} while (0);
		pname->string_bytes = 0;
		pname->string_size = 0;
		if (prev == 0)
		    *phash = next;
		else
		    ((pnprev)->next_index = (next));
	    }
	    nidx = next;
	}
    }
    nt->free = 0;
    for (i = nt->sub_count; i--;) {
	name_sub_table *sub = nt->sub_tables[i];
	if (sub != 0) {
	    name_scan_sub(nt, i, ((bool) 1));
	    if (nt->sub_tables[i] == 0 && gcst != 0) {
		if (((obj_header_t *) sub - 1)->d.o.f.h.large)
		    ((obj_header_t *) sub - 1)->d.o.f.l.lmark = ((((uint) 1 << ((1 << 2) * 8 - 1)) - 1) & 3);
		else
		    ((obj_header_t *) sub - 1)->d.o.f.m.smark = (((uint) 1 << ((1 << 2) * 8 - 1)) - 1);
	    }
	}
	if (i == 0)
	    break;
    }
    nt->sub_next = 0;
}

void name_restore(alloc_save_t * save)
{
    name_table *nt = the_nt;
    uint si;
    for (si = 0; si < nt->sub_count; ++si)
	if (nt->sub_tables[si] != 0) {
	    uint i;
	    for (i = 0; i < (1 << (7 + (0 / 2))); ++i) {
		name *pname = ((nt)->sub_tables[((si << (7 + (0 / 2))) + i) >> (7 + (0 / 2))]->names + (((si << (7 + (0 / 2))) + i) & ((1 << (7 + (0 / 2))) - 1)));
		if (pname->string_bytes == 0)
		    pname->mark = 0;
		else if (pname->foreign_string)
		    pname->mark = 1;
		else
		    pname->mark = !alloc_is_since_save(pname->string_bytes, save);
	    }
	}
    name_trace_finish(((void *) 0));
} static int name_alloc_sub(name_table * nt)
{
    uint sub_index = nt->sub_next;
    name_sub_table *sub;
    for (;; ++sub_index) {
	if (sub_index > nt->max_sub_count)
	    return ((-13));
	if (nt->sub_tables[sub_index] == 0)
	    break;
    }
    nt->sub_next = sub_index + 1;
    if (nt->sub_next > nt->sub_count)
	nt->sub_count = nt->sub_next;
    sub = (name_sub_table *) (*(nt->memory)->procs.alloc_struct) (nt->memory, &st_name_sub_table, "name_alloc_sub");
    if (sub == 0)
	return ((-25));
    memset(sub, 0, sizeof(name_sub_table));
    if (sub_index >= 0x10000L >> (7 + (0 / 2))) {
	uint extn = sub_index >> (16 - (7 + (0 / 2)));
	int i;
	for (i = 0; i < (1 << (7 + (0 / 2))); ++i)
	    do {
	    } while (0);
    }
    nt->sub_tables[sub_index] = sub;
    name_scan_sub(nt, sub_index, ((bool) 0));
    return 0;
}

static void name_scan_sub(name_table * nt, uint sub_index, bool free_empty)
{
    name_sub_table *sub = nt->sub_tables[sub_index];
    uint free = nt->free;
    uint nbase = sub_index << (7 + (0 / 2));
    uint ncnt = nbase + ((1 << (7 + (0 / 2))) - 1);
    bool keep = !free_empty;
    if (sub == 0)
	return;
    if (nbase == 0)
	nbase = 1, keep = ((bool) 1);
    for (;; --ncnt) {
	uint nidx = (((ncnt) & (-(1 << (7 + (0 / 2))))) + (((ncnt) * 59) & ((1 << (7 + (0 / 2))) - 1)));
	name *pname = &sub->names[nidx & ((1 << (7 + (0 / 2))) - 1)];
	if (pname->mark)
	    keep = ((bool) 1);
	else {
	    ((pname)->next_index = (free));
	    free = nidx;
	}
	if (ncnt == nbase)
	    break;
    }
    if (keep)
	nt->free = free;
    else {
	(*(nt->memory)->procs.free_object) (nt->memory, sub, "name_scan_sub");
	nt->sub_tables[sub_index] = 0;
	if (sub_index == nt->sub_count - 1) {
	    do {
		--sub_index;
	    } while (nt->sub_tables[sub_index] == 0);
	    nt->sub_count = sub_index + 1;
	    if (nt->sub_next > sub_index)
		nt->sub_next = sub_index;
	} else if (nt->sub_next == sub_index)
	    nt->sub_next--;
    }
}

static gs_ptr_type_t name_table_enum_ptrs(void *vptr, uint size, uint index, const void **pep)
{
    if (index >= ((name_table *) vptr)->sub_count)
	return 0;
    *pep = ((name_table *) vptr)->sub_tables[index];
    return (&ptr_struct_procs);
}

static void name_table_reloc_ptrs(void *vptr, uint size, gc_state_t * gcst)
{ {
	name_sub_table **sub = ((name_table *) vptr)->sub_tables;
	uint sub_count = ((name_table *) vptr)->sub_count;
	uint i;
	for (i = 0; i < sub_count; i++, sub++)
	    *sub = gs_reloc_struct_ptr(*sub, gcst);
}
}

static gs_ptr_type_t name_sub_enum_ptrs(void *vptr, uint size, uint index, const void **pep)
{
    return 0;
}

static void name_sub_reloc_ptrs(void *vptr, uint size, gc_state_t * gcst)
{ {
	name *pname = ((name_sub_table *) vptr)->names;
	uint i;
	for (i = 0; i < (1 << (7 + (0 / 2))); ++pname, ++i) {
	    if (pname->string_bytes != 0 && !pname->foreign_string) {
		gs_const_string nstr;
		nstr.data = pname->string_bytes;
		nstr.size = pname->string_size;
		gs_reloc_const_string(&nstr, gcst);
		pname->string_bytes = nstr.data;
	    }
	}
}
}
