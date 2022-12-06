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
typedef unsigned char boolean;
typedef unsigned char byte;
typedef byte *byteptr;
typedef char *string;
typedef unsigned short word16;
typedef unsigned long word32;
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
void randPoolStir(void);
void randPoolAddBytes(byte const *buf, unsigned len);
void randPoolGetBytes(byte * buf, unsigned len);
byte randPoolGetByte(void);
typedef word16 uint16;
static uint16 mulInv(uint16 x)
{
    uint16 t0, t1;
    uint16 q, y;
    if (x <= 1)
	return x;
    t1 = 0x10001L / x;
    y = 0x10001L % x;
    if (y == 1)
	return (1 - t1);
    t0 = 1;
    do {
	q = x / y;
	x = x % y;
	t0 += q * t1;
	if (x == 1)
	    return t0;
	q = y / x;
	y = y % x;
	t1 += q * t0;
    } while (y != 1);
    return (1 - t1);
}

static void ideaExpandKey(byte const *userkey, word16 * EK)
{
    int i, j;
    for (j = 0; j < 8; j++) {
	EK[j] = (userkey[0] << 8) + userkey[1];
	userkey += 2;
    }
    for (i = 0; j < (6 * 8 + 4); j++) {
	i++;
	EK[i + 7] = EK[i & 7] << 9 | EK[i + 1 & 7] >> 7;
	EK += i & 8;
	i &= 7;
    }
}

static void ideaInvertKey(word16 const *EK, word16 DK[(6 * 8 + 4)])
{
    int i;
    uint16 t1, t2, t3;
    word16 temp[(6 * 8 + 4)];
    word16 *p = temp + (6 * 8 + 4);
    t1 = mulInv(*EK++);
    t2 = -*EK++;
    t3 = -*EK++;
    *--p = mulInv(*EK++);
    *--p = t3;
    *--p = t2;
    *--p = t1;
    for (i = 0; i < 8 - 1; i++) {
	t1 = *EK++;
	*--p = *EK++;
	*--p = t1;
	t1 = mulInv(*EK++);
	t2 = -*EK++;
	t3 = -*EK++;
	*--p = mulInv(*EK++);
	*--p = t2;
	*--p = t3;
	*--p = t1;
    }
    t1 = *EK++;
    *--p = *EK++;
    *--p = t1;
    t1 = mulInv(*EK++);
    t2 = -*EK++;
    t3 = -*EK++;
    *--p = mulInv(*EK++);
    *--p = t3;
    *--p = t2;
    *--p = t1;
    memcpy(DK, temp, sizeof(temp));
    memset((void *) &(temp), 0, sizeof(temp));
}

static void ideaCipher(byte const inbuf[8], byte outbuf[8], word16 const *key)
{
    register uint16 x1, x2, x3, x4, s2, s3;
    word16 *in, *out;
    register uint16 t16;
    register word32 t32;
    int r = 8;
    in = (word16 *) inbuf;
    x1 = *in++;
    x2 = *in++;
    x3 = *in++;
    x4 = *in;
    x1 = (x1 >> 8) | (x1 << 8);
    x2 = (x2 >> 8) | (x2 << 8);
    x3 = (x3 >> 8) | (x3 << 8);
    x4 = (x4 >> 8) | (x4 << 8);
    do {
	((t16 = (*key++)) ? (x1 = (x1)) ? t32 = (word32) x1 * t16, x1 = (t32), t16 = t32 >> 16, x1 = (x1 - t16) + (x1 < t16) : (x1 = 1 - t16) : (x1 = 1 - x1));
	x2 += *key++;
	x3 += *key++;
	((t16 = (*key++)) ? (x4 = (x4)) ? t32 = (word32) x4 * t16, x4 = (t32), t16 = t32 >> 16, x4 = (x4 - t16) + (x4 < t16) : (x4 = 1 - t16) : (x4 = 1 - x4));
	s3 = x3;
	x3 ^= x1;
	((t16 = (*key++)) ? (x3 = (x3)) ? t32 = (word32) x3 * t16, x3 = (t32), t16 = t32 >> 16, x3 = (x3 - t16) + (x3 < t16) : (x3 = 1 - t16) : (x3 = 1 - x3));
	s2 = x2;
	x2 ^= x4;
	x2 += x3;
	((t16 = (*key++)) ? (x2 = (x2)) ? t32 = (word32) x2 * t16, x2 = (t32), t16 = t32 >> 16, x2 = (x2 - t16) + (x2 < t16) : (x2 = 1 - t16) : (x2 = 1 - x2));
	x3 += x2;
	x1 ^= x2;
	x4 ^= x3;
	x2 ^= s3;
	x3 ^= s2;
    } while (--r);
    ((t16 = (*key++)) ? (x1 = (x1)) ? t32 = (word32) x1 * t16, x1 = (t32), t16 = t32 >> 16, x1 = (x1 - t16) + (x1 < t16) : (x1 = 1 - t16) : (x1 = 1 - x1));
    x3 += *key++;
    x2 += *key++;
    ((t16 = (*key)) ? (x4 = (x4)) ? t32 = (word32) x4 * t16, x4 = (t32), t16 = t32 >> 16, x4 = (x4 - t16) + (x4 < t16) : (x4 = 1 - t16) : (x4 = 1 - x4));
    out = (word16 *) outbuf;
    x1 = (x1);
    x2 = (x2);
    x3 = (x3);
    x4 = (x4);
    *out++ = (x1 >> 8) | (x1 << 8);
    *out++ = (x3 >> 8) | (x3 << 8);
    *out++ = (x2 >> 8) | (x2 << 8);
    *out = (x4 >> 8) | (x4 << 8);
}

void ideaCfbReinit(struct IdeaCfbContext *context, byte const *iv)
{
    if (iv)
	memcpy(context->iv, iv, 8);
    else
	memset(context->iv, 0, 8);
    context->bufleft = 0;
}

void ideaCfbInit(struct IdeaCfbContext *context, byte const key[16])
{
    ideaExpandKey(key, context->key);
    ideaCfbReinit(context, 0);
} void ideaCfbDestroy(struct IdeaCfbContext *context)
{
    memset((void *) &(*context), 0, sizeof(*context));
}

void ideaCfbSync(struct IdeaCfbContext *context)
{
    int bufleft = context->bufleft;
    if (bufleft) {
	memmove(context->iv + bufleft, context->iv, 8 - bufleft);
	memcpy(context->iv, context->oldcipher + 8 - bufleft, bufleft);
	context->bufleft = 0;
    }
}

void ideaCfbEncrypt(struct IdeaCfbContext *context, byte const *src, byte * dest, int count)
{
    int bufleft = context->bufleft;
    byte *bufptr = context->iv + 8 - bufleft;
    if (count <= bufleft) {
	context->bufleft = bufleft - count;
	while (count--) {
	    *dest++ = *bufptr++ ^= *src++;
	}
	return;
    }
    count -= bufleft;
    while (bufleft--) {
	*dest++ = (*bufptr++ ^= *src++);
    }
    while (count > 8) {
	bufptr = context->iv;
	memcpy(context->oldcipher, bufptr, 8);
	ideaCipher(bufptr, bufptr, context->key);
	bufleft = 8;
	count -= 8;
	do {
	    *dest++ = (*bufptr++ ^= *src++);
	} while (--bufleft);
    }
    bufptr = context->iv;
    memcpy(context->oldcipher, bufptr, 8);
    ideaCipher(bufptr, bufptr, context->key);
    context->bufleft = 8 - count;
    do {
	*dest++ = (*bufptr++ ^= *src++);
    } while (--count);
}

void ideaCfbDecrypt(struct IdeaCfbContext *context, byte const *src, byte * dest, int count)
{
    int bufleft = context->bufleft;
    static byte *bufptr;
    byte t;
    bufptr = context->iv + (8 - bufleft);
    if (count <= bufleft) {
	context->bufleft = bufleft - count;
	while (count--) {
	    t = *bufptr;
	    *dest++ = t ^ (*bufptr++ = *src++);
	}
	return;
    }
    count -= bufleft;
    while (bufleft--) {
	t = *bufptr;
	*dest++ = t ^ (*bufptr++ = *src++);
    }
    while (count > 8) {
	bufptr = context->iv;
	memcpy(context->oldcipher, bufptr, 8);
	ideaCipher(bufptr, bufptr, context->key);
	bufleft = 8;
	count -= 8;
	do {
	    t = *bufptr;
	    *dest++ = t ^ (*bufptr++ = *src++);
	} while (--bufleft);
    }
    bufptr = context->iv;
    memcpy(context->oldcipher, bufptr, 8);
    ideaCipher(bufptr, bufptr, context->key);
    context->bufleft = 8 - count;
    do {
	t = *bufptr;
	*dest++ = t ^ (*bufptr++ = *src++);
    } while (--count);
}

void ideaRandInit(struct IdeaRandContext *context, byte const key[16], byte const seed[8])
{
    int i;
    ideaExpandKey(key, context->key);
    context->bufleft = 0;
    memcpy(context->internalbuf, seed, 8);
} void ideaRandState(struct IdeaRandContext *context, byte key[16], byte seed[8])
{
    int i;
    memcpy(seed, context->internalbuf, 8);
    for (i = 0; i < 8; i++) {
	key[2 * i] = context->key[i] >> 8;
	key[2 * i + 1] = context->key[i];
    }
}

void ideaRandWash(struct IdeaRandContext *context, struct IdeaCfbContext *cfb)
{
    byte keyseed[16 + 8];
    int i;
    ideaRandState(context, keyseed, keyseed + 16);
    ideaCfbEncrypt(cfb, keyseed, keyseed, 16 + 8);
    ideaRandInit(context, keyseed, keyseed + 16);
    memset(keyseed, 0, 16 + 8);
} byte ideaRandByte(struct IdeaRandContext *c)
{
    int i;
    if (!c->bufleft) {
	byte timestamp[8];
	randPoolGetBytes(timestamp, sizeof(timestamp));
	for (i = 0; i < 8; i++)
	    c->outbuf[i] = c->internalbuf[i] ^ timestamp[i];
	ideaCipher(c->outbuf, c->outbuf, c->key);
	for (i = 0; i < 8; i++)
	    c->internalbuf[i] = c->outbuf[i] ^ timestamp[i];
	ideaCipher(c->internalbuf, c->internalbuf, c->key);
	memset((void *) &(timestamp), 0, sizeof(timestamp));
	c->bufleft = 8;
    }
    return c->outbuf[--c->bufleft];
}
