#include<bits/stdc++.h>
using namespace	std;

struct node {
	int l_bound, r_bound;
	int lson_idx, rson_idx;
	int subtree_ans;
	node() {

	}
	node(int value, int idx) { // 用于叶子的，
		subtree_ans = value;
		l_bound = r_bound = idx;

		lson_idx = rson_idx = -1; // 用不到
	}
};

vector<node> SEGTREE;
int A[16] = {1, 1, 4, 5, 1, 4, 1, 9, 1, 9, 8, 1, 0, 222, 114514, 666};

int mycal(int x, int y) {
	return x + y;
}
const int MYZERO = 0;

node merge(int lson, int rson) {
	node tmp;
	tmp.lson_idx = lson;
	tmp.rson_idx = rson;
	tmp.l_bound = SEGTREE[lson].l_bound;
	tmp.r_bound = SEGTREE[rson].r_bound;
	tmp.subtree_ans = mycal( SEGTREE[lson].subtree_ans, SEGTREE[rson].subtree_ans );
	cerr << "----Merge:" << SEGTREE[lson].subtree_ans << " , " << SEGTREE[rson].subtree_ans << "    \t---->" << tmp.subtree_ans << endl;
	return tmp;
}

int build_node(int L, int R) {
	// L R 是当前结点对应的区间左右边界
	if (L == R) {
		SEGTREE.push_back( node(A[L], L) );
		return SEGTREE.size() - 1;
	}

	int MID = (L + R) / 2;
	int ls = build_node(L, MID);
	int rs = build_node(MID + 1, R); // MID自动向下取整的
	SEGTREE.push_back( merge(ls, rs) );
	return SEGTREE.size() - 1;
}

void build_tree(int tree_size) {
	build_node(0, tree_size - 1);
	// 根节点在最后面；
}

int subtree_query(int L, int R, int curr_idx) {
	cerr << "====In Node: " << curr_idx << endl;
	node& x = SEGTREE[curr_idx];
	if (x.r_bound < L || x.l_bound > R) {
		// 当前点对应的区间与查询区间完全没有关联
		return MYZERO;
	}
	if (x.l_bound >= L && x.r_bound <= R) {
		// 当前点对应的区间在查询区间内部
		return x.subtree_ans;
	}
	// 除了上面两种情况，就对左右孩子分别查询
	return mycal( subtree_query(L, R, x.lson_idx), subtree_query(L, R, x.rson_idx) );
}

int query(int l, int r) {
	return subtree_query(l, r, SEGTREE.size() - 1);
}

int main() {

	build_tree(16);

	while (1) {
		int l, r;
		cin >> l >> r;
		cout << query(l, r) << endl;
	}

	return 0;
}
