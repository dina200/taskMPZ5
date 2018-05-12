#include "simc.h"
#include <iostream>

using namespace std;

enum colors{
	Green,
	Red
};

int main() {
	cout << Green;
	cout << Red;
//	int t1 = 3, t2 = 5, t3 = 18;
//	
//	initlist(100);
//	pfacility sver_stanok, fraiz_stanok, tokar_stanok;
//	pqueue green, redf, redt;
//	newfac(sver_stanok, "sver_stanok"); 
//	newfac(fraiz_stanok, "fraiz_stanok");
//	newfac(tokar_stanok, "tokar_stanok");
//	newqueue(green, "Queue Green to sver_stanok");
//    newqueue(redf, "Queue Red to fraiz_stanok");
//    newqueue(redt, "Queue Red to tokar_stanok");
//	initcreate(1,45);// detail
//
//	initcreate(20,210);// fail
//	starttrace();
//	
//	 while(systime < 8 * 60) {	 	
//	 	plan();	 		
//        switch(sysevent) {
//            case 1: create(1); break;
//            case 2: if(randab(0, 1, v1) < 0,2){
//            			trans->pi[0] = Green;
//            			inqueue(green);
//					} 
//					else{
//						trans->pi[0] = Red;	
//					}inqueue(green); break;
//            case 3: seize(sver_stanok); break;
//            case 4: outqueue(green); break;
//            case 5: delayt(t1); break;
//            case 6: outfac(sver_stanok); break;
//            case 7: destroy(); break;
//            
//            
//            case 8: create(5); break;
//            case 9: inqueue(redf); break;
//            case 10: seize(fraiz_stanok); break;
//            case 11: outqueue(redf); break;
//            case 12: delayt(t2); break;
//            case 13: outfac(fraiz_stanok); break;
//            case 14: inqueue(redt); break;            
//            case 15: seize(tokar_stanok); break;
//            case 16: outqueue(redt); break;
//            case 17: delayt(t3); break;  
//			case 18: outfac(tokar_stanok); break;          
//            case 19: destroy(); break;
//            case 20: infac(tokar_stanok); break;
//            case 21: delayt(45); break;
//            case 22: outfac(tokar_stanok);break;
//            case 23: destroy();break;
//            		
//        }
//    }
//	printall();
	return 0;
}
