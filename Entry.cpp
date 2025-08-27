//3


vector<pair<string, string>> setDictionaryEntry(
    vector<pair<string, string>> dict, string key, string value, size_t index = 0) {

    if (index == dict.size()) {
        dict.push_back({ key, value });
        return dict;
    }
    if (dict[index].first == key) {
        dict[index].second = value;
        return dict;
    }
    return setDictionaryEntry(dict, key, value, index + 1);
}
