#include <vector>
#include <string>
using std::vector;
using std::pair;
using std::string;

vector<pair<string, string>> setDictionaryEntry(
    vector<pair<string, string>> dict, string key, string value, size_t index = 0) {

    if (index == dict.size()) {
        dict.push_back({ key, value }); // not found, add new
        return dict;
    }
    if (dict[index].first == key) {
        dict[index].second = value;   // update existing
        return dict;
    }
    return setDictionaryEntry(dict, key, value, index + 1);
}