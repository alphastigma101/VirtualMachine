#ifndef _DECLARATIONS_H_
#define _DECLARATIONS_H_
#include <memory>
#include <iostream>
#include <atomic>
#include <mutex>
#include <thread>
#include <any>
#include <cstddef>
#include <cstdint>
#include <string>
/** --------------------------------------------------------------------------
 * @brief All this alias templates are needed to avoid 
 *        using namespace std repetiviely which will make the code look more cleaner.
 * ---------------------------------------------------------------------------       
*/        
typedef std::string String;
typedef double Value;
// Containers
using Any = std::any;
// Pointers
template<typename T>
using Unique = std::unique_ptr<T>;
// Threading/Atomic/Mutex
template<typename T>
using Atomic = std::atomic<T>;

namespace Chunk {
    class chunk;
};
namespace Mem {
    class mem;
};
namespace Debug {
    class debug;
};
namespace ValueArray {
    class valueArray;
};

#endif