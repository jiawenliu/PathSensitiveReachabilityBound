static char Rcs_Id[] = "$Id: defmt.c,v 1.41 1995/08/05 23:19:47 geoff Exp $";
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
extern char *index();
extern char *rindex();
extern int tgetent();
extern int tgetnum();
extern char *tgetstr();
extern char *tgoto();
extern char *tputs();
extern int cbench_print;
static char *skiptoword(char *bufp);
char *skipoverword(char *bufp);
void checkline(FILE * ofile);
static int TeX_math_end(char **bufp);
static int TeX_math_begin(char **bufp);
static int TeX_LR_begin(char **bufp);
static int TeX_LR_check(int begin_p, char **bufp);
static void TeX_skip_args(char **bufp);
static int TeX_math_check(int cont_char, char **bufp);
static void TeX_skip_parens(char **bufp);
static void TeX_open_paren(char **bufp);
static void TeX_skip_check(char **bufp);
static int TeX_strncmp(char *a, char *b, int n);
static int TeX_comment = 0;
static int save_math_mode;
static char save_LaTeX_Mode;
static char *skiptoword(bufp)
char *bufp;
{
    while (*bufp && ((!((hashheader.stringstarts[(unsigned char) (*(bufp))]) && stringcharlen((bufp), (0)) > 0) && !(hashheader.wordchars[(((ichar_t) (*bufp)))])) || (hashheader.boundarychars[(((ichar_t) (*bufp)))]) || (tflag && (math_mode & 1)))) {
	if (tflag) {
	    if (*bufp == hashheader.texchars[12]) {
		if (!TeX_comment) {
		    save_math_mode = math_mode;
		    save_LaTeX_Mode = LaTeX_Mode;
		    math_mode = 0;
		    LaTeX_Mode = 'P';
		    TeX_comment = 1;
		}
	    } else if (math_mode & 1) {
		if ((LaTeX_Mode == 'e' && TeX_math_check('e', &bufp)) || (LaTeX_Mode == 'm' && TeX_LR_check(1, &bufp)))
		    math_mode--;
		else {
		    while (*bufp && !(((*bufp) == hashheader.texchars[8]) || ((*bufp) == hashheader.texchars[9]) || ((*bufp) == hashheader.texchars[12])))
			bufp++;
		    if (*bufp == 0)
			break;
		    if (TeX_math_end(&bufp))
			math_mode--;
		}
		if (math_mode < 0) {
		    if (cbench_print)
			fprintf(stderr, "****ERROR in parsing TeX math mode!\r\n");
		    math_mode = 0;
		}
	    } else {
		if (math_mode > 1 && *bufp == hashheader.texchars[5] && (math_mode < (math_mode & 127) * 128))
		    math_mode--;
		else if (LaTeX_Mode == 'm' || (math_mode && (math_mode >= (math_mode & 127) * 128) && (TeX_strncmp(bufp, "\\end", 4) == 0))) {
		    if (TeX_LR_check(0, &bufp))
			math_mode--;
		} else if (LaTeX_Mode == 'b' && TeX_math_check('b', &bufp)) {
		    math_mode++;
		} else if (LaTeX_Mode == 'r') {
		    TeX_skip_parens(&bufp);
		    LaTeX_Mode = 'P';
		} else if (TeX_math_begin(&bufp))
		    math_mode++;
	    }
	    if (*bufp == 0)
		break;
	} else {
	    if (*bufp == hashheader.nrchars[3]) {
		switch (bufp[1]) {
		case 'f':
		    if (bufp[2] == hashheader.nrchars[0]) {
			bufp += 5;
		    } else {
			bufp += 3;
		    }
		    continue;
		case 's':
		    bufp += 2;
		    if (*bufp == '+' || *bufp == '-')
			bufp++;
		    bufp++;
		    if (((*__ctype_b_loc())[(int) ((*bufp))] & (unsigned short int) _ISdigit))
			bufp++;
		    continue;
		default:
		    if (bufp[1] == hashheader.nrchars[0]) {
			bufp += 4;
			continue;
		    } else if (bufp[1] == hashheader.nrchars[4]) {
			if (bufp[2] == hashheader.nrchars[0])
			    bufp += 5;
			else
			    bufp += 3;
			continue;
		    }
		    break;
		}
	    }
	}
	if (*bufp == '0' && (bufp[1] == 'x' || bufp[1] == 'X') && (terse || !aflag)) {
	    bufp += 2;
	    while (((*__ctype_b_loc())[(int) ((*bufp))] & (unsigned short int) _ISxdigit))
		bufp++;
	} else
	    bufp++;
    }
    if (*bufp == '\0') {
	if (TeX_comment) {
	    math_mode = save_math_mode;
	    LaTeX_Mode = save_LaTeX_Mode;
	    TeX_comment = 0;
	}
    }
    return bufp;
}

char *skipoverword(bufp)
register char *bufp;
{
    register char *lastboundary;
    register int scharlen;
    lastboundary = ((void *) 0);
    for (;;) {
	if (*bufp == '\0') {
	    if (TeX_comment) {
		math_mode = save_math_mode;
		LaTeX_Mode = save_LaTeX_Mode;
		TeX_comment = 0;
	    }
	    break;
	} else if (((hashheader.stringstarts[(unsigned char) (*(bufp))]) && (scharlen = stringcharlen((bufp), (0))) > 0)) {
	    bufp += scharlen;
	    lastboundary = ((void *) 0);
	} else if ((hashheader.wordchars[(((ichar_t) (*bufp)))])) {
	    bufp++;
	    lastboundary = ((void *) 0);
	} else if ((hashheader.boundarychars[(((ichar_t) (*bufp)))])) {
	    if (lastboundary == ((void *) 0))
		lastboundary = bufp;
	    else if (lastboundary == bufp - 1)
		break;
	    bufp++;
	} else
	    break;
    }
    return (lastboundary != ((void *) 0)) ? lastboundary : bufp;
} void checkline(ofile)

FILE *ofile;
{
    register char *p;
    register char *endp;
    int hadlf;
    register int len;
    register int i;
    int ilen;
    currentchar = contextbufs[0];
    len = strlen(contextbufs[0]) - 1;
    hadlf = contextbufs[0][len] == '\n';
    if (hadlf)
	contextbufs[0][len] = 0;
    if (!tflag) {
	if (*currentchar == hashheader.nrchars[2] && (strncmp(currentchar + 1, "if t", 4) == 0 || strncmp(currentchar + 1, "if n", 4) == 0)) {
	    copyout(&currentchar, 5);
	    while (*currentchar && (((((ichar_t) (*currentchar))) > 0) && ((((ichar_t) (*currentchar))) < 0x80) && ((*__ctype_b_loc())[(int) (((unsigned char) (((ichar_t) (*currentchar)))))] & (unsigned short int) _ISspace)))
		copyout(&currentchar, 1);
	}
	if (*currentchar == hashheader.nrchars[2] && (strncmp(currentchar + 1, "ds ", 3) == 0 || strncmp(currentchar + 1, "de ", 3) == 0 || strncmp(currentchar + 1, "nr ", 3) == 0)) {
	    copyout(&currentchar, 4);
	    while (*currentchar && (((((ichar_t) (*currentchar))) > 0) && ((((ichar_t) (*currentchar))) < 0x80) && ((*__ctype_b_loc())[(int) (((unsigned char) (((ichar_t) (*currentchar)))))] & (unsigned short int) _ISspace)))
		copyout(&currentchar, 1);
	    while (*currentchar && !(((((ichar_t) (*currentchar))) > 0) && ((((ichar_t) (*currentchar))) < 0x80) && ((*__ctype_b_loc())[(int) (((unsigned char) (((ichar_t) (*currentchar)))))] & (unsigned short int) _ISspace)))
		copyout(&currentchar, 1);
	    if (*currentchar == 0) {
		if (!lflag && (aflag || hadlf))
		    (void) _IO_putc('\n', ofile);
		return;
	    }
	}
    }
    if (!tflag && *currentchar == hashheader.nrchars[2]) {
	while (*currentchar && !(((((ichar_t) (*currentchar))) > 0) && ((((ichar_t) (*currentchar))) < 0x80) && ((*__ctype_b_loc())[(int) (((unsigned char) (((ichar_t) (*currentchar)))))] & (unsigned short int) _ISspace))) {
	    if (!aflag && !lflag)
		(void) _IO_putc(*currentchar, ofile);
	    currentchar++;
	} if (*currentchar == 0) {
	    if (!lflag && (aflag || hadlf))
		(void) _IO_putc('\n', ofile);
	    return;
	}
    }
    for (;;) {
	p = skiptoword(currentchar);
	if (p != currentchar)
	    copyout(&currentchar, p - currentchar);
	if (*currentchar == 0)
	    break;
	p = ctoken;
	endp = skipoverword(currentchar);
	while (currentchar < endp && p < ctoken + sizeof ctoken - 1)
	    *p++ = *currentchar++;
	*p = 0;
	if (strtoichar(itoken, ctoken, 100 * sizeof(ichar_t), 0))
	    if (cbench_print)
		fprintf(stderr, "\r\nWord '%s' too long at line %d of %s, truncated\r\n", ctoken, 463, "defmt.c");
	ilen = strlen((char *) (itoken));
	if (lflag) {
	    if (ilen > minword && !good(itoken, 0, 0, 0, 0) && !cflag && !compoundgood(itoken, 0))
		(void) fprintf(ofile, "%s\n", ctoken);
	} else {
	    if (aflag) {
		if (ilen <= minword) {
		    if (!terse)
			(void) fprintf(ofile, "*\n");
		    continue;
		}
		if (good(itoken, 0, 0, 0, 0)) {
		    if (hits[0].prefix == ((void *) 0) && hits[0].suffix == ((void *) 0)) {
			if (!terse)
			    (void) fprintf(ofile, "*\n");
		    } else if (!terse) {
			(void) fprintf(ofile, "+ %s\n", hits[0].dictent->word);
		    }
		} else if (compoundgood(itoken, 0)) {
		    if (!terse)
			(void) fprintf(ofile, "-\n");
		} else {
		    makepossibilities(itoken);
		    if (pcount) {
			(void) fprintf(ofile, "%c %s %d %d", easypossibilities ? '&' : '?', ctoken, easypossibilities, (int) ((currentchar - contextbufs[0]) - strlen(ctoken)) + contextoffset);
			for (i = 0; i < 100; i++) {
			    if (possibilities[i][0] == 0)
				break;
			    (void) fprintf(ofile, "%c %s", i ? ',' : ':', possibilities[i]);
			} (void) fprintf(ofile, "\n");
		    } else {
			(void) fprintf(ofile, "# %s %d\n", ctoken, (int) ((currentchar - contextbufs[0]) - strlen(ctoken)) + contextoffset);
	    }}} else {
		if (!quit)
		    correct(ctoken, sizeof ctoken, itoken, sizeof itoken, &currentchar);
	    }
	}
	if (!aflag && !lflag)
	    (void) fprintf(ofile, "%s", ctoken);
    } if (!lflag && (aflag || hadlf))
	(void) _IO_putc('\n', ofile);
} static int TeX_math_end(bufp)

char **bufp;
{
    if (**bufp == hashheader.texchars[9]) {
	if ((*bufp)[1] == hashheader.texchars[9])
	    (*bufp)++;
	return 1;
    } else if (**bufp == hashheader.texchars[12]) {
	if (!TeX_comment) {
	    save_math_mode = math_mode;
	    save_LaTeX_Mode = LaTeX_Mode;
	    math_mode = 0;
	    LaTeX_Mode = 'P';
	    TeX_comment = 1;
	}
	return 0;
    }
    (*bufp)++;
    if (**bufp == hashheader.texchars[1] || **bufp == hashheader.texchars[3])
	return 1;
    if (TeX_LR_begin(bufp))
	return 1;
    if (TeX_strncmp(*bufp, "end", 3) == 0)
	return TeX_math_check('e', bufp);
    else
	return 0;
}

static int TeX_math_begin(bufp)
char **bufp;
{
    if (**bufp == hashheader.texchars[9]) {
	if ((*bufp)[1] == hashheader.texchars[9])
	    (*bufp)++;
	return 1;
    }
    while (**bufp == hashheader.texchars[8]) {
	(*bufp)++;
	if (**bufp == hashheader.texchars[0] || **bufp == hashheader.texchars[2])
	    return 1;
	else if (!((*__ctype_b_loc())[(int) ((**bufp))] & (unsigned short int) _ISalpha) && **bufp != '@') {
	    (*bufp)++;
	    continue;
	} else if (TeX_strncmp(*bufp, "begin", 5) == 0) {
	    if (TeX_math_check('b', bufp))
		return 1;
	    else
		(*bufp)--;
	} else {
	    TeX_skip_check(bufp);
	    return 0;
	}
    }
    if ((**bufp == hashheader.texchars[2] || **bufp == hashheader.texchars[6]) && (*bufp)[1] == hashheader.texchars[11]) {
	(*bufp)++;
	while (**bufp) {
	    if (*(*bufp)++ == hashheader.texchars[11] && (**bufp == hashheader.texchars[3] || **bufp == hashheader.texchars[7]))
		return TeX_math_begin(bufp);
	}
	return 0;
    } else
	return 0;
}

static int TeX_LR_begin(bufp)
char **bufp;
{
    if ((TeX_strncmp(*bufp, "mbox", 4) == 0) || (TeX_strncmp(*bufp, "makebox", 7) == 0) || (TeX_strncmp(*bufp, "fbox", 4) == 0) || (TeX_strncmp(*bufp, "framebox", 8) == 0))
	math_mode += 2;
    else if ((TeX_strncmp(*bufp, "parbox", 6) == 0) || (TeX_strncmp(*bufp, "raisebox", 8) == 0)) {
	math_mode += 2;
	TeX_open_paren(bufp);
	if (**bufp)
	    (*bufp)++;
	else
	    LaTeX_Mode = 'r';
    } else if (TeX_strncmp(*bufp, "begin", 5) == 0)
	return TeX_LR_check(1, bufp);
    else
	return 0;
    TeX_open_paren(bufp);
    return 1;
}

static int TeX_LR_check(begin_p, bufp)
int begin_p;
char **bufp;
{
    TeX_open_paren(bufp);
    if (**bufp == 0) {
	LaTeX_Mode = 'm';
	return 0;
    } else
	LaTeX_Mode = 'P';
    if (strncmp(++(*bufp), "minipage", 8) == 0) {
	TeX_skip_parens(bufp);
	if (**bufp)
	    (*bufp)++;
	if (begin_p) {
	    TeX_skip_parens(bufp);
	    math_mode += 2;
	    math_mode += ((math_mode & 127) - 1) * 128;
	} else {
	    math_mode -= (math_mode & 127) * 128;
	    if (math_mode < 0) {
		if (cbench_print)
		    fprintf(stderr, "***ERROR in LR to math-mode switch.\n");
		math_mode = 1;
	    }
	}
	return 1;
    }
    (*bufp)--;
    return 0;
}

static void TeX_skip_args(bufp)
char **bufp;
{
    register int skip_cnt = 0;
    if (strncmp(*bufp, "tabular", 7) == 0 || strncmp(*bufp, "minipage", 8) == 0)
	skip_cnt++;
    if (strncmp(*bufp, "tabular*", 8) == 0)
	skip_cnt++;
    TeX_skip_parens(bufp);
    if (**bufp)
	(*bufp)++;
    else
	return;
    if (skip_cnt--)
	TeX_skip_parens(bufp);
    else
	return;
    if (**bufp)
	(*bufp)++;
    else
	return;
    if (skip_cnt)
	TeX_skip_parens(bufp);
}

static int TeX_math_check(cont_char, bufp)
int cont_char;
char **bufp;
{
    TeX_open_paren(bufp);
    if (**bufp == 0) {
	LaTeX_Mode = (char) cont_char;
	return 0;
    } else
	LaTeX_Mode = 'P';
    if (strncmp(++(*bufp), "equation", 8) == 0 || strncmp(*bufp, "eqnarray", 8) == 0 || strncmp(*bufp, "displaymath", 11) == 0 || strncmp(*bufp, "picture", 7) == 0 || strncmp(*bufp, "math", 4) == 0) {
	(*bufp)--;
	TeX_skip_parens(bufp);
	return 1;
    }
    if (cont_char == 'b')
	TeX_skip_args(bufp);
    else
	TeX_skip_parens(bufp);
    return 0;
}

static void TeX_skip_parens(bufp)
char **bufp;
{
    while (**bufp && **bufp != hashheader.texchars[5] && **bufp != hashheader.texchars[9])
	(*bufp)++;
}

static void TeX_open_paren(bufp)
char **bufp;
{
    while (**bufp && **bufp != hashheader.texchars[4] && **bufp != hashheader.texchars[9])
	(*bufp)++;
}

static void TeX_skip_check(bufp)
char **bufp;
{
    int skip_ch;
    if (TeX_strncmp(*bufp, "end", 3) == 0 || TeX_strncmp(*bufp, "vspace", 6) == 0 || TeX_strncmp(*bufp, "hspace", 6) == 0 || TeX_strncmp(*bufp, "cite", 4) == 0 || TeX_strncmp(*bufp, "ref", 3) == 0 || TeX_strncmp(*bufp, "parbox", 6) == 0 || TeX_strncmp(*bufp, "label", 5) == 0 || TeX_strncmp(*bufp, "input", 5) == 0 || TeX_strncmp(*bufp, "nocite", 6) == 0 || TeX_strncmp(*bufp, "include", 7) == 0 || TeX_strncmp(*bufp, "includeonly", 11) == 0 || TeX_strncmp(*bufp, "documentstyle", 13) == 0 || TeX_strncmp(*bufp, "documentclass", 13) == 0 || TeX_strncmp(*bufp, "usepackage", 10) == 0 || TeX_strncmp(*bufp, "pagestyle", 9) == 0 || TeX_strncmp(*bufp, "pagenumbering", 13) == 0 || TeX_strncmp(*bufp, "bibliography", 12) == 0 || TeX_strncmp(*bufp, "bibitem", 7) == 0 || TeX_strncmp(*bufp, "hyphenation", 11) == 0 || TeX_strncmp(*bufp, "pageref", 7) == 0) {
	TeX_skip_parens(bufp);
	if (**bufp == 0)
	    LaTeX_Mode = 'r';
    } else if (TeX_strncmp(*bufp, "rule", 4) == 0 || TeX_strncmp(*bufp, "setcounter", 10) == 0 || TeX_strncmp(*bufp, "addtocounter", 12) == 0 || TeX_strncmp(*bufp, "setlength", 9) == 0 || TeX_strncmp(*bufp, "addtolength", 11) == 0 || TeX_strncmp(*bufp, "settowidth", 10) == 0) {
	TeX_skip_parens(bufp);
	if (**bufp == 0)
	    LaTeX_Mode = 'r';
	else {
	    (*bufp)++;
	    TeX_skip_parens(bufp);
	    if (**bufp == 0)
		LaTeX_Mode = 'r';
	}
    } else if (TeX_strncmp(*bufp, "verb", 4) == 0) {
	skip_ch = (*bufp)[4];
	*bufp += 5;
	while (**bufp != skip_ch && **bufp != '\0')
	    (*bufp)++;
    } else {
	while (((*__ctype_b_loc())[(int) ((**bufp))] & (unsigned short int) _ISalpha) || **bufp == '@')
	    (*bufp)++;
	(*bufp)--;
}} static int TeX_strncmp(a, b, n)

char *a;
char *b;
int n;
{
    int cmpresult;
    cmpresult = strncmp(a, b, n);
    if (cmpresult == 0) {
	if ((((a[n]) & ~0x7f) == 0) && ((*__ctype_b_loc())[(int) ((a[n]))] & (unsigned short int) _ISalpha))
	    return 1;
    }
    return cmpresult;
}
