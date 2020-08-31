#include "walletManager.h"

struct Wallet *createWallet(int septims) {
    Wallet *wallet = new Wallet;

    wallet->septims = septims;
    return wallet;
}

void destroyWallet(struct Wallet* wallet) {
    delete wallet;
}

struct Wallet *createWallets(int amount) {
    Wallet *wallets = new Wallet[amount];
    return wallets;
}

void desttroyWallets(struct Wallet* wallet) {
    delete [] wallet;
}
