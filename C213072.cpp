#include<iostream>
#include<ctime>
#include<numeric>
#include<tuple>
#include<iomanip>
#include<cstdlib>
#include<queue>
#include<stack>
#include<map>
#include<unordered_map>
#include<cmath>
#include<cstdio>
#include<vector>
#include<climits>
#include<algorithm>
#include<string>
#include<sstream>
#include<cstring>
#include<deque>
#include<set>
#include<fstream>
#define   YES    cout << "YES\n"
#define   yes    cout << "yes\n"
#define   Yes    cout << "Yes\n"
#define   NO     cout << "NO\n"
#define   No     cout << "No\n"
#define   no     cout << "no\n"
using namespace std;
class Product
{ 
    public:
    int Product_Id;
    string Product_Catagory;
    string Product_Name;
        void Getdata()
        {
           ifstream IN("ProductIN.txt");
           IN>>Product_Id;
           IN>>Product_Name;
           IN>>Product_Catagory;
           IN.close();
        }
        void Outdata()
        { 
           ofstream OUT("ProductOut.txt");
           OUT<<"Product ID: "<<Product_Id<<endl;
           OUT<<"Product Name: "<<Product_Name<<endl;
           OUT<<"Product Catagory: "<<Product_Catagory<<endl;
           OUT.close();
        }
}; 
class SoldProduct : public Product
{
    public:
    int Customer_Id;
    int Customer_Price;
        void SoldGetdata()
        {
            ifstream IN("CustomerIN.txt");
            IN>>Customer_Id;
            IN>>Customer_Price;
            IN.close();
        }
        void SoldOutdata()
        {
            ofstream OUT("CustomerOUT.txt");
            OUT<<"Customer ID: "<<Customer_Id<<endl;
            OUT<<"Customer Price: "<<Customer_Price<<endl;
            OUT.close();
        }
};
class BoughtProduct: public Product
{ 
    public:
    int Buyer_Id;
    int  Buyer_Price;
    string  Buyer_Name;
        void BoughtGetdata()
        {
            ifstream IN("BuyerIN.txt");
            IN>>Buyer_Id;
            IN>>Buyer_Name;
            IN>>Buyer_Price;
            IN.close();
        }
        void BoughtOutdata()
        {
            ofstream OUT("BuyerOUT.txt");
            OUT<<"Buyer ID: "<<Buyer_Id<<endl;
            OUT<<"Buyer Name: "<<Buyer_Name<<endl;
            OUT<<"Buyer Price: "<<Buyer_Price<<endl;
            OUT.close();
        }
};
int  main()
{
    Product Pdt;
    SoldProduct Spdt;
    BoughtProduct Bpdt;
    Pdt.Getdata();
    Pdt.Outdata();
    Spdt.SoldGetdata();
    Spdt.SoldOutdata();
    Bpdt.BoughtGetdata();
    Bpdt.BoughtOutdata();
    return 0;
}