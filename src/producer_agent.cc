//
// Created by recolic on 18-5-17.
//

#include "producer_agent.hpp"

producer_agent::producer_agent(const std::string &etcd_addr, uint16_t etcd_port)
        : sockEtcd(io_context) {
    // TODO: Connect to etcd, register myself. Launch heartbeat thread.
}

void producer_agent::listen(const std::string &listen_addr, uint16_t listen_port) {
    // TODO: Launch http server, listen consumer request, and make dubbo request(thread or coroutine).
}