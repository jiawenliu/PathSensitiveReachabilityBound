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
extern char gs_debug[128];
extern FILE *gs_debug_out;
extern void eprintf_program_name(FILE *, const char *);
extern void lprintf_file_and_line(FILE *, const char *, int);
void debug_dump_bytes(const byte * from, const byte * to, const char *msg);
void debug_dump_bitmap(const byte * from, uint raster, uint height, const char *msg);
void debug_print_string(const byte * str, uint len);
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
extern const bits16 mono_copy_masks[17];
extern const bits32 mono_fill_masks[33];
void bits_fill_rectangle(byte * dest, int dest_bit, uint raster, uint pattern, int width_bits, int height);
void bits_replicate_horizontally(byte * data, uint width, uint height, uint raster, uint replicated_width, uint replicated_raster);
void bits_replicate_vertically(byte * data, uint height, uint raster, uint replicated_height);
void bits_bounding_box(const byte * data, uint height, uint raster, gs_int_rect * pbox);
void bits_compress_scaled(const byte * src, int srcx, uint width, uint height, uint sraster, byte * dest, uint draster, const gs_log2_scale_point * plog2_scale, int log2_out_bits);
void bytes_fill_rectangle(byte * dest, uint raster, byte value, int width_bytes, int height);
void bytes_copy_rectangle(byte * dest, uint dest_raster, const byte * src, uint src_raster, int width_bytes, int height);
const bits16 mono_copy_masks[17] = { 0xffff, 0xff7f, 0xff3f, 0xff1f, 0xff0f, 0xff07, 0xff03, 0xff01, 0xff00, 0x7f00, 0x3f00, 0x1f00, 0x0f00, 0x0700, 0x0300, 0x0100, 0x0000 };
const bits32 mono_fill_masks[33] = { 0xffffffff, 0xffffff7f, 0xffffff3f, 0xffffff1f, 0xffffff0f, 0xffffff07, 0xffffff03, 0xffffff01, 0xffffff00, 0xffff7f00, 0xffff3f00, 0xffff1f00, 0xffff0f00, 0xffff0700, 0xffff0300, 0xffff0100, 0xffff0000, 0xff7f0000, 0xff3f0000, 0xff1f0000, 0xff0f0000, 0xff070000, 0xff030000, 0xff010000, 0xff000000, 0x7f000000, 0x3f000000, 0x1f000000, 0x0f000000, 0x07000000, 0x03000000, 0x01000000, 0x00000000 };

void bits_fill_rectangle(byte * dest, int dest_bit, uint draster, uint pattern, int width_bits, int height)
{
    uint bit;
    uint right_mask;
    dest += (dest_bit >> 3) & -(sizeof(uint) == 1 ? 1 : sizeof(uint) == sizeof(short) ? 2 : sizeof(uint) == sizeof(int) ? 4 : 4);
    bit = dest_bit & ((sizeof(uint) == 1 ? 1 : sizeof(uint) == sizeof(short) ? 2 : sizeof(uint) == sizeof(int) ? 4 : 4) * 8 - 1); {
	int last_bit = width_bits + bit - ((((int) (sizeof(uint))) * 8) + 1);
	if (last_bit < 0) {
	    right_mask = ~mono_fill_masks[(width_bits) + (bit)] & mono_fill_masks[bit];
	    switch ((byte) pattern) {
	    case 0:{
		    int line_count = height;
		    uint *ptr = (uint *) dest;
		    do {
			*ptr &= ~right_mask;
			ptr = (void *) ((byte *) ptr + (draster));
		    } while (--line_count);
		};
		break;
	    case 0xff:{
		    int line_count = height;
		    uint *ptr = (uint *) dest;
		    do {
			*ptr |= right_mask;
			ptr = (void *) ((byte *) ptr + (draster));
		    } while (--line_count);
		};
		break;
	    default:{
		    int line_count = height;
		    uint *ptr = (uint *) dest;
		    do {
			*ptr = (*ptr & ~right_mask) | (pattern & right_mask);
			ptr = (void *) ((byte *) ptr + (draster));
		    } while (--line_count);
		};
	    };
	} else {
	    uint mask;
	    int last = last_bit >> ((((int) (sizeof(uint))) == 8 ? 3 : ((int) (sizeof(uint))) >> 1) + 3);
	    mask = mono_fill_masks[bit];
	    right_mask = ~mono_fill_masks[(last_bit & ((((int) (sizeof(uint))) * 8) - 1)) + 1];
	    switch (last) {
	    case 0:{
		    switch ((byte) pattern) {
		    case 0:{
			    int line_count = height;
			    uint *ptr = (uint *) dest;
			    do {
				(*ptr &= ~mask, 0, ptr[1] &= ~right_mask);
				ptr = (void *) ((byte *) ptr + (draster));
			    } while (--line_count);
			};
			break;
		    case 0xff:{
			    int line_count = height;
			    uint *ptr = (uint *) dest;
			    do {
				(*ptr |= mask, 0, ptr[1] |= right_mask);
				ptr = (void *) ((byte *) ptr + (draster));
			    } while (--line_count);
			};
			break;
		    default:{
			    int line_count = height;
			    uint *ptr = (uint *) dest;
			    do {
				(*ptr = (*ptr & ~mask) | (pattern & mask), 0, ptr[1] = (ptr[1] & ~right_mask) | (pattern & right_mask));
				ptr = (void *) ((byte *) ptr + (draster));
			    } while (--line_count);
			};
		    };
		}
		break;
	    case 1:{
		    switch ((byte) pattern) {
		    case 0:{
			    int line_count = height;
			    uint *ptr = (uint *) dest;
			    do {
				(*ptr &= ~mask, ptr[1] = 0, ptr[2] &= ~right_mask);
				ptr = (void *) ((byte *) ptr + (draster));
			    } while (--line_count);
			};
			break;
		    case 0xff:{
			    int line_count = height;
			    uint *ptr = (uint *) dest;
			    do {
				(*ptr |= mask, ptr[1] = ~(uint) 0, ptr[2] |= right_mask);
				ptr = (void *) ((byte *) ptr + (draster));
			    } while (--line_count);
			};
			break;
		    default:{
			    int line_count = height;
			    uint *ptr = (uint *) dest;
			    do {
				(*ptr = (*ptr & ~mask) | (pattern & mask), ptr[1] = pattern, ptr[2] = (ptr[2] & ~right_mask) | (pattern & right_mask));
				ptr = (void *) ((byte *) ptr + (draster));
			    } while (--line_count);
			};
		    };
		}
		break;
	    default:{
		    uint byte_count = (last_bit >> 3) & -((int) (sizeof(uint)));
		    switch ((byte) pattern) {
		    case 0:{
			    int line_count = height;
			    uint *ptr = (uint *) dest;
			    do {
				(*ptr &= ~mask, memset(ptr + 1, 0, byte_count), ptr[last + 1] &= ~right_mask);
				ptr = (void *) ((byte *) ptr + (draster));
			    } while (--line_count);
			};
			break;
		    case 0xff:{
			    int line_count = height;
			    uint *ptr = (uint *) dest;
			    do {
				(*ptr |= mask, memset(ptr + 1, 0xff, byte_count), ptr[last + 1] |= right_mask);
				ptr = (void *) ((byte *) ptr + (draster));
			    } while (--line_count);
			};
			break;
		    default:{
			    int line_count = height;
			    uint *ptr = (uint *) dest;
			    do {
				(*ptr = (*ptr & ~mask) | (pattern & mask), memset(ptr + 1, (byte) pattern, byte_count), ptr[last + 1] = (ptr[last + 1] & ~right_mask) | (pattern & right_mask));
				ptr = (void *) ((byte *) ptr + (draster));
			    } while (--line_count);
			};
		    };
		}
		break;
	    }
	}
    }
}

void bits_replicate_horizontally(byte * data, uint width, uint height, uint raster, uint replicated_width, uint replicated_raster)
{
    uint y;
    for (y = height; y-- > 0;) {
	const byte *orig_row = data + y * raster;
	byte *tile_row = data + y * replicated_raster;
	uint sx;
	if (!(width & 7)) {
	    uint wbytes = width >> 3;
	    for (sx = wbytes; sx-- > 0;) {
		byte sb = orig_row[sx];
		uint dx;
		for (dx = sx + (replicated_width >> 3); dx >= wbytes;)
		    tile_row[dx -= wbytes] = sb;
	    }
	} else
	    for (sx = width; sx-- > 0;) {
		byte sm = orig_row[sx >> 3] & (0x80 >> (sx & 7));
		uint dx;
		for (dx = sx + replicated_width; dx >= width;) {
		    byte *dp = (dx -= width, tile_row + (dx >> 3));
		    byte dm = 0x80 >> (dx & 7);
		    if (sm)
			*dp |= dm;
		    else
			*dp &= ~dm;
		}
	    }
    }
}

void bits_replicate_vertically(byte * data, uint height, uint raster, uint replicated_height)
{
    byte *dest = data;
    uint h = replicated_height;
    uint size = raster * height;
    while (h > height) {
	memcpy(dest + size, dest, size);
	dest += size;
	h -= height;
    }
}

void bits_bounding_box(const byte * data, uint height, uint raster, gs_int_rect * pbox)
{
    register const ulong *lp;
    static const byte first_1[16] = { 4, 3, 2, 2, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 };
    static const byte last_1[16] = { 0, 4, 3, 4, 2, 4, 3, 4, 1, 4, 3, 4, 2, 4, 3, 4 };
    lp = (const ulong *) (data + raster * height);
    while ((const byte *) lp > data && !lp[-1])
	--lp;
    if ((const byte *) lp == data) {
	pbox->p.x = pbox->q.x = pbox->p.y = pbox->q.y = 0;
	return;
    }
    pbox->q.y = height = ((const byte *) lp - data + raster - 1) / raster;
    lp = (const ulong *) data;
    while (!*lp)
	++lp; {
	uint n = ((const byte *) lp - data) / raster;
	pbox->p.y = n;
	if (n)
	    height -= n, data += n * raster;
	}
	{
	    uint raster_longs = raster >> 2;
	    uint left = raster_longs - 1, right = 0;
	    ulong llong = 0, rlong = 0;
	    const byte *q;
	    uint h, n;
	    for (q = data, h = height; h-- > 0; q += raster) {
		for (lp = (const ulong *) q, n = 0; n < left && !*lp; lp++, n++);
		if (n < left)
		    left = n, llong = *lp;
		else
		    llong |= *lp;
		for (lp = (const ulong *) (q + raster - sizeof(long)), n = raster_longs - 1; n > right && !*lp; lp--, n--);
		if (n > right)
		    right = n, rlong = *lp;
		else
		    rlong |= *lp;
	    }
	    left <<= 2 + 3;
	    if (llong & ~(-1L << (((1 << 2) * 8) - (16))))
		((llong) <<= (16));
	    else
		left += 16;
	    if (llong & ~(-1L << (((1 << 2) * 8) - (8))))
		((llong) <<= (8));
	    else
		left += 8;
	    (llong) >>= (((1 << 2) * 8) - (8));
	    if (llong & 0xf0)
		left += first_1[(byte) llong >> 4];
	    else
		left += first_1[(byte) llong] + 4;
	    right <<= 2 + 3;
	    if (!(rlong & (-1L << (((1 << 2) * 8) - (16)))))
		((rlong) <<= (16));
	    else
		right += 16;
	    if (!(rlong & (-1L << (((1 << 2) * 8) - (8)))))
		((rlong) <<= (8));
	    else
		right += 8;
	    (rlong) >>= (((1 << 2) * 8) - (8));
	    if (!(rlong & 0xf))
		right += last_1[(byte) rlong >> 4];
	    else
		right += last_1[(uint) rlong & 0xf] + 4;
	    pbox->p.x = left;
	    pbox->q.x = right;
	}
}
static const byte half_byte_1s[16] = { 0, 1, 1, 2, 1, 2, 2, 3, 1, 2, 2, 3, 2, 3, 3, 4 };
static const byte bits5_trailing_1s[32] = { 0, 0, 0, 1, 0, 0, 0, 2, 0, 0, 0, 1, 0, 0, 0, 3, 0, 0, 0, 1, 0, 0, 0, 2, 0, 0, 0, 1, 0, 0, 0, 4 };
static const byte bits5_leading_1s[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 3, 4 };
static const byte compress_1_1[3] = { 0, 1, 1 };
static const byte compress_2_1[5] = { 0, 0, 1, 1, 1 };
static const byte compress_2_2[5] = { 0, 1, 2, 2, 3 };
static const byte compress_3_1[9] = { 0, 0, 0, 0, 1, 1, 1, 1, 1 };
static const byte compress_3_2[9] = { 0, 0, 1, 1, 2, 2, 2, 3, 3 };
static const byte compress_4_1[17] = { 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
static const byte compress_4_2[17] = { 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 3 };
static const byte compress_4_4[17] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 8, 9, 10, 11, 12, 13, 14, 15 };
static const byte *compress_tables[4][4] = { {compress_1_1, compress_2_1, compress_3_1, compress_4_1}, {0, compress_2_2, compress_3_2, compress_4_2}, {0, 0, 0, compress_4_4} };

void bits_compress_scaled(const byte * src, int srcx, uint width, uint height, uint sraster, byte * dest, uint draster, const gs_log2_scale_point * plog2_scale, int log2_out_bits)
{
    int log2_x = plog2_scale->x, log2_y = plog2_scale->y;
    int xscale = 1 << log2_x;
    int yscale = 1 << log2_y;
    int out_bits = 1 << log2_out_bits;
    int input_byte_out_bits;
    byte input_byte_out_mask;
    const byte *table = compress_tables[log2_out_bits][log2_x + log2_y - 1];
    uint sskip = sraster << log2_y;
    uint dwidth = (width >> log2_x) << log2_out_bits;
    uint dskip = draster - ((dwidth + 7) >> 3);
    uint mask = (1 << xscale) - 1;
    uint count_max = 1 << (log2_x + log2_y);
    const byte *srow = src + (srcx >> 3);
    int in_shift_initial = 8 - xscale - (srcx & 7);
    int in_shift_check = (out_bits <= xscale ? 8 - xscale : -1);
    byte *d = dest;
    uint h;
    if (out_bits <= xscale)
	input_byte_out_bits = out_bits << (3 - log2_x), input_byte_out_mask = (1 << input_byte_out_bits) - 1;
    for (h = height; h; srow += sskip, h -= yscale) {
	const byte *s = srow;
	int out_shift = (8 - out_bits);
	byte out = 0;
	int in_shift = in_shift_initial;
	int dw = 8 - (srcx & 7);
	int w;
	for (w = width; w > 0; w -= dw, dw = 8) {
	    int index;
	    int in_shift_final = (w >= dw ? 0 : dw - w);
	    if (in_shift == in_shift_check && in_shift_final == 0)
		switch (*s) {
		case 0:
		    for (index = sraster; index != sskip; index += sraster)
			if (s[index] != 0)
			    goto p;
		    if (((out_shift -= (input_byte_out_bits)) < 0))
			*d++ = out, out_shift &= 7, out = 0;
		    s++;
		    continue;
		case 0xff:
		    for (index = sraster; index != sskip; index += sraster)
			if (s[index] != 0xff)
			    goto p; {
			int shift = (out_shift -= input_byte_out_bits) + out_bits;
			if (shift > 0)
			    out |= input_byte_out_mask << shift;
			else {
			    out |= input_byte_out_mask >> -shift;
			    *d++ = out;
			    out_shift += 8;
			    out = input_byte_out_mask << (8 + shift);
			}
			    }
			    s++;
			    continue;
		default:   ;
		}
	  p:do {
		uint count;
		for (index = 0, count = 0; index != sskip; index += sraster)
		    count += half_byte_1s[(s[index] >> in_shift) & mask];
		if (count != 0 && table[count] == 0) {
		    uint orig_count = count;
		    uint shifted_mask = mask << in_shift;
		    byte in;
		    do {
		    } while (0);
		    if (yscale > 1) {
			if (h < height && (in = s[0] & shifted_mask) != 0) {
			    uint lower;
			    for (index = 0, lower = 0; -(index -= sraster) <= sskip && (in &= s[index]) != 0;)
				lower += half_byte_1s[in >> in_shift];
			    do {
			    } while (0);
			    if (lower <= orig_count)
				count += lower;
			}
			if (h > yscale && (in = s[sskip - sraster] & shifted_mask) != 0) {
			    uint upper;
			    for (index = sskip, upper = 0; index < sskip << 1 && (in &= s[index]) != 0; index += sraster)
				upper += half_byte_1s[in >> in_shift];
			    do {
			    } while (0);
			    if (upper < orig_count)
				count += upper;
			}
		    }
		    if (xscale > 1) {
			uint mask1 = (mask << 1) + 1;
			if (w < width) {
			    int lshift = in_shift + xscale - 1;
			    uint left;
			    for (index = 0, left = 0; index < sskip; index += sraster) {
				uint bits = ((s[index - 1] << 8) + s[index]) >> lshift;
				left += bits5_trailing_1s[bits & mask1];
			    }
			    do {
			    } while (0);
			    if (left < orig_count)
				count += left;
			}
			if (w > xscale) {
			    int rshift = in_shift - xscale + 8;
			    uint right;
			    for (index = 0, right = 0; index < sskip; index += sraster) {
				uint bits = ((s[index] << 8) + s[index + 1]) >> rshift;
				right += bits5_leading_1s[(bits & mask1) << (4 - xscale)];
			    }
			    do {
			    } while (0);
			    if (right <= orig_count)
				count += right;
			}
		    }
		    if (count > count_max)
			count = count_max;
		}
		out += table[count] << out_shift;
		if (((out_shift -= (out_bits)) < 0))
		    *d++ = out, out_shift &= 7, out = 0;
	    } while ((in_shift -= xscale) >= in_shift_final);
	    s++, in_shift += 8;
	}
	if (out_shift != (8 - out_bits))
	    *d++ = out;
	for (w = dskip; w != 0; w--)
	    *d++ = 0;
    }
}

void bytes_fill_rectangle(byte * dest, uint raster, byte value, int width_bytes, int height)
{
    while (height-- > 0) {
	memset(dest, value, width_bytes);
	dest += raster;
    }
}

void bytes_copy_rectangle(byte * dest, uint dest_raster, const byte * src, uint src_raster, int width_bytes, int height)
{
    while (height-- > 0) {
	memcpy(dest, src, width_bytes);
	src += src_raster;
	dest += dest_raster;
    }
}
