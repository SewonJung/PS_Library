ll modular_add(const ll a, const ll b, const ll mod){
    __int128 ret = (__int128) a + (__int128) b;
    ret %= mod;
    return ret;
}

ll modular_multiply(const ll a, const ll b, const ll mod){
    return (__int128) a * b % mod;
}

ll modular_power(const ll a, ll b, const ll mod){
    ll ret = 1, piv = a;
    while (b){
        if (b & 1) ret = modular_multiply(ret, piv, mod);
        b >>= 1;
        piv = modular_multiply(piv, piv, mod);
    }

    return ret;
}
