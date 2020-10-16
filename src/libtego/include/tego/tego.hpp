#pragma once
// C

// libtego
#include <tego/tego.h>

// C++

// standard library
#include <stdexcept>
#include <memory>
#include <utility>
#include <memory>
#include <type_traits>

// libtego
#include <tego/utilities.hpp>
#include <tego/logger.hpp>

namespace tego
{
    //
    // converts tego_error_t** C style error handling to exceptions
    //
    class throw_on_error
    {
    public:
        ~throw_on_error() noexcept(false)
        {
            if (error_ != nullptr)
            {
                std::runtime_error ex(tego_error_get_message(error_));
                tego_error_delete(error_);
                error_ = nullptr;
                throw ex;
            }
        }

        operator tego_error_t**()
        {
            return &error_;
        }
    private:
        tego_error_t* error_ = nullptr;
    };
}


// define deleters for using unique_ptr and shared_ptr with tego types

#define TEGO_DEFAULT_DELETE_IMPL(TYPE)\
namespace std {\
    template<> class default_delete<TYPE##_t> {\
    public:\
        void operator()(TYPE##_t* val) { TYPE##_delete(val); }\
    };\
}

TEGO_DEFAULT_DELETE_IMPL(tego_ed25519_private_key)
TEGO_DEFAULT_DELETE_IMPL(tego_ed25519_public_key)
TEGO_DEFAULT_DELETE_IMPL(tego_ed25519_signature)
TEGO_DEFAULT_DELETE_IMPL(tego_v3_onion_service_id)

