typedef short word;
typedef long longword;
typedef unsigned short uword;
typedef unsigned long ulongword;
struct gsm_state {
    word dp0[280];
    word z1;
    longword L_z2;
    int mp;
    word u[8];
    word LARpp[2][8];
    word j;
    word nrp;
    word v[9];
    word msr;
    char verbose;
    char fast;
};
extern word gsm_mult(word a, word b);
extern longword gsm_L_mult(word a, word b);
extern word gsm_mult_r(word a, word b);
extern word gsm_div(word num, word denum);
extern word gsm_add(word a, word b);
extern longword gsm_L_add(longword a, longword b);
extern word gsm_sub(word a, word b);
extern longword gsm_L_sub(longword a, longword b);
extern word gsm_abs(word a);
extern word gsm_norm(longword a);
extern longword gsm_L_asl(longword a, int n);
extern word gsm_asl(word a, int n);
extern longword gsm_L_asr(longword a, int n);
extern word gsm_asr(word a, int n);
extern void Gsm_Coder(struct gsm_state *S, word * s, word * LARc, word * Nc, word * bc, word * Mc, word * xmaxc, word * xMc);
extern void Gsm_Long_Term_Predictor(struct gsm_state *S, word * d, word * dp, word * e, word * dpp, word * Nc, word * bc);
extern void Gsm_LPC_Analysis(struct gsm_state *S, word * s, word * LARc);
extern void Gsm_Preprocess(struct gsm_state *S, word * s, word * so);
extern void Gsm_Encoding(struct gsm_state *S, word * e, word * ep, word * xmaxc, word * Mc, word * xMc);
extern void Gsm_Short_Term_Analysis_Filter(struct gsm_state *S, word * LARc, word * d);
extern void Gsm_Decoder(struct gsm_state *S, word * LARcr, word * Ncr, word * bcr, word * Mcr, word * xmaxcr, word * xMcr, word * s);
extern void Gsm_Decoding(struct gsm_state *S, word xmaxcr, word Mcr, word * xMcr, word * erp);
extern void Gsm_Long_Term_Synthesis_Filtering(struct gsm_state *S, word Ncr, word bcr, word * erp, word * drp);
void Gsm_RPE_Decoding(struct gsm_state *S, word xmaxcr, word Mcr, word * xMcr, word * erp);
void Gsm_RPE_Encoding(struct gsm_state *S, word * e, word * xmaxc, word * Mc, word * xMc);
extern void Gsm_Short_Term_Synthesis_Filter(struct gsm_state *S, word * LARcr, word * drp, word * s);
extern void Gsm_Update_of_reconstructed_short_time_residual_signal(word * dpp, word * ep, word * dp);
extern word gsm_A[8], gsm_B[8], gsm_MIC[8], gsm_MAC[8];
extern word gsm_INVA[8];
extern word gsm_DLB[4], gsm_QLB[4];
extern word gsm_H[11];
extern word gsm_NRFAC[8];
extern word gsm_FAC[8];
extern void gsm_debug_words(char *name, int, int, word *);
extern void gsm_debug_longwords(char *name, int, int, longword *);
extern void gsm_debug_longword(char *name, longword);
extern void gsm_debug_word(char *name, word);
typedef __typeof__(((int *) 0) - ((int *) 0)) ptrdiff_t;
typedef __typeof__(sizeof(int)) size_t;
typedef int wchar_t;
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
extern int dprintf(int __fd, __const char *__restrict __fmt, ...) __attribute__ ((__format__(__printf__, 2, 3)));
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
extern __ssize_t getline(char **__restrict __lineptr, size_t * __restrict __n, FILE * __restrict __stream);
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
typedef struct gsm_state *gsm;
typedef short gsm_signal;
typedef unsigned char gsm_byte;
typedef gsm_byte gsm_frame[33];
extern gsm gsm_create(void);
extern void gsm_destroy(gsm);
extern int gsm_print(FILE *, gsm, gsm_byte *);
extern int gsm_option(gsm, int, int *);
extern void gsm_encode(gsm, gsm_signal *, gsm_byte *);
extern int gsm_decode(gsm, gsm_byte *, gsm_signal *);
extern int gsm_explode(gsm, gsm_byte *, gsm_signal *);
extern void gsm_implode(gsm, gsm_signal *, gsm_byte *);
int gsm_explode(gsm s, gsm_byte * c, gsm_signal * target)
{
    if (((*c >> 4) & 0x0F) != 0xD)
	return -1;
    target[0] = (*c++ & 0xF) << 2;
    target[0] |= (*c >> 6) & 0x3;
    target[1] = *c++ & 0x3F;
    target[2] = (*c >> 3) & 0x1F;
    target[3] = (*c++ & 0x7) << 2;
    target[3] |= (*c >> 6) & 0x3;
    target[4] = (*c >> 2) & 0xF;
    target[5] = (*c++ & 0x3) << 2;
    target[5] |= (*c >> 6) & 0x3;
    target[6] = (*c >> 3) & 0x7;
    target[7] = *c++ & 0x7;
    (target + 8)[0] = (*c >> 1) & 0x7F;
    (target + 9)[0] = (*c++ & 0x1) << 1;
    (target + 9)[0] |= (*c >> 7) & 0x1;
    (target + 10)[0] = (*c >> 5) & 0x3;
    (target + 11)[0] = (*c++ & 0x1F) << 1;
    (target + 11)[0] |= (*c >> 7) & 0x1;
    (target + 12)[0] = (*c >> 4) & 0x7;
    (target + 12)[1] = (*c >> 1) & 0x7;
    (target + 12)[2] = (*c++ & 0x1) << 2;
    (target + 12)[2] |= (*c >> 6) & 0x3;
    (target + 12)[3] = (*c >> 3) & 0x7;
    (target + 12)[4] = *c++ & 0x7;
    (target + 12)[5] = (*c >> 5) & 0x7;
    (target + 12)[6] = (*c >> 2) & 0x7;
    (target + 12)[7] = (*c++ & 0x3) << 1;
    (target + 12)[7] |= (*c >> 7) & 0x1;
    (target + 12)[8] = (*c >> 4) & 0x7;
    (target + 12)[9] = (*c >> 1) & 0x7;
    (target + 12)[10] = (*c++ & 0x1) << 2;
    (target + 12)[10] |= (*c >> 6) & 0x3;
    (target + 12)[11] = (*c >> 3) & 0x7;
    (target + 12)[12] = *c++ & 0x7;
    (target + 25 - 1)[1] = (*c >> 1) & 0x7F;
    (target + 26 - 1)[1] = (*c++ & 0x1) << 1;
    (target + 26 - 1)[1] |= (*c >> 7) & 0x1;
    (target + 27 - 1)[1] = (*c >> 5) & 0x3;
    (target + 28 - 1)[1] = (*c++ & 0x1F) << 1;
    (target + 28 - 1)[1] |= (*c >> 7) & 0x1;
    (target + 29 - 13)[13] = (*c >> 4) & 0x7;
    (target + 29 - 13)[14] = (*c >> 1) & 0x7;
    (target + 29 - 13)[15] = (*c++ & 0x1) << 2;
    (target + 29 - 13)[15] |= (*c >> 6) & 0x3;
    (target + 29 - 13)[16] = (*c >> 3) & 0x7;
    (target + 29 - 13)[17] = *c++ & 0x7;
    (target + 29 - 13)[18] = (*c >> 5) & 0x7;
    (target + 29 - 13)[19] = (*c >> 2) & 0x7;
    (target + 29 - 13)[20] = (*c++ & 0x3) << 1;
    (target + 29 - 13)[20] |= (*c >> 7) & 0x1;
    (target + 29 - 13)[21] = (*c >> 4) & 0x7;
    (target + 29 - 13)[22] = (*c >> 1) & 0x7;
    (target + 29 - 13)[23] = (*c++ & 0x1) << 2;
    (target + 29 - 13)[23] |= (*c >> 6) & 0x3;
    (target + 29 - 13)[24] = (*c >> 3) & 0x7;
    (target + 29 - 13)[25] = *c++ & 0x7;
    (target + 42 - 2)[2] = (*c >> 1) & 0x7F;
    (target + 43 - 2)[2] = (*c++ & 0x1) << 1;
    (target + 43 - 2)[2] |= (*c >> 7) & 0x1;
    (target + 44 - 2)[2] = (*c >> 5) & 0x3;
    (target + 45 - 2)[2] = (*c++ & 0x1F) << 1;
    (target + 45 - 2)[2] |= (*c >> 7) & 0x1;
    (target + 46 - 26)[26] = (*c >> 4) & 0x7;
    (target + 46 - 26)[27] = (*c >> 1) & 0x7;
    (target + 46 - 26)[28] = (*c++ & 0x1) << 2;
    (target + 46 - 26)[28] |= (*c >> 6) & 0x3;
    (target + 46 - 26)[29] = (*c >> 3) & 0x7;
    (target + 46 - 26)[30] = *c++ & 0x7;
    (target + 46 - 26)[31] = (*c >> 5) & 0x7;
    (target + 46 - 26)[32] = (*c >> 2) & 0x7;
    (target + 46 - 26)[33] = (*c++ & 0x3) << 1;
    (target + 46 - 26)[33] |= (*c >> 7) & 0x1;
    (target + 46 - 26)[34] = (*c >> 4) & 0x7;
    (target + 46 - 26)[35] = (*c >> 1) & 0x7;
    (target + 46 - 26)[36] = (*c++ & 0x1) << 2;
    (target + 46 - 26)[36] |= (*c >> 6) & 0x3;
    (target + 46 - 26)[37] = (*c >> 3) & 0x7;
    (target + 46 - 26)[38] = *c++ & 0x7;
    (target + 59 - 3)[3] = (*c >> 1) & 0x7F;
    (target + 60 - 3)[3] = (*c++ & 0x1) << 1;
    (target + 60 - 3)[3] |= (*c >> 7) & 0x1;
    (target + 61 - 3)[3] = (*c >> 5) & 0x3;
    (target + 62 - 3)[3] = (*c++ & 0x1F) << 1;
    (target + 62 - 3)[3] |= (*c >> 7) & 0x1;
    (target + 63 - 39)[39] = (*c >> 4) & 0x7;
    (target + 63 - 39)[40] = (*c >> 1) & 0x7;
    (target + 63 - 39)[41] = (*c++ & 0x1) << 2;
    (target + 63 - 39)[41] |= (*c >> 6) & 0x3;
    (target + 63 - 39)[42] = (*c >> 3) & 0x7;
    (target + 63 - 39)[43] = *c++ & 0x7;
    (target + 63 - 39)[44] = (*c >> 5) & 0x7;
    (target + 63 - 39)[45] = (*c >> 2) & 0x7;
    (target + 63 - 39)[46] = (*c++ & 0x3) << 1;
    (target + 63 - 39)[46] |= (*c >> 7) & 0x1;
    (target + 63 - 39)[47] = (*c >> 4) & 0x7;
    (target + 63 - 39)[48] = (*c >> 1) & 0x7;
    (target + 63 - 39)[49] = (*c++ & 0x1) << 2;
    (target + 63 - 39)[49] |= (*c >> 6) & 0x3;
    (target + 63 - 39)[50] = (*c >> 3) & 0x7;
    (target + 63 - 39)[51] = *c & 0x7;
    return 0;
}