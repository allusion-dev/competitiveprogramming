#include <bits/stdc++.h>
using namespace std;
int n;
int cb,ce,cd,cg,ca,cm,ch = 0;
vector<string> s;
vector<int> c;
vector<int> fi;
vector<int> fi2;
vector<int> fi3;
vector<string> fi4;
set<int> se;
int ans;
int main(){
  freopen("notlast.in", "r", stdin);
  freopen("notlast.out", "w", stdout);
  cin >> n;
  for (int i=0;i<n;i++){
    int in;
    string st;
    cin >> st >> in;
    s.push_back(st);
    c.push_back(in);
  }
  for (int i=0;i<n;i++){
      if(s[i]=="Bessie"){
        cb += c[i];
      }
      if(s[i]=="Elsie"){
        ce += c[i];
      }
      if(s[i]=="Daisy"){
        cd += c[i];
      }
      if(s[i]=="Gertie"){
        cg += c[i];
      }
      if(s[i]=="Annabelle"){
        ca += c[i];
      }
      if(s[i]=="Maggie"){
        cm += c[i];
      }
      if(s[i]=="Henrietta"){
        ch += c[i];
      }
    }
    fi.push_back(cb);
    fi.push_back(ce);
    fi.push_back(cd);
    fi.push_back(cg);
    fi.push_back(ca);
    fi.push_back(cm);
    fi.push_back(ch);
    fi2 = fi;
    for (int i=0;i<fi.size();i++){
      se.insert(fi[i]);
    }
    for (int i=0;i<fi.size();i++){
    auto it = se.begin();
    advance(it, i);
    fi3.push_back(*it);
    }
  int g = fi3[1];
    for (int i=0;i<7;i++){
      if(fi[i]==g){

      if(i==0){
        fi4.push_back("Bessie");
      }
      if(i==1){
        fi4.push_back("Elsie");
      }
      if(i==2){
        fi4.push_back("Daisy");
      }
      if(i==3){
        fi4.push_back("Gertie");
      }
      if(i==4){
        fi4.push_back("Annabelle");
      }
      if(i==5){
        fi4.push_back("Maggie");
      }
      if(i==6){
        fi4.push_back("Henrietta");
      }
    }
  }
  if(fi4.size()>1){
    cout << "Tie";
  }
  if(fi4.size()==1){
    cout << fi4[0];
  }
}