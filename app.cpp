#include <iostream>
#include "app_generated.h"

int main(int argc, char** argv)
{
    auto builder = flatbuffers::FlatBufferBuilder();
    auto obj = app::CreateApp(builder, 0); // cout prints 12
    auto obj = app::CreateApp(builder, 1); // cout prints 20
    builder.Finish(obj);

    std::cout << builder.GetSize() << std::endl;
    return 0;
}
