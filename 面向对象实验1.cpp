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
	infile.open("�������ʵ��1data.txt");
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
	cout<<"������ѧ�Ų�ѯ��"<<endl;
	cin>>check;
	for(int i=1;i<=n;i++){
		if(s[i].code==check){
			cout<<"��ѧ���ĳɼ���ϢΪ��"<<endl; 
			cout<<s[i].code<<' '<<s[i].name<<' '<<s[i].p1<<' '<<s[i].p2<<' '<<s[i].p3<<" �ܳɼ���"<<s[i].p<<" ������"<<i<<endl;
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
	cout<<"��ֵΪ��"<<eve<<endl; 
	cout<<"��׼����Ϊ��"<<f<<endl;
	cout<<"��Ҫ������"<<endl<<"�����̫�����ˣ�ƽ����Ϊ"<<eve<<"�֣�";
	if(eve>60)
		cout<<"��Ȼ������60�֣�������2017��ѧ����Ĥ��ing��"<<endl; 
	else
		cout<<"���⣬��Ȼ��60�ֶ�û����������2017��ѧ����Ĥ��ing��"<<endl;
	system("pause");
	return 0;
}
