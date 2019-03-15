/**
 * Copyright (c) 2011-2018 libbitcoin developers (see AUTHORS)
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
#ifndef LIBBITCOIN__FORMATS_BASE_32_HPP
#define LIBBITCOIN__FORMATS_BASE_32_HPP

#include <string>
#include <bitcoin/bitcoin/define.hpp>
#include <utility_data_chunk.hpp>

namespace libbitcoin {
namespace api {

/**
 * TODO: implement as config class, see wrapped_data.
 * The structure for bitcoin base32 encoding.
 */
class BC_API formats_base32
{
    std::string prefix;
    utility_data_chunk payload;
};

/**
 * Encode data as base32.
 * @return the base32 encoded string.
 */
BC_API std::string encode_base32(const formats_base32& unencoded);

/**
 * Decode base32 data.
 * @return false if the input is not a valid base32 encoded string.
 */
BC_API bool decode_base32(formats_base32& out, const std::string& in);

} // namespace api
} // namespace libbitcoin

#endif

