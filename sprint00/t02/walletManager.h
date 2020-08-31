//
// Created by oarnopolin on 20.08.20.
//

#ifndef T02_WALLETMANAGER_H
#define T02_WALLETMANAGER_H

#include <iostream>

struct Wallet *createWallet(int septims);
void destroyWallet(struct Wallet* wallet);
void desttroyWallets(struct Wallet* wallet);
struct Wallet *createWallets(int amount);

struct Wallet {
    int septims;
};

#endif //T02_WALLETMANAGER_H
