#https://leetcode.com/problems/employee-importance/

/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
    unordered_map<int, Employee*> m;
    
    int find(int id)
    {
        Employee* e=m[id];
        int ans= e->importance;
        for(int i=0; i<e->subordinates.size(); i++)
        {
            ans+=find(e->subordinates[i]);
        }
        return ans;
    }
    
    int getImportance(vector<Employee*> employees, int id) {
        for(Employee* x:employees)
        {
            m[x->id]=x;
        }
        return find(id);
    }
};
