/**
 * Copyright (c) 2011-2017 libbitcoin developers (see AUTHORS)
 *
 * This file is part of libbitcoin.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef LIBBITCOIN__MESSAGE_FILTER_ADD_HPP
#define LIBBITCOIN__MESSAGE_FILTER_ADD_HPP

//#include <istream>
//#include <memory>
//#include <string>
#include <bitcoin/bitcoin/define.hpp>
#include <bitcoin/bitcoin/message/filter_add.hpp>
#include <bitcoin/utility_data_chunk.hpp>
//#include <bitcoin/bitcoin/utility/data.hpp>
//#include <bitcoin/bitcoin/utility/reader.hpp>
//#include <bitcoin/bitcoin/utility/writer.hpp>

namespace libbitcoin {
//namespace message {
namespace api {

class BC_API message_filter_add
{
public:
//    typedef std::shared_ptr<filter_add> ptr;
//    typedef std::shared_ptr<const filter_add> const_ptr;

    static message_filter_add factory(uint32_t version, const utility_data_chunk& data);
//    static message_filter_add factory(uint32_t version, std::istream& stream);
//    static message_filter_add factory(uint32_t version, reader& source);

    message_filter_add();
//    message_filter_add(const utility_data_chunk& data);
    message_filter_add(utility_data_chunk&& data);
    message_filter_add(const message_filter_add& other);
//    message_filter_add(message_filter_add&& other);

    utility_data_chunk& data();
//    const utility_data_chunk& data() const;
//    void set_data(const utility_data_chunk& value);
    void set_data(utility_data_chunk&& value);

    bool from_data(uint32_t version, const utility_data_chunk& data);
//    bool from_data(uint32_t version, std::istream& stream);
//    bool from_data(uint32_t version, reader& source);
    utility_data_chunk to_data(uint32_t version) const;
//    void to_data(uint32_t version, std::ostream& stream) const;
//    void to_data(uint32_t version, writer& sink) const;
    bool is_valid() const;
    void reset();
    size_t serialized_size(uint32_t version) const;

    // This class is move assignable but not copy assignable.
//    message_filter_add& operator=(message_filter_add&& other);
    message_filter_add& assign(message_filter_add&& other);
//    void operator=(const message_filter_add&) = delete;

//    bool operator==(const message_filter_add& other) const;
    bool eq(const message_filter_add& other) const;
//    bool operator!=(const message_filter_add& other) const;

//    static const std::string command;
//    static const uint32_t version_minimum;
//    static const uint32_t version_maximum;
//
public:
    message::filter_add* getValue() {
        return value_;
    }

    void setValue(message::filter_add* value) {
        value_ = value;
    }
private:
    message::filter_add* value_;
//    utility_data_chunk data_;
};

} // namespace api
//} // namespace message
} // namespace libbitcoin

#endif