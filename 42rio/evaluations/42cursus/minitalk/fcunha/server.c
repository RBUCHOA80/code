#include <unistd.h>
#include <stdio.h>
#include <signal.h>

void handler_receiver(int signal,  siginfo_t *info)
{
    static int c;
    static int counter;

    if(signal == SIGUSR1)
        c += 128 >> counter;
    counter++;
    if(counter == 8)
    {
        write(1, &c, 1);
        if(c == '\0')
        {
            kill(info->si_pid, SIGUSR1);
        }
        c = 0;
        counter = 0;
    }

}

int    main(void)
{
    struct sigaction sa;
    sa.sa_handler = (void *)handler_receiver;
    sa.sa_flags = 0;

    sigaction(SIGUSR1, &sa, NULL);
    sigaction(SIGUSR2, &sa, NULL);
    printf("pid number: %d\n", getpid());
    while (1)
        usleep(1000000);
    return (0);
}
