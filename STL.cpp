//    Vector – Dynamic Array


#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v; // empty vector
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    cout << "Size: " << v.size() << endl;

    // Iterate
    for (int x : v) cout << x << " ";
    cout << endl;

    // Access element
    cout << "v[1] = " << v[1] << endl;

    // Sort
    sort(v.begin(), v.end(), greater<int>());
    for (int x : v) cout << x << " ";
    cout << endl;

    return 0;
}



/*
✅ Common use:
Store dynamic arrays, sort, iterate, push/pop elements.


2️⃣ Set – Unique & Sorted
#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(10); // duplicates ignored

    cout << "Size: " << s.size() << endl;

    for (int x : s) cout << x << " "; // prints sorted
    cout << endl;

    // Check if exists
    if (s.count(20)) cout << "20 exists" << endl;

    return 0;
}


✅ Common use:
Store unique elements, check existence, sorted order.






3️⃣ Map / Unordered Map – Key-Value Storage
#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> mp;
    mp["apple"] = 3;
    mp["banana"] = 5;
    mp["orange"] = 2;

    // Iterate
    for (auto &p : mp)
    {
        cout << p.first << " -> " << p.second << endl;
    }

    // Check key
    if (mp.count("banana")) cout << "Banana exists" << endl;

    // Unordered map (faster, not sorted)
    unordered_map<string,int> ump;
    ump["cat"] = 1;
    ump["dog"] = 2;

    return 0;
}


✅ Common use:
Count frequency, store key-value pairs, fast lookup.






4️⃣ Stack & Queue
#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    cout << st.top() << endl; // 20
    st.pop();
    cout << st.top() << endl; // 10

    queue<int> q;
    q.push(10);
    q.push(20);
    cout << q.front() << endl; // 10
    q.pop();
    cout << q.front() << endl; // 20

    return 0;
}


✅ Common use:
LIFO / FIFO operations.





5️⃣ Priority Queue (Heap)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> pq; // max heap
    pq.push(10);
    pq.push(30);
    pq.push(20);

    cout << pq.top() << endl; // 30
    pq.pop();
    cout << pq.top() << endl; // 20

    // Min heap
    priority_queue<int, vector<int>, greater<int>> pq_min;
    pq_min.push(10);
    pq_min.push(30);
    pq_min.push(20);
    cout << pq_min.top() << endl; // 10

    return 0;
}


✅ Common use:
Sort elements dynamically, get largest/smallest efficiently.





6️⃣ Algorithm Functions
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {5, 2, 9, 1, 5};

    sort(v.begin(), v.end());           // sort ascending
    reverse(v.begin(), v.end());        // reverse
    auto it = max_element(v.begin(), v.end()); // get max
    cout << *it << endl;

    int x = 5;
    cout << binary_search(v.begin(), v.end(), x) << endl; // 1 = exists

    return 0;
}


✅ Common use:
Sorting, searching, min/max, reverse, etc.






7️⃣ STL Strings
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Labz";

    s.push_back('!');
    cout << s << endl; // Labz!

    cout << s.size() << endl;

    sort(s.begin(), s.end());
    cout << s << endl; // !Labz sorted lexicographically

    return 0;
}




1️⃣ Basic Pair
#include <bits/stdc++.h>
using namespace std;

int main() {
    pair<int, int> p = {10, 20};

    cout << "First: " << p.first << endl;   // 10
    cout << "Second: " << p.second << endl; // 20

    // Modify values
    p.first = 30;
    p.second = 40;

    cout << p.first << " " << p.second << endl; // 30 40
}


✅ Use: Store two related values together.

*/
