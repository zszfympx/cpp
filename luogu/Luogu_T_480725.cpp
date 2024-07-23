#include<bits/stdc++.h>
using namespace std;

struct table{
    int rows;
    map<string, int> col;
    vector<string> row[11];
}tables[11];
map<string, int> table_id;

int main(){
    int n;
    cin>>n;
    for(int i = 0; i<n; i++){
        string name;
        cin>>name;
        table_id[name] = i;
        int x, y;
        cin>>x>>y;
        tables[i].rows = x-1;
        for(int i = 0; i<y; i++){
            string col_name;
            cin>>col_name;
            tables[i].col[col_name] = i;
        }
        for(int a = 0; a<x-1; a++){
            for(int j = 0; j<y; j++){
                string row_value;
                cin>>row_value;
                tables[i].row[a].push_back(row_value);
            }
        }
    }

    int m;
    cin>>m;
    while(m--){
        string s, columns, tablename, header_row, header_key, header_value;
        cin>>s>>columns>>s>>tablename>>s>>header_row;
        vector<string> cols;
        int l = 0, cur = 0;
        while(columns.find(",", cur)<=columns.length()){
            cur = columns.find(",", cur);
            cols.push_back(columns.substr(l, cur-l));
            l = cur;
        }
        cols.push_back(columns.substr(l, columns.length()-l));
        cur = header_row.find("=");
        header_key = header_row.substr(0, cur);
        header_value = header_row.substr(cur+1, header_row.length()-cur-1);
        table t = tables[table_id[tablename]];
        int key = t.col[header_key];
        int vals[11];
        for(int i = 0; i<cols.size(); i++){
            vals[i] = t.col[cols[i]];
        }
        for(int i = 0; i<t.rows; i++){
            if(t.row[key][i]==header_value){
                for(int j = 0; j<cols.size(); j++){
                    cout<<t.row[vals[j]][i]<<" ";
                }
                cout<<"\n";
            }   
        }
    }
    return 0;
}