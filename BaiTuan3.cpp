#include<iostream.h>
#include<math.h>
int main(){
	cout<<"\tHo va ten: Nguyen Nhu Ha, Lop: 15A2HN "<<endl;
	cout<<"\t  ...   ... "<<endl;
	cout<<"\t .   . .   .  "<<endl;
	cout<<"\t.     .     ."<<endl;
	cout<<"\t.           ."<<endl;
	cout<<"\t .         ."<<endl;
	cout<<"\t  .       ."<<endl;
	cout<<"\t    .   ."<<endl;
	cout<<"\t      ."<<endl;
	cout<<"\nBai 1"<<endl;;                              
	int n1;
	double s=0, t=1;
	do{
		cout<<"Nhap n: ";
	    cin>>n1;
	    if(n1<1){
    		cout<<"Vui long nhap lai n"<<endl;     //BAI 1
    	}
	}while(n1<1);
		for(int i=1;i<=n1;i++){
		s+=i;
	}cout<<"\nTong S= "<<s<<endl;
	
		cout<<"\nBai 2"<<endl;;
	int  n2;
	s=0;
	do{
		cout<<"Nhap n: ";
		cin>>n2;
		if(n2<1){
			cout<<"Vui long nhap lai n"<<endl;      //BAI 2
		}
	}while(n2<1);
	for(int i=1;i<=n2;i++){
		s+=pow(i,2);
	}cout<<"\nTong S= "<<s<<endl;

     cout<<"\nBai 3"<<endl;
	int n3;
	s=0;
	do{
		cout<<"Nhap n: ";
		cin>>n3;
		if(n3<1){
			cout<<"Vui long nhap lai n"<<endl;      //BAI 3
		}
	}while(n3<1);
	for(float i=1;i<=n3;i++){
		s+=1/i;
	}cout<<"\nTong s= "<<s<<endl;
	
	cout<<"\nBai 4"<<endl;;
	int n4;
	s=0;
	do{
		cout<<" Nhap n: ";
		cin>>n4;
		if(n4<1){
			cout<<"Vui long nhap lai n"<<endl;      //Bai 4
		}
	}while(n4<1);
	for(float i=1;i<=n4;i++){
		s+=1/(2*i);
	}cout<<"\nTong S="<<s<<endl;
	
	cout<<"\nBai 5"<<endl;
	int n5;
	s=0;
	do{
		cout<<"Nhap n: ";
		cin>>n5;
		if(n5<1){
			cout<<"Vui long nhap lai n "<<endl;    //Bai 5
		}
	}while(n5<1);
	for(float i=1;i<=n5;i++){
		s+=1/(2*i+1);
	}cout<<"\nTong S= "<<s<<endl;
	
	cout<<"\nBai 6"<<endl;
	int n6;
	s=0;
	do{
		cout<<"Nhap n: ";
		cin>>n6;
		if(n6<1){
			cout<<"Vui long nhap lai n"<<endl;        //BAI 6
		} 
	}while(n6<1);
	for(float i=1;i<=n6;i++){
		s+=1/(i*(i+1));
	}cout<<"\nTong S="<<s<<endl;
	
	cout<<"\nBai 7"<<endl;
	int n7;
	s=0;
	do{
		cout<<"Nhap n: ";
		cin>>n7;
		if(n7<1){
			cout<<"Vui long nhap lai n"<<endl;        //BAI 7	
		}
	}while(n7<1);
	for(float i=1;i<=n7;i++){
		s+=i/(i+1);
	}cout<<"\nTong S="<<s<<endl;
	 
    cout<<"\nBai 8"<<endl;
    int n8;
    s=0;
    do{
    	cout<<"Nhap n: ";
    	cin>>n8;
    	if(n8<1){
	    	cout<<"Vui long nhap lai n"<<endl;      //BAI 8
	    }
    }while(n8<1);
    for(float i=1;i<=n8;i++){
    	s+=(2*i+1)/(2*i+2);
    }cout<<"\nTong S="<<s<<endl;
    
    cout<<"\nBai 9"<<endl;
    int n9;
    do{
    	cout<<"Nhap n: ";
    	cin>>n9;
    	if(n9<1){
	    	cout<<"Vui Long nhap lai n"<<endl;         //BAI 9
	    }
    }while(n9<1);
    for(int i=1;i<=n9;i++){
    	t*=i;
    }cout<<"\nTich T="<<t<<endl;
	
	
	cout<<"\nBai 10"<<endl;
	int n10, x;
	t=1;
	cout<<"Nhap x: ";
	cin>>x;
	do{
		cout<<"Nhap n: ";
	cin>>n10;
	if(n10<1){
		cout<<"Vui long nhap lai n"<<endl;         //BAI 10
	}
	}while(n10<1);
	
	for(int i=1;i<=n10;i++){
		t*=pow(x,i);
	}cout<<"\nTich T="<<t<<endl;


}
