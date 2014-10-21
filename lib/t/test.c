#include "./test.h"

int main(int argc, char **argv)
{
    subtest("lib/string.c", test_lib__string_c);
    subtest("lib/util.c", test_lib__util_c);
    subtest("lib/http2/hpack.c", test_lib__http2__hpack);
    return done_testing();
}