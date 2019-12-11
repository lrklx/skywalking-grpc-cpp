/*************************************************************************
 File Name: Base64.h
 Created Time: Thu 28 Nov 2019 05:15:08 PM CST
 Author: LiYanYan
 Description: 
 ************************************************************************/
#ifndef BASE64_H__
#define BASE64_H__
#include <string>
class Base64 {
	public:
	static std::string base64_encode(unsigned char const* , unsigned int len);
	static std::string base64_encode_url(unsigned char const* , unsigned int len);
	static std::string base64_decode(std::string const& s);
	static std::string base64_decode_url(std::string const& s);
	static bool is_base64(unsigned char c);
	private:
	static const std::string base64_chars;
	static const std::string base64_url_chars;
};
#endif // BASE64_H__
