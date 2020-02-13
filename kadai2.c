#include<pic18f4550.h>
#include<xc.h>
// USB  Config
#pragma config PLLDIV = 5       
#pragma config VREGEN = OFF
#pragma config USBDIV = 2       

// CPU Clock
#pragma config FOSC = HSPLL_HS 
#pragma config CPUDIV = OSC1_PLL2

// Reset 
#pragma config FCMEN = OFF
#pragma config IESO = OFF
#pragma config PWRT = ON 
#pragma config BOR = ON                      
#pragma config BORV = 1
#pragma config MCLRE = ON                

     
// Watch Timer
#pragma config WDT = OFF        
#pragma config WDTPS = 32768
   
// Other
#pragma config CCP2MX = ON      
#pragma config PBADEN = ON      
#pragma config LPT1OSC = OFF          
#pragma config STVREN = ON      
#pragma config LVP = OFF       
#pragma config ICPRT = OFF      
#pragma config CP0 = OFF       
#pragma config CP1 = OFF        
#pragma config CP2 = OFF        
#pragma config CP3 = OFF        
#pragma config CPB = OFF       
#pragma config CPD = OFF        
#pragma config WRT0 = OFF       
#pragma config WRT1 = OFF      
#pragma config WRT2 = OFF      
#pragma config WRT3 = OFF       
#pragma config WRTC = OFF       
#pragma config WRTB = OFF       
#pragma config WRTD = OFF      
#pragma config EBTR0 = OFF      
#pragma config EBTR1 = OFF      
#pragma config EBTR2 = OFF      
#pragma config EBTR3 = OFF      
#pragma config EBTRB = OFF      

#define _XTAL_FREQ 20000000

#define sih 4.05f

#define do 3.82f
#define dos 3.61f
#define re 3.41f
#define res 3.21f
#define mi 3.03f
#define fa 2.86f
#define fas 2.70f
#define so 2.55f
#define sos 2.41f
#define ra 2.27f
#define ras 2.15f
#define si 2.025f

#define dot 1.911f
#define dost 1.805f
#define ret 1.705f
#define rest 1.605f
#define mit 1.515f
#define fat 1.43f
#define fast 1.35f
#define sot 1.275f
#define sost 1.205f
#define rat 1.135f
#define rast 1.075f
#define sit 1.0125f

#define dott 0.9555f
#define rett 0.8525f
#define mitt 0.7575f
#define fatt 0.715f
#define sott 0.6375f
#define ratt 0.5675f


void hann(float,float);

void kyu(float);

void desih(float);

void dedo(float);
void dedos(float);
void dere(float);
void deres(float);
void demi(float);
void defa(float);
void defas(float);
void deso(float);
void desos(float);
void dera(float);
void deras(float);
void desi(float);

void dedot(float);
void dedost(float);
void deret(float);
void derest(float);
void demit(float);
void defat(float);
void defast(float);
void desot(float);
void desost(float);
void derat(float);
void derast(float);
void desit(float);

void dedott(float);
void derett(float);
void demitt(float);
void defatt(float);
void desott(float);
void deratt(float);

void main(void){
    TRISD = 0x70;
    PORTD = 0;
    
    hann(ret,0.5);
    hann(mit,1);
    hann(fat,0.5);
    hann(fat,1);
    
    hann(mit,0.5);
    hann(fat,0.5);
    hann(sot,1);
    hann(fat,0.5);
    
    hann(fat,1);
    hann(mit,1);
    hann(fat,0.5);
    hann(sot,0.5);
    hann(dot,0.25);
    hann(dost,0.25);
    hann(si,0.5);
    
     
    hann(rat,0.5);//3-1
    kyu(0.5);
    hann(rat,0.5);
    kyu(0.5);
    hann(rat,1);
    hann(dot,1);
    
    hann(rat,1);
    hann(sot,0.5);
    hann(rat,0.5);
    __delay_ms(10);
    hann(rat,0.5);
    hann(sot,0.5);
    __delay_ms(10);
    hann(sot,0.5);
    hann(rat,0.5);
    
    __delay_ms(10);
    hann(rat,1);
    hann(sot,1);
    hann(fat,1);
    hann(mit,1);
    
    hann(fat,0.5);//3-2
    kyu(0.5);
    hann(sot,0.5);
    hann(fat,1);
    hann(mit,0.5);
    __delay_ms(10);
    hann(mit,0.5);
    __delay_ms(5);
    hann(mit,0.5);
    
    hann(fat,0.5);
    hann(ret,0.5);
    hann(fat,0.5);
    hann(ret,0.5);
    hann(fat,0.5);
    hann(ret,0.5);
    hann(rat,0.5);
    hann(sit,0.5);
    
    hann(dott,0.5);
    __delay_ms(5);
    hann(dott,0.5);
    __delay_ms(5);
    hann(dott,0.5);
    __delay_ms(5);
    hann(dott,0.5);
    __delay_ms(10);
    hann(dott,0.5);
    kyu(0.5);
    hann(rett,0.5);
    
    kyu(0.5);//3-3
    hann(dott,1);
    hann(sit,0.5);
    kyu(0.5);
    hann(rat,0.5);
    __delay_ms(10);
    hann(rat,0.5);
    __delay_ms(10);
    hann(sit,0.5);
    __delay_ms(10);
    
    hann(sit,1);
    kyu(1);
    hann(rat,1);
    kyu(1);
    
    hann(mit,0.5);
    hann(fat,1);
    hann(mit,1);
    hann(si,0.5);
    hann(dot,0.5);
    hann(mit,0.5);
    
    
    hann(fat,1);//3-4
    __delay_ms(10);
    hann(fat,1);
    hann(rat,1);
    hann(fat,0.5);
    hann(mit,0.5);
    
    __delay_ms(5);
    hann(mit,1);
    hann(sot,1);
    hann(sit,0.5);
    kyu(0.5);
    hann(rett,0.5);
    hann(dott,0.5);
    
    __delay_ms(5);
    hann(dott,4);//ryaku
    
    hann(sit,4);//3-5 ryaku
    
    kyu(1);
    hann(rat,0.5);
    __delay_ms(10);
    hann(rat,0.5);
    __delay_ms(5);
    hann(rat,0.5);
    __delay_ms(5);
    hann(rat,0.5);
    __delay_ms(5);
    hann(sot,0.5);
    
    __delay_ms(5);
    hann(sot,1);
    __delay_ms(10);
    hann(sot,1);
    hann(mit,1);
    __delay_ms(10);
    hann(mit,0.5);
    hann(fat,0.5);
    
    __delay_ms(5);//4-1
    hann(fat,2);
    hann(sot,2);
    
    hann(rat,1);
    kyu(1);
    hann(sit,1);
    hann(dott,0.5);
    kyu(0.5);
    
    hann(rett,0.5);
    kyu(0.5);
    hann(dott,1);
    hann(sit,1);
    hann(rat,0.5);
    hann(dott,0.5);
    
    hann(dott,1);//4-2
    hann(sot,1);
    hann(fat,0.5);
    __delay_ms(5);
    hann(fat,0.5);
    hann(sot,0.5);
    hann(dott,0,5);
    
    hann(sott,4);
    
    kyu(1);//4-3
    hann(dot,0.5);
    hann(dott,1);
    hann(sit,0.5);
    hann(dott,0.5);
    
    hann(dott,1);
    hann(rat,0.5);
    kyu(0.5);
    kyu(0.5);
    hann(rat,0.5);
    hann(dott,0.5);
    hann(sit,0.5);
    
    
    
    
    
    
    while(1);
}

void hann(float a,float b){
    if(a==sih)
        desih(b);
    
    else if(a==do)
        dedo(b);
    else if(a==dos)
        dedos(b);
    else if(a==re)
        dere(b);
    else if(a==res)
        deres(b);
    else if(a==mi)
        demi(b);
    else if(a==fa)
        defa(b);
    else if(a==fas)
        defas(b);
    else if(a==so)
        deso(b);
    else if(a==sos)
        desos(b);
    else if(a==ra)
        dera(b);
    else if(a==ras)
        deras(b);
    else if(a==si)
        desi(b);
    
    else if(a==dot)
        dedot(b);
    else if(a==dost)
        dedost(b);
    else if(a==ret)
        deret(b);
    else if(a==rest)
        derest(b);
    else if(a==mit)
        demit(b);
    else if(a==fat)
        defat(b);
    else if(a==fast)
        defast(b);
    else if(a==sot)
        desot(b);
    else if(a==sost)
        desost(b);
    else if(a==rat)
        derat(b);
    else if(a==rast)
        derast(b);
    else if(a==sit)
        desit(b);
    
    else if(a==dott)
        dedott(b);
    else if(a==rett)
        derett(b);
    else if(a==mitt)
        demitt(b);
    else if(a==fatt)
        defatt(b);
    else if(a==sott)
        desott(b);
    else if(a==ratt)
        derat(b);
        
}

void kyu(float d){
    int i;
    for(i=0;i<500*d;i++);
}

//
//

void desih(float c){
    int i,j;
    j=246*c/2;
    for(i=0;i<j;i++){
    PORTDbits.RD0 = 1;
    __delay_ms(sih);
    PORTDbits.RD0 = 0;
    __delay_ms(sih);
    }
}

void dedo(float c){
    int i,j;
    j=261*c/2;
    for(i=0;i<j;i++){
    PORTDbits.RD0 = 1;
    __delay_ms(do);
    PORTDbits.RD0 = 0;
    __delay_ms(do);
    }
}

void dedos(float c){
    int i,j;
    j=277*c/2;
    for(i=0;i<j;i++){
    PORTDbits.RD0 = 1;
    __delay_ms(dos);
    PORTDbits.RD0 = 0;
    __delay_ms(dos);
    }
}

void dere(float c){
    int i,j;
    j=293*c/2;
    for(i=0;i<j;i++){
    PORTDbits.RD0 = 1;
    __delay_ms(re);
    PORTDbits.RD0 = 0;
    __delay_ms(re);
    }
}

void deres(float c){
    int i,j;
    j=311*c/2;
    for(i=0;i<j;i++){
    PORTDbits.RD0 = 1;
    __delay_ms(ret);
    PORTDbits.RD0 = 0;
    __delay_ms(ret);
    }
}

void demi(float c){
    int i,j;
    j=330*c/2;
    for(i=0;i<j;i++){
    PORTDbits.RD0 = 1;
    __delay_ms(mi);
    PORTDbits.RD0 = 0;
    __delay_ms(mi);
    }
}

void defa(float c){
    int i,j;
    j=349*c/2;
    for(i=0;i<j;i++){
    PORTDbits.RD0 = 1;
    __delay_ms(fa);
    PORTDbits.RD0 = 0;
    __delay_ms(fa);
    }
}

void defas(float c){
    int i,j;
    j=370*c/2;
    for(i=0;i<j;i++){
    PORTDbits.RD0 = 1;
    __delay_ms(fas);
    PORTDbits.RD0 = 0;
    __delay_ms(fas);
    }
}

void deso(float c){
    int i,j;
    j=392*c/2;
    for(i=0;i<j;i++){
    PORTDbits.RD0 = 1;
    __delay_ms(so);
    PORTDbits.RD0 = 0;
    __delay_ms(so);
    }
}

void desos(float c){
    int i,j;
    j=415*c/2;
    for(i=0;i<j;i++){
    PORTDbits.RD0 = 1;
    __delay_ms(do);
    PORTDbits.RD0 = 0;
    __delay_ms(do);
    }
}

void dera(float c){
    int i,j;
    j=440*c/2;
    for(i=0;i<j;i++){
    PORTDbits.RD0 = 1;
    __delay_ms(ra);
    PORTDbits.RD0 = 0;
    __delay_ms(ra);
    }
}

void deras(float c){
    int i,j;
    j=466*c/2;
    for(i=0;i<j;i++){
    PORTDbits.RD0 = 1;
    __delay_ms(ras);
    PORTDbits.RD0 = 0;
    __delay_ms(ras);
    }
}

void desi(float c){
    int i,j;
    j=493*c/2;
    for(i=0;i<j;i++){
    PORTDbits.RD0 = 1;
    __delay_ms(si);
    PORTDbits.RD0 = 0;
    __delay_ms(si);
    }
}

void dedot(float c){
    int i,j;
    j=523*c/2;
    for(i=0;i<j;i++){
    PORTDbits.RD0 = 1;
    __delay_ms(dot);
    PORTDbits.RD0 = 0;
    __delay_ms(dot);
    }
}

void dedost(float c){
    int i,j;
    j=554*c/2;
    for(i=0;i<j;i++){
    PORTDbits.RD0 = 1;
    __delay_ms(dost);
    PORTDbits.RD0 = 0;
    __delay_ms(dost);
    }
}

void deret(float c){
    int i,j;
    j=586*c/2;
    for(i=0;i<j;i++){
    PORTDbits.RD0 = 1;
    __delay_ms(ret);
    PORTDbits.RD0 = 0;
    __delay_ms(ret);
    }
}

void derest(float c){
    int i,j;
    j=623*c/2;
    for(i=0;i<j;i++){
    PORTDbits.RD0 = 1;
    __delay_ms(rest);
    PORTDbits.RD0 = 0;
    __delay_ms(rest);
    }
}

void demit(float c){
    int i,j;
    j=660*c/2;
    for(i=0;i<j;i++){
    PORTDbits.RD0 = 1;
    __delay_ms(mit);
    PORTDbits.RD0 = 0;
    __delay_ms(mit);
    }
}

void defat(float c){
    int i,j;
    j=699*c/2;
    for(i=0;i<j;i++){
    PORTDbits.RD0 = 1;
    __delay_ms(fat);
    PORTDbits.RD0 = 0;
    __delay_ms(fat);
    }
}

void defast(float c){
    int i,j;
    j=740*c/2;
    for(i=0;i<j;i++){
    PORTDbits.RD0 = 1;
    __delay_ms(fast);
    PORTDbits.RD0 = 0;
    __delay_ms(fast);
    }
}

void desot(float c){
    int i,j;
    j=784*c/2;
    for(i=0;i<j;i++){
    PORTDbits.RD0 = 1;
    __delay_ms(sot);
    PORTDbits.RD0 = 0;
    __delay_ms(sot);
    }
}

void desost(float c){
    int i,j;
    j=830*c/2;
    for(i=0;i<j;i++){
    PORTDbits.RD0 = 1;
    __delay_ms(sost);
    PORTDbits.RD0 = 0;
    __delay_ms(sost);
    }
}

void derat(float c){
    int i,j;
    j=881*c/2;
    for(i=0;i<j;i++){
    PORTDbits.RD0 = 1;
    __delay_ms(rat);
    PORTDbits.RD0 = 0;
    __delay_ms(rat);
    }
}

void derast(float c){
    int i,j;
    j=930*c/2;
    for(i=0;i<j;i++){
    PORTDbits.RD0 = 1;
    __delay_ms(rast);
    PORTDbits.RD0 = 0;
    __delay_ms(rast);
    }
}

void desit(float c){
    int i,j;
    j=987*c/2;
    for(i=0;i<j;i++){
    PORTDbits.RD0 = 1;
    __delay_ms(sit);
    PORTDbits.RD0 = 0;
    __delay_ms(sit);
    }
}

void dedott(float c){
    int i,j;
    j=1046*c/2;
    for(i=0;i<j;i++){
    PORTDbits.RD0 = 1;
    __delay_ms(dott);
    PORTDbits.RD0 = 0;
    __delay_ms(dott);
    }
}

void derett(float c){
    int i,j;
    j=1173*c/2;
    for(i=0;i<j;i++){
    PORTDbits.RD0 = 1;
    __delay_ms(rett);
    PORTDbits.RD0 = 0;
    __delay_ms(rett);
    }
}

void demitt(float c){
    int i,j;
    j=1320*c/2;
    for(i=0;i<j;i++){
    PORTDbits.RD0 = 1;
    __delay_ms(mitt);
    PORTDbits.RD0 = 0;
    __delay_ms(mitt);
    }
}

void defatt(float c){
    int i,j;
    j=1398*c/2;
    for(i=0;i<j;i++){
    PORTDbits.RD0 = 1;
    __delay_ms(fatt);
    PORTDbits.RD0 = 0;
    __delay_ms(fatt);
    }
}

void desott(float c){
    int i,j;
    j=1568*c/2;
    for(i=0;i<j;i++){
    PORTDbits.RD0 = 1;
    __delay_ms(sott);
    PORTDbits.RD0 = 0;
    __delay_ms(sott);
    }
}

void deratt(float c){
    int i,j;
    j=1762*c/2;
    for(i=0;i<j;i++){
    PORTDbits.RD0 = 1;
    __delay_ms(ratt);
    PORTDbits.RD0 = 0;
    __delay_ms(ratt);
    }
}
