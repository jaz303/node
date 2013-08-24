#include "presto_entry.h"

#include <allegro5/allegro.h>

static int presto_main(int argc, char *argv[]) {
    al_install_system(ALLEGRO_VERSION_INT, NULL);
    return node::Start(argc, argv);
}

int presto::Start(int argc, char *argv[]) {
    return al_run_main(argc, argv, presto_main);
}