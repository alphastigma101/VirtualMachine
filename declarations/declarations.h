#ifndef _DECLARATIONS_H_
#define _DECLARATIONS_H_
#include <variant>
#include <set>
#include <tuple>
#include <list>
#include <memory>
#include <unordered_map>
#include <iostream>
#include <typeinfo>
#include <functional>
#include <atomic>
#include <mutex>
#include <thread>
#include <any>
/** --------------------------------------------------------------------------
 * @brief All this alias templates are needed to avoid 
 *        using namespace std repetiviely which will make the code look more cleaner.
 * ---------------------------------------------------------------------------       
*/        
typedef std::string String;
template<typename K, typename V>
// Containers
using Map = std::map<K, V>;
template<typename K, typename V>
using MultiMap = std::multimap<K,V>;
template<typename K, typename V>
using Unordered = std::unordered_map<K, V>;
template<typename... T>
using Variant = std::variant<T...>;
template<typename T>
using Vector = std::vector<T>;
template<typename T>
using List = std::list<T>;

// Pointers
template<typename T>
using Shared = std::shared_ptr<T>;
template<typename T>
using Unique = std::unique_ptr<T>;
template<typename T>
using Weak = std::weak_ptr<T>;
// Threading/Atomic/Mutex
template<typename T>
using Atomic = std::atomic<T>;
using Any = std::any;
template<typename T>
using Set = std::set<T>;


#endif