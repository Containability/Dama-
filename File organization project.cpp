// File organization project.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct stones
{
    char stone[2];
    char adress[3];
   int adresptr;

};



int main()
{


    //File Açılır
    FILE* fp = fopen("game.txt", "rb+");

    if (fp == NULL) {

        perror("Error opening file");
        return (0);
    }
    //Hareketlerin kayıtlarını tutuyoruz
        char moveRecords[500];
    memset(moveRecords, '\0', sizeof(moveRecords));
   
   
    
    //Gerekli variable'lar başlatılır

    int c;
    int b = 0;
    int w = 0;
    int n = 0;


    //Bu array dama olmuş olan taşların pozisyonunu saklamak için
    int damawhite[16] = { -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1 };
    int damablack[16]= { -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1 };
    
        
        int r = 0;
    printf("Welcome to Checkers game \n");
    printf("1. New Game \n");
    printf("2. Continue Game \n ");
    printf("3. Exit Game  \n");
   
    
    char decision[2];
    
    //Seçim yapıyor
    scanf("%s", decision);
    if (decision[0] == '3')
    {
        goto Exit;
    }
    if(decision[0]=='2')
    {
        goto Continue;
    }



    
    rewind(fp);
    fflush(fp);
    //Structlar array biçiminde oluşturuldu
    struct stones black[16];
    struct stones white[16];
   
    strcpy(black[0].stone, "b");
    strcpy(black[0].adress, "a2");

    
    strcpy(black[1].stone, "b"); 
    strcpy(black[1].adress, "b2");

  
    strcpy(black[2].stone, "b");
    strcpy(black[2].adress, "c2");


    strcpy(black[3].stone, "b");
    strcpy(black[3].adress, "d2");

   
    strcpy(black[4].stone, "b");
    strcpy(black[4].adress, "e2");

   
    strcpy(black[5].stone, "b");
    strcpy(black[5].adress, "f2");

   
    strcpy(black[6].stone, "b");
    strcpy(black[6].adress, "g2");


    strcpy(black[7].stone, "b");
    strcpy(black[7].adress, "h2");


    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  //

    strcpy(black[8].stone, "b");
    strcpy(black[8].adress, "a3");

    
    strcpy(black[9].stone, "b");
    strcpy(black[9].adress, "b3");

    strcpy(black[10].stone, "b");
    strcpy(black[10].adress, "c3");

 
    strcpy(black[11].stone, "b");
    strcpy(black[11].adress, "d3");

  
    strcpy(black[12].stone, "b");
    strcpy(black[12].adress, "e3");

    
    strcpy(black[13].stone, "b");
    strcpy(black[13].adress, "f3");

    
    strcpy(black[14].stone, "b");
    strcpy(black[14].adress, "g3");
  
    strcpy(black[15].stone, "b");
    strcpy(black[15].adress, "h3");

    // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -                 //
   //  - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -                //

    
    strcpy(white[0].stone, "w");
    strcpy(white[0].adress, "a6");


    strcpy(white[1].stone, "w");
    strcpy(white[1].adress, "b6");


    strcpy(white[2].stone, "w");
    strcpy(white[2].adress, "c6");


    strcpy(white[3].stone, "w");
    strcpy(white[3].adress, "d6");


    strcpy(white[4].stone, "w");
    strcpy(white[4].adress, "e6");


    strcpy(white[5].stone, "w");
    strcpy(white[5].adress, "f6");


    strcpy(white[6].stone, "w");
    strcpy(white[6].adress, "g6");


    strcpy(white[7].stone, "w");
    strcpy(white[7].adress, "h6");

    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -     //
    strcpy(white[8].stone, "w");
    strcpy(white[8].adress, "a7");


    strcpy(white[9].stone, "w");
    strcpy(white[9].adress, "b7");

    strcpy(white[10].stone, "w");
    strcpy(white[10].adress, "c7");


    strcpy(white[11].stone, "w");
    strcpy(white[11].adress, "d7");


    strcpy(white[12].stone, "w");
    strcpy(white[12].adress, "e7");


    strcpy(white[13].stone, "w");
    strcpy(white[13].adress, "f7");


    strcpy(white[14].stone, "w");
    strcpy(white[14].adress, "g7");

    strcpy(white[15].stone, "w");
    strcpy(white[15].adress, "h7");

    
    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -     //
    //Boşluklar
















    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - //

Continue:
   
   
    
   
    
    
        rewind(fp);
        fflush(fp);

        //Bit bit sayarak sayaçtan kaçıncı bit oldukları adresptr olarak saklanır
        while ((c = fgetc(fp)) != EOF)
        {
            if (c == 'b' && b==0)
            {
                
                black[b].adresptr=n;
                printf("Location: %d for the Character: %c Address:   \n", n, c  );
                  n++;
                b++;continue;

            }
            if (c == 'b' && b == 1)
            {
               
                black[b].adresptr = n;
                printf("Location: %d for the Character: %c Address:   \n", n, c);
                  n++; b++;continue;
            }
            if (c == 'b' && b == 2)
            {
                
                black[b].adresptr = n;
                printf("Location: %d for the Character: %c Address:   \n", n, c);
                  n++; b++;continue;
            }
            if (c == 'b' && b == 3)
            {
                
                black[b].adresptr = n;
                printf("Location: %d for the Character: %c Address:   \n", n, c);
                  n++; b++;continue;
            }
            if (c == 'b' && b == 4)
            {

                black[b].adresptr = n;
               printf("Location: %d for the Character: %c Address:   \n", n, c  );
                  n++; b++;continue;
            }
            if (c == 'b' && b == 5)
            {
                black[b].adresptr = n;
               printf("Location: %d for the Character: %c Address:   \n", n, c  );
                  n++; b++;continue;
            }
            if (c == 'b' && b == 6)
            {
                 
                black[b].adresptr = n;
               printf("Location: %d for the Character: %c Address:   \n", n, c  );
                  n++; b++;continue;
            }
            if (c == 'b' && b == 7)
            {
                 
                black[b].adresptr = n;
               printf("Location: %d for the Character: %c Address:   \n", n, c  );
                  n++; b++;continue;
            }
            if (c == 'b' && b == 8)
            {
                 
                black[b].adresptr = n;
               printf("Location: %d for the Character: %c Address:   \n", n, c  );
                  n++; b++;continue;
            }
            if (c == 'b' && b == 9)
            {
                 
                black[b].adresptr = n;
               printf("Location: %d for the Character: %c Address:   \n", n, c  );
                  n++; b++;continue;
            }
            if (c == 'b' && b == 10)
            {
                 
                black[b].adresptr = n;
               printf("Location: %d for the Character: %c Address:   \n", n, c  );
                  n++; b++;continue;
            }
            if (c == 'b' && b == 11)
            {
                 
                black[b].adresptr = n;
               printf("Location: %d for the Character: %c Address:   \n", n, c  );
                  n++; b++;continue;
            }
            if (c == 'b' && b == 12)
            {
                 
                black[b].adresptr = n;
               printf("Location: %d for the Character: %c Address:   \n", n, c  );
                  n++; b++;continue;
            }
            if (c == 'b' && b == 13)
            {

                black[b].adresptr = n;
               printf("Location: %d for the Character: %c Address:   \n", n, c  );
                  n++; b++;continue;
            }
            if (c == 'b' && b == 14)
            {
                 
                black[b].adresptr = n;
               printf("Location: %d for the Character: %c Address:   \n", n, c  );
                  n++; b++;continue;
            }
            if (c == 'b' && b == 15)
            {
                 
                black[b].adresptr = n;
               printf("Location: %d for the Character: %c Address:   \n", n, c  );
                  n++; b++;continue;
            }


            if (c == 'w' && w+16 == 16)
            {


                white[w].adresptr = n;
                printf("Location: %d for the Character: %c Address:   \n", n, c );
                  n++;
                w++;continue;
            }
            if (c == 'w' && w+16 == 17)
            {
                 
                white[w].adresptr = n;
                printf("Location: %d for the Character: %c Address:   \n", n, c );
                  n++;
                w++;continue;
            }
            if (c == 'w' && w+16 == 18)
            {
                 
                white[w].adresptr = n;
                printf("Location: %d for the Character: %c Address:   \n", n, c );
                  n++;
                w++;continue;
            }
            if (c == 'w' && w+16 == 19)
            {
                 
                white[w].adresptr = n;
                printf("Location: %d for the Character: %c Address:   \n", n, c );
                  n++;
                w++;continue;
            }
            if (c == 'w' && w+16 == 20)
            {
                 
                white[w].adresptr = n;
                printf("Location: %d for the Character: %c Address:   \n", n, c );
                  n++;
                w++;continue;
            }
            if (c == 'w' && w+16 == 21)
            {
                 
                white[w].adresptr = n;
                printf("Location: %d for the Character: %c Address:   \n", n, c );
                  n++;
                w++;continue;
            }
            if (c == 'w' && w+16 == 22)
            {
                 
                white[w].adresptr = n;
                printf("Location: %d for the Character: %c Address:   \n", n, c );
                  n++;
                w++;continue;
            }
            if (c == 'w' && w+16 == 23)
            {
                 
                white[w].adresptr = n;
                printf("Location: %d for the Character: %c Address:   \n", n, c );
                  n++;
                w++;continue;
            }
            if (c == 'w' && w+16 == 24)
            {
                 
                white[w].adresptr = n;
                printf("Location: %d for the Character: %c Address:   \n", n, c );
                  n++;
                w++;continue;
            }
            if (c == 'w' && w+16 == 25)
            {
                 
                  white[w].adresptr = n;
                printf("Location: %d for the Character: %c Address:   \n", n, c );
                  n++;
                w++;continue;
            }
            if (c == 'w' && w+16 == 26)
            {
                 
                white[w].adresptr = n;
                printf("Location: %d for the Character: %c Address:   \n", n, c );
                  n++;
                w++;continue;
            }
            if (c == 'w' && w+16 == 27)
            {
                 
                white[w].adresptr = n;
                printf("Location: %d for the Character: %c Address:   \n", n, c );
                  n++;
                w++;continue;
            }
            if (c == 'w' && w+16 == 28)
            {
                 
                white[w].adresptr = n;
                printf("Location: %d for the Character: %c Address:   \n", n, c );
                  n++;
                w++;continue;
            }
            if (c == 'w' && w+16 == 29)
            {
                 
                white[w].adresptr = n;
                printf("Location: %d for the Character: %c Address:   \n", n, c );
                  n++;
                w++;continue;
            }
            if (c == 'w' && w+16 == 30)
            {
                 
                white[w].adresptr = n;
                printf("Location: %d for the Character: %c Address:   \n", n, c );
                  n++;
                w++;continue;
            }
            if (c == 'w' && w+16 == 31)
            {
                 
                white[w].adresptr = n;
                printf("Location: %d for the Character: %c Address:   \n", n, c );
                  n++;
                w++;continue;
            }

            //Boşluklar da olduğundan say
            
            printf("Location: %d for the Character: %c \n", n, c);
         
           
            n++;

        }



        
        if (decision[0] == '2') {
            for (int ct = 0; ct < w; ct++)
            {
                int calc = (white[ct].adresptr - 21) % 19;
                char letter = (calc / 2) + 'a';
                char number = ((white[ct].adresptr - 21) / 19) + 1 + '0';
                white[ct].adress[0] = letter;
                white[ct].adress[1] = number;
                white[ct].adress[2] = '\0';

                printf(" %s ", white[ct].adress);

            }
            for (int ct = 0; ct < b; ct++)
            {

                int calc = (black[ct].adresptr - 21) % 19;
                char letter = (calc / 2) + 'a';
                char number = ((black[ct].adresptr - 21) / 19) + 1 + '0';
                black[ct].adress[0] = letter;
                black[ct].adress[1] = number;
                black[ct].adress[2] = '\0';


            }
        }
        rewind(fp);
        
        
        char prnt;
        
     
        while (1)
        {
            system("clear");
            
        A:
            rewind(fp);
            int countnum=0;
            printf("  A B C D E F G H\n");

            while ((prnt = fgetc(fp)) != EOF)
            {
                if (countnum % 19 == 0&&countnum!=0) {
                    printf("%d", countnum / 19);
                    countnum++;
                    continue;
                }
                printf("%c", prnt);
                countnum++;
            }
            printf("\n");
            fseek(fp, -1, SEEK_END);
            char turn = fgetc(fp);
            fflush(fp);
            rewind(fp);
            char move[5];
            
            if (turn == 'w') {
                printf("Team White please enter your command. To Save & Exit write 2 and enter:  ");
            }


            else if (turn == 'b') {
                printf("Team Black please enter your command. To Save & Exit write 2 and enter:  ");

            }
            scanf("%s", move);
            if (move[0] == '2')break;
            //Hamleler array e ekleniyor
            strcat(moveRecords, move);
            printf("\nThis is moveRecords : %s", moveRecords);


            move[4] = '\0';
            
            
            char move1[3];
            char move2[3];

            int targetloc = 0;
            char killed[3];

            memset(move1, '\0', sizeof(move1));
            memset(move2, '\0', sizeof(move2));
            memset(killed, '\0', sizeof(killed));
            strncpy(move1, move, 2);
            strcpy(move2, move + 2);
         
            //Gidilecek yerin Harf coloumn'una göre switch case
            //Başlangıc biti 21 olduğundan ona eklenerek hamlenin istediği karenin dosyada kaçıncı bit olduğunun hesaplanışı
            switch (move2[0]) {
            case 'a':
    
                    targetloc = 21 + (19 * ((move2[1] - '0') - 1));
                
                    
                break;
            case 'b': 
                targetloc = 21 +2+ (19 * ((move2[1] - '0') - 1));
            

                break;
            case 'c': 
                targetloc = 21+4 + (19 * ((move2[1] - '0') - 1));
            
                break;
            case 'd': 
                targetloc = 21+6 + (19 * ((move2[1] - '0') - 1));
            
                break;
            case 'e': 
                targetloc = 21 + 8+(19 * ((move2[1] - '0') - 1));
            
                break;
            case 'f':
                targetloc = 21 +10+ (19 * ((move2[1] - '0') - 1));
            
                break;
            case 'g': 
                targetloc = 21 + 12+(19 * ((move2[1] - '0') - 1));
            
                break;
            case 'h': 
                targetloc = 21+14 + (19 * ((move2[1] - '0') - 1));
            
                break;
            default:
                printf("Error! This move is wrong \n");
              

            }

            printf("This is move1 %s  \n", move1);
            printf("This is move2 %s \n", move2);

            
            
            for (int x = 0; x < 16; x++)
            {

                //Eğer siyahların sırasıysa: 

                if (turn == 'b')
                {

                    if (strcmp(black[x].adress, move1) == 0 && strcmp(black[x].adress, move2) != 0 && strcmp(white[x].adress, move2) != 0)
                    {

                        //Eğer taş başka taşın üstünden atladıysa (1 kareden fazla gittiyse) kontrol ediyorum
                        if ((targetloc - black[x].adresptr > 3 && targetloc - black[x].adresptr < 19) || (targetloc - black[x].adresptr < -3 && targetloc - black[x].adresptr > -19)|| targetloc - black[x].adresptr > 19|| targetloc - black[x].adresptr <-19)
                        {

                            strcpy(killed, black[x].adress);
                            //Eğer öldürülen taşın adresinde aynı harf var ise ve o zaman sayılarından büyük olana göre 
                            if (move1[0] == move2[0] && (move1[1] - '0') - (move2[1] - '0') < -1)
                            {
                                killed[1] = (move2[1] - '0' - 1) + '0';
                                printf("Killed built %c \n", killed[1]);

                            }
                         //Eğer a5a3 gibi bulunduğu yerdeki sayı coloumn u gideceği yerdekinden büyükse bu siyah için normalde hatalı hamle o yüzden dama mı diye bakıyorum
                            
                            
                            if ((move1[0] == move2[0] && (move2[1] - '0') - (move1[1] - '0') < -1) && black[x].adresptr==damablack[x])
                            {
                                killed[1] = (move1[1] - '0' - 1) + '0';
                                printf("Killed built  %c  \n", killed[1]);

                            }
                            else {
                                //Eğer harfleri farklı sayıları eşit ise (sağ sol yaptıysa)
                                if (move1[1] == move2[1])
                                {


                                    if (targetloc - black[x].adresptr < -1)

                                    {
                                        killed[0] = (move1[0] - '0' - 1 ) +'0';

                                    }


                                  if (targetloc - black[x].adresptr > 1)
                                    {
                                        killed[0] = (move2[0] - '0' - 1 ) + '0';
                                    }


                                }


                            }
                            rewind(fp);

                            //Hiç beyaz taş öldürülmüş mü kontrol ediyorum eğer öldüyse siliyorum
                            for (int y = 0; y < 16; y++)
                            {

                                if (strcmp(white[y].adress, killed) == 0)
                                {

                                    fseek(fp, (white[y].adresptr), SEEK_SET);
                                    fputc('-', fp);
                                    fflush(fp);
                                    strcpy(white[y].adress, "xx");
                                   white[y].adresptr = 0;
                                    rewind(fp);
                                    break;

                                }

                            }


                            //taşın adresini de son olarak doğru hamle olduğundan hamleye taşıyoruz
                            
                            
                            rewind(fp);
                            fflush(fp);
                            strcpy(black[x].adress, move2);
                            
                            fseek(fp, targetloc, SEEK_SET);



                            //Eğer siyah taş son satıra geldiyse damaya dönüşüyor
                            if (move2[1] == '8') {
                                fputs("bb", fp);
                                damablack[x] = targetloc;
                               
                            }
                            //Değilse hedef yere b yi yazıyorum
                            else
                            {
                                fputc('b', fp);
                               
                            }
                            rewind(fp);
                            fflush(fp);
                            //Son olarak siyah taşın ilk yerine boşluğu koyuyorum
                            fseek(fp, black[x].adresptr, SEEK_SET);
                            fputc('-', fp);
                            fflush(fp);
                            printf(" black.adress: %d \n", black[x].adresptr);
                            black[x].adresptr = targetloc;

                            printf("Black moved to %d \n", targetloc);
                        //Bir beyaz taşın üstünden geçtiğinden sıra tekrar b de o yüzden A noktasından tekrar başlatıyorum
                            goto A;
                        }


                        bool flag = false;
             rewind(fp);
                        fflush(fp);
                        strcpy(black[x].adress, move2);
                        fseek(fp, targetloc, SEEK_SET);
                 //Dama mı diye kontrol ediliyor eğer öyleyse dama olarak hareket eder yoksa normal siyah taş
                        
                        for (int p = 0; p < 32; p++) {
                            if (damablack[p] == black[x].adresptr)
                            {
                                fputs("bb", fp);
                                flag = true;
                                printf("\n THE STONE HAS BECOME A CHECKER \n");
                                damablack[p] = targetloc;
                            }


                        }
                        if (flag == true)
                        {
                            rewind(fp);
                            fflush(fp);
                            fseek(fp,black[x].adresptr, SEEK_SET);
                            fputs("- ", fp);
                            fflush(fp);



                        }
                        if (!flag) {
                            fputc('b', fp);
                           
                            printf(" black.adress: %d \n", black[x].adresptr);

                            fflush(fp);
                            fseek(fp, black[x].adresptr, SEEK_SET);
                            fputc('-', fp);
                            printf("Black moved to %d \n", targetloc);
                        }

                        rewind(fp);
                        
                        fflush(fp);
                      
                        black[x].adresptr = targetloc;
                       
                        

                    }
                    // Eğer gideceği yerde siyah taş varsa hatalı hamle
                    else if (!strcmp(black[x].adress, move2))
                    {
                        printf("Wrong Move to black! \n ");


                    }
                    //Beyaz varsa yine hatalı hamle
                    else if (!strcmp(white[x].adress, move2))
                    {
                        printf("Wrong Move to White! \n");


                    }
                }


                //Aynı kod yapısı beyazın sırası için geçerli
                if (turn == 'w') {
                 if (!strcmp(white[x].adress, move1) && strcmp(white[x].adress, move2) && strcmp(black[x].adress, move2))
                {





                    if ((targetloc - white[x].adresptr > 3 && targetloc - white[x].adresptr < 19) || (targetloc - white[x].adresptr < -3 && targetloc - white[x].adresptr > -19 || targetloc- white[x].adresptr>19 || targetloc - white[x].adresptr < -19))
                    {

                        strcpy(killed, white[x].adress);

                        if (move1[0] == move2[0] && (move1[1] - '0') - (move2[1] - '0') < -1)
                        {
                            killed[1] = (move2[1] - '0' - 1)+'0';
                            printf("Killed built %c",killed[1]);

                        }
                         if (move1[0] == move2[0] &&  (move2[1] - '0')-(move1[1] - '0') < -1)
                        {
                            killed[1] = (move1[1] - '0' - 1)+'0';
                            printf("Killed built  %c",killed[1]);

                        }
                        else {

                            if (move1[1] == move2[1])
                            {


                                if (targetloc - white[x].adresptr < -1)

                                {
                                    killed[0] = (move1[0] - '0' - 1)+'0';

                                }


                                else if (targetloc - white[x].adresptr > 1)
                                {
                                    killed[0] = (move2[0] - '0' - 1)+'0';
                                }


                            }


                        }
                        rewind(fp);

                        //Checking for the black stone that killed and eliminate it
                        for (int y = 0; y < 16; y++)
                        {

                            if (strcmp(black[y].adress, killed)==0)
                            {

                                fseek(fp, (black[y].adresptr), SEEK_SET);
                                fputc('-', fp);
                                fflush(fp);
                                strcpy(black[y].adress, "xx");
                               black[y].adresptr = 0;
                                rewind(fp);
                                break;

                            }

                        }

                        printf("\n");
                        rewind(fp);

                        //stone w goes to target than old place goes blank
                        strcpy(white[x].adress, move2);
                        fseek(fp, (targetloc), SEEK_SET);
                        if (move2[1]=='1') {
                            fputs("ww", fp);
                            damawhite[x] = targetloc;
                        }
                        else {
                            fputc('w', fp);
                        }
                        fflush(fp);
                        rewind(fp);
                        fseek(fp, (white[x].adresptr), SEEK_SET);
                        fputc('-', fp);
                        white[x].adresptr = targetloc;
                        fflush(fp);
                        printf("White has moved to : %s", move2);
                        printf("\n");
                        goto A;
                    }

                    printf("\n");
                    rewind(fp);
                    bool flag = false;
                   
                    //stone w goes to target than old place goes blank
                    fseek(fp, targetloc, SEEK_SET);
                    
                    for (int p = 0; p < 32; p++) {
                        if (damawhite[p] == white[x].adresptr)
                        {
                            fputs("ww", fp);
                            flag = true;
                            printf("\n THE STONE HAS BECOME A CHECKER \n");
                            damawhite[p] = targetloc;
                        }


                    }
                    if (flag == true)
                    {
                        rewind(fp);
                        fflush(fp);
                        fseek(fp, white[x].adresptr, SEEK_SET);
                        fputs("- ", fp);
                        fflush(fp);



                    }
                    if (flag==false) {
                        fputc('w', fp);

                        printf(" white.adress: %d \n", white[x].adresptr);
                        strcpy(white[x].adress, move2);
                        rewind(fp);
                        fflush(fp);
                        fseek(fp, white[x].adresptr, SEEK_SET);
                        fputc('-', fp);
                        fflush(fp);
                        printf("white moved to %d \n", targetloc);
                    }

                    

                    white[x].adresptr = targetloc;



                 
                }

                 if (!strcmp(white[x].adress, move2))
                {
                    printf("Wrong Move to white");



                }
                if (!strcmp(black[x].adress, move2))
                 {
                     printf("Wrong Move to black! ");


                 }
                if (!strcmp(black[x].adress, move1))
                {

                    printf("WRONG STONE!");
                }
                
             }
        }

        //Sıra değişimi
            fseek(fp, -1, SEEK_END);
            c = fgetc(fp);
            if (c == 'w') {
                fseek(fp, -1, SEEK_CUR);
                fputc('b', fp);
            }
            else {
                fseek(fp, -1, SEEK_CUR);
                fputc('w', fp);
            }
            fflush(fp);
            rewind(fp);

            printf("\n");
            int countb = 0;
            int countw = 0;
            
          //Oyun bitti mi diye kontrol ediliyor.
            while (( prnt = fgetc(fp)) != EOF)
            {
                
              
                if (c == 'b') {
                    countb++;
             }
                if (c == 'w') {
                    countw++;
                }
            
            }
            if (countw == 1 || countb==1)
            {
                if(countw==countb)
                { 
                    printf("Draw! ");
                    goto Exit;
       
                }
                else if (countw == 1 && countb>1) {
                    printf("White Has Won!!!!!");
                    goto Exit;
                }
                else if (countb == 1 && countw > 1)
                {
                    printf("Black has won!!!");
                    goto Exit;
                }

            }


            
}
       
  
    
   

 Exit:


    fclose(fp);
    FILE* fmove = fopen("index.txt", "wb+");
    fwrite(moveRecords, sizeof(char), sizeof(moveRecords), fmove);
    fclose(fmove);
    return(0);


   }


















// Programı çalıştır: Ctrl + F5 veya Hata Ayıkla > Hata Ayıklamadan Başlat menüsü
// Programda hata ayıkla: F5 veya Hata Ayıkla > Hata Ayıklamayı Başlat menüsü

// Kullanmaya Başlama İpuçları: 
//   1. Dosyaları eklemek/yönetmek için Çözüm Gezgini penceresini kullanın
//   2. Kaynak denetimine bağlanmak için Takım Gezgini penceresini kullanın
//   3. Derleme çıktısını ve diğer iletileri görmek için Çıktı penceresini kullanın
//   4. Hataları görüntülemek için Hata Listesi penceresini kullanın
//   5. Yeni kod dosyaları oluşturmak için Projeye Git > Yeni Öğe ekle veya varolan kod dosyalarını projeye eklemek için Proje > Var Olan Öğeyi Ekle adımlarını izleyin
//   6. Bu projeyi daha sonra yeniden açmak için Dosya > Aç > Proje'ye gidip .sln uzantılı dosyayı seçin
