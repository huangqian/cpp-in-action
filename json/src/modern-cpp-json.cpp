//
// Created by huangqian on 2018-12-19.
//
// json for modern c++
// github url: https://github.com/nlohmann/json

#include <nlohmann/json.hpp>
#include <iostream>


//using json = nlohmann::json;
using namespace nlohmann;
using namespace std;

void test_json_obejct(){

    json j;

    j["pi"] = 3.14;
    j["happy"] = true;
    j["name"] = "Niels";
    j["nothing"] = nullptr;
    j["answer"]["everything"] = 42;
    j["list"] = {1, 0, 2};
    j["object"] = { {"currency", "USD"}, {"value", 42.99}};
    cout << j << endl;
    string str = j.dump();
    cout << str << endl;
}

void test_json_deserialization(){

    json j = "{ \"happy\": true, \"pi\": 3.141 }"_json;
    cout << "happy=" << j["happy"] <<endl;
}

void test_vector_to_json(){
    vector<std::uint8_t> v = {'t', 'r', 'u', 'e'};
    json j = json::parse(v.begin(), v.end());
    cout << j.dump() << endl;
}

int main()
{

    test_json_obejct();
    test_json_deserialization();

    json j_string = "this is a string";
    auto cpp_string = j_string.get<string>();
    cout << cpp_string << endl;

    test_vector_to_json();
    return 0;
}

