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
extern const char *gs_error_names[];
int check_proc_failed(const ref *);
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
extern gs_dual_memory_t gs_imemory;
void ialloc_init(gs_memory_t *, uint, bool);
void ialloc_reset_requested(gs_dual_memory_t *);
void ialloc_validate_spaces(const gs_dual_memory_t *);
extern uint imemory_space(gs_ref_memory_t *);
void ialloc_set_space(gs_dual_memory_t *, uint);
struct dict_s {
    ref values;
    ref keys;
    ref count;
    ref maxlength;
};
extern const uint dict_max_size;
extern bool dict_auto_expand;
int dict_create(uint maxlength, ref * pdref);
int dict_find(const ref * pdref, const ref * key, ref ** ppvalue);
int dict_find_string(const ref * pdref, const char *kstr, ref ** ppvalue);
int dict_put(ref * pdref, const ref * key, const ref * pvalue);
int dict_put_string(ref * pdref, const char *kstr, const ref * pvalue);
int dict_undef(ref * pdref, const ref * key);
uint dict_length(const ref * pdref);
uint dict_maxlength(const ref * pdref);
uint dict_max_index(const ref * pdref);
int dict_copy_entries(const ref * dfrom, ref * dto, bool new_only);
int dict_resize(ref * pdref, uint newmaxlength);
int dict_grow(ref * pdref);
int dict_unpack(ref * pdref);
int dict_first(const ref * pdref);
int dict_next(const ref * pdref, int index, ref * eltp);
int dict_value_index(const ref * pdref, const ref * pvalue);
int dict_index_entry(const ref * pdref, int index, ref * eltp);
uint dict_round_size_small(uint rsize);
uint dict_round_size_large(uint rsize);
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
typedef struct iparam_loc_s {
    ref *pvalue;
    int *presult;
} iparam_loc;
typedef struct iparam_list_s iparam_list;
struct iparam_list_s {
    const gs_param_list_procs *procs;
    union {
	struct {
	    int (*read) (iparam_list *, const ref *, iparam_loc *);
	    ref policies;
	    bool require_all;
	} r;
	struct {
	    int (*write) (iparam_list *, const ref *, const ref *);
	    ref wanted;
	} w;
    } u;
    int *results;
    uint count;
    bool int_keys;
};
typedef struct dict_param_list_s {
    const gs_param_list_procs *procs;
    union {
	struct {
	    int (*read) (iparam_list *, const ref *, iparam_loc *);
	    ref policies;
	    bool require_all;
	} r;
	struct {
	    int (*write) (iparam_list *, const ref *, const ref *);
	    ref wanted;
	} w;
    } u;
    int *results;
    uint count;
    bool int_keys;
    ref dict;
} dict_param_list;
typedef struct array_param_list_s {
    const gs_param_list_procs *procs;
    union {
	struct {
	    int (*read) (iparam_list *, const ref *, iparam_loc *);
	    ref policies;
	    bool require_all;
	} r;
	struct {
	    int (*write) (iparam_list *, const ref *, const ref *);
	    ref wanted;
	} w;
    } u;
    int *results;
    uint count;
    bool int_keys;
    ref *bot;
    ref *top;
} array_param_list;
typedef struct stack_param_list_s {
    const gs_param_list_procs *procs;
    union {
	struct {
	    int (*read) (iparam_list *, const ref *, iparam_loc *);
	    ref policies;
	    bool require_all;
	} r;
	struct {
	    int (*write) (iparam_list *, const ref *, const ref *);
	    ref wanted;
	} w;
    } u;
    int *results;
    uint count;
    bool int_keys;
    ref_stack *pstack;
    uint skip;
} stack_param_list;
int dict_param_list_read(dict_param_list *, const ref *, const ref *, bool);
int dict_param_list_write(dict_param_list *, ref *, const ref *);
int array_param_list_read(array_param_list *, ref *, uint, const ref *, bool);
int stack_param_list_read(stack_param_list *, ref_stack *, uint, const ref *, bool);
int stack_param_list_write(stack_param_list *, ref_stack *, const ref *);
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
typedef struct gs_matrix_s gs_matrix;
int read_matrix(const ref *, gs_matrix *);
int write_matrix(ref *, const gs_matrix *);
int alloc_save_change(gs_dual_memory_t *, const ref * pcont, ref_packed * ptr, client_name_t cname);
int alloc_save_level(const gs_dual_memory_t *);
static int ref_param_key(const iparam_list * plist, gs_param_name pkey, ref * pkref)
{
    if (plist->int_keys) {
	long key;
	if (sscanf(pkey, "%ld", &key) != 1)
	    return ((-15));
	((pkref)->value.intval = (key), ((pkref)->tas.type_attrs = ((t_integer) << 8) + (0)));
	return 0;
    } else {
	return name_ref((const byte *) pkey, strlen(pkey), pkref, 0);
}} static int ref_param_write_null(gs_param_list *, gs_param_name);

static int ref_param_write_bool(gs_param_list *, gs_param_name, bool *);
static int ref_param_write_int(gs_param_list *, gs_param_name, int *);
static int ref_param_write_long(gs_param_list *, gs_param_name, long *);
static int ref_param_write_float(gs_param_list *, gs_param_name, float *);
static int ref_param_write_string(gs_param_list *, gs_param_name, gs_param_string *);
static int ref_param_write_name(gs_param_list *, gs_param_name, gs_param_string *);
static int ref_param_write_int_array(gs_param_list *, gs_param_name, gs_param_int_array *);
static int ref_param_write_float_array(gs_param_list *, gs_param_name, gs_param_float_array *);
static int ref_param_write_string_array(gs_param_list *, gs_param_name, gs_param_string_array *);
static int ref_param_write_name_array(gs_param_list *, gs_param_name, gs_param_string_array *);
static int ref_param_begin_write_dict(gs_param_list *, gs_param_name, gs_param_dict *, bool);
static int ref_param_end_write_dict(gs_param_list *, gs_param_name, gs_param_dict *);
static bool ref_param_requested(const gs_param_list *, gs_param_name);
static const gs_param_list_procs ref_write_procs = { ref_param_write_null, ref_param_write_bool, ref_param_write_int, ref_param_write_long, ref_param_write_float, ref_param_write_string, ref_param_write_name, ref_param_write_int_array, ref_param_write_float_array, ref_param_write_string_array, ref_param_write_name_array, ref_param_begin_write_dict, ref_param_end_write_dict, ref_param_requested };

static int ref_array_param_requested(const gs_param_list *, gs_param_name, ref *, uint, client_name_t);
static int ref_param_write(iparam_list *, gs_param_name, const ref *);
static int ref_param_write_string_value(ref *, const gs_param_string *);
static int ref_param_write_null(gs_param_list * plist, gs_param_name pkey)
{
    ref value;
    (((&value)->tas.type_attrs = ((t_null) << 8) + (0)));
    return ref_param_write(((iparam_list *) plist), pkey, &value);
}

static int ref_param_write_bool(gs_param_list * plist, gs_param_name pkey, bool * pvalue)
{
    ref value;
    ((&value)->value.boolval = (*pvalue), ((&value)->tas.type_attrs = ((t_boolean) << 8) + (0)));
    return ref_param_write(((iparam_list *) plist), pkey, &value);
}

static int ref_param_write_int(gs_param_list * plist, gs_param_name pkey, int *pvalue)
{
    ref value;
    ((&value)->value.intval = (*pvalue), ((&value)->tas.type_attrs = ((t_integer) << 8) + (0)));
    return ref_param_write(((iparam_list *) plist), pkey, &value);
}

static int ref_param_write_long(gs_param_list * plist, gs_param_name pkey, long *pvalue)
{
    ref value;
    ((&value)->value.intval = (*pvalue), ((&value)->tas.type_attrs = ((t_integer) << 8) + (0)));
    return ref_param_write(((iparam_list *) plist), pkey, &value);
}

static int ref_param_write_float(gs_param_list * plist, gs_param_name pkey, float *pvalue)
{
    ref value;
    ((&value)->value.realval = (*pvalue), ((&value)->tas.type_attrs = ((t_real) << 8) + (0)));
    return ref_param_write(((iparam_list *) plist), pkey, &value);
}

static int ref_param_write_string(gs_param_list * plist, gs_param_name pkey, gs_param_string * pvalue)
{
    ref sref;
    int code;
    if (!ref_param_requested(plist, pkey))
	return 0;
    code = ref_param_write_string_value(&sref, pvalue);
    if (code < 0)
	return code;
    return ref_param_write(((iparam_list *) plist), pkey, &sref);
}

static int ref_param_write_name(gs_param_list * plist, gs_param_name pkey, gs_param_string * pvalue)
{
    ref nref;
    int code;
    if (!ref_param_requested(plist, pkey))
	return 0;
    code = name_ref((pvalue)->data, (pvalue)->size, &nref, ((pvalue)->persistent ? 0 : 1));
    if (code < 0)
	return code;
    return ref_param_write(((iparam_list *) plist), pkey, &nref);
}

static int ref_param_write_int_array(gs_param_list * plist, gs_param_name pkey, gs_param_int_array * pvalue)
{
    ref value;
    const int *pdata = pvalue->data;
    uint n = pvalue->size;
    ref *pe;
    int code;
    if ((code = ref_array_param_requested(plist, pkey, &value, n, "ref_param_write_int_array")) <= 0)
	return code;
    for (pe = value.value.refs; n > 0; n--, pe++, pdata++)
	((pe)->value.intval = (*pdata), ((pe)->tas.type_attrs = ((t_integer) << 8) + ((0) | ((&gs_imemory)->new_mask))));
    return ref_param_write(((iparam_list *) plist), pkey, &value);
}

static int ref_param_write_float_array(gs_param_list * plist, gs_param_name pkey, gs_param_float_array * pvalue)
{
    ref value;
    const float *pdata = pvalue->data;
    uint n = pvalue->size;
    int code;
    ref *pe;
    if ((code = ref_array_param_requested(plist, pkey, &value, n, "ref_param_write_float_array")) <= 0)
	return code;
    for (pe = value.value.refs; n > 0; n--, pe++, pdata++)
	((pe)->value.realval = (*pdata), ((pe)->tas.type_attrs = ((t_real) << 8) + ((0) | ((&gs_imemory)->new_mask))));
    return ref_param_write(((iparam_list *) plist), pkey, &value);
}

static int ref_param_write_string_array(gs_param_list * plist, gs_param_name pkey, gs_param_string_array * pvalue)
{
    ref value;
    const gs_param_string *pdata = pvalue->data;
    uint n = pvalue->size;
    int code;
    ref *pe;
    if ((code = ref_array_param_requested(plist, pkey, &value, n, "ref_param_write_string_array")) <= 0)
	return code;
    for (pe = value.value.refs; n > 0; n--, pe++, pdata++) {
	code = ref_param_write_string_value(pe, pdata);
	if (code < 0) {
	    return code;
	}
    }
    return ref_param_write(((iparam_list *) plist), pkey, &value);
}

static int ref_param_write_name_array(gs_param_list * plist, gs_param_name pkey, gs_param_string_array * pvalue)
{
    ref value;
    const gs_param_string *pdata = pvalue->data;
    uint n = pvalue->size;
    int code;
    ref *pe;
    if ((code = ref_array_param_requested(plist, pkey, &value, n, "ref_param_write_name_array")) <= 0)
	return code;
    for (pe = value.value.refs; n > 0; n--, pe++, pdata++) {
	code = name_ref((pdata)->data, (pdata)->size, pe, ((pdata)->persistent ? 0 : 1));
	if (code < 0) {
	    return code;
	}
    }
    return ref_param_write(((iparam_list *) plist), pkey, &value);
}

static int ref_param_begin_write_dict(gs_param_list * plist, gs_param_name pkey, gs_param_dict * pvalue, bool int_keys)
{
    dict_param_list *dlist = (dict_param_list *) (*(((gs_memory_t *) (gs_imemory.current)))->procs.alloc_bytes) (((gs_memory_t *) (gs_imemory.current)), ((int) (sizeof(dict_param_list))), "ref_param_begin_write_dict");
    ref dref;
    int code;
    if (dlist == 0)
	return ((-25));
    code = dict_create(pvalue->size, &dref);
    if (code < 0) {
	(*(((gs_memory_t *) (gs_imemory.current)))->procs.free_object) (((gs_memory_t *) (gs_imemory.current)), dlist, "ref_param_begin_write_dict");
	return code;
    }
    pvalue->list = (gs_param_list *) dlist;
    code = dict_param_list_write(dlist, &dref, ((void *) 0));
    if (code < 0)
	return code;
    dlist->int_keys = int_keys;
    return 0;
}

static int ref_param_end_write_dict(gs_param_list * plist, gs_param_name pkey, gs_param_dict * pvalue)
{
    int code = ref_param_write(((iparam_list *) plist), pkey, &((dict_param_list *) pvalue->list)->dict);
    (*(((gs_memory_t *) (gs_imemory.current)))->procs.free_object) (((gs_memory_t *) (gs_imemory.current)), pvalue->list, "ref_param_end_write_dict");
    return code;
}

static bool ref_param_requested(const gs_param_list * plist, gs_param_name pkey)
{
    ref kref;
    ref *ignore_value;
    if (!((((const byte *) &((&((const iparam_list *) plist)->u.w.wanted)->tas.type_attrs))[1]) == (t_dictionary)))
	return ((bool) 1);
    if (ref_param_key(((const iparam_list *) plist), pkey, &kref) < 0)
	return ((bool) 1);
    return (dict_find(&((const iparam_list *) plist)->u.w.wanted, &kref, &ignore_value) > 0);
} static int ref_array_param_requested(const gs_param_list * plist, gs_param_name pkey, ref * pvalue, uint size, client_name_t cname)
{
    int code;
    if (!ref_param_requested(plist, pkey))
	return 0;
    code = gs_alloc_ref_array((gs_imemory.current), pvalue, (0x10 + 0x20 + 0x40), size, cname);
    return (code < 0 ? code : 1);
}

static int ref_param_write_string_value(ref * pref, const gs_param_string * pvalue)
{
    const byte *pdata = pvalue->data;
    uint n = pvalue->size;
    if (pvalue->persistent)
	((pref)->value.const_bytes = (pdata), ((pref)->tas.type_attrs = ((t_string) << 8) + ((0x20 + 0x40) | avm_foreign)), ((pref)->tas.rsize = (n)));
    else {
	byte *pstr = (*(((gs_memory_t *) (gs_imemory.current)))->procs.alloc_string) (((gs_memory_t *) (gs_imemory.current)), n, "ref_param_write_string");
	if (pstr == 0)
	    return ((-25));
	memcpy(pstr, pdata, n);
	((pref)->value.bytes = (pstr), ((pref)->tas.type_attrs = ((t_string) << 8) + ((0x20 + 0x40) | (((&gs_imemory))->current_space))), ((pref)->tas.rsize = (n)));
    }
    return 0;
}

static int ref_param_write(iparam_list * plist, gs_param_name pkey, const ref * pvalue)
{
    ref kref;
    int code;
    if (!ref_param_requested((gs_param_list *) plist, pkey))
	return 0;
    code = ref_param_key(plist, pkey, &kref);
    if (code < 0)
	return code;
    return (*plist->u.w.write) (plist, &kref, pvalue);
}

static void ref_param_write_init(iparam_list * plist, const ref * pwanted)
{
    if (pwanted == 0)
	(((&plist->u.w.wanted)->tas.type_attrs = ((t_null) << 8) + (0)));
    else
	plist->u.w.wanted = *pwanted;
    plist->results = 0;
    plist->int_keys = ((bool) 0);
}

static int stack_param_write(iparam_list * plist, const ref * pkey, const ref * pvalue)
{
    ref_stack *pstack = ((stack_param_list *) plist)->pstack;
    s_ptr p = pstack->p;
    if (pstack->top - p < 2) {
	int code = ref_stack_push(pstack, 2);
	if (code < 0)
	    return code;
	*ref_stack_index(pstack, 1) = *pkey;
	p = pstack->p;
    } else {
	pstack->p = p += 2;
	p[-1] = *pkey;
    }
    *p = *pvalue;
    ((stack_param_list *) plist)->count++;
    return 0;
}

int stack_param_list_write(stack_param_list * plist, ref_stack * pstack, const ref * pwanted)
{
    plist->procs = &ref_write_procs;
    plist->u.w.write = stack_param_write;
    ref_param_write_init((iparam_list *) plist, pwanted);
    plist->pstack = pstack;
    plist->count = 0;
    return 0;
}

static int dict_param_write(iparam_list * plist, const ref * pkey, const ref * pvalue)
{
    int code = dict_put(&((dict_param_list *) plist)->dict, pkey, pvalue);
    return (((code) < (0)) ? (code) : (0));
}

int dict_param_list_write(dict_param_list * plist, ref * pdict, const ref * pwanted)
{
    if (!(((&*(&(&*pdict)->value.pdict->values))->tas.type_attrs) & (0x10)))
	return ((-7));
    plist->procs = &ref_write_procs;
    plist->u.w.write = dict_param_write;
    ref_param_write_init((iparam_list *) plist, pwanted);
    plist->dict = *pdict;
    return 0;
}

static int ref_param_read_null(gs_param_list *, gs_param_name);
static int ref_param_read_bool(gs_param_list *, gs_param_name, bool *);
static int ref_param_read_int(gs_param_list *, gs_param_name, int *);
static int ref_param_read_long(gs_param_list *, gs_param_name, long *);
static int ref_param_read_float(gs_param_list *, gs_param_name, float *);
static int ref_param_read_string(gs_param_list *, gs_param_name, gs_param_string *);
static int ref_param_read_int_array(gs_param_list *, gs_param_name, gs_param_int_array *);
static int ref_param_read_float_array(gs_param_list *, gs_param_name, gs_param_float_array *);
static int ref_param_read_string_array(gs_param_list *, gs_param_name, gs_param_string_array *);
static int ref_param_begin_read_dict(gs_param_list *, gs_param_name, gs_param_dict *, bool);
static int ref_param_end_read_dict(gs_param_list *, gs_param_name, gs_param_dict *);
static int ref_param_read_get_policy(gs_param_list *, gs_param_name);
static int ref_param_read_signal_error(gs_param_list *, gs_param_name, int);
static int ref_param_read_commit(gs_param_list *);
static const gs_param_list_procs ref_read_procs = { ref_param_read_null, ref_param_read_bool, ref_param_read_int, ref_param_read_long, ref_param_read_float, ref_param_read_string, ref_param_read_string, ref_param_read_int_array, ref_param_read_float_array, ref_param_read_string_array, ref_param_read_string_array, ref_param_begin_read_dict, ref_param_end_read_dict, ((void *) 0), ref_param_read_get_policy, ref_param_read_signal_error, ref_param_read_commit };

static int ref_param_read(iparam_list *, gs_param_name, iparam_loc *, int);
static int ref_param_read_string_value(const iparam_loc *, gs_param_string *);
static int ref_param_read_array(iparam_list *, gs_param_name, iparam_loc *);
static int ref_param_read_null(gs_param_list * plist, gs_param_name pkey)
{
    iparam_loc loc;
    return ref_param_read(((iparam_list *) plist), pkey, &loc, t_null);
}

static int ref_param_read_bool(gs_param_list * plist, gs_param_name pkey, bool * pvalue)
{
    iparam_loc loc;
    int code = ref_param_read(((iparam_list *) plist), pkey, &loc, t_boolean);
    if (code != 0)
	return code;
    *pvalue = loc.pvalue->value.boolval;
    return 0;
}

static int ref_param_read_int(gs_param_list * plist, gs_param_name pkey, int *pvalue)
{
    iparam_loc loc;
    int code = ref_param_read(((iparam_list *) plist), pkey, &loc, t_integer);
    if (code != 0)
	return code;
    *pvalue = (int) loc.pvalue->value.intval;
    return 0;
}

static int ref_param_read_long(gs_param_list * plist, gs_param_name pkey, long *pvalue)
{
    iparam_loc loc;
    int code = ref_param_read(((iparam_list *) plist), pkey, &loc, t_integer);
    if (code != 0)
	return code;
    *pvalue = loc.pvalue->value.intval;
    return 0;
}

static int ref_param_read_float(gs_param_list * plist, gs_param_name pkey, float *pvalue)
{
    iparam_loc loc;
    int code = ref_param_read(((iparam_list *) plist), pkey, &loc, -1);
    if (code != 0)
	return code;
    switch ((((const byte *) &((loc.pvalue)->tas.type_attrs))[1])) {
    case t_integer:
	*pvalue = loc.pvalue->value.intval;
	break;
    case t_real:
	*pvalue = loc.pvalue->value.realval;
	break;
    default:
	return (*(loc).presult = (-20));
    }
    return 0;
}

static int ref_param_read_string(gs_param_list * plist, gs_param_name pkey, gs_param_string * pvalue)
{
    iparam_loc loc;
    int code = ref_param_read(((iparam_list *) plist), pkey, &loc, -1);
    if (code != 0)
	return code;
    return ref_param_read_string_value(&loc, pvalue);
}

static int ref_param_read_int_array(gs_param_list * plist, gs_param_name pkey, gs_param_int_array * pvalue)
{
    iparam_loc loc;
    int code = ref_param_read_array(((iparam_list *) plist), pkey, &loc);
    int *piv;
    uint size;
    uint i;
    if (code != 0)
	return code;
    size = ((loc.pvalue)->tas.rsize);
    piv = (int *) (*(((gs_memory_t *) (gs_imemory.current)))->procs.alloc_byte_array) (((gs_memory_t *) (gs_imemory.current)), size, sizeof(int), "ref_param_read_int_array");
    if (piv == 0)
	return ((-25));
    for (i = 0; i < size; i++) {
	const ref *pe = loc.pvalue->value.const_refs + i;
	if (!((((const byte *) &((pe)->tas.type_attrs))[1]) == (t_integer))) {
	    code = ((-20));
	    break;
	}
	piv[i] = (int) pe->value.intval;
    } if (code < 0) {
	(*(((gs_memory_t *) (gs_imemory.current)))->procs.free_object) (((gs_memory_t *) (gs_imemory.current)), piv, "ref_param_read_int_array");
	return (*loc.presult = code);
    }
    pvalue->data = piv;
    pvalue->size = size;
    pvalue->persistent = ((bool) 1);
    return 0;
}

static int ref_param_read_float_array(gs_param_list * plist, gs_param_name pkey, gs_param_float_array * pvalue)
{
    iparam_loc loc;
    int code = ref_param_read_array(((iparam_list *) plist), pkey, &loc);
    float *pfv;
    uint size;
    if (code != 0)
	return code;
    size = ((loc.pvalue)->tas.rsize);
    pfv = (float *) (*(((gs_memory_t *) (gs_imemory.current)))->procs.alloc_byte_array) (((gs_memory_t *) (gs_imemory.current)), size, sizeof(float), "ref_param_read_float_array");
    if (pfv == 0)
	return ((-25));
    code = num_params(loc.pvalue->value.const_refs + size - 1, size, pfv);
    if (code < 0) {
	(*(((gs_memory_t *) (gs_imemory.current)))->procs.free_object) (((gs_memory_t *) (gs_imemory.current)), pfv, "ref_read_float_array_param");
	return (*loc.presult = code);
    }
    pvalue->data = pfv;
    pvalue->size = size;
    pvalue->persistent = ((bool) 1);
    return 0;
}

static int ref_param_read_string_array(gs_param_list * plist, gs_param_name pkey, gs_param_string_array * pvalue)
{
    iparam_loc loc;
    int code = ref_param_read_array(((iparam_list *) plist), pkey, &loc);
    gs_param_string *psv;
    ref *prefs;
    uint size;
    uint i;
    if (code != 0)
	return code;
    prefs = loc.pvalue->value.refs;
    size = ((loc.pvalue)->tas.rsize);
    psv = (gs_param_string *) (*(((gs_memory_t *) (gs_imemory.current)))->procs.alloc_byte_array) (((gs_memory_t *) (gs_imemory.current)), size, sizeof(gs_param_string), "ref_param_read_string_array");
    if (psv == 0)
	return ((-25));
    for (i = 0; code >= 0 && i < size; i++) {
	loc.pvalue = prefs + i;
	code = ref_param_read_string_value(&loc, psv + i);
    }
    if (code < 0) {
	(*(((gs_memory_t *) (gs_imemory.current)))->procs.free_object) (((gs_memory_t *) (gs_imemory.current)), psv, "ref_param_read_string_array");
	return (*loc.presult = code);
    }
    pvalue->data = psv;
    pvalue->size = size;
    pvalue->persistent = ((bool) 1);
    return 0;
}

static int ref_param_begin_read_dict(gs_param_list * plist, gs_param_name pkey, gs_param_dict * pvalue, bool int_keys)
{
    iparam_loc loc;
    dict_param_list *dlist = (dict_param_list *) (*(((gs_memory_t *) (gs_imemory.current)))->procs.alloc_bytes) (((gs_memory_t *) (gs_imemory.current)), ((int) (sizeof(dict_param_list))), "ref_param_begin_write_dict");
    int code = ref_param_read(((iparam_list *) plist), pkey, &loc, t_dictionary);
    if (code != 0)
	return code;
    code = dict_param_list_read(dlist, loc.pvalue, ((void *) 0), ((bool) 0));
    if (code < 0)
	return (*(loc).presult = code);
    dlist->int_keys = int_keys;
    pvalue->list = (gs_param_list *) dlist;
    pvalue->size = dict_length(loc.pvalue);
    return 0;
}

static int ref_param_end_read_dict(gs_param_list * plist, gs_param_name pkey, gs_param_dict * pvalue)
{
    (*(((gs_memory_t *) (gs_imemory.current)))->procs.free_object) (((gs_memory_t *) (gs_imemory.current)), ((dict_param_list *) pvalue->list)->results, "iparam_list_release");
    (*(((gs_memory_t *) (gs_imemory.current)))->procs.free_object) (((gs_memory_t *) (gs_imemory.current)), pvalue->list, "ref_param_end_read_dict");
    return 0;
}

static int ref_param_read_get_policy(gs_param_list * plist, gs_param_name pkey)
{
    ref kname;
    int code;
    ref *pvalue;
    if (!(((((const byte *) &((&((iparam_list *) plist)->u.r.policies)->tas.type_attrs))[1]) == (t_dictionary)) && (code = name_ref((const byte *) pkey, strlen(pkey), &kname, -1)) >= 0 && dict_find(&((iparam_list *) plist)->u.r.policies, &kname, &pvalue) > 0 && ((((const byte *) &((pvalue)->tas.type_attrs))[1]) == (t_integer))))
	return 1;
    return (int) pvalue->value.intval;
} static int ref_param_read_signal_error(gs_param_list * plist, gs_param_name pkey, int code)
{
    iparam_loc loc;
    ref_param_read(((iparam_list *) plist), pkey, &loc, -1);
    *loc.presult = code;
    switch (ref_param_read_get_policy(plist, pkey)) {
    case 1:
	return 0;
    case 2:
	return ((-26));
    default:
	return code;
    }
}

static int ref_param_read_commit(gs_param_list * plist)
{
    int i;
    int ecode = 0;
    if (!((iparam_list *) plist)->u.r.require_all)
	return 0;
    for (i = 0; i < ((iparam_list *) plist)->count; ++i)
	if (((iparam_list *) plist)->results[i] == 0)
	    ((iparam_list *) plist)->results[i] = ecode = ((-21));
    return ecode;
}

static int ref_param_read_string_value(const iparam_loc * ploc, gs_param_string * pvalue)
{
    const ref *pref = ploc->pvalue;
    ref nref;
    switch ((((const byte *) &((pref)->tas.type_attrs))[1])) {
    case t_name:
	name_string_ref(pref, &nref);
	pref = &nref;
	pvalue->persistent = ((bool) 1);
	goto s;
    case t_string:
	if (!((((*ploc).pvalue)->tas.type_attrs) & (0x20)))
	    return (*(*ploc).presult = (-7));
	pvalue->persistent = ((bool) 0);
      s:pvalue->data = pref->value.const_bytes;
	pvalue->size = ((pref)->tas.rsize);
	break;
    default:
	return (*(*ploc).presult = (-20));
    }
    return 0;
}

static int ref_param_read_array(iparam_list * plist, gs_param_name pkey, iparam_loc * ploc)
{
    int code = ref_param_read(plist, pkey, ploc, t_array);
    if (code != 0)
	return code;
    if (!((((*ploc).pvalue)->tas.type_attrs) & (0x20)))
	return (*(*ploc).presult = (-7));
    return 0;
}

static int ref_param_read(iparam_list * plist, gs_param_name pkey, iparam_loc * ploc, int type)
{
    ref kref;
    int code = ref_param_key(plist, pkey, &kref);
    if (code < 0)
	return code;
    code = (*plist->u.r.read) (((iparam_list *) plist), &kref, ploc);
    if (code != 0)
	return code;
    if (type >= 0)
	if (!((((const byte *) &(((*ploc).pvalue)->tas.type_attrs))[1]) == (type)))
	    return (*(*ploc).presult = (-20));
    return 0;
}

static int ref_param_read_init(iparam_list * plist, uint count, const ref * ppolicies, bool require_all)
{
    if (ppolicies == 0)
	(((&plist->u.r.policies)->tas.type_attrs = ((t_null) << 8) + (0)));
    else
	plist->u.r.policies = *ppolicies;
    plist->u.r.require_all = require_all;
    plist->count = count;
    plist->results = (int *) (*(((gs_memory_t *) (gs_imemory.current)))->procs.alloc_byte_array) (((gs_memory_t *) (gs_imemory.current)), count, sizeof(int), "ref_param_read_init");
    if (plist->results == 0)
	return ((-25));
    memset(plist->results, 0, count * sizeof(int));
    plist->int_keys = ((bool) 0);
    return 0;
}

static int array_param_read(iparam_list * plist, const ref * pkey, iparam_loc * ploc)
{
    ref *bot = ((array_param_list *) plist)->bot;
    ref *ptr = bot;
    ref *top = ((array_param_list *) plist)->top;
    for (; ptr < top; ptr += 2) {
	if (((((const byte *) &((ptr)->tas.type_attrs))[1]) == (t_name)) && ((ptr)->value.pname == (pkey)->value.pname)) {
	    ploc->pvalue = ptr + 1;
	    ploc->presult = &plist->results[ptr - bot];
	    *ploc->presult = 1;
	    return 0;
	}
    }
    return 1;
}

int array_param_list_read(array_param_list * plist, ref * bot, uint count, const ref * ppolicies, bool require_all)
{
    if (count & 1)
	return ((-15));
    plist->procs = &ref_read_procs;
    plist->u.r.read = array_param_read;
    plist->bot = bot;
    plist->top = bot + count;
    return ref_param_read_init(((iparam_list *) plist), count, ppolicies, require_all);
}

static int stack_param_read(iparam_list * plist, const ref * pkey, iparam_loc * ploc)
{
    ref_stack *pstack = ((stack_param_list *) plist)->pstack;
    uint index = ((stack_param_list *) plist)->skip + 1;
    uint count = ((stack_param_list *) plist)->count;
    for (; count; count--, index += 2) {
	const ref *p = ref_stack_index(pstack, index);
	if (((((const byte *) &((p)->tas.type_attrs))[1]) == (t_name)) && ((p)->value.pname == (pkey)->value.pname)) {
	    ploc->pvalue = ref_stack_index(pstack, index - 1);
	    ploc->presult = &plist->results[count - 1];
	    *ploc->presult = 1;
	    return 0;
	}
    }
    return 1;
}

int stack_param_list_read(stack_param_list * plist, ref_stack * pstack, uint skip, const ref * ppolicies, bool require_all)
{
    uint count = ref_stack_counttomark(pstack);
    if (count == 0)
	return ((-24));
    count -= skip + 1;
    if (count & 1)
	return ((-15));
    plist->procs = &ref_read_procs;
    plist->u.r.read = stack_param_read;
    plist->pstack = pstack;
    plist->skip = skip;
    return ref_param_read_init(((iparam_list *) plist), count >> 1, ppolicies, require_all);
}

static int dict_param_read(iparam_list * plist, const ref * pkey, iparam_loc * ploc)
{
    int code = dict_find((&((dict_param_list *) plist)->dict), pkey, &ploc->pvalue);
    if (code != 1)
	return 1;
    ploc->presult = &plist->results[dict_value_index((&((dict_param_list *) plist)->dict), ploc->pvalue)];
    *ploc->presult = 1;
    return 0;
}

int dict_param_list_read(dict_param_list * plist, const ref * pdict, const ref * ppolicies, bool require_all)
{
    if (!(((&*(&(&*pdict)->value.pdict->values))->tas.type_attrs) & (0x20)))
	return ((-7));
    plist->procs = &ref_read_procs;
    plist->u.r.read = dict_param_read;
    plist->dict = *pdict;
    return ref_param_read_init(((iparam_list *) plist), dict_max_index(pdict) + 1, ppolicies, require_all);
}
