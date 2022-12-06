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
typedef __typeof__(((int *) 0) - ((int *) 0)) ptrdiff_t;
typedef __typeof__(sizeof(int)) size_t;
typedef int wchar_t;
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
word16 fetch_word16(byte * buf);
byte *put_word16(word16 w, byte * buf);
word32 fetch_word32(byte * buf);
byte *put_word32(word32 w, byte * buf);
int string_length(char *s);
int str2reg(unitptr reg, string digitstr);
int display_in_base(string s, unitptr n, short radix);
void mp_display(string s, unitptr r);
word16 checksum(register byteptr buf, register word16 count);
void cbc_xor(register unitptr dst, register unitptr src, word16 bytecount);
void hiloswap(byteptr r1, short numbytes);
short mpi2reg(register unitptr r, register byteptr buf);
short reg2mpi(register byteptr buf, register unitptr r);
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
extern char INT_C(char c);
extern char EXT_C(char c);
extern int CONVERSION;
extern void init_charset(void);
extern int to_upper(int c);
extern int to_lower(int c);
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
static int darmor_file(char *infile, char *outfile);
static unsigned long crchware(byte ch, unsigned long poly, unsigned long accum);
static int armordecode(FILE * in, FILE * out, int *warned);
static void mk_crctbl(unsigned long poly);
static boolean is_armorfile(char *infile);
static unsigned char bintoasc[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
static unsigned char asctobin[] = { 0200, 0200, 0200, 0200, 0200, 0200, 0200, 0200, 0200, 0200, 0200, 0200, 0200, 0200, 0200, 0200, 0200, 0200, 0200, 0200, 0200, 0200, 0200, 0200, 0200, 0200, 0200, 0200, 0200, 0200, 0200, 0200, 0200, 0200, 0200, 0200, 0200, 0200, 0200, 0200, 0200, 0200, 0200, 0076, 0200, 0200, 0200, 0077, 0064, 0065, 0066, 0067, 0070, 0071, 0072, 0073, 0074, 0075, 0200, 0200, 0200, 0200, 0200, 0200, 0200, 0000, 0001, 0002, 0003, 0004, 0005, 0006, 0007, 0010, 0011, 0012, 0013, 0014, 0015, 0016, 0017, 0020, 0021, 0022, 0023, 0024, 0025, 0026, 0027, 0030, 0031, 0200, 0200, 0200, 0200, 0200, 0200, 0032, 0033, 0034, 0035, 0036, 0037, 0040, 0041, 0042, 0043, 0044, 0045, 0046, 0047, 0050, 0051, 0052, 0053, 0054, 0055, 0056, 0057, 0060, 0061, 0062, 0063, 0200, 0200, 0200, 0200, 0200 };

static long infile_line;
static unsigned long crctable[256];
static void mk_crctbl(unsigned long poly)
{
    int i;
    unsigned long t, *p, *q;
    p = q = crctable;
    *q++ = 0;
    *q++ = poly;
    for (i = 1; i < 128; i++) {
	t = *++p;
	if (t & ((unsigned long) (1L << (24 - 1)))) {
	    t <<= 1;
	    *q++ = t ^ poly;
	    *q++ = t;
	} else {
	    t <<= 1;
	    *q++ = t;
	    *q++ = t ^ poly;
	}
    }
}

unsigned long crcbytes(unsigned char *buf, unsigned len, register unsigned long accum)
{
    do {
	accum = accum << 8 ^ crctable[(unsigned char) (accum >> (24 - 8)) ^ *buf++];
    } while (--len);
    return ((accum) & 0xffffffL);
}

void init_crc(void)
{
    mk_crctbl(0x864cfbL);
} static void outdec(char *p, FILE * f, int count)
{
    int c1, c2, c3, c4;
    c1 = *p >> 2;
    c2 = ((*p << 4) & 060) | ((p[1] >> 4) & 017);
    c3 = ((p[1] << 2) & 074) | ((p[2] >> 6) & 03);
    c4 = p[2] & 077;
    _IO_putc(((int) bintoasc[((c1) & 077)]), f);
    _IO_putc(((int) bintoasc[((c2) & 077)]), f);
    if (count == 1) {
	_IO_putc('=', f);
	_IO_putc('=', f);
    } else {
	_IO_putc(((int) bintoasc[((c3) & 077)]), f);
	if (count == 2)
	    _IO_putc('=', f);
	else
	    _IO_putc(((int) bintoasc[((c4) & 077)]), f);
}} static void outcrc(word32 crc, FILE * outFile)
{
    char crcbuf[4];
    crcbuf[0] = (crc >> 16) & 0xff;
    crcbuf[1] = (crc >> 8) & 0xff;
    crcbuf[2] = (crc >> 0) & 0xff;
    _IO_putc('=', outFile);
    outdec(crcbuf, outFile, 3);
    _IO_putc('\n', outFile);
} static char *numFilename(char *fname, int num, int ofnum)
{
    static char fnamenum[256];
    int len;
    int offset = 1;
    strcpy(fnamenum, fname);
    len = strlen(fnamenum);
    do {
	fnamenum[len - offset] = '0' + (num % 10);
	num /= 10;
	ofnum /= 10;
	offset++;
    } while (ofnum >= 1 && offset < 4);
    return fnamenum;
}

static int skipline(FILE * f)
{
    int state, flag, c;
    state = 0;
    flag = 0;
    for (;;) {
	c = _IO_getc(f);
	if (c == '\n')
	    return flag;
	if (state) {
	    ungetc(c, f);
	    return flag;
	}
	if (c == (-1))
	    return -1;
	if (c == '\r')
	    state = 1;
	else if (c != ' ')
	    flag = 1;
    }
}

static int copyline(FILE * in, FILE * out)
{
    int state, flag, c;
    state = 0;
    for (;;) {
	c = _IO_getc(in);
	if (c == '\n')
	    return 1;
	if (state) {
	    ungetc(c, in);
	    return 1;
	}
	if (c == (-1))
	    return 0;
	if (c == '\r')
	    state = 1;
	else
	    _IO_putc(c, out);
    }
}

static int getline(char *buf, int n, FILE * f)
{
    int state;
    char *p;
    int c;
    state = 0;
    p = buf;
    for (;;) {
	c = _IO_getc(f);
	if (c == '\n') {
	    *p = 0;
	    return 1;
	}
	if (state) {
	    ungetc(c, f);
	    *p = 0;
	    return 1;
	}
	if (c == (-1)) {
	    *p = 0;
	    return (p == buf) ? -1 : 0;
	}
	if (c == '\r')
	    state = 1;
	else if (--n > 0) {
	    *p++ = c;
	} else {
	    ungetc(c, f);
	    *p = 0;
	    return 0;
	}
    }
}

static char *get_armor_line(char *buf, FILE * f)
{
    int c, n = 80 - 1;
    char *p = buf;
    do {
	c = _IO_getc(f);
	if (c == '\n' || c == '\r' || c == (-1))
	    break;
	*p++ = c;
    } while (--n > 0);
    if (p == buf && c == (-1)) {
	*buf = '\0';
	return ((void *) 0);
    }
    n = 0;
    while (c != '\n' && c != '\r' && c != (-1)) {
	n |= c ^ ' ';
	c = _IO_getc(f);
    }
    if (c == '\r' && (c = _IO_getc(f)) != '\n')
	ungetc(c, f);
    if (!n) {
	while (p > buf && p[-1] == ' ')
	    --p;
    }
    *p = '\0';
    return buf;
}

int pem_lines = 720;
extern boolean verbose;
extern boolean filter_mode;
int armor_file(char *infilename, char *outfilename, char *filename, char *clearfilename, boolean kv_label)
{
    char buffer[80];
    int i, rc, bytesRead, lines = 0;
    int noSections, currentSection = 1;
    long fileLen;
    unsigned long crc;
    FILE *inFile, *outFile, *clearFile;
    char *tempf;
    char *blocktype = "MESSAGE";
    if (verbose)
	fprintf(pgpout, "armor_file: infile = %s, outfile = %s, filename = %s, clearname = %s\n", infilename, outfilename, filename, clearfilename == ((void *) 0) ? "" : clearfilename);
    if ((inFile = fopen(infilename, "r")) == ((void *) 0))
	return 1;
    if (!outfilename || pem_lines == 0) {
	noSections = 1;
    } else {
	fseek(inFile, 0L, 2);
	fileLen = ftell(inFile);
	rewind(inFile);
	noSections = (fileLen + (48L * pem_lines) - 1) / (48L * pem_lines);
	if (noSections > 99) {
	    pem_lines = ((fileLen + 48L - 1) / 48L + 98) / 99;
	    noSections = (fileLen + (48L * pem_lines) - 1) / (48L * pem_lines);
	    fprintf(pgpout, "value for \"armorlines\" is too low, using %d\n", pem_lines);
	}
    }
    if (clearfilename)
	tempf = tempfile(1);
    else
	tempf = outfilename;
    if (outfilename == ((void *) 0)) {
	outFile = stdout;
    } else {
	if (noSections > 1) {
	    do {
		char *t;
		force_extension(outfilename, ASC_EXTENSION);
		strcpy(outfilename, numFilename(outfilename, 1, noSections));
		if (!file_exists(outfilename))
		    break;
		t = ck_dup_output(outfilename, (!0), (!0));
		if (t == ((void *) 0))
		    user_error();
		strcpy(outfilename, t);
	    } while ((!0));
	    outFile = fopen(tempf, "w");
	} else
	    outFile = fopen(tempf, "w");
    }
    if (outFile == ((void *) 0)) {
	fclose(inFile);
	return 1;
    }
    if (clearfilename) {
	if ((clearFile = fopen(clearfilename, "r")) == ((void *) 0)) {
	    fclose(inFile);
	    if (outFile != stdout)
		fclose(outFile);
	    return 1;
	}
	fprintf(outFile, "-----BEGIN PGP SIGNED MESSAGE-----\n\n");
	while ((i = getline(buffer, sizeof buffer, clearFile)) >= 0) {
	    if (buffer[0] == '-' || strncmp(buffer, "From ", 5) == 0)
		fputs("- ", outFile);
	    fputs(buffer, outFile);
	    if (i == 0)
		if (copyline(clearFile, outFile) <= 0)
		    break;
	    fputc('\n', outFile);
	}
	fclose(clearFile);
	_IO_putc('\n', outFile);
	blocktype = "SIGNATURE";
    }
    if (noSections == 1) {
	unsigned char ctb = 0;
	int keycounter = 0;
	int status;
	ctb = _IO_getc(inFile);
	if ((((ctb) & 0x7c) == (4 * 6))) {
	    blocktype = "PUBLIC KEY BLOCK";
	    if (kv_label) {
		kv_title(outFile);
		rewind(inFile);
		status = kvformat_keypacket(inFile, outFile, (!0), "", infilename, 0, 0, &keycounter);
		fprintf(outFile, "\n");
	    }
	} else if ((((ctb) & 0x7c) == (4 * 5))) {
	    blocktype = "SECRET KEY BLOCK";
	    if (kv_label) {
		kv_title(outFile);
		rewind(inFile);
		status = kvformat_keypacket(inFile, outFile, (!0), "", infilename, 0, 0, &keycounter);
		fprintf(outFile, "\n");
	    }
	}
	fprintf(outFile, "-----BEGIN PGP %s-----\n", blocktype);
	rewind(inFile);
    } else {
	fprintf(outFile, "-----BEGIN PGP MESSAGE, PART %02d/%02d-----\n", 1, noSections);
    }
    fprintf(outFile, "Version: %s\n", LANG(rel_version));
    if (clearfilename)
	fprintf(outFile, "Charset: %s\n", charset);
    if (globalCommentString[0])
	fprintf(outFile, "Comment: %s\n", globalCommentString);
    fprintf(outFile, "\n");
    init_crc();
    crc = 0xB704CEL;
    while ((bytesRead = fread(buffer, 1, 48L, inFile)) > 0) {
	if (bytesRead < 48L)
	    memset(buffer + bytesRead, 0, 48L - bytesRead);
	crc = crcbytes((unsigned char *) buffer, bytesRead, crc);
	for (i = 0; i < bytesRead - 3; i += 3)
	    outdec(buffer + i, outFile, 3);
	outdec(buffer + i, outFile, bytesRead - i);
	_IO_putc('\n', outFile);
	if (++lines == pem_lines && currentSection < noSections) {
	    lines = 0;
	    outcrc(crc, outFile);
	    fprintf(outFile, "-----END PGP MESSAGE, PART %02d/%02d-----\n\n", currentSection, noSections);
	    if (write_error(outFile)) {
		fclose(outFile);
		return -1;
	    }
	    fclose(outFile);
	    outFile = fopen(numFilename(outfilename, ++currentSection, noSections), "w");
	    if (outFile == ((void *) 0)) {
		fclose(inFile);
		return -1;
	    }
	    fprintf(outFile, "-----BEGIN PGP MESSAGE, PART %02d/%02d-----\n", currentSection, noSections);
	    fprintf(outFile, "\n");
	    crc = 0xB704CEL;
	}
    }
    outcrc(crc, outFile);
    if (noSections == 1)
	fprintf(outFile, "-----END PGP %s-----\n", blocktype);
    else
	fprintf(outFile, "-----END PGP MESSAGE, PART %02d/%02d-----\n", noSections, noSections);
    fclose(inFile);
    rc = write_error(outFile);
    if (outFile == stdout)
	return rc;
    fclose(outFile);
    if (clearfilename) {
	remove(outfilename);
	savetemp(tempf, outfilename);
    }
    if (rc)
	return -1;
    if (clearfilename) {
	fprintf(pgpout, LANG("\nClear signature file: %s\n"), outfilename);
    } else if (noSections == 1) {
	fprintf(pgpout, LANG("\nTransport armor file: %s\n"), outfilename);
    } else {
	fprintf(pgpout, LANG("\nTransport armor files: "));
	for (i = 1; i <= noSections; ++i)
	    fprintf(pgpout, "%s%s", numFilename(outfilename, i, noSections), i == noSections ? "\n" : ", ");
    }
    return 0;
}

static int darmor_buffer(char *inbuf, char *outbuf, int *outlength)
{
    unsigned char *bp;
    int length;
    unsigned int c1, c2, c3, c4;
    register int j;
    length = 0;
    bp = (unsigned char *) inbuf;
    while (*bp != '\0') {
	if (*bp & 0x80 || (c1 = asctobin[*bp]) & 0x80)
	    return -1;
	++bp;
	if (*bp & 0x80 || (c2 = asctobin[*bp]) & 0x80)
	    return -1;
	if (*++bp == '=') {
	    c3 = c4 = 0;
	    length += 1;
	    if (c2 & 15)
		return -1;
	    if (strcmp((char *) bp, "==") == 0)
		bp += 1;
	    else if (strcmp((char *) bp, "=3D=3D") == 0)
		bp += 5;
	    else
		return -1;
	} else if (*bp & 0x80 || (c3 = asctobin[*bp]) & 0x80) {
	    return -1;
	} else {
	    if (*++bp == '=') {
		c4 = 0;
		length += 2;
		if (c3 & 3)
		    return -1;
		if (strcmp((char *) bp, "=") == 0);
		else if (strcmp((char *) bp, "=3D") == 0)
		    bp += 2;
		else
		    return -1;
	    } else if (*bp & 0x80 || (c4 = asctobin[*bp]) & 0x80) {
		return -1;
	    } else {
		length += 3;
	    }
	}
	++bp;
	j = (c1 << 2) | (c2 >> 4);
	*outbuf++ = j;
	j = (c2 << 4) | (c3 >> 2);
	*outbuf++ = j;
	j = (c3 << 6) | c4;
	*outbuf++ = j;
    }
    *outlength = length;
    return 0;
}

static char armorfilename[256];
static FILE *open_next(void)
{
    char *p, *s, c;
    FILE *fp;
    p = armorfilename + strlen(armorfilename);
    while (--p >= armorfilename && ((*__ctype_b_loc())[(int) ((*p))] & (unsigned short int) _ISdigit)) {
	if (*p != '9') {
	    ++*p;
	    return fopen(armorfilename, "r");
	}
	*p = '0';
    }
    if (p >= armorfilename) {
	c = *p;
	*p = '1';
	if ((fp = fopen(armorfilename, "r")) != ((void *) 0))
	    return fp;
	*p = c;
    }
    ++p;
    for (s = p + strlen(p); s >= p; --s)
	s[1] = *s;
    *p = '1';
    return fopen(armorfilename, "r");
}

static int isheaderline(char const *buf)
{
    int i;
    if (!((*__ctype_b_loc())[(int) ((*buf))] & (unsigned short int) _ISalpha))
	return -1;
    for (i = 1; ((*__ctype_b_loc())[(int) ((buf[i]))] & (unsigned short int) _ISalnum) || i == '-'; i++);
    if (buf[i] != ':' || buf[i + 1] != ' ')
	return -1;
    if (memcmp(buf, "Charset", i) == 0) {
	if (use_charset_header)
	    strcpy(charset_header, buf + 9);
	return 0;
    }
    if (memcmp(buf, "Version", i) == 0 || memcmp(buf, "Comment", i) == 0)
	return 0;
    return i;
}

static int skipheaders(FILE * in, char *buf, int *warned, int armorfollows)
{
    int label_seen = 0;
    int i;
    long fpos;
    char outbuf[(80 * 3 + 3) / 4];
    int n;
    for (;;) {
	++infile_line;
	fpos = ftell(in);
	if (get_armor_line(buf, in) == ((void *) 0))
	    return 0;
	if (buf[0] == '\0')
	    return 0;
	if (label_seen && (buf[0] == ' ' || buf[0] == '\t'))
	    continue;
	i = isheaderline(buf);
	if (i < 0) {
	    if (armorfollows && darmor_buffer(buf, outbuf, &n) == 0 && n == 48) {
		fseek(in, fpos, 0);
		--infile_line;
		return 0;
	    }
	    fprintf(pgpout, LANG("Invalid ASCII armor header line: \"%.40s\"\nASCII armor corrupted.\n"), buf);
	    return -1;
	}
	if (i > 0 && !*warned) {
	    fprintf(pgpout, LANG("Warning: Unrecognized ASCII armor header label \"%.*s:\" ignored.\n"), i, buf);
	    *warned = 1;
	}
	label_seen = 1;
    }
}

static int armordecode(FILE * original_in, FILE * out, int *warned)
{
    char inbuf[80];
    char outbuf[80];
    int i, n, status;
    int line;
    int section, currentSection = 1;
    int noSections = 0;
    int gotcrc = 0;
    long crc = 0xB704CEL, chkcrc = -1;
    char crcbuf[4];
    int ret_code = 0;
    int end_of_message;
    FILE *in = original_in;
    init_crc();
    for (line = 1;; line++) {
	if (get_armor_line(inbuf, in) == ((void *) 0)) {
	    end_of_message = 1;
	} else {
	    end_of_message = (strncmp(inbuf, "-----END PGP MESSAGE,", 21) == 0);
	    ++infile_line;
	}
	if (currentSection != noSections && end_of_message) {
	    if (gotcrc) {
		if (chkcrc != crc) {
		    fprintf(pgpout, LANG("ERROR: Bad ASCII armor checksum in section %d.\n"), currentSection);
		    ret_code = -1;
		}
	    }
	    gotcrc = 0;
	    crc = 0xB704CEL;
	    section = 0;
	    do {
		if (get_armor_line(inbuf, in) == ((void *) 0)) {
		    if (in != original_in)
			fclose(in);
		    if ((in = open_next()) != ((void *) 0))
			continue;
		    fprintf(pgpout, LANG("Can't find section %d.\n"), currentSection + 1);
		    return -1;
		}
		++infile_line;
	    } while (strncmp(inbuf, "-----BEGIN PGP MESSAGE", 22));
	    if (2 != sscanf(inbuf, "-----BEGIN PGP MESSAGE, PART %d/%d", &section, &noSections)) {
		fprintf(pgpout, LANG("Badly formed section delimiter, part %d.\n"), currentSection + 1);
		goto error;
	    }
	    if (section != ++currentSection) {
		fprintf(pgpout, LANG("Sections out of order, expected part %d"), currentSection);
		if (section)
		    fprintf(pgpout, LANG(", got part %d\n"), section);
		else
		    fputc('\n', pgpout);
		goto error;
	    }
	    if (skipheaders(in, inbuf, warned, 1) < 0)
		goto error;
	    if (feof(in)) {
		fprintf(pgpout, LANG("ERROR: Hit EOF in header of section %d.\n"), currentSection);
		goto error;
	    }
	    continue;
	}
	if (inbuf[0] == '=') {
	    if (strlen(inbuf) == 7 && inbuf[1] == '3' && inbuf[2] == 'D')
		status = darmor_buffer(inbuf + 3, crcbuf, &n);
	    else
		status = darmor_buffer(inbuf + 1, crcbuf, &n);
	    if (status < 0 || n != 3) {
		fprintf(pgpout, LANG("ERROR: Badly formed ASCII armor checksum, line %d.\n"), line);
		goto error;
	    }
	    chkcrc = (((long) crcbuf[0] << 16) & 0xff0000L) + ((crcbuf[1] << 8) & 0xff00L) + (crcbuf[2] & 0xffL);
	    gotcrc = 1;
	    continue;
	}
	if (inbuf[0] == '\0') {
	    fprintf(pgpout, LANG("WARNING: No ASCII armor `END' line.\n"));
	    break;
	}
	if (strncmp(inbuf, "-----END PGP ", 13) == 0)
	    break;
	status = darmor_buffer(inbuf, outbuf, &n);
	if (status == -1) {
	    fprintf(pgpout, LANG("ERROR: Bad ASCII armor character, line %d.\n"), line);
	    gotcrc = 1;
	    ret_code = -1;
	}
	if (n > sizeof outbuf) {
	    fprintf(pgpout, LANG("ERROR: Bad ASCII armor line length %d on line %d.\n"), n, line);
	    goto error;
	}
	crc = crcbytes((unsigned char *) outbuf, n, crc);
	if (fwrite(outbuf, 1, n, out) != n) {
	    ret_code = -1;
	    break;
	}
    }
    if (gotcrc) {
	if (chkcrc != crc) {
	    fprintf(pgpout, LANG("ERROR: Bad ASCII armor checksum"));
	    if (noSections > 0)
		fprintf(pgpout, LANG(" in section %d"), noSections);
	    fputc('\n', pgpout);
	    goto error;
	}
    } else {
	fprintf(pgpout, LANG("Warning: Transport armor lacks a checksum.\n"));
    }
    if (in != original_in)
	fclose(in);
    return ret_code;
  error:if (in != original_in)
	fclose(in);
    return -1;
}

static boolean is_armorfile(char *infile)
{
    FILE *in;
    char inbuf[80];
    char outbuf[80];
    int n;
    long il;
    in = fopen(infile, "r");
    if (in == ((void *) 0))
	return 0;
    for (il = 0; il < infile_line; ++il) {
	if (get_armor_line(inbuf, in) == ((void *) 0)) {
	    fclose(in);
	    return 0;
	}
    }
    for (;;) {
	if (get_armor_line(inbuf, in) == ((void *) 0))
	    break;
	if (strncmp(inbuf, "-----BEGIN PGP ", 15) == 0) {
	    if (strncmp(inbuf, "-----BEGIN PGP SIGNED MESSAGE-----", 34) == 0) {
		fclose(in);
		return (!0);
	    }
	    n = 1;
	    if (skipheaders(in, inbuf, &n, 1) < 0 || get_armor_line(inbuf, in) == ((void *) 0) || darmor_buffer(inbuf, outbuf, &n) < 0)
		break;
	    fclose(in);
	    return (!0);
	}
    }
    fclose(in);
    return 0;
}

static int darmor_file(char *infile, char *outfile)
{
    FILE *in, *out;
    char buf[80];
    char outbuf[(80 * 3 + 3) / 4];
    int status, n;
    long il, fpos;
    char *litfile = ((void *) 0);
    int header_warned = 0;
    if ((in = fopen(infile, "r")) == ((void *) 0)) {
	fprintf(pgpout, LANG("ERROR: Can't find file %s\n"), infile);
	return 10;
    }
    strcpy(armorfilename, infile);
    for (il = 0; il < infile_line; ++il) {
	if (get_armor_line(buf, in) == ((void *) 0)) {
	    fclose(in);
	    return -1;
	}
    }
    for (;;) {
	++infile_line;
	if (get_armor_line(buf, in) == ((void *) 0)) {
	    fprintf(pgpout, LANG("ERROR: No ASCII armor `BEGIN' line!\n"));
	    fclose(in);
	    return 12;
	}
	if (strncmp(buf, "-----BEGIN PGP ", 15) == 0)
	    break;
    }
    if (strncmp(buf, "-----BEGIN PGP SIGNED MESSAGE-----", 34) == 0) {
	FILE *litout;
	char *p;
	int nline;
	charset_header[0] = '\0';
	if (get_armor_line(buf, in) == ((void *) 0)) {
	    fprintf(pgpout, LANG("ERROR: ASCII armor decode input ended unexpectedly!\n"));
	    fclose(in);
	    return 12;
	}
	if (buf[0] != '\0') {
	    fprintf(pgpout, LANG("ERROR: Header line added to ASCII armor: \"%s\"\nASCII armor corrupted.\n"), buf);
	    fclose(in);
	    return -1;
	}
	litfile = tempfile(1 | 4);
	if ((litout = fopen(litfile, "w")) == ((void *) 0)) {
	    fprintf(pgpout, LANG("\n\007Unable to write ciphertext output file '%s'.\n"), litfile);
	    fclose(in);
	    return -1;
	}
	status = 0;
	for (;;) {
	    ++infile_line;
	    nline = status;
	    status = getline(buf, sizeof buf, in);
	    if (status < 0) {
		fprintf(pgpout, LANG("ERROR: ASCII armor decode input ended unexpectedly!\n"));
		fclose(in);
		fclose(litout);
		rmtemp(litfile);
		return 12;
	    }
	    if (strncmp(buf, "-----BEGIN PGP ", 15) == 0)
		break;
	    if (nline)
		_IO_putc('\n', litout);
	    fputs(buf + ((buf[0] == '-' && buf[1] == ' ') ? 2 : 0), litout);
	    if (!status)
		status = copyline(in, litout);
	}
	fflush(litout);
	if (ferror(litout)) {
	    fclose(litout);
	    fclose(in);
	    rmtemp(litfile);
	    return -1;
	}
	fclose(litout);
    }
    if (skipheaders(in, buf, &header_warned, 1) < 0) {
	fclose(in);
	return -1;
    }
    if (feof(in)) {
	fprintf(pgpout, LANG("ERROR: Hit EOF in header.\n"));
	fclose(in);
	return 13;
    }
    if ((out = fopen(outfile, "w")) == ((void *) 0)) {
	fprintf(pgpout, LANG("\n\007Unable to write ciphertext output file '%s'.\n"), outfile);
	fclose(in);
	return -1;
    }
    status = armordecode(in, out, &header_warned);
    if (litfile) {
	char *canonfile, hold_charset[16];
	char lit_mode = 't';
	word32 dummystamp = 0;
	FILE *f;
	canonfile = tempfile(1 | 4);
	strip_spaces = (!0);
	if (charset_header[0]) {
	    strcpy(hold_charset, charset);
	    strcpy(charset, charset_header);
	    init_charset();
	}
	make_canonical(litfile, canonfile);
	rmtemp(litfile);
	litfile = canonfile;
	if (charset_header[0]) {
	    strcpy(charset, hold_charset);
	    init_charset();
	}
	f = fopen(litfile, "r");
	write_ctb_len(out, 11, fsize(f) + 6, 0);
	fwrite(&lit_mode, 1, 1, out);
	fputc('\0', out);
	fwrite(&dummystamp, 1, sizeof(dummystamp), out);
	copyfile(f, out, -1L);
	fclose(f);
	rmtemp(litfile);
    }
    if (write_error(out))
	status = -1;
    fclose(out);
    fclose(in);
    return status;
}

int de_armor_file(char *infile, char *outfile, long *curline)
{
    int status;
    if (verbose)
	fprintf(pgpout, "de_armor_file: infile = %s, outfile = %s, curline = %ld\n", infile, outfile, *curline);
    infile_line = (curline ? *curline : 0);
    status = darmor_file(infile, outfile);
    if (curline)
	*curline = infile_line;
    return status;
}

boolean is_armor_file(char *infile, long startline)
{
    infile_line = startline;
    return is_armorfile(infile);
}
