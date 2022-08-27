#include<iostream>
#include<cstring>
#include<cstdlib>
#include<ctime>
#include<unistd.h>
using namespace std;

const char rocket[] =
"                                                                                 _\n\
                                                                                /^\\\n\
                                                                                |-|\n\
                                                                                | |\n\
                                                                                |I|\n\
                                                                                |Q|\n\
                                                                                | |\n\
                                                                                |L|\n\
                                                                                |I|\n\
                                                                                |V|\n\
                                                                                |E|\n\
                                                                                | |\n\
                                                                                |+|\n\
                                                                               /| |\\\n\
                                                                              / | | \\\n\
                                                                             |  | |  |\n\
                                                                              `-\"\"\"-`\n\
";

void award_prize(int);
void iq(int);

class question
{
 private:
  char question[250];
  char optionA[25];
  char optionB[25];
  char optionC[25];
  char optionD[25];
  char correct;
 public:
   void question_enter(char questionent[250], char optionAent[25], char optionBent[25], char optionCent[25], char optionDent[25], char correctent)
   {
   strcpy(question, questionent);
   strcpy(optionA, optionAent);
   strcpy(optionB, optionBent);
   strcpy(optionC, optionCent);
   strcpy(optionD, optionDent);
   correct=correctent;
   }
   void ask_question(int qnum)
   {
   cout<<"Q"<<qnum<<": "<<question<<"\nFor the award price of ";
   award_prize(qnum);
   cout<<"\n";
   cout<<"A:"<<optionA<<'\n';
   cout<<"B:"<<optionB<<'\n';
   cout<<"C:"<<optionC<<'\n';
   cout<<"D:"<<optionD<<'\n';
   }
   char return_correct()
   {
   return correct;
   }
   void set_e()
   {
   correct='E';
   }
};

int main()
{
 question q[80];

 q[0].question_enter("Who heads Reserve Bank of India?","Finance Minister","Commissioner","Chief Bank Manager","Governor",'D');
 q[1].question_enter("In the game of ludo the discs or tokens are of how many colours?","One", "Two", "Three", "Four", 'D');
 q[2].question_enter("Which of these spices is the smallest in size?", "Ajwain", "Jeera", "Saunf", "Methi Seeds", 'A');
 q[3].question_enter("Which battle in 1757 marked the beginning of British occupation in India?", "Plassey", "Assaye", "Buxar", "Cuddalore", 'A');
 q[4].question_enter("Which of these stages is one of the four stages of human life in ancient Indian tradition?", "Dronacharya", "Bramhacharya", "Vasudevacharya", "Kripacharya", 'B');
 q[5].question_enter("The name of which of these Shakpearan character features in anti eve-teasing squad formed in the state of Uttar Pradesh?", "Macbeth", "Hamlet", "Othello", "Romeo", 'D');
 q[6].question_enter("What is the common name for surgery conducted on coronary arteries that supply blood to the heart?", "Cataract Surgery", "Gastric Bypass", "Bypass Surgery", "Debridement", 'C');
 q[7].question_enter("Which of these Government schemes deals with the expansion of LPG connection to households below the poverty line?", "Nayi Roshni Yojana", "Mission Indra Dhanush", "Ujjwala Yojana", "UDAN Yojana", 'C');
 q[8].question_enter("In July 2017, Narendra Modi Become the first Prime Minister to visit which country?", "Isreal", "Jordan", "Saudi Arabia", "Qatar", 'A');
 q[9].question_enter("Sunscreen lotion protects our skin against which rays?", "UA", "UC", "UV", "UM", 'C');
 q[10].question_enter("How many colors are represented using rainbow?","6","7","8","9",'B');
 q[11].question_enter("Which of these is equal to 'pachchees bataa do:'?","Swa baarah","Paune baarh","Saadhe baarah","Baarah",'C');
 q[12].question_enter("Which of these gases makes a beverage fizzy?","Oxygen","Carbon dioxide","Hydrogen","Nitrogen",'B');
 q[13].question_enter("What does the word Chaturthi in the name of the Ganesh Chaturthi festival mean?","Fourth Day","Fourth week","Fourth Month","Fourth Year",'A');
 q[14].question_enter("Milk is the main ingredients of which of these desserts?","Petha","Jalebi","Chikki","Rabdi",'D');
 q[15].question_enter("Gabbar, Gogo, and Mogambo are all associated with what kind of characters in Indian cinema?","Villains","Scientists","Soldiers","Policemen",'A');
 q[16].question_enter("Which of these is a lunchbox delivery system unique to Mumbai where people deliver freshly made food from homes to offices?","Lunchwalas","Tiffinwalas","Dabbawalas","Boxwalas",'C');
 q[17].question_enter("Which of these units of currency is also the name of a unit of weight?","Dollar","Pound","Euro","Rupee",'B');
 q[18].question_enter("Which of these is a term for a score used in racquet sports?","Hate","Love","Down","Up",'B');
 q[19].question_enter("Cold brew, Latte, Espresso are all examples of which beverage?","Tea","Fruit juice","Coffee","Lassi",'C');
 q[20].question_enter("Which of these terms can only be used for women?", "Dirghaayu", "Suhagan", "Chiranjeevi", "Sushil", 'B');
 q[21].question_enter("Who is the current CEO of Google?","Sundar Pichai","Ravi Negi","Larry Page","Sergey Brin",'A');
 q[22].question_enter("Who is the current Prime Minister of India?","Manmohan Singh","Paramjeet Anand","Narendra Modi","Rahul Gandhi",'C');
 q[23].question_enter("Who is the current President of USA?","Donald Trump","Joe Biden","Alex Gates","Jones William",'B');
 q[24].question_enter("Jio Platforms Ltd. is subsidiary of which of the following companies?","ITC Ltd.","Infoedge Ltd.","PB Fintech Ltd.","Reliance Industries Ltd.",'D');

 q[25].question_enter("Which is the only film starring both Salman Khan and Aamir Khan in lead roles?","Partner","Saajan","Andaz Apna Apna","Raja Hindustani",'C');
 q[26].question_enter("Which of these is a core ingredient of the south Indian dish Rasam?","Rajma","Brinjal","Cucumber","Tamarind",'D');
 q[27].question_enter("Which pieces are maximum in number at the start of a chess game?","Rook","Knight","Pawn","Bishop",'C');
 q[28].question_enter("In which of these two sports is the term 'free hit' used?","Football and Squash","Badminton and Tennis","Badminton and Cricket","Hockey and Cricket",'D');
 q[29].question_enter("Which of these is measured with the help of a glucometer?","Heartbeat","Blood pressure","Blood sugar","Vision",'C');
 q[30].question_enter("Which of these is not a Dravidian language?","Tamil","Karnataka","Malyalam","Assamese",'D');
 q[31].question_enter("On the sacred day of Mauni Amavas the vow of not doing what is taken?","Sleeping","Walking","Speaking","Sitting",'C');
 q[32].question_enter("Srinagar city is situated on the banks of which river?","Sutlej","Tapi","Jhelum","Tawi",'C');
 q[33].question_enter("Which of these is a traditional layered Goan dessert?","Bondla","Bebinca","Benaulim","Baga",'B');
 q[34].question_enter("Which of these awards is not named after a person?","Nobel Prize","Pulitzer Prize","Magsaysay Prize","Grammy Awards",'D');
 q[35].question_enter("In which of the following events will the fastest person win?","Marathon","Diving","Weightlifting","Shot Put",'A');
 q[36].question_enter("What is the main ingredient of Kulcha in Matar Kulcha or Chole Kulcha?","Daal","Maida","Besan","Suji",'B');
 q[37].question_enter("Which was the colour of the saree worn by Madhuri Dixit in the song 'Didi tera dewar deewana,' which triggered a fashion trend in the country?","Green","Red","Yellow","Purple",'D');
 q[38].question_enter("Which of these does not feature in the five pillars of Islam?","Salat","Zakat","Hadith","Hajj",'C');
 q[39].question_enter("In Sept 2020, which iconic motorcycle brand announced that it is shutting down its manufacturing facilities in India?","Harley Davidson","Triumph","Indian","Arctic cat",'A');
 q[40].question_enter("In which state of India is the town of Jamtara located?","Jharkhand","Odisha","Bihar","West Bengal",'A');
 q[41].question_enter("The 2020 film Gul Makai is a biopic of which of these personalities?","Benazir Bhutto","Aisha Chaudhary","Greta Thunberg","Malala Yousafzai",'D');
 q[42].question_enter("Which of the following dynasties did the Kanva dynasty overthrow to come to power around 73 BCE in Magadha?","Maurya dynasty","Shunga dynasty","Pala dynasty","Chera dynasty",'B');
 q[43].question_enter("Who is the first woman and also former astronaut to reach the deepest point of the ocean, Mariana trench?","Sally Ride","Valentina Tereshkova","Svetlana Savitskaya","Kathryn D Sullivan",'D');
 q[44].question_enter("Which of the following gods is also known as ‘Gauri Nandan’?", "Agni","Indra", "Ganesha", "Hunaman", 'C');
 q[45].question_enter("How many players of Kho-Kho team can play on the field during the match?", "10", "9", "7", "8", 'B');
 q[46].question_enter("Which of these Indian cities is closest to the Pakistani city of Lahore?", "Srinagar", "Jaisalmer", "Amritsar", "Udhampur", 'C');
 q[47].question_enter("Which of these gods is also known as Ramapati, Ramakant and Ramaraman?", "Ganesha", "Vishnu", "Brahma", "Shiva", 'B');
 q[48].question_enter("In 2013, where did the natural calamity known as Himalayan tsunami occur?", "Uttrakhand", "Arunachal Pradesh", "Jammu and Kashmir", "Sikkim", 'A');
 q[49].question_enter("Which of these following is said to produce a 'Chham-Chham' sound?", "Painjani", "Bansuri", "Tabla", "Dholak", 'A');
 q[50].question_enter("Which of these function is used on both Twitter and Facebook to organise content?", "Follow", "Poke", "Like", "Hashtag", 'D');
 q[51].question_enter("Which of the following actresses hails from Sri Lanka?", "Diana Penty", "Jacqueline Fernandez", "Amy Jackson", "Lisa Haydon", 'B');
 q[52].question_enter("Which of the following did not complete it's 10th anniversary in 2017?", "IPL", "iPhone", "Mangalyaan", "T20 World Cup", 'C');
 q[53].question_enter("The Tropic of Cancer does not pass through which of these Indian states?", "Gujarat", "Chhattisgarh", "West Bengal", "Odisha", 'D');
 q[54].question_enter("Bahubali festival is related to which of the following religion?", "Hinduism", "Jainism", "Sikhism", "Islam", 'B');

 q[55].question_enter("Sir Edmund Hillary served as which county’s high commissioner to India,Bangladesh and Nepal?","United Kingdom","Australia","Canada","New Zealand",'D');
 q[56].question_enter("Which was the first element to be artifically produced?","Promethium","Technetium","Francium","Einsteinium",'B');
 q[57].question_enter("Which hill station was built on five hills – Kathlog, Patreyn, Tehra, Bakrota and Balun?","Chail","Darjeeling","Dalhousie","Shillong",'C');
 q[58].question_enter("Which day is observed as world standards day?", "June 26", "Oct 14", "Nov 15", "Dec 2", 'B');
 q[59].question_enter("What kind of creature was Bakasur, whom Kansa sent to kill Sri Krishna in his childhood?", "Bird", "Snake", "Lizard", "Deer", 'A');
 q[60].question_enter("Which of these are names of national parks located in Madhya Pradesh?", "Krishna and Kanhaiya", "Kanha and Madhav", "Ghanshyam and Murari", "Girdhar and Gopal", 'B');
 q[61].question_enter("Which of these leaders was a recipient of a gallantry award in 1987 by a state government for saving two girls from drowning?", "Anandiben Patel", "Vasundhara Raje Scindia", "Uma Bharti", "Mamata Banerjee", 'A');
 q[62].question_enter("Which of these artists was principally entrusted with the task of 'illuminating' the original document of the constitution of India?", "Ramkinkar Baij", "Benode Bihari Mukherjeee", "Abnindranath Tagore", "Nandalal bose", 'D');
 q[63].question_enter("How do we better know the character Pawan Kumar Chaturvedi played by Salman Khan in one of his films?", "Tubelight", "Bodyguard", "Bajrangi Bhaijaan", "Veer", 'C');
 q[64].question_enter("The trophy which is awarded to the winners of the women's singles at the Australian open is named after which legendary tennis star?","Daphne Akhurst","Margaret Court","Evonne Goolagong Cawley","Lesley Bowrey",'A');
 q[65].question_enter("Who is the first woman cricketer to win the Arjuna Award?","Diana Eduljee","Anjali Jain","Mithali Raj","Shanta Rangaswamy",'D');
 q[66].question_enter("Which novel, made into a TV series by Mira Nair in 2020, revolves around the lives of four Indian families -- the Mehras, the Kapoors, the Khans and the Chatterjis?","The Great Indian Novel","A Suitable Boy","A Fine Balance","The Golden Gate",'B');
 q[67].question_enter("Which of these chief ministers has also worked as a handloom weaver in the early phase of his career?", "Pinarayi Vijayan", "Manik Sarkar", "Nitish Kumar", "Ashok Gehlot", 'A');
 q[68].question_enter("Leading freedom fighter Chittaranjan Das was popularly called what?","Deenbandhu","Loha Purush","Deshbandhu","Lokmanya",'C');
 q[69].question_enter("Which of these places is held to have lent its name to the medical dressing ‘gauze’?","Gaziantep","Gazipur","Gaza","Ghaziabad",'C');
 q[70].question_enter("Who is the first retired chief justice of India to become governor of a state?","Altamas Kabir","K G Balakrishnan","SH Kapadia","P Sathasivam",'D');
 q[71].question_enter("Which astronomer was the first to observe the rings around Saturn?","Galileo Galilei","Johannes Kepner","Nicholas Copernicus","Edwin Hubble",'A');
 q[72].question_enter("Which Hindi author was awarded the 2014 Jnanpith Award?","Namvar Singh","Kedarnath Singh","Manohar Shyam Joshi","Mannu Bhandari",'B');
 q[73].question_enter("Who wrote the introduction to the English translation of Rabindranath Tagore’s Gitanjali?","P.B. Shelley","Alfred Tennyson","W.B. Yeats","T.S. Elliot",'C');
 q[74].question_enter("Where was Indian diplomat Devyani Khobragade posted when she was arrested in a visa case in 2013?","England","USA","Switzerland","Russia",'B');
 q[75].question_enter("The wife of which of these famous sports persons was once captain of Indian volleyball team?", "K.D.Jadav", "Dhyan Chand", "Prakash Padukone", "Milkha Singh", 'D');
 q[76].question_enter("Who invented the programming language C++?","Bjarne Stroustrup","Alexander Wattman","Bill Gates","Clive Parker",'A');
 q[77].question_enter("Cyclone Tauktae gets its name from what kind of an animal?","Parrot","Snake","Lizard","Wolf",'C');
 q[78].question_enter("In which city would you find Chaturbuj temple, housing one of the world's oldest inscriptions of 'zero' in numerical form?","Champawat","Gwalior","Amritsar","Mumbai",'B');
 q[79].question_enter("BBC Indian Sportswoman of the Year award for 2021 has been won by whom?","Virat Kohli","Neeraj Chopra","Koneru Humpy","Bajrang Punia",'C');

 system("cls");
 system("Color 17");
 for (int i = 0; i < 50; i ++) cout<<"\n";
    cout<<rocket;
    int T = 300000;
    for (int i = 0; i < 50; i ++)
    {
        usleep(T);
        T = (int)(T * 1);
        cout<<"\n";
    }
 cout<<"\n\nPress enter to continue:";
 std::cin.get();

 system("cls");
 system("Color F1");
 cout<<"------------IQ Live Plus------------"<<'\n';
 cout<<"Team Members-- Mohak, Lalit, Sarthak Joshi and Utkarsh\n\n\n";
 cout<<"  --------!!!!!GAME RULES!!!!!--------  "<<'\n';
 cout<<">> 16 MCQ"<<'\n'<<">> Correct answer --> unlock the next question"<<'\n'<<">> Each question is assigned a Virtual Reward Price"<<'\n'<<">> 4 lifelines"<<'\n'<<">> Each lifeline can be used one time only"<<'\n'<<">> You can use any of your lifeline in any level except last level"<<'\n'<<">> Input the choice in Capital Letters only!!!!";
 cout<<"\n\n  --------!!!!!GAME INPUTS!!!!!--------  \n\nMCQ Options: \nEnter A to lock option A\nEnter B to lock option B\nEnter C to lock option C \nEnter D to lock option D\nEnter L to use a lifeline\nEnter Q to quit the game\n\nLifeline options: \nEnter 1 for Audience Poll\nEnter 2 for Expert Advice\nEnter 3 for Fifty Fifty\nEnter 4 for Flip the Question";
 cout<<"\n\nPress enter to continue:";
 std::cin.get();

 system("cls");
 system("Color F1");
 cout<<"------------GAME AWARDS------------"<<'\n';
 cout<<"Q1: 1000 VRS\nQ2: 2000 VRS\nQ3: 3000 VRS\nQ4: 5000 VRS\n*Q5: 10000 VRS\nQ6: 20000 VRS\nQ7: 40000 VRS\nQ8: 80000 VRS\nQ9: 160000 VRS\n*Q10: 320000 VRS\nQ11: 640000 VRS\nQ12: 1250000 VRS\nQ13: 2500000 VRS\nQ14: 5000000 VRS\nQ15: 10000000 VRS\nQ16: 70000000 VRS\n\n>>>The levels indicated with * represent amount lock\nwhich means clearing that level will lock that amount and if you lose by wrongly answering any level after that level your amount will drop down to the locked amount\nto prevent this you must quit instead of answering wrongly.\n\n>>>VRS indicate Virtual Rupees meaning they are not payable and represent in-game virtual amount that is not real cash.\nThe Game will calculate and display your IQ based on the number of questions you are able to answer,this means you should try to answer as many questions as possible \nbut keeping in mind that the award prize you win may fall substantially if you answer wrongly.";
 cout<<"\n\nPress enter to continue:";
 std::cin.get();

 system("cls");
 system("Color 04");
 int level;
 difficulty:
 lbl:
 cout<<"Select Difficulty Level:\n"<<"1 for Easy \n2 for Medium\n3 for Hard \n4 for Randomize \n5 for According to level\nInput:";
 cin>>level;
 try
 {
 	if(level==1||level==2||level==3||level==4||level==5)
 	{
 		switch(level)
        {
 	        case 1:
 		    cout<<"You selected Easy Difficulty\n\n";
 	        break;
 	        case 2:
 		    cout<<"You selected Medium Difficulty\n\n";
 		    break;
 	        case 3:
 	    	cout<<"You selected Hard Difficulty\n\n";
 	        break;
 	        case 4:
 		    cout<<"You selected Randomize Difficulty\n\n";
 		    break;
 	        case 5:
 		    cout<<"You selected According to level Difficulty\n\n";
 		    break;
        }
    }
    else
    {
    	throw(level);
	}
 }
 catch(int lvl)
 {
 	cout<<"Exception Caught: Invalid Choice Entered\n";
 	goto lbl;
 }
 cout<<"\n\nPress enter to start game:";
 std::cin.get();
 std::cin.get();

 system("cls");
 system("Color 02");
 int used1=0, used2=0, used3=0, used4=0;
 srand(time(0));
 int j;
 if(level==1)
 {
 	j=rand() %25 + 0;
 }
 else if(level==2)
 {
 	j=rand() %30 + 25;

 }
 else if(level==3)
 {
 	j=rand() %25 + 55;
 }
 else if(level==4)
 {
 	j=rand() %80 + 0;
 }
 else
 {
 	j=rand() %25 + 0;
 }
 int lock=0;
 int i;
 for(i=0; i<16; i++){
 	labelrefresh:
 	while(q[j].return_correct()=='E'){
 		if(level==1)
        {
 	     j=rand() %25 + 0;
        }
        else if(level==2)
        {
 	     j=rand() %30 + 25;
        }
        else if(level==3)
        {
 	     j=rand() %25 + 55;
        }
        else if(level==4)
        {
 	     j=rand() %80 + 0;
        }
        else
        { if(i>=0&&i<=4)
		  {
           j=rand() %25 + 0;
		  }
		  else if(i>=5&&i<=10)
		  {
           j=rand() %30 + 25;
		  }
		  else
		  {
           j=rand() %25 + 55;
		  }
        }
 	}
 q[j].ask_question(i+1);
 char c;
 label1:
 cout<<"Enter your choice:";
 cin>>c;
 if(c=='A'||c=='B'||c=='C'||c=='D')
 {
 if(q[j].return_correct()==c){
 cout<<"Your answer is correct\n\n";
 q[j].set_e();}
 else{
 cout<<"Your answer is wrong";
 cout<<"\nThe correct answer is "<<q[j].return_correct();
 goto lb;
 }
 }
 else if(c=='Q'){
 	cout<<"Please guess any answer:";
 	char guess;
 	cin>>guess;
 	if(guess==q[j].return_correct())
 	{
 		cout<<"Your answer would have been correct had you not quit";
	}
	else
	{
		cout<<"Your answer would have been wrong had you not quit, the correct answer is "<<q[j].return_correct();
	}
 	lock=i;
 	goto lb;
 }
 else if(c=='L'){
 	int lifeline;
 	if(i==15){
 		cout<<"You can not use lifeline at this level !!!\n\n";
 		goto label1;
 	}
 		cout<<"\nEnter Lifeline Choice, 1 for Audience Poll, 2 for Expert Advice, 3 for Fifty Fifty, 4 for Flip the Question:";
 		cin>>lifeline;
 		if(lifeline==1&&used1==0){
 		cout<<"\nAudience has voted for option "<<q[j].return_correct()<<" by "<<rand() %40+60<<"%\n";
 		used1=1;
 		goto label1;
 }
 else if(lifeline==2&&used2==0){
 	cout<<"Our Expert says answer is "<<q[j].return_correct()<<'\n';
 	used2=1;
 	goto label1;
 }
 else if(lifeline==3&&used3==0){
 	if(q[j].return_correct()=='A'||q[j].return_correct()=='B')
 	cout<<"Remaining options are A and B\n";
 	if(q[j].return_correct()=='C'||q[j].return_correct()=='D')
 	cout<<"Remaining options are C and D\n";
 	used3=1;
 	goto label1;
 }
 else if(lifeline==4&&used4==0){
 	used4=1;
 	q[j].set_e();
 	goto labelrefresh;
 }
 else{
 	cout<<"Lifeline not available!!!\n";
 }
 if(i==4||i==9)
 {
 	lock=i+1;
 }
 	goto label1;
 }
 else {
 	cout<<"Invalid choice\n";
 	goto label1;
 }
  if(i==4||i==9)
 {
 	lock=i+1;
 }
 }

 lb:
 if(i==16){
 	lock=16;
 }
 cout<<"\n\nGame Finish"<<'\n';
 cout<<"\n\nPress enter to display result:";
 std::cin.get();
 std::cin.get();

 system("cls");
 system("Color 56");
 cout<<"------------Game Result------------"<<'\n';
 cout<<"\nYou have won ";
 award_prize(lock);
 cout<<"\n\n";
 iq(i);
 cout<<"\n\nPress enter to continue:";
 std::cin.get();

 system("cls");
 system("Color E5");
 char minigame;
 cout<<"Do you wish to play our minigame to win upto additional VRS 10000?\nFor Yes Enter Y, For No Enter N:";
 cin>>minigame;
 if(minigame=='Y')
 {
     cout<<"\NWelcome to Rock Paper Sissors Minigame\n";
     cout<<"Enter R for Rock, P for paper, S for Scissiors:";
     cin>>minigame;
     switch(rand()%3+1)
     {
         case 1:
         if(minigame=='R')
         {
             cout<<"\nYou selected Rock, and the expert selected Rock too, so it is a tie";
             cout<<"\nSince it is a tie, you win additional VRS 5000/-";
         }
         else if(minigame=='P')
         {
             cout<<"\nYou selected Paper, and the expert selected Rock, so you win";
             cout<<"\nSince you won, you win additional VRS 10000/-";
         }
          else if(minigame=='S')
         {
             cout<<"\nYou selected Scissiors, and the expert selected Rock, so you lose";
             cout<<"\nSince you lost, you win no additional amount";
         }
         else
         {
             cout<<"\nYou entered invalid option, you win no additional amount";
         }
         break;
         case 2:
         if(minigame=='R')
         {
             cout<<"\nYou selected Rock, and the expert selected Paper, so you lose";
             cout<<"\nSince you lost, you win no additional amount";
         }
         else if(minigame=='P')
         {
             cout<<"\nYou selected Paper, and the expert selected Paper too, so it is a tie";
             cout<<"\nSince it is a tie, you win additional VRS 5000/-";
         }
          else if(minigame=='S')
         {
             cout<<"\nYou selected Scissors, and the expert selected Paper, so you win";
             cout<<"\nSince you won, you win additional VRS 10000/-";
         }
         else
         {
             cout<<"\nYou entered invalid option, you win no additional amount";
         }
         break;
         case 3:
         if(minigame=='R')
         {
             cout<<"\nYou selected Rock, and the expert selected Scissors, so you win";
             cout<<"\nSince you won, you win additional VRS 10000/-";
         }
         else if(minigame=='P')
         {
             cout<<"\nYou selected Paper, and the expert selected Scissors, so you lose";
             cout<<"\nSince you lost, you win no additional amount";
         }
          else if(minigame=='S')
         {
             cout<<"\nYou selected Scissiors, and the expert selected Scissors too, so it is a tie";
             cout<<"\nSince it is a tie, you win additional amount VRS 5000/-";
         }
         else
         {
             cout<<"\nYou entered invalid option, you win no additional amount";
         }
     }
     cout<<"\n\nThank you for Playing KBC Game with RPS Minigame";
 }
 else{
     cout<<"\n\nThank you for Playing KBC Game";
 }
 return 0;
}

void award_prize(int num){
	 if(num==0)
	 printf("VRS 0/-");
	 else if(num==1)
	 printf("VRS 1000/-");
	 else if(num==2)
	 printf("VRS 2000/-");
	 else if(num==3)
	 printf("VRS 3000/-");
	 else if(num==4)
	 printf("VRS 5000/-");
	 else if(num==5)
	 printf("VRS 10000/-");
	 else if(num==6)
	 printf("VRS 20000/-");
	 else if(num==7)
	 printf("VRS 40000/-");
	 else if(num==8)
	 printf("VRS 80000/-");
	 else if(num==9)
	 printf("VRS 1.6 Lakh/-");
	 else if(num==10)
	 printf("VRS 3.2 Lakh/-");
	 else if(num==11)
	 printf("VRS 6.4 Lakh/-");
	 else if(num==12)
	 printf("VRS 12.5 Lakh/-");
	 else if(num==13)
	 printf("VRS 25 Lakh/-");
	 else if(num==14)
	 printf("VRS 50 Lakh/-");
	 else if(num==15)
	 printf("VRS 1 Crore/-");
	 else if(num==16)
	 printf("VRS 7 Crore/-");
}

void iq(int level)
{
     if(level==0)
     printf("Your IQ is between 0-40 that is 'extremely poor' IQ");
	 else if(level==1)
	 printf("Your IQ is between 40-60 that is 'very poor' IQ");
	 else if(level==2)
	 printf("Your IQ is between 60-80 that is 'poor' IQ");
	 else if(level==3)
	 printf("Your IQ is between 80-100 that is 'below average' IQ");
	 else if(level==4)
	 printf("Your IQ is between 100-110 that is 'average' IQ");
	 else if(level==5)
	 printf("Your IQ is between 105-115 that is 'above average' IQ");
	 else if(level==6)
	 printf("Your IQ is between 110-120 that is 'good' IQ");
	 else if(level==7)
	 printf("Your IQ is between 115-120 that is 'good' IQ");
	 else if(level==8)
	 printf("Your IQ is between 120-125 that is 'very good' IQ");
	 else if(level==9)
	 printf("Your IQ is between 125-130 that is 'very good' IQ");
	 else if(level==10)
	 printf("Your IQ is between 130-135 that is 'high' IQ");
	 else if(level==11)
	 printf("Your IQ is between 135-140 that is 'high' IQ");
	 else if(level==12)
	 printf("Your IQ is between 140-145 that is 'high' IQ");
	 else if(level==13)
	 printf("Your IQ is between 145-150 that is 'very high' IQ");
	 else if(level==14)
	 printf("Your IQ is between 150-155 that is 'very high' IQ");
	 else if(level==15)
	 printf("Your IQ is between 155-160 that is 'very very high' IQ");
	 else if(level==16)
	 printf("Your IQ is between 160-165 that is 'extremely high' IQ");
}
