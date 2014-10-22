#pragma once

// This is an attempt to turn the "Client7z" sample into a usable and simple
// 7-zip extraction library.
// By Henrik Rydgård

#include <inttypes.h>


typedef void (*ProgressCallback)(int64_t bytes, int64_t of, void *userdata);

void Extract7Zip(const char *archivePath, const char *destFolder, ProgressCallback callback, void *userdata);
void List7Zip(const char *archivePath);
