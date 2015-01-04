/**
 * @file 
 *      exercise_12_02.cpp
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 */
#include <exception>
#include <memory>
#include <string>
#include <vector>

using std::string;
using std::vector;

class StrBlob {
public:
    typedef std::vector<std::string>::size_type size_type;
    
    StrBlob();
    StrBlob(std::initializer_list<std::string> il);
    size_type size() const { return data->size(); }
    bool empty() const { return data->empty(); }
    
    void push_back(const std::string &t) { data->push_back(t); }
    void pop_back();
    
    std::string& front();
    const std::string& front() const;
    std::string& back();
    const std::string& back() const;
    
private:
    std::shared_ptr<std::vector<std::string>> data;
    void check(size_type i, const std::string &msg) const;
};

StrBlob::StrBlob(): data(std::make_shared<vector<string>>()) { }

StrBlob::StrBlob(std::initializer_list<std::string> il): 
        data(std::make_shared<vector<string>>(il)) { }

void StrBlob::check(size_type i, const std::string& msg) const {
    if (i >= data -> size())
        throw std::out_of_range(msg);
}

string& StrBlob::front() {
    check(0, "trying to retrieve front element of an empty StrBlob");
    return data->front();
}

const string& StrBlob::front() const {
    check(0, "trying to retrieve const front element of an empty StrBlob");
    return data->front();
}

string& StrBlob::back() {
    check(0, "trying to retrieve back element of an empty StrBlob ");
    return data ->back();
}

const string& StrBlob::back() const {
    check(0, "trying to retrieve back element of an empty StrBlob ");
    return data ->back();
}

void StrBlob::pop_back() {
    check(0, "trying to pop backend of an empty StrBlob");
    data->pop_back();
}
