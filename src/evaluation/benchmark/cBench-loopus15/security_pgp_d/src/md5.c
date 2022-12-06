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
typedef unsigned long uint32;
struct MD5Context {
    uint32 buf[4];
    uint32 bits[2];
    unsigned char in[64];
};
void MD5Init(struct MD5Context *context);
void MD5Update(struct MD5Context *context, unsigned char const *buf, unsigned len);
void MD5Final(unsigned char digest[16], struct MD5Context *context);
void MD5Transform(uint32 buf[4], uint32 const in[16]);
typedef struct MD5Context MD5_CTX;
void MD5Init(struct MD5Context *ctx)
{
    ctx->buf[0] = 0x67452301;
    ctx->buf[1] = 0xefcdab89;
    ctx->buf[2] = 0x98badcfe;
    ctx->buf[3] = 0x10325476;
    ctx->bits[0] = 0;
    ctx->bits[1] = 0;
} void MD5Update(struct MD5Context *ctx, unsigned char const *buf, unsigned len)
{
    uint32 t;
    t = ctx->bits[0];
    if ((ctx->bits[0] = t + ((uint32) len << 3)) < t)
	ctx->bits[1]++;
    ctx->bits[1] += len >> 29;
    t = (t >> 3) & 0x3f;
    if (t) {
	unsigned char *p = (unsigned char *) ctx->in + t;
	t = 64 - t;
	if (len < t) {
	    memcpy(p, buf, len);
	    return;
	}
	memcpy(p, buf, t);;
	MD5Transform(ctx->buf, (uint32 *) ctx->in);
	buf += t;
	len -= t;
    }
    while (len >= 64) {
	memcpy(ctx->in, buf, 64);;
	MD5Transform(ctx->buf, (uint32 *) ctx->in);
	buf += 64;
	len -= 64;
    }
    memcpy(ctx->in, buf, len);
}

void MD5Final(unsigned char digest[16], struct MD5Context *ctx)
{
    unsigned count;
    unsigned char *p;
    count = (ctx->bits[0] >> 3) & 0x3F;
    p = ctx->in + count;
    *p++ = 0x80;
    count = 64 - 1 - count;
    if (count < 8) {
	memset(p, 0, count);;
	MD5Transform(ctx->buf, (uint32 *) ctx->in);
	memset(ctx->in, 0, 56);
    } else {
	memset(p, 0, count - 8);
    };
    ((uint32 *) ctx->in)[14] = ctx->bits[0];
    ((uint32 *) ctx->in)[15] = ctx->bits[1];
    MD5Transform(ctx->buf, (uint32 *) ctx->in);;
    memcpy(digest, ctx->buf, 16);
    memset(ctx, 0, sizeof(ctx));
}

void MD5Transform(uint32 buf[4], uint32 const in[16])
{
    register uint32 a, b, c, d;
    a = buf[0];
    b = buf[1];
    c = buf[2];
    d = buf[3];
    (a += (d ^ (b & (c ^ d))) + in[0] + 0xd76aa478, a = a << 7 | a >> (32 - 7), a += b);
    (d += (c ^ (a & (b ^ c))) + in[1] + 0xe8c7b756, d = d << 12 | d >> (32 - 12), d += a);
    (c += (b ^ (d & (a ^ b))) + in[2] + 0x242070db, c = c << 17 | c >> (32 - 17), c += d);
    (b += (a ^ (c & (d ^ a))) + in[3] + 0xc1bdceee, b = b << 22 | b >> (32 - 22), b += c);
    (a += (d ^ (b & (c ^ d))) + in[4] + 0xf57c0faf, a = a << 7 | a >> (32 - 7), a += b);
    (d += (c ^ (a & (b ^ c))) + in[5] + 0x4787c62a, d = d << 12 | d >> (32 - 12), d += a);
    (c += (b ^ (d & (a ^ b))) + in[6] + 0xa8304613, c = c << 17 | c >> (32 - 17), c += d);
    (b += (a ^ (c & (d ^ a))) + in[7] + 0xfd469501, b = b << 22 | b >> (32 - 22), b += c);
    (a += (d ^ (b & (c ^ d))) + in[8] + 0x698098d8, a = a << 7 | a >> (32 - 7), a += b);
    (d += (c ^ (a & (b ^ c))) + in[9] + 0x8b44f7af, d = d << 12 | d >> (32 - 12), d += a);
    (c += (b ^ (d & (a ^ b))) + in[10] + 0xffff5bb1, c = c << 17 | c >> (32 - 17), c += d);
    (b += (a ^ (c & (d ^ a))) + in[11] + 0x895cd7be, b = b << 22 | b >> (32 - 22), b += c);
    (a += (d ^ (b & (c ^ d))) + in[12] + 0x6b901122, a = a << 7 | a >> (32 - 7), a += b);
    (d += (c ^ (a & (b ^ c))) + in[13] + 0xfd987193, d = d << 12 | d >> (32 - 12), d += a);
    (c += (b ^ (d & (a ^ b))) + in[14] + 0xa679438e, c = c << 17 | c >> (32 - 17), c += d);
    (b += (a ^ (c & (d ^ a))) + in[15] + 0x49b40821, b = b << 22 | b >> (32 - 22), b += c);
    (a += (c ^ (d & (b ^ c))) + in[1] + 0xf61e2562, a = a << 5 | a >> (32 - 5), a += b);
    (d += (b ^ (c & (a ^ b))) + in[6] + 0xc040b340, d = d << 9 | d >> (32 - 9), d += a);
    (c += (a ^ (b & (d ^ a))) + in[11] + 0x265e5a51, c = c << 14 | c >> (32 - 14), c += d);
    (b += (d ^ (a & (c ^ d))) + in[0] + 0xe9b6c7aa, b = b << 20 | b >> (32 - 20), b += c);
    (a += (c ^ (d & (b ^ c))) + in[5] + 0xd62f105d, a = a << 5 | a >> (32 - 5), a += b);
    (d += (b ^ (c & (a ^ b))) + in[10] + 0x02441453, d = d << 9 | d >> (32 - 9), d += a);
    (c += (a ^ (b & (d ^ a))) + in[15] + 0xd8a1e681, c = c << 14 | c >> (32 - 14), c += d);
    (b += (d ^ (a & (c ^ d))) + in[4] + 0xe7d3fbc8, b = b << 20 | b >> (32 - 20), b += c);
    (a += (c ^ (d & (b ^ c))) + in[9] + 0x21e1cde6, a = a << 5 | a >> (32 - 5), a += b);
    (d += (b ^ (c & (a ^ b))) + in[14] + 0xc33707d6, d = d << 9 | d >> (32 - 9), d += a);
    (c += (a ^ (b & (d ^ a))) + in[3] + 0xf4d50d87, c = c << 14 | c >> (32 - 14), c += d);
    (b += (d ^ (a & (c ^ d))) + in[8] + 0x455a14ed, b = b << 20 | b >> (32 - 20), b += c);
    (a += (c ^ (d & (b ^ c))) + in[13] + 0xa9e3e905, a = a << 5 | a >> (32 - 5), a += b);
    (d += (b ^ (c & (a ^ b))) + in[2] + 0xfcefa3f8, d = d << 9 | d >> (32 - 9), d += a);
    (c += (a ^ (b & (d ^ a))) + in[7] + 0x676f02d9, c = c << 14 | c >> (32 - 14), c += d);
    (b += (d ^ (a & (c ^ d))) + in[12] + 0x8d2a4c8a, b = b << 20 | b >> (32 - 20), b += c);
    (a += (b ^ c ^ d) + in[5] + 0xfffa3942, a = a << 4 | a >> (32 - 4), a += b);
    (d += (a ^ b ^ c) + in[8] + 0x8771f681, d = d << 11 | d >> (32 - 11), d += a);
    (c += (d ^ a ^ b) + in[11] + 0x6d9d6122, c = c << 16 | c >> (32 - 16), c += d);
    (b += (c ^ d ^ a) + in[14] + 0xfde5380c, b = b << 23 | b >> (32 - 23), b += c);
    (a += (b ^ c ^ d) + in[1] + 0xa4beea44, a = a << 4 | a >> (32 - 4), a += b);
    (d += (a ^ b ^ c) + in[4] + 0x4bdecfa9, d = d << 11 | d >> (32 - 11), d += a);
    (c += (d ^ a ^ b) + in[7] + 0xf6bb4b60, c = c << 16 | c >> (32 - 16), c += d);
    (b += (c ^ d ^ a) + in[10] + 0xbebfbc70, b = b << 23 | b >> (32 - 23), b += c);
    (a += (b ^ c ^ d) + in[13] + 0x289b7ec6, a = a << 4 | a >> (32 - 4), a += b);
    (d += (a ^ b ^ c) + in[0] + 0xeaa127fa, d = d << 11 | d >> (32 - 11), d += a);
    (c += (d ^ a ^ b) + in[3] + 0xd4ef3085, c = c << 16 | c >> (32 - 16), c += d);
    (b += (c ^ d ^ a) + in[6] + 0x04881d05, b = b << 23 | b >> (32 - 23), b += c);
    (a += (b ^ c ^ d) + in[9] + 0xd9d4d039, a = a << 4 | a >> (32 - 4), a += b);
    (d += (a ^ b ^ c) + in[12] + 0xe6db99e5, d = d << 11 | d >> (32 - 11), d += a);
    (c += (d ^ a ^ b) + in[15] + 0x1fa27cf8, c = c << 16 | c >> (32 - 16), c += d);
    (b += (c ^ d ^ a) + in[2] + 0xc4ac5665, b = b << 23 | b >> (32 - 23), b += c);
    (a += (c ^ (b | ~d)) + in[0] + 0xf4292244, a = a << 6 | a >> (32 - 6), a += b);
    (d += (b ^ (a | ~c)) + in[7] + 0x432aff97, d = d << 10 | d >> (32 - 10), d += a);
    (c += (a ^ (d | ~b)) + in[14] + 0xab9423a7, c = c << 15 | c >> (32 - 15), c += d);
    (b += (d ^ (c | ~a)) + in[5] + 0xfc93a039, b = b << 21 | b >> (32 - 21), b += c);
    (a += (c ^ (b | ~d)) + in[12] + 0x655b59c3, a = a << 6 | a >> (32 - 6), a += b);
    (d += (b ^ (a | ~c)) + in[3] + 0x8f0ccc92, d = d << 10 | d >> (32 - 10), d += a);
    (c += (a ^ (d | ~b)) + in[10] + 0xffeff47d, c = c << 15 | c >> (32 - 15), c += d);
    (b += (d ^ (c | ~a)) + in[1] + 0x85845dd1, b = b << 21 | b >> (32 - 21), b += c);
    (a += (c ^ (b | ~d)) + in[8] + 0x6fa87e4f, a = a << 6 | a >> (32 - 6), a += b);
    (d += (b ^ (a | ~c)) + in[15] + 0xfe2ce6e0, d = d << 10 | d >> (32 - 10), d += a);
    (c += (a ^ (d | ~b)) + in[6] + 0xa3014314, c = c << 15 | c >> (32 - 15), c += d);
    (b += (d ^ (c | ~a)) + in[13] + 0x4e0811a1, b = b << 21 | b >> (32 - 21), b += c);
    (a += (c ^ (b | ~d)) + in[4] + 0xf7537e82, a = a << 6 | a >> (32 - 6), a += b);
    (d += (b ^ (a | ~c)) + in[11] + 0xbd3af235, d = d << 10 | d >> (32 - 10), d += a);
    (c += (a ^ (d | ~b)) + in[2] + 0x2ad7d2bb, c = c << 15 | c >> (32 - 15), c += d);
    (b += (d ^ (c | ~a)) + in[9] + 0xeb86d391, b = b << 21 | b >> (32 - 21), b += c);
    buf[0] += a;
    buf[1] += b;
    buf[2] += c;
    buf[3] += d;
}
