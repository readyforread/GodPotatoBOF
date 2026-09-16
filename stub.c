// common/stub.c
#include <windows.h>

// Заглушки для CS-only API, которых нет в bof-launcher.
// BOF использует BeaconUseToken только в режиме "token" — при -cmd не вызывается.
// Заглушка нужна, чтобы линкер нашёл символ и BOF загрузился в cli4bofs.

BOOL BeaconUseToken(HANDLE token) {
    (void)token;
    return TRUE;
}

void BeaconRevertToken(void) {
    // no-op
}

BOOL BeaconIsAdmin(void) {
    return FALSE;
}
