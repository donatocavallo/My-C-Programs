#include <stdio.h>
 


int main(void)

{ 	
    int posx;


    printf("Inserire numero Filo A:\n ");
    scanf ("%d", &posx);
 
  

    switch (posx) {

    case 1: case 17: case 33: case 49: case 65: case 81: case 97: case 113: case 129: case 145: case 161: case 177:
       printf("Primo Splitter\n"); break;
    case 2: case 18: case 34: case 50: case 66: case 82: case 98: case 114: case 130: case 146: case 162: case 178:
       printf("Secondo Splitter\n"); break;
    case 3: case 19: case 35: case 51: case 67: case 83: case 99: case 115: case 131: case 147: case 163: case 179:
       printf("Terzo Splitter\n"); break;
    case 4: case 20: case 36: case 52: case 68: case 84: case 100: case 116: case 132: case 148: case 164: case 180:
       printf("Quarto Splitter\n"); break;
    case 5: case 21: case 37: case 53: case 69: case 85: case 101: case 117: case 133: case 149: case 165: case 181:
       printf("Quinto Splitter\n"); break;
    case 6: case 22: case 38: case 54: case 70: case 86: case 102: case 118: case 134: case 150: case 166: case 182:
       printf("Sesto Splitter\n"); break;
    case 7: case 23: case 39: case 55: case 71: case 87: case 103: case 119: case 135: case 151: case 167: case 183:
       printf("Settimo Splitter\n"); break;
    case 8: case 24: case 40: case 56: case 72: case 88: case 104: case 120: case 136: case 152: case 168: case 184:
       printf("Ottavo Splitter\n"); break;
    case 9: case 25: case 41: case 57: case 73: case 89: case 105: case 121: case 137: case 153: case 169: case 185:
       printf("Nono Splitter\n"); break;
    case 10: case 26: case 42: case 58: case 74: case 90: case 106: case 122: case 138: case 154: case 170: case 186: 
       printf("Decimo Splitter\n"); break;
    case 11: case 27: case 43: case 59: case 75: case 91: case 107: case 123: case 139: case 155: case 171: case 187:
       printf("Undicesimo Splitter\n"); break;
    case 12: case 28: case 44: case 60: case 76: case 92: case 108: case 124: case 140: case 156: case 172: case 188:
       printf("Dodicesimo Splitter\n"); break;
    case 13: case 29: case 45: case 61: case 77: case 93: case 109: case 125: case 141: case 157: case 173: case 189:
       printf("Tredicesimo Splitter\n"); break;
    case 14: case 30: case 46: case 62: case 78: case 94: case 110: case 126: case 142: case 158: case 174: case 190:
       printf("Quattordicesimo Splitter\n"); break;
    case 15: case 31: case 47: case 63: case 79: case 95: case 111: case 127: case 143: case 159: case 175: case 191:
       printf("Quindicesimo Splitter\n"); break;
    case 16: case 32: case 48: case 64: case 80: case 96: case 112: case 128: case 144: case 160: case 176: case 192:
       printf("Sedicesimo Splitter\n"); break;
    }

   switch (posx) {
    case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10: case 11: case 12: case 13: case 14: case 15: case 16:
       printf("Prima Riga, Filo A\n"); break;
    case 17: case 18: case 19: case 20:	case 21: case 22: case 23: case 24: case 25: case 26: case 27: case 28:	case 29: case 30: case 31: case 32:
       printf("Prima Riga, Filo B\n"); break;
    case 33: case 34: case 35:	case 36: case 37: case 38: case 39: case 40: case 41: case 42: case 43: case 44: case 45: case 46: case 47: case 48:
       printf("Seconda Riga, Filo A\n"); break;
    case 49: case 50: case 51: case 52:	case 53: case 54: case 55: case 56: case 57: case 58: case 59: case 60:	case 61: case 62: case 63: case 64:
       printf("Seconda Riga, Filo B\n"); break;
    case 65: case 66: case 67:	case 68: case 69: case 70: case 71: case 72: case 73: case 74: case 75:	case 76: case 77: case 78: case 79: case 80:
       printf("Terza Riga, Filo A\n"); break;
    case 81: case 82: case 83: case 84:	case 85: case 86: case 87: case 88: case 89: case 90: case 91: case 92:	case 93: case 94: case 95: case 96:
       printf("Terza Riga, Filo B\n"); break;
    case 97: case 98: case 99:	case 100: case 101: case 102: case 103:	case 104: case 105: case 106: case 107:	case 108: case 109: case 110: case 111: case 112:
       printf("Quarta Riga, Filo A\n"); break;
    case 113: case 114:	case 115: case 116: case 117: case 118:	case 119: case 120: case 121: case 122:	case 123: case 124: case 125: case 126:	case 127: case 128:
       printf("Quarta Riga, Filo B\n"); break;
    case 129: case 130:	case 131: case 132: case 133: case 134:	case 135: case 136: case 137: case 138:	case 139: case 140: case 141: case 142:	case 143: case 144:
       printf("Quinta Riga, Filo A\n"); break;
    case 145: case 146:	case 147: case 148: case 149: case 150:	case 151: case 152: case 153: case 154:	case 155: case 156: case 157: case 158:	case 159: case 160:
       printf("Quinta Riga, Filo B\n"); break;
    case 161: case 162:	case 163: case 164: case 165: case 166:	case 167: case 168: case 169: case 170:	case 171: case 172: case 173: case 174:	case 175: case 176:
       printf("Sesta Riga, Filo A\n"); break;
    case 177: case 178:	case 179: case 180: case 181: case 182:	case 183: case 184: case 185: case 186:	case 187: case 188: case 189: case 190:	case 191: case 192:
       printf("Sesta Riga, Filo B\n"); break;


 }
  





























    return 0;
}