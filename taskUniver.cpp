#include "simc.h"

enum details{
	Green,
	Red, 
	Fail
};

int main() {
	
	int ttok = 18;
	
	initlist(8 * 60);
	
	pfacility sver_stanok, fraiz_stanok, tokar_stanok;
	
	pqueue qs, qf, qt;
	newfac(sver_stanok, "sver_stanok"); 
	newfac(fraiz_stanok, "fraiz_stanok");
	newfac(tokar_stanok, "tokar_stanok");
	newqueue(qs, "Queue Green to sver_stanok");
    newqueue(qf, "Queue Red to fraiz_stanok");
    newqueue(qt, "Queue Red to tokar_stanok");
	
	initcreate(1, 45);// detail	
	
	starttrace();
	
	 while(systime < 8 * 60) {	 	
	 	plan();	 		
        switch(sysevent) {
            case 1: create(1); break;            
			case 2: if(randab(0, 1, v1) < 0,2){
            			trans->pi[0] = Green;
            			inqueue(qs);
					} 
					else{
						trans->pi[0] = Red;
						trans->pr[0] = 22; 
						inqueue(qf);	
					} 
					break;            
			case 3: if(trans->pi[0] == Green) seize(sver_stanok);
					else if(trans->pi[0] == Red) seize(fraiz_stanok); 	
			 		break;            
			case 4: if(trans->pi[0] == Green) outqueue(qs);
					else if(trans->pi[0] == Red) outqueue(qf); 	
			 		break;			
            case 5: if(trans->pi[0] == Green) { 
            			trans->pr[0] = 2.0;
						delayt(randab(2, 4, v1));
					}
					else if(trans->pi[0] == Red) { 
						if (randab(0, 1, v1) <= 0,15) trans->pr[1] = 25;
						else trans->pr[1] = randab(6, 20, v1);
						delayt(randab(4, 6, v1));						
					} break;
            
			case 6: if(trans->pi[0] == Green) outfac(sver_stanok);
					else if(trans->pi[0] == Red) outfac(fraiz_stanok); 	
			 		break; 
						
            case 7: if(trans->pi[0] == Green) destroy(); 
            		else if((trans->pi[0] == Red) && (trans->pr[0] + trans->pr[1]) > 45) delayt(randab(1, 3, v1));  
					else if(trans->pi[0] == Red) next(8);         		          
					break;
					
			case 8: if(trans->pi[0] == Red) inqueue(qt); 
					break;
            case 9: if(trans->pi[0] == Red) seize(tokar_stanok); 
            		break;            		
            case 10: if(trans->pi[0] == Red) outqueue(qt);
            		break;            
			case 11: if(trans->pi[0] == Red) delayt(ttok); 
            		break;					
			case 12: if(trans->pi[0] == Red) outfac(tokar_stanok);
            		break;			
			
			case 13: if(randab(0, 1, v1) < 0.075) {
					trans->pb[0] = true;
					} break;
			
			case 14: if(trans->pb[0]) {
					infac(tokar_stanok);
					} break;
			case 15: if(trans->pb[0]) {
					delayt(randab(75, 165, v1));
					} break;
			case 16: if(trans->pb[0]) {
					outfac(tokar_stanok);
					} break;
			
			case 17: if(trans->pb[0]) {
					trans->pb[0] = false;
					destroy();					
					} break;
			case 18: if(trans->pi[0] == Red) destroy(); break;
        }
    }
	printall();
	return 0;
}
