#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
    int n, m;
    cin>> n >> m;
    
    std::unordered_map<string, string> chefs;
    unordered_map<string, int> chefvotes;
    unordered_map<string, int> countryvotes;
    
    for (int i = 0; i < n; i++) {
        /* code */
        string chef, country;
        cin >> chef >> country;
        chefs[chef] = country;
    }
    
    for (int i = 0; i < m; i++) {
        /* code */
        string chef;
        cin >> chef;
        chefvotes[chef]++;
        countryvotes[chefs[chef]]++;
    }
    
    int maxcountryvotes = 0;
    string maxcountry = "zzzzzzzzzzzzzz";
    
    for (auto i = countryvotes.begin(); i != countryvotes.end(); i++) {
        if (i->second == maxcountryvotes) {
            if ((i->first).compare(maxcountry) < 0) {
                maxcountry = i->first;
            }
        }
        
        else if (i->second > maxcountryvotes) {
            maxcountryvotes = i->second;
            maxcountry = i->first;
        }
    }
    
    int maxchefvotes = 0;
    string maxchef = "zzzzzzzzzzzzzzzz";
    
    for (auto i = chefvotes.begin(); i != chefvotes.end(); i++) {
        /* code */
        if (i->second == maxchefvotes) {
            if ((i->first).compare(maxchef) < 0) {
                maxchef = i->first;
            }
        }
        
        else if (i->second > maxchefvotes) {
            maxchefvotes = i->second;
            maxchef = i->first;
        }
    }
    
    std::cout << maxcountry << std::endl;
        std::cout << maxchef << std::endl;
    
	return 0;
}
