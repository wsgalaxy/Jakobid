#ifndef __JAKOBID_DEFINE_H__
#define __JAKOBID_DEFINE_H__

#define KB_LAYOUT_DIR   "JAKOBID TODO"
#define COLORSCHEMES_DIR    "JAKOBID TODO"

static inline int getpagesize()
{
    // FIXME
    return 0;
}

static void *mmap(void *addr, size_t length, int prot, int flags,
                  int fd, off_t offset)
{
    // FIXME
    return nullptr;
}

static int munmap(void *addr, size_t length)
{
    // FIXME
    return 0;
}

// FIXME
#define PROT_READ   0
#define PROT_WRITE  0
#define MAP_PRIVATE 0
#define MAP_ANON    0
#define MAP_FAILED  0

#endif
