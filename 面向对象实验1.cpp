#include<bits/stdc++.h>
using namespace std;
int n;
double eve=0.00,f=0.00;
struct stu{
	int code;
	string name;
	int p1,p2,p3;
	int p;
	};
stu s[10001];
int cmp(stu x,stu y){
	return x.p>y.p;
	}
int main(){
	ifstream infile;
	infile.open("面向对象实验1data.txt");
	if(!infile) cout<<"error"<<endl;
	while(!infile.eof()){
		infile>>n;
		for(int i=1;i<=n;i++){
			infile>>s[i].code>>s[i].name>>s[i].p1>>s[i].p2>>s[i].p3;
			s[i].p=0.2*s[i].p1+0.2*s[i].p2+0.6*s[i].p3;
			}
		}
	infile.close();
	sort(s+1,s+1+n,cmp);
	int check;
	cout<<"请输入学号查询："<<endl;
	cin>>check;
	for(int i=1;i<=n;i++){
		if(s[i].code==check){
			cout<<"该学生的成绩信息为："<<endl; 
			cout<<s[i].code<<' '<<s[i].name<<' '<<s[i].p1<<' '<<s[i].p2<<' '<<s[i].p3<<" 总成绩："<<s[i].p<<" 排名："<<i<<endl;
			}
		}
	for(int i=1;i<=n;i++){
		eve+=s[i].p;
		}
	eve=eve/n;
	for(int i=1;i<=n;i++){
		f=f+(s[i].p-eve)*(s[i].p-eve);
		}
	f=sqrt(f/n);
	cout<<"均值为："<<eve<<endl; 
	cout<<"标准方差为："<<f<<endl;
	cout<<"简要分析："<<endl<<"这个班太厉害了！平均分为"<<eve<<"分！";
	if(eve>60)
		cout<<"居然超过了60分！不愧是2017级学生，膜拜ing。"<<endl; 
	else
		cout<<"啊这，居然连60分都没过！不愧是2017级学生，膜拜ing。"<<endl;
	system("pause");
	return 0;
}
