typedef struct bf_key_st {
    unsigned long P[16 + 2];
    unsigned long S[4 * 256];
} BF_KEY;
void BF_set_key(BF_KEY * key, int len, unsigned char *data);
void BF_ecb_encrypt(unsigned char *in, unsigned char *out, BF_KEY * key, int encrypt);
void BF_encrypt(unsigned long *data, BF_KEY * key, int encrypt);
void BF_cbc_encrypt(unsigned char *in, unsigned char *out, long length, BF_KEY * ks, unsigned char *iv, int encrypt);
void BF_cfb64_encrypt(unsigned char *in, unsigned char *out, long length, BF_KEY * schedule, unsigned char *ivec, int *num, int encrypt);
void BF_ofb64_encrypt(unsigned char *in, unsigned char *out, long length, BF_KEY * schedule, unsigned char *ivec, int *num);
char *BF_options(void);
char *BF_version = "BlowFish part of SSLeay 0.7.0 30-Jan-1997";
char *BF_options()
{
    return ("blowfish(idx)");
}

void BF_ecb_encrypt(in, out, ks, encrypt)
unsigned char *in;
unsigned char *out;
BF_KEY *ks;
int encrypt;
{
    unsigned long l, d[2];
    (l = ((unsigned long) (*((in)++))) << 24L, l |= ((unsigned long) (*((in)++))) << 16L, l |= ((unsigned long) (*((in)++))) << 8L, l |= ((unsigned long) (*((in)++))));
    d[0] = l;
    (l = ((unsigned long) (*((in)++))) << 24L, l |= ((unsigned long) (*((in)++))) << 16L, l |= ((unsigned long) (*((in)++))) << 8L, l |= ((unsigned long) (*((in)++))));
    d[1] = l;
    BF_encrypt(d, ks, encrypt);
    l = d[0];
    (*((out)++) = (unsigned char) (((l) >> 24L) & 0xff), *((out)++) = (unsigned char) (((l) >> 16L) & 0xff), *((out)++) = (unsigned char) (((l) >> 8L) & 0xff), *((out)++) = (unsigned char) (((l)) & 0xff));
    l = d[1];
    (*((out)++) = (unsigned char) (((l) >> 24L) & 0xff), *((out)++) = (unsigned char) (((l) >> 16L) & 0xff), *((out)++) = (unsigned char) (((l) >> 8L) & 0xff), *((out)++) = (unsigned char) (((l)) & 0xff));
    l = d[0] = d[1] = 0;
}
