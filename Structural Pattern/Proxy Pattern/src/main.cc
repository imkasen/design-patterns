#include "../include/proxy.h"

int main(int argc, char* argv[]) {
    std::unique_ptr<Proxy> proxy_ptr = std::make_unique<Proxy>();
    proxy_ptr->request();

    return EXIT_SUCCESS;
}
