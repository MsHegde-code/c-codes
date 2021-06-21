#include<stdio.h>
int main(){
    char letter;
    printf("enter a letter\n");
    scanf("%c",&letter);
    switch(letter){
        case 'a' : printf("It is a vovel");
        break;
         case 'e' : printf("It is a vovel");
         break;
          case 'i' : printf("It is a vovel");
          break;
           case 'o' : printf("It is a vovel");
           break;
            case 'u' : printf("It is a vovel");
            break;
             case 'A' : printf("It is a vovel");
             break;
              case 'E' : printf("It is a vovel");
              break;
               case 'I' : printf("It is a vovel");
               break;
                case 'O' : printf("It is a vovel");
                break;
                 case 'U' : printf("It is a vovel");
                 break;
                 default : printf("it is a consonant");
                  break;
    }
    return 0;
}