#include <cstdio>
#include <iostream>

using namespace std;

int main(void){
    string cur, tar;
    long long ans;

    cin >> cur;
    cin >> tar;

    int ch, cm, cs, th, tm, ts, cur_t, tar_t, h, m , s;
    ch = (cur[0] - '0') * 10 + cur[1] - '0';
    cm = (cur[3] - '0') * 10 + cur[4] - '0';
    cs = (cur[6] - '0') * 10 + cur[7] - '0';
    th = (tar[0] - '0') * 10 + tar[1] - '0';
    tm = (tar[3] - '0') * 10 + tar[4] - '0';
    ts = (tar[6] - '0') * 10 + tar[7] - '0';
    cur_t = ch * 3600 + cm * 60 + cs;
    tar_t = th * 3600 + tm * 60 + ts;
    
    if(cur_t == tar_t){
        printf("24:00:00\n"); 
        return 0;
    } 

	h = (th - ch + 24) % 24;
	m = (tm - cm + 60) % 60;
	s = (ts - cs + 60) % 60;
    
    if(cs > ts){
    	if(cm >= tm) 
    		h--;
    	m--;
    } else if(cm > tm) 
    	h--;
    
    h = (h + 24) % 24;
    m = (m + 60) % 60;
    s = (s + 60) % 60;
    
    if(h < 10) {
        if(m < 10){
            if(s < 10) printf("0%d:0%d:0%d\n", h, m, s);
            else printf("0%d:0%d:%d\n", h, m, s);
        } else {
            if(s < 10) printf("0%d:%d:0%d\n", h, m, s);
            else printf("0%d:%d:%d\n", h, m, s);            
        }
    } else {
        if(m < 10){
            if(s < 10) printf("%d:0%d:0%d\n", h, m, s);
            else printf("%d:0%d:%d\n", h, m, s);
        } else {
            if(s < 10) printf("%d:%d:0%d\n", h, m, s);
            else printf("%d:%d:%d\n", h, m, s);         
        }       
    }

    return 0;
}