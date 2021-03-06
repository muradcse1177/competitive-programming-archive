#include <iostream>
#include <string>
#include <vector>

using namespace std;

const vector<string> song {"Happy", "birthday", "to", "you",
                           "Happy", "birthday", "to", "you",
                           "Happy", "birthday", "to", "Rujia",
                           "Happy", "birthday", "to", "you"};

inline
void use_io_optimizations()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

int main()
{
    use_io_optimizations();

    unsigned int people;
    cin >> people;

    vector<string> names(people);

    for (auto& name : names)
    {
        cin >> name;
    }

    for (unsigned int i {0}; i < people || i % song.size(); ++i)
    {
        cout << names[i % people] << ": " << song[i % song.size()] << '\n';
    }

    return 0;
}
