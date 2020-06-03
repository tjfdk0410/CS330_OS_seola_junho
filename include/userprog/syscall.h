#ifndef USERPROG_SYSCALL_H
#define USERPROG_SYSCALL_H

struct lock lock_access_file;
struct list open_files;
void syscall_init (void);

#endif /* userprog/syscall.h */
