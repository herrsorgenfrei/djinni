// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from foo_listener_bf.djinni

#pragma once

#include <cstdint>
#include <memory>
#include <string>
#include <vector>

namespace testsuite {

class FooListenerBf {
public:
    virtual ~FooListenerBf() {}

    virtual std::string on_string_change(const std::string & private_string) = 0;

    virtual std::string get_string() = 0;

    static std::shared_ptr<FooListenerBf> create();

    virtual void set_listener_bf(const std::shared_ptr<FooListenerBf> & listener) = 0;

    virtual std::shared_ptr<FooListenerBf> get_listener_bf() = 0;

    virtual void set_binary(const std::vector<uint8_t> & b) = 0;

    virtual std::vector<uint8_t> get_binary() = 0;

    virtual std::shared_ptr<FooListenerBf> send_return(const std::shared_ptr<FooListenerBf> & fl_bf) = 0;

    virtual void delete_fl_in_fl() = 0;
};

}  // namespace testsuite