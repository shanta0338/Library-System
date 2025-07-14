#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<conio.h>
void login(void);
void library(void);
void book(void);
void research(void);
void journals(void);
void newspaper(void);
void about (void);
void movies(void);

int main (void)
{
    printf("\t\t\t\t");
    login();
    printf("\t\t\t\t");
    library();
    return 0;

}


void login(void)
{
    int id,i;
    i = 0;
    while (i<= 5)
    {
        sleep(1);
        printf("\e[5;93m*");
        i++;
    }
    sleep(1.7);
    printf("Welcome");
    sleep(1.7);
    printf(" To");
    sleep(1.7);
    printf(" Login");
    sleep(1.7);
    printf(" Page");
    i = 0;
    while (i<= 5)
    {
        sleep(1);
        printf("*");
        i++;
    }
    printf("\e[0m");
    printf("\n\n");
    printf("\t\t\t\t\033[1;35mPlease Enter 4 Digit Your Password: \033[0m");
    fflush(stdin);
    scanf("%i",&id);
    printf("\n");
    sleep(1.7);
    printf("\n\t\t\t\t\033[1mPassword Checking.....\033[0m\n");
    if (id == 1183)
    {
        sleep(1);
        printf("\t\t\t\t\e[1;32mAccess Granted\e[0m");
        printf("\n");
        sleep(1);
        printf("\n\t\t\t\t\e[1;94mHello Sir  \"222-35-1183\"\n");
        sleep(1);
        printf("\n\t\t\t\t\"Welcome To Your Personal Library Index\"\n");
        sleep(1);
        printf("\n \t\t\t\t(Library Version 23.3)\e[0m \n");
    }
    else
    {
        sleep(1);
        printf("\t\t\t\t\e[1;31mAccess Denied\n");
        sleep(1);
        printf("\n\n\t\t\t\tYou are not the person.\n");
        sleep(1);
        printf("\t\t\t\tPlease Try Agin.\e[0m\n");
        sleep(1);
        printf("\n\t\t\t\t\e[1mThank You!!\e[0m\n");
        exit(0);
    }


    printf("\n\n");
}

void library(void)
{
    while (1)
    {
        int choice;
        printf("\n\n");
        printf("\t\t\t\t\e[1;37mList of Library Choice:\n");
        sleep(1.5);
        printf("\t\t\t\tFirst choice  -> List of books.\n");
        sleep(1.5);
        printf("\t\t\t\tSecond choice -> List of reseacher paper.\n");
        sleep(1.5);
        printf("\t\t\t\tThrid choice  -> List of Journals.\n");
        sleep(1.5);
        printf("\t\t\t\tFourth choice -> List of Newspaper.\n");
        sleep(1.5);
        printf("\t\t\t\tFifth Choice -> About.\n");
        sleep(1.5);
        printf("\t\t\t\tSixth Choice -> Chilling(Movie).\n");
        sleep(1.5);
        printf("\n\t\t\t\t\e[1;91mIf you want to log out press 0\e[0m\n");
        printf("\n\n");
        sleep(1.5);
        printf("\t\t\t\tEnter your choice:\e[0m  ");
        fflush(stdin);
        scanf("%i",&choice);
        system("cls");
        if(choice == 1)
        {
            book();
            sleep(2);
            printf("\n\t\t\t\t\e[1;37mAgain To the Choice menu :)\e[0m \n");
            system("cls");
        }
        else if(choice == 2)
        {
            research();
            sleep(2);
            printf("\n\t\t\t\t\e[1;37mAgain To the Choice menu :)\e[0m \n");
            system("cls");
        }

        else if (choice == 3)
        {
            journals();
            sleep(2);
            printf("\n\t\t\t\t\e[1;37mAgain To the Choice menu :)\e[0m \n");
            system("cls");
        }
        else if (choice == 4)
        {
            newspaper();
            sleep(2);
            printf("\n\t\t\t\t\e[1;37mAgain To the Choice menu :)\e[0m \n");
            system("cls");
        }
        else if (choice == 5)
        {
            about();
            sleep(2);
            printf("\n\t\t\t\t\e[1;37mAgain To the Choice menu :)\e[0m \n");
            system("cls");
        }
        else if (choice == 6)
        {
            movies();
            sleep(2);
            printf("\n\t\t\t\t\e[1;37mAgain To the Choice menu :)\e[0m \n");
            system("cls");
        }
        else if(choice == 0)
        {
            sleep(1);
            printf("\n\t\t\t\t\e[1;95mYour session is expried :)\n");
            sleep(1);
            printf("\n\t\t\t\tThanks :) \e[0m\n");
            return;
        }
        else
        {
            sleep(1);
            printf("\n\t\t\t\t\"\e[1mThe Number Is Invalid\"\n");
            sleep(1);
            printf("\t\t\t\t\"Enter Valid Number\"\e[0m\n");
            system("cls");

        }
    }
}

void book(void)
{
    printf("\n");
    printf("\t\t\t\t\e[1;35mThe list of Books:\n");
    sleep(1);
    printf("\t\t\t\t1. Steve jobs.\n\n");
    sleep(1);
    printf("\t\t\t\t\"Steve Jobs\" is a biography of the late co-founder and CEO of Apple, Inc.\n");
    sleep(1);
    printf("\t\t\t\tThe name of the writer is Walter Isaacson.\n\n");
    sleep(1);
    printf("\t\t\t\t2. 12 Rules of Life.\n\n");
    sleep(1);
    printf("\t\t\t\t\"12 Rules for Life: An Antidote to Chaos\"is a self-help book.\n");
    printf("\t\t\t\tThe Author is Jordan Peterson\n");
    printf("\t\t\t\tJordan Bernt Peterson is a Canadian psychologist, author, and media commentator.\n\n");
    sleep(1);
    printf("\t\t\t\t3. Atom Habits.\n\n");
    sleep(1);
    printf("\t\t\t\t\"Atomic Habits\" is a self-help book written by James Clear.\n");
    sleep(1);
    printf("\t\t\t\tThe book focuses on how to build good habits and break bad ones.\n\n");
    sleep(1);
    printf("\t\t\t\t4. Leaders eat last.\n\n");
    sleep(1);
    printf("\t\t\t\t\"Leaders Eat Last\" is a book by Simon Sinek that explores the importance of leaders.\n");
    sleep(1);
    printf("\t\t\t\tHow it can be used to create a more positive and productive workplace.\n\n");
    sleep(1);
    printf("\t\t\t\t5. Starts with why.\n\n");
    sleep(1);
    printf("\t\t\t\t\"Start with Why\" is a book by Simon Sinek.\n");
    sleep(1);
    printf("\t\t\t\tThe book discusses the importance of defining the purpose.\n\n");
    sleep(1);
    printf("\t\t\t\t6. Phychology of Money.\n\n");
    sleep(1);
    printf("\t\t\t\tBook written by Morgan Housel.\n");
    sleep(1);
    printf("\t\t\t\tThe book explain complex relationship between money and human behavior.\n\n");
    sleep(1);
    printf("\t\t\t\t7. Theory of Everything.\n\n");
    sleep(1);
    printf("\t\t\t\t\"The Theory of Everything\" is a book written by physicist Stephen Hawking.\n");
    sleep(1);
    printf("\t\t\t\tThe book expalain principles of black holes also space and time.\n\n");
    sleep(1);
    printf("\t\t\t\t8. Deep Work.\n\n");
    sleep(1);
    printf("\t\t\t\t\"Deep Work\" by Cal Newport.\n");
    sleep(1);
    printf("\t\t\t\tHe argues that deep work is essential for producing high-quality work and for achieving true satisfaction in one's work.\n");
    sleep(1);
    printf("\t\t\t\tThe book is about foucs and concertation in work\n\n");
    sleep(1);
    printf("\t\t\t\t9. The infinite game.\n\n");
    sleep(1);
    printf("\t\t\t\tAuthor of start with why and leaders eat last by Simon Sinek.\n");
    sleep(1);
    printf("\t\t\t\t The book is based on Carse's distinction between two types of games: finite games and infinite games.\n\n");
    sleep(1);
    printf("\t\t\t\t10. Alchemist.\n\n");
    sleep(1);
    printf("\t\t\t\tOriginally written in Portuguese,it became a widely translated international bestseller.\n\n");
    sleep(1);
    printf("\t\t\t\t\"The Alchemist\" is a novel about shepherd boy's journey.\e[0m\n\n");
    sleep(1);
    printf("\e[1m\n\t\t\t\tYour list is end.\e[0m\n");
}


void research(void)
{
    printf("\n");
    printf("\t\t\t\t\e[1;96mList of Research Papers Topic:\n");
    sleep(1);
    printf("\t\t\t\t1. Corona virus.\n\n");
    sleep(1);
    printf("\t\t\t\tCoronavirus is a highly infectious respiratory illness caused by the SARS-CoV-2 virus.\n");
    sleep(1);
    printf("\t\t\t\tWhich was first identified in Wuhan,China in December 2019 and has since spread globally.\n\n");
    sleep(1);
    printf("\t\t\t\t2. Alcohol.\n\n");
    sleep(1);
    printf("\t\t\t\tAlcohol is a chemical substance that can have both positive and negative effects on the body.\n");
    printf("\t\t\t\tIt is commonly found in alcoholic beverages such as beer, wine, and spirits.\n");
    sleep(1);
    printf("\t\t\t\texcessive consumption can lead to health problems such as liver disease,cancer and addiction.\n\n");
    sleep(1);
    printf("\t\t\t\tIt has some positive effects on the body,such as reducing the risk of heart disease and certain types of stroke.\n\n");
    sleep(1);
    printf("\t\t\t\t4. Artificial intelligence and Machine learning.\n\n");
    sleep(1);
    printf("\t\t\t\tArtificial intelligence is a branch of computer science that focuses on developing intelligent machines that can \n\t\t\t\tperform tasks that typically require human intelligence.\n\n");
    sleep(1);
    printf("\t\t\t\tsuch as visual perception, speech recognition, decision-making, and language translation.\n");
    sleep(1);
    printf("\t\t\t\tMachine learning is a subset of AI that uses algorithms and statistical models to enable computer systems to improve \n\t\t\t\ttheir performance on a specific task\n\n");
    sleep(1);
    printf("\t\t\t\t5. Inflation.\n\n");
    sleep(1);
    printf("\t\t\t\tInflation is a sustained increase in the general price level of goods and services in an economy over a period of \n\t\t\t\ttime.\n\n");
    sleep(1);
    printf("\t\t\t\t6. Quantum Computer.\n\n");
    sleep(1);
    printf("\t\t\t\tA quantum computer is a computer that uses quantum mechanical phenomena to perform calculations faster than classical\n\t\t\t\tcomputers.\n");
    sleep(1);
    printf("\t\t\t\tA quantum computer uses qubits,which can exist in a superposition of two states,to run multidimensional quantum \n\t\t\t\talgorithms.\n\n");
    sleep(1);
    printf("\t\t\t\t7. Smoking.\n\n");
    sleep(1);
    printf("\t\t\t\tSmoking is the act of inhaling and exhaling the smoke of burning plant material,usually tobacco.\n");
    sleep(1);
    printf("\t\t\t\tSmoking can cause addiction,cancer,heart disease,stroke,lung disease and many other health problems.\n\n\e[0m");
    sleep(1);
    printf("\e[1m\n\t\t\t\tYour list is end.\e[0m\n");
}


void journals(void)
{
    printf("\n");
    printf("\t\t\t\t\e[1;35mList of Journals:\n");
    sleep(1.5);
    printf("\t\t\t\t1. Science.\n\n");
    sleep(1);
    printf("\t\t\t\tScience magazine is a leading outlet for scientific news, commentary, and cutting-edge research.\n");
    sleep(1);
    printf("\t\t\t\tIt is published by the American Association for the Advancement of Science (AAAS) and covers a wide range of topics,\n\t\t\t\tfrom biology and physics to medicine and policy.\n\n");
    sleep(1.5);
    printf("\t\t\t\t2. Nature.\n\n");
    sleep(1);
    printf("\t\t\t\tNature is a prestigious international journal that publishes high-quality research in all fields of \n\t\t\t\tscience and technology.\n");
    sleep(1);
    printf("\t\t\t\tNature magazine is based in London, England, and is owned by Springer Nature, a scientific publishing company \n\t\t\t\tthat has offices in several countries.\n\n");
    printf("\t\t\t\t3. International Journal of Computer Vision\n\n");
    sleep(1.5);
    printf("\t\t\t\tA journal that publishes papers on the theory and applications of computer vision.\n");
    sleep(1.5);
    printf("\t\t\t\tThe International Journal of Computer Vision is a journal published by Springer.\n\n");
    sleep(1.5);
    printf("\t\t\t\t4. ACM Computer Survy.\n\n");
    sleep(1);
    printf("\t\t\t\tACM Computing Surveys is a quarterly journal published by the Association for Computing Machinery (ACM) \n\t\t\t\tthat covers all aspects of computing research and practice.\n");
    sleep(1);
    printf("\t\t\t\tIt publishes comprehensive, readable surveys and tutorials on topics ranging from theory and algorithms to \n\t\t\t\tapplications and systems.\e[0m\n\n");
    sleep(1);
   printf("\e[1m\n\t\t\t\tYour list is end.\e[0m\n");
}
void newspaper(void)
{
    printf("\n");
    printf("\t\t\t\t\e[1;96mList of newspapers:\n");
    sleep(1);
    printf("\t\t\t\t1. The Daily Star.\n\n");
    sleep(1);
    printf("\t\t\t\tThere are several countries that have newspapers named The Daily Star, such as:\n");
    sleep(1);
    printf("\t\t\t\tThe United Kingdom,iLebanon, where The Daily Star is an English-language newspaper and also Bangladesh\n");
    sleep(1);
    printf("\t\t\t\tThe Daily Star in Bangladesh is owned by Mediaworld, a company in which a major share is held by the Transcom Group\n\n");
    sleep(1);
    printf("\t\t\t\t2. The Daily Ittefaq\n\n");
    sleep(1);
    printf("\t\t\t\tThe Daily Ittefaq is a Bengali-language daily newspaper published in Bangladesh.\n\t\t\t\tIt was founded in 1953 rby Tofazzal Hossain Manik Mia\n");
    sleep(1);
    printf("\t\t\t\tThe newspaper is owned by the Ittefaq Group of Publications Limited.\n\n");
    sleep(1);
    printf("\t\t\t\t3. Prothom Alo.\n\n");
    sleep(1);
    printf("\t\t\t\tProthom Alo is a leading Bangla-language daily newspaper in Bangladesh.\n");
    sleep(1);
    printf("\t\t\t\tIt was founded on 4 November 1998 and is owned by Mediaworld\n");
    sleep(1);
    printf("\t\t\t\tMediaworld,a company in which a major share is held by the Transcom Group.\e[0m\n\n");
    sleep(1);
    printf("\e[1m\n\t\t\t\tYour list is end.\e[0m\n");
}
void about (void)
{
    printf("\n");
    sleep(1.5);
    printf("\t\t\t\t\e[1;97mThe System Design By (1183).\n");
    sleep(1.5);
    printf("\t\t\t\tStudent of daffodil International University.\n");
    sleep(1.5);
    printf("\t\t\t\tLocation : Unknown.\n");
    printf("\n\t\t\t\tThank You :(\e[0m\n");
}
void movies(void)
{
    printf("\n");
    printf("\t\t\t\t\e[1;96mList of movies that I have collected:\n");
    sleep(1);
    printf("\t\t\t\tJohn Wick movies:\n\n");
    sleep(1);
    printf("\t\t\t\tA fictional character played by Keanu Reeves in a series of action thriller films.\n");
    sleep(1);
    printf("\t\t\t\tJohn Wick is a former hitman who is forced back into the criminal underworld \n\t\t\t\tafter his dog is killed and his car is stolen by a Russian mobster.\n\n");
    sleep(1);
    printf("\t\t\t\t1. John wick 4\n");
    sleep(1);
    printf("\t\t\t\t2. John Wick 3\n");
    sleep(1);
    printf("\t\t\t\t3. John Wick 2\n");
    sleep(1);
    printf("\t\t\t\t4. John Wick\n");
    sleep(1);
    printf("\n\t\t\t\tThe DC movies:\n\n");
    sleep(1);
    printf("\t\t\t\tA media company that publishes comic books and  featuring iconic characters such as \n\t\t\t\tSuperman, Batman, Wonder Woman, and more.\n");
    sleep(1);
    printf("\t\t\t\tDC is owned by Warner Bros. and is part of WarnerMedia.\n\n");
    sleep(1);
    printf("\t\t\t\t5. The dark Knight\n");
    sleep(1);
    printf("\t\t\t\t6. The dark night rises\n");
    sleep(1);
    printf("\t\t\t\t7. The batman\n");
    sleep(1);
    printf("\t\t\t\t8. Black Adam\n");
    sleep(1);
    printf("\t\t\t\t9. Batman VS Superman\n");
    sleep(1);
    printf("\t\t\t\t10. Wonder Woman\n");
    sleep(1);
    printf("\n\t\t\t\tMarvel Movies:\n\n");
    sleep(1);
    printf("\t\t\t\tA media company that publishes comic books and related products featuring iconic characters such as \n\t\t\t\tSpider-Man, Iron Man, Captain America,Thor, Doctor Strange and more\n\n");
    sleep(1);
    printf("\t\t\t\tMarvel is owned by The Walt Disney Company and is part of Disney Media and Entertainment Distribution.\n\n");
    sleep(1);
    printf("\t\t\t\t8. Ironman 3\n");
    sleep(1);
    printf("\t\t\t\t9. Ironman 2\n");
    sleep(1);
    printf("\t\t\t\t10. Ironman\n");
    sleep(1);
    printf("\t\t\t\t11. Thor\n");
    sleep(1);
    printf("\t\t\t\t12. Thor: The Dark World\n");
    sleep(1);
    printf("\t\t\t\t13. Captain America: The First Avenger\n");
    sleep(1);
    printf("\t\t\t\t14. Captain america: The winter Soldier\n");
    sleep(1);
    printf("\t\t\t\t15. Avenger: Age of Ultron\n");
    sleep(1);
    printf("\t\t\t\t16. Captain America: Civil war\n");
    sleep(1);
    printf("\t\t\t\t17. Spider-man: Homecoming\n");
    sleep(1);
    printf("\t\t\t\t18. Spider-man: Far From Home\n");
    sleep(1);
    printf("\t\t\t\t19. Spider-man:No Way Home\n");
    sleep(1);
    printf("\t\t\t\t20. Doctor strange\n");
    sleep(1);
    printf("\t\t\t\t21. Doctor Strange in he multiverse of madness\e[0m\n");
    sleep(1);
    printf("\e[1m\n\t\t\t\tYour list is end.\e[0m\n");
    sleep(1);
    printf("\n\t\t\t\tWant see movie then press -> 1\n");
    sleep(1);
    printf("\t\t\t\tIf you are not press any number :)\n");
    int num = 0;
    printf("\n\t\t\t\tWhat you want to press:\t");
    scanf("%i",&num);
    if (num == 1)
    {
        printf("\n\t\t\t\t\e[37mRandom Movie is Playing.");
        sleep(1);
        printf(".");
        sleep(1);
        printf(".");
        sleep(1);
        printf(".");
        sleep(1);
        printf(".");
        sleep(1);
        printf(".");
        sleep(1);
        printf(".");
        printf("\e[0m");
        printf("\n");
    }
    else
    {
        sleep(1);
        printf("\n\t\t\t\t\e[3mYou don't want to see movies:)\n");
        sleep(1);
        printf("\t\t\t\tBye Bye :(\e[0m\n");
    }

}
