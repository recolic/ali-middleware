//
// Created by recolic on 18-5-16.
//

#ifndef ALI_MIDDLEWARE_AGENT_KV_SERIALIZER_HPP
#define ALI_MIDDLEWARE_AGENT_KV_SERIALIZER_HPP

#include <string>
#include <list>

class kv_serializer
{
public:
    using key_t = std::string;
    using value_t = std::string;
    using kv_list_t = std::list<std::pair<key_t, value_t> >;
    virtual std::string serialize(const kv_list_t &) const = 0;
    virtual kv_list_t deserialize(const std::string &) const = 0;
};


#endif //ALI_MIDDLEWARE_AGENT_KV_SERIALIZER_HPP
