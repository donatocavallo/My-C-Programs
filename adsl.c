#include <stdio.h>
 


int main(void)

{ 	
    int posx;


    printf("Inserire numero Filo ADSL :\n ");
    scanf ("%d", &posx);
 
  

    switch (posx) {

    case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8:
       printf("Primo Splitter\n"); break;
    case 9: case 10: case 11: case 12: case 13: case 14: case 15: case 16: 
       printf("Secondo Splitter\n"); break;
    case 17: case 18: case 19: case 20: case 21: case 22: case 23: case 24: 
       printf("Terzo Splitter\n"); break;
    case 25: case 26: case 27: case 28: case 29: case 30: case 31: case 32: 
       printf("Quarto Splitter\n"); break;
    case 33: case 34: case 35: case 36: case 37: case 38: case 39: case 40: 
       printf("Quinto Splitter\n"); break;
    case 41: case 42: case 43: case 44: case 45: case 46: case 47: case 48: 
       printf("Sesto Splitter\n"); break;
    case 49: case 50: case 51: case 52: case 53: case 54: case 55: case 56: 
       printf("Settimo Splitter\n"); break;
    case 57: case 58: case 59: case 60: case 61: case 62: case 63: case 64: 
       printf("Ottavo Splitter\n"); break;
    case 65: case 66: case 67: case 68: case 69: case 70: case 71: case 72: 
       printf("Nono Splitter\n"); break;
    case 73: case 74: case 75: case 76: case 77: case 78: case 79: case 80: 
       printf("Decimo Splitter\n"); break;
    case 81: case 82: case 83: case 84: case 85: case 86: case 87: case 88: 
       printf("Undicesimo Splitter\n"); break;
    case 89: case 90: case 91: case 92: case 93: case 94: case 95: case 96: 
       printf("Dodicesimo Splitter\n"); break;
    case 97: case 98: case 99: case 100: case 101: case 102: case 103: case 104: 
       printf("Tredicesimo Splitter\n"); break;
    case 105: case 106: case 107: case 108: case 109: case 110: case 111: case 112: 
       printf("Quattordicesimo Splitter\n"); break;
    case 113: case 114: case 115: case 116: case 117: case 118: case 119: case 120: 
       printf("Quindicesimo Splitter\n"); break;
    case 121: case 122: case 123: case 124: case 125: case 126: case 127: case 128: 
       printf("Sedicesimo Splitter\n"); break;
    }

   switch (posx) {
    case 1: case 9: case 17: case 25: case 33: case 41:	case 49: case 57: case 65: case 73: case 81: case 89: case 97:	case 105: case 113: case 121:
       
       printf("P1 \n"); break;
    case 2: case 10: case 18: case 26: case 34:	case 42: case 50: case 58: case 66: case 74: case 82: case 90: case 98:	case 106: case 114: case 122:

       printf("L1\n"); break;
    case 3: case 11: case 19: case 27: case 35:	case 43: case 51: case 59: case 67: case 75: case 83: case 91:	case 99: case 107: case 115: case 123:

       printf("P2\n"); break;
    case 4: case 12: case 20: case 28: case 36:	case 44: case 52: case 60: case 68: case 76: case 84: case 92:	case 100: case 108: case 116: case 124:

       printf("L2\n"); break;
    case 5: case 13: case 21: case 29:	case 37: case 45: case 53: case 61: case 69: case 77: case 85:	case 93: case 101: case 109: case 117: case 125:

       printf("P3\n"); break;
    case 6: case 14: case 22: case 30: case 38:	case 46: case 54: case 62: case 70: case 78: case 86:	case 94: case 102: case 110: case 118: case 126:

       printf("L3\n"); break;

    case 7: case 15: case 23: case 31:	case 39: case 47: case 55: case 63: case 71: case 79: case 87: case 95:	case 103: case 111: case 119: case 127:
 
       printf("P4\n"); break;

    case 8: case 16: case 24: case 32: case 40:	case 48: case 56: case 64: case 72: case 80: case 88: case 96: case 104: case 112: case 120: case 128:

       printf("L4\n"); break;




 }
  





























    return 0;
}