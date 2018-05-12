#include "simc.h"

int main() {
	
	int t1 = 3, t2 = 5, t3 = 18;
	
	initlist(100);
	pfacility sver_stanok, fraiz_stanok, tokar_stanok;
	pqueue green, redf, redt;
	newfac(sver_stanok, "sver_stanok"); 
	newfac(fraiz_stanok, "fraiz_stanok");
	newfac(tokar_stanok, "tokar_stanok");
	newqueue(green, "Queue Green to sver_stanok");
    newqueue(redf, "Queue Red to fraiz_stanok");
    newqueue(redt, "Queue Red to tokar_stanok");
	initcreate(1,45);
	initcreate(8,45);
	starttrace();
	
	 while(systime < 8 * 60) {	 	
	 	plan();	 		
        switch(sysevent) {
            case 1: create(5); break;
            case 2: inqueue(green); break;
            case 3: seize(sver_stanok); break;
            case 4: outqueue(green); break;
            case 5: delayt(t1); break;
            case 6: outfac(sver_stanok); break;
            case 7: destroy(); break;
            
            case 8: create(5); break;
            case 9: inqueue(redf); break;
            case 10: seize(fraiz_stanok); break;
            case 11: outqueue(redf); break;
            case 12: delayt(t2); break;
            case 13: outfac(fraiz_stanok); break;
            case 14: inqueue(redt); break;            
            case 15: seize(tokar_stanok); break;
            case 16: outqueue(redt); break;
            case 17: 
					if (systime == 140) delayt(t3+55); 
					else delayt(t3); 
					break;  
			case 18: outfac(tokar_stanok); break;          
            case 19: destroy(); break;
        }
    }
	printall();
	return 0;
}
