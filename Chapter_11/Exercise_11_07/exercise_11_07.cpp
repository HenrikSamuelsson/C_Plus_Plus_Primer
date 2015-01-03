/**
 * @file
 *      exercise_11_07.cpp
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 */
#include <map>
#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::make_pair;
using std::map;
using std::pair;
using std::string;
using std::vector;

// Typedef for the type of map used in this program.
typedef map<string, vector<string>> f_map_t;

bool add_family(f_map_t &families, const string family_name);
bool add_child(f_map_t &families, const string family_name, 
        const string child_name);

/**
 * Program that test the add_family and add_child function.
 */
int main() {
   f_map_t families;    // Families and children will be added here.
   
   // Add some families and some children.
   add_family(families, "Simpsons");
   add_child(families, "Simpsons", "Lisa");
   add_child(families, "Simpsons", "Bart");
   add_family(families, "Duck");
   add_child(families, "Duck", "Huey");
   add_child(families, "Duck", "Dewey");
   add_child(families, "Duck", "Louie");
   add_child(families, "Simpsons", "Maggie");
   
   // Print all families and all children in each family.
   for (auto it=families.begin(); it!=families.end(); ++it) {
        std::cout << it->first << ": "; 
        for(auto it_s = it->second.begin(); it_s != it->second.end(); it_s++ ) {
            cout << *it_s << " ";
        }
        cout << endl;
   }

   return 0;
}

/**
 * @brief
 *      Adds a new empty family to the map.
 * @param
 *      families Holder of all family data.
 * @param 
 *      family_name Last name of the family.
 * @return 
 *      true If the family was added.
 */
bool add_family(f_map_t &families, const string family_name) {
    vector<string> v;   // Create an empty vector.
    pair<f_map_t::iterator, bool> res = families.insert(make_pair(family_name, v));
    return res.second;
}

/**
 * @brief
 *      Adds a child to an existing family.
 * @param 
 *      families Holder of all family data.
 * @param 
 *      family_name The family that the child shall belong to.
 * @param 
 *      child_name Name of the child.
 * @return 
 *      true If the child was added.
 */
bool add_child(f_map_t &families, const string family_name, 
        const string child_name) {
    // Try to find the family in the map.
    auto it = families.find(family_name);
    if(it == families.end()) {
        return false; // The family was not found so the child cannot be added.
    } else {
        // Get the current children in this family.
        vector<string> children = it->second;
        // Add the new child.
        children.push_back(child_name);
        // Update the map.
        families[family_name] = children;
        return true;
    }
}
