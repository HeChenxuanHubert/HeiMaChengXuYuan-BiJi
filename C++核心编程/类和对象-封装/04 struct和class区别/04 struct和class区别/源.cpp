#include<iostream>
using namespace std;
class C1 {
	int m_A;//默认权限：私有
};
struct C2 {
	int m_A;//默认权限：公共
};
int main() {

	//struct和class区别
	//struct默认权限是 公共 public
	//class默认权限是  私有 private

	C1 c1;
	//c1.m_A = 100;私有成员，不可访问
	C2 c2;
	c2.m_A = 100;//在struct默认的权限是公共，因此可以访问


	system("pause");
	return 0;
}